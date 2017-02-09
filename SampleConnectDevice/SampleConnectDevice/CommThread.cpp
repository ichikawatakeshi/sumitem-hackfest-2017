// BaseThread.cpp : 実装ファイル
//

#include "stdafx.h"
#include "CommThread.h"


// CBaseThread

IMPLEMENT_DYNCREATE(CCommThread, CWinThread)

CCommThread::CCommThread()
{
	m_bRun = FALSE;

	m_csCOMPort = _T("");

	m_pSendDataSerial = NULL;
	m_pReceiveDataSerial = NULL;

	m_bSendFlag = FALSE;
	m_bReceiveFlag = FALSE;

	m_hComm = NULL;
}

CCommThread::~CCommThread()
{
}

BOOL CCommThread::InitInstance()
{
	HRESULT hr;

	hr = m_pSendDataSerial.CoCreateInstance(__uuidof(SendDataSerial));
	if (FAILED(hr))
		return FALSE;

	hr = m_pReceiveDataSerial.CoCreateInstance(__uuidof(ReceiveDataSerial));
	if (FAILED(hr))
		return FALSE;

	return TRUE;
}

int CCommThread::ExitInstance()
{
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CCommThread, CWinThread)
END_MESSAGE_MAP()


int CCommThread::Run()
{
	if (m_csCOMPort.GetLength() <= 0)
		return 0;

	if (!CommOpen())
		return 0;


	while (m_bRun)
	{
		if (m_bSendFlag)	//送信処理
		{
			if (SendData())
				m_bSendFlag = FALSE;
		}
		else	//受信処理
		{
			if (ReadData())
				m_bReceiveFlag = TRUE;
		}
	}

	return 0;
}

BOOL CCommThread::CommOpen()
{
	if ((m_hComm = CreateFile(m_csCOMPort, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL)) == INVALID_HANDLE_VALUE)
	{
		AfxMessageBox(_T("Error opening COM port"), MB_ICONEXCLAMATION);
		return FALSE;
	}

	DCB dcb;
	GetCommState(m_hComm, &dcb);
	dcb.fBinary = TRUE;							//.ﾊﾞｲﾅﾘｨﾓｰﾄﾞ
	BuildCommDCB(_T("4800,E,8,1"), &dcb);
	SetCommState(m_hComm, &dcb);

	CommReset();

	return TRUE;
}

void CCommThread::CommReset()
{
	DWORD dwError;
	COMSTAT	cs;

	if (m_hComm)
	{
		GetLastError();

		ClearCommError(m_hComm, &dwError, &cs);

		//.送受信ﾊﾞｯﾌｧをﾌﾗｯｼｭ
		PurgeComm(m_hComm, PURGE_TXCLEAR | PURGE_RXCLEAR);
	}
}

