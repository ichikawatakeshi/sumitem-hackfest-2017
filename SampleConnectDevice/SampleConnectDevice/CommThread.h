#pragma once

#include "SendDataSerial.h"
#include "ReceiveDataSerial.h"
#include "DataLayout.h"

const BYTE SA = 0x60;
const BYTE UA = 0x40;

const BYTE STX = 0x02;
const BYTE ETX = 0x03;
const BYTE EOT = 0x04;
const BYTE ENQ = 0x05;
const BYTE ACK = 0x06;
const BYTE BEL = 0x07;
const BYTE DLE = 0x10;
const BYTE NAK = 0x15;
const BYTE ETB = 0x17;
const BYTE SI = 0x0F;
const BYTE CR = 0x0D;
const BYTE LF = 0x0A;
const BYTE NUL = 0x00;
const BYTE DLEEOT[] = { DLE, EOT };
const BYTE SAUAENQ[] = { SA, UA, ENQ };

const int SEND_INTERVAL_TIMER = 1 * 1000;
const int RECEIVE_INTERVAL_TIMER = 1 * 1000;

const int NO_ANS_TIMER = 5 * 1000;

#define RECEIVE_BUF_SIZE	1024

class CCommThread : public CWinThread
{
	DECLARE_DYNCREATE(CCommThread)

public:
	CCommThread();           // 動的生成で使用される protected コンストラクター
	virtual ~CCommThread();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	BOOL m_bRun;

	CComPtr<ISendDataSerial> m_pSendDataSerial;
	CComPtr<IReceiveDataSerial> m_pReceiveDataSerial;

	BOOL m_bSendFlag;
	BOOL m_bReceiveFlag;

	CString m_csCOMPort;

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual int Run();
private:
	HANDLE m_hComm;
	BOOL CommOpen();
	void CommReset();
	BOOL SendData();
	BOOL ReadData();
	BOOL CommSend(LPBYTE lpszText, DWORD dwLength);

	void CreateSendData(SEND_LAYOUT* lpSendLayout);
	void AnalysisReceiveData(LPBYTE lpData);
};