BOOL CCommThread::SendData()
{
	COMMTIMEOUTS to;
	DWORD	lrc;
	DWORD	nBytesRead, nToRead;
	BYTE	inbuff[1024];

	if (!CommSend((LPBYTE)&SAUAENQ, sizeof(SAUAENQ)))
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	memset(&to, 0, sizeof(to));
	to.ReadTotalTimeoutMultiplier = 0;
	to.ReadTotalTimeoutConstant = NO_ANS_TIMER;
	SetCommTimeouts(m_hComm, &to);
	nToRead = 1;

	if (!ReadFile(m_hComm, &inbuff, nToRead, &nBytesRead, NULL))
	{
		GetLastError();
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if (inbuff[0] != ACK)
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	CommReset();

	SEND_LAYOUT stSendLayout;
	FillMemory(&stSendLayout, sizeof(stSendLayout), '0');

	CreateSendData(&stSendLayout);

	if (!CommSend((LPBYTE)&stSendLayout, sizeof(stSendLayout)))
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	CommReset();

	memset(&to, 0, sizeof(to));
	to.ReadTotalTimeoutMultiplier = 0;
	to.ReadTotalTimeoutConstant = NO_ANS_TIMER;
	SetCommTimeouts(m_hComm, &to);
	nToRead = 1;

	if (!ReadFile(m_hComm, &inbuff, nToRead, &nBytesRead, NULL))
	{
		GetLastError();
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if (inbuff[0] != ACK)
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	CommReset();

	if (!CommSend((LPBYTE)&EOT, sizeof(EOT)))
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	return TRUE;
}

BOOL CCommThread::ReadData()
{
	COMMTIMEOUTS to;
	DWORD	nBytesRead, nToRead;
	BYTE	inbuff[1024];

	memset(&to, 0, sizeof(to));
	to.ReadTotalTimeoutMultiplier = 5;
	to.ReadTotalTimeoutConstant = 50;
	SetCommTimeouts(m_hComm, &to);
	nToRead = sizeof(SAUAENQ);

	if (!ReadFile(m_hComm, &inbuff, nToRead, &nBytesRead, NULL))
	{
		CommReset();
		return FALSE;
	}

	if (nBytesRead != nToRead || memcmp(SAUAENQ, inbuff, sizeof(SAUAENQ) != 0))
	{
		return FALSE;
	}

	if (!CommSend((LPBYTE)&ACK, sizeof(ACK)))
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	memset(&to, 0, sizeof(to));
	to.ReadTotalTimeoutMultiplier = 0;
	to.ReadTotalTimeoutConstant = NO_ANS_TIMER;
	SetCommTimeouts(m_hComm, &to);
	nToRead = 2;	//idまで

	if (!ReadFile(m_hComm, &inbuff, nToRead, &nBytesRead, NULL))
	{
		GetLastError();
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if (nBytesRead != nToRead)
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	switch (inbuff[1])	//id
	{
	case 'W':
		nToRead = sizeof(RECEIVE_LAYOUT_DOKAJU) - 2;
		break;
	default:
		nToRead = sizeof(RECEIVE_LAYOUT_STATUS) - 2;
		break;
	}

	if (!ReadFile(m_hComm, &inbuff[2], nToRead, &nBytesRead, NULL))
	{
		GetLastError();
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if(nBytesRead != nToRead)
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	switch (inbuff[1])	//id
	{
	case 'W':
	{
		LPRECEIVE_LAYOUT_DOKAJU lpDokaju = (LPRECEIVE_LAYOUT_DOKAJU)&inbuff;
		if (lpDokaju->stx != STX ||
			lpDokaju->etx != ETX)
			return FALSE;
	}
		break;
	case 'B':	//Emergency
	case 'J':	//FinishDump
	case 'K':	//FinalFinishDump
	case 'S':	//StartScale
	case 'D':	//StartDump
	case 'C':	//FirstStartScale
	{
		LPRECEIVE_LAYOUT_STATUS lpStatus = (LPRECEIVE_LAYOUT_STATUS)&inbuff;
		if (lpStatus->stx != STX ||
			lpStatus->etx != ETX)
			return FALSE;
	}
		break;
	default:
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if (!CommSend((LPBYTE)&ACK, sizeof(ACK)))
	{
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	nToRead = sizeof(EOT);

	if (!ReadFile(m_hComm, &inbuff, nToRead, &nBytesRead, NULL))
	{
		GetLastError();
		CommSend((LPBYTE)&DLEEOT, sizeof(DLEEOT));
		CommReset();
		return FALSE;
	}

	if (nBytesRead != nToRead || memcmp(&EOT, inbuff, sizeof(EOT) != 0))
	{
		return FALSE;
	}

	AnalysisReceiveData(inbuff);

	return TRUE;
}

BOOL CCommThread::CommSend(LPBYTE lpszText, DWORD dwLength)
{
	ASSERT(m_hComm);
	ASSERT(lpszText);
	ASSERT(dwLength>0);

	DWORD dwWritten = 0;

	if (!WriteFile(m_hComm, lpszText, dwLength, &dwWritten, NULL))
	{
		GetLastError();
		CommReset();
		return FALSE;
	}

	if (!FlushFileBuffers(m_hComm))
	{
		GetLastError();
		CommReset();
		return FALSE;
	}

	return TRUE;
}

void CCommThread::CreateSendData(SEND_LAYOUT* lpSendLayout)
{
	CString cs;
	BYTE byteBuf;
	short nBuf;
	BSTR bstrBuf;
	double dBuf;

	MoveMemory(&lpSendLayout->stx, (LPBYTE)&STX, sizeof(lpSendLayout->stx));

	m_pSendDataSerial->get_HMCD(&byteBuf);
	cs.Format("%d", byteBuf);
	cs = CString('0', sizeof(lpSendLayout->hm)) + cs;
	MoveMemory(&lpSendLayout->hm, cs.Right(sizeof(lpSendLayout->hm)), sizeof(lpSendLayout->hm));

	m_pSendDataSerial->get_SykCD(&nBuf);
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->sykno)) + cs;
	MoveMemory(lpSendLayout->sykno, cs.Right(sizeof(lpSendLayout->sykno)), sizeof(lpSendLayout->sykno));

	m_pSendDataSerial->get_SyohinCD(&bstrBuf);
	cs = bstrBuf;
	cs = CString('0', sizeof(lpSendLayout->syohincd)) + cs;
	MoveMemory(lpSendLayout->syohincd, cs.Right(sizeof(lpSendLayout->syohincd)), sizeof(lpSendLayout->syohincd));

	m_pSendDataSerial->get_NeriKbn(&byteBuf);
	cs.Format("%d", byteBuf);
	cs = CString('0', sizeof(lpSendLayout->nerikbn)) + cs;
	MoveMemory(&lpSendLayout->nerikbn, cs.Right(sizeof(lpSendLayout->nerikbn)), sizeof(lpSendLayout->nerikbn));

	m_pSendDataSerial->get_Kyodo(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->yb_kyodo));
	MoveMemory(lpSendLayout->yb_kyodo, cs.Left(sizeof(lpSendLayout->yb_kyodo)), sizeof(lpSendLayout->yb_kyodo));

	m_pSendDataSerial->get_Slump(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->yb_slump));
	MoveMemory(lpSendLayout->yb_slump, cs.Left(sizeof(lpSendLayout->yb_slump)), sizeof(lpSendLayout->yb_slump));

	m_pSendDataSerial->get_Kotsusun(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->yb_kotsusun));
	MoveMemory(lpSendLayout->yb_kotsusun, cs.Left(sizeof(lpSendLayout->yb_kotsusun)), sizeof(lpSendLayout->yb_kotsusun));

	m_pSendDataSerial->get_Cement(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->yb_cement));
	MoveMemory(lpSendLayout->yb_cement, cs.Left(sizeof(lpSendLayout->yb_cement)), sizeof(lpSendLayout->yb_cement));

	m_pSendDataSerial->get_Hinmei(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->hinmei));
	MoveMemory(lpSendLayout->hinmei, cs.Left(sizeof(lpSendLayout->hinmei)), sizeof(lpSendLayout->hinmei));

	m_pSendDataSerial->get_Seizoryo(&dBuf);
	nBuf = dBuf * 100;
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->seizoryo)) + cs;
	MoveMemory(lpSendLayout->seizoryo, cs.Right(sizeof(lpSendLayout->seizoryo)), sizeof(lpSendLayout->seizoryo));

	m_pSendDataSerial->get_Syaban(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->syaban));
	MoveMemory(lpSendLayout->syaban, cs.Left(sizeof(lpSendLayout->syaban)), sizeof(lpSendLayout->syaban));

	m_pSendDataSerial->get_GenbaName(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->genbamei));
	MoveMemory(lpSendLayout->genbamei, cs.Left(sizeof(lpSendLayout->genbamei)), sizeof(lpSendLayout->genbamei));

	m_pSendDataSerial->get_SekoName(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->sekoname));
	MoveMemory(lpSendLayout->sekoname, cs.Left(sizeof(lpSendLayout->sekoname)), sizeof(lpSendLayout->sekoname));

	m_pSendDataSerial->get_Biko(&bstrBuf);
	cs = bstrBuf;
	cs = cs + CString(' ', sizeof(lpSendLayout->biko));
	MoveMemory(lpSendLayout->biko, cs.Left(sizeof(lpSendLayout->biko)), sizeof(lpSendLayout->biko));

	m_pSendDataSerial->get_DispSykSykryo(&dBuf);
	nBuf = dBuf * 100;
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->dispsyksykryo)) + cs;
	MoveMemory(lpSendLayout->dispsyksykryo, cs.Right(sizeof(lpSendLayout->dispsyksykryo)), sizeof(lpSendLayout->dispsyksykryo));

	m_pSendDataSerial->get_DispSykDaisu(&nBuf);
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->dispsykdaisu)) + cs;
	MoveMemory(lpSendLayout->dispsykdaisu, cs.Right(sizeof(lpSendLayout->dispsykdaisu)), sizeof(lpSendLayout->dispsykdaisu));

	m_pSendDataSerial->get_DispSumSuryo(&dBuf);
	nBuf = dBuf * 100;
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->dispsumsykryo)) + cs;
	MoveMemory(lpSendLayout->dispsumsykryo, cs.Right(sizeof(lpSendLayout->dispsumsykryo)), sizeof(lpSendLayout->dispsumsykryo));

	m_pSendDataSerial->get_DispSumDaisu(&nBuf);
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->dispsumdaisu)) + cs;
	MoveMemory(lpSendLayout->dispsumdaisu, cs.Right(sizeof(lpSendLayout->dispsumdaisu)), sizeof(lpSendLayout->dispsumdaisu));

	m_pSendDataSerial->get_Jis(&byteBuf);
	cs.Format("%d", byteBuf);
	cs = CString('0', sizeof(lpSendLayout->jis)) + cs;
	MoveMemory(&lpSendLayout->jis, cs.Right(sizeof(lpSendLayout->jis)), sizeof(lpSendLayout->jis));

	m_pSendDataSerial->get_Yoseki(&dBuf);
	nBuf = dBuf * 1000;
	cs.Format("%d", nBuf);
	cs = CString('0', sizeof(lpSendLayout->yoseki)) + cs;
	MoveMemory(lpSendLayout->yoseki, cs.Right(sizeof(lpSendLayout->yoseki)), sizeof(lpSendLayout->yoseki));

	
	for (int i = 0; i < 24; i++)
	{
		m_pSendDataSerial->get_Setteichi(i, &dBuf);
		nBuf = dBuf * 1000;
		cs.Format("%d", nBuf);
		cs = CString('0', sizeof(lpSendLayout->setteichi[i])) + cs;
		MoveMemory(lpSendLayout->setteichi[i], cs.Right(sizeof(lpSendLayout->setteichi[i])), sizeof(lpSendLayout->setteichi[i]));
	}
	
	MoveMemory(&lpSendLayout->etx, (LPBYTE)&ETX, sizeof(lpSendLayout->etx));
}

void CCommThread::AnalysisReceiveData(LPBYTE lpData)
{
	m_pReceiveDataSerial->ClearData();

	LPRECEIVE_LAYOUT_STATUS lpStatus = (LPRECEIVE_LAYOUT_STATUS)lpData;

	switch (lpStatus->id)	//id
	{
	case 'W':
	{
		short nBuf;
		CString csBuf;

		LPRECEIVE_LAYOUT_DOKAJU lpDokaju = (LPRECEIVE_LAYOUT_DOKAJU)lpData;

		m_pReceiveDataSerial->put_Status(_bstr_t("Dokaju"));

		m_pReceiveDataSerial->put_BpBatchNo(atoi(CString((LPCTSTR)lpDokaju->batchno, sizeof(lpDokaju->batchno))));

		COleDateTime dt = COleDateTime::GetCurrentTime();
		dt.SetDate(dt.GetYear(), atoi((LPCTSTR)lpDokaju->date.mm), atoi((LPCTSTR)lpDokaju->date.dd));
		dt.SetTime(atoi((LPCTSTR)lpDokaju->time.hh), atoi((LPCTSTR)lpDokaju->time.mm), 0);
		m_pReceiveDataSerial->put_BpTime(dt.m_dt);

		m_pReceiveDataSerial->put_Neriryo(atof(CString((LPCTSTR)lpDokaju->seizoryo, sizeof(lpDokaju->seizoryo))) / 100.0);

		csBuf = _T("");
		for (int i = 0; i < 24; i++)
		{
			CString cs;
			cs = CString((LPCTSTR)lpDokaju->setteichi[i], sizeof(lpDokaju->setteichi[i]));
			nBuf = atoi(cs);
			cs.Format("000000%d", nBuf);
			csBuf += cs.Right(6);
		}
		m_pReceiveDataSerial->put_Setteichi(_bstr_t(csBuf));

		csBuf = _T("");
		for (int i = 0; i < 24; i++)
		{
			CString cs;
			cs = CString((LPCTSTR)lpDokaju->keiryochi[i], sizeof(lpDokaju->keiryochi[i]));
			nBuf = atoi(cs);
			cs.Format("000000%d", nBuf);
			csBuf += cs.Right(6);
		}
		m_pReceiveDataSerial->put_Keiryochi(_bstr_t(csBuf));

		csBuf = _T("");
		for (int i = 0; i < 8; i++)
		{
			CString cs;
			cs = CString((LPCTSTR)lpDokaju->hyomensui[i], sizeof(lpDokaju->hyomensui[i]));
			nBuf = atoi(cs);
			cs.Format("000000%d", nBuf);
			csBuf += cs.Right(6);
		}
		m_pReceiveDataSerial->put_Hyomensui(_bstr_t(csBuf));

		m_pReceiveDataSerial->put_Yoseki(atof(CString((LPCTSTR)lpDokaju->yoseki, sizeof(lpDokaju->yoseki))) / 1000.0);

		m_pReceiveDataSerial->put_RefSykNo(atoi(CString((LPCTSTR)lpDokaju->sykno, sizeof(lpDokaju->sykno))));

		m_pReceiveDataSerial->put_RefSyaban(_bstr_t(CString((LPCTSTR)lpDokaju->syaban, sizeof(lpDokaju->syaban))));

		m_pReceiveDataSerial->put_RefHaigoNo(_bstr_t(CString((LPCTSTR)lpDokaju->haigo, sizeof(lpDokaju->haigo))));
	}
	break;
	case 'B':	//Emergency
		m_pReceiveDataSerial->put_Status(_bstr_t("Emergency"));
		break;
	case 'J':	//FinishDump
		m_pReceiveDataSerial->put_Status(_bstr_t("FinishDump"));
		break;
	case 'K':	//FinalFinishDump
		m_pReceiveDataSerial->put_Status(_bstr_t("FinalFinishDump"));
		break;
	case 'S':	//StartScale
		m_pReceiveDataSerial->put_Status(_bstr_t("StartScale"));
		break;
	case 'D':	//StartDump
		m_pReceiveDataSerial->put_Status(_bstr_t("StartDump"));
		break;
	case 'C':	//FirstStartScale
		m_pReceiveDataSerial->put_Status(_bstr_t("FirstStartScale"));
		break;
	default:
		break;
	}
}