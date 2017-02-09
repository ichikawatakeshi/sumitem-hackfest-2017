// ConnectSerialDevice.cpp : CConnectSerialDevice の実装

#include "stdafx.h"
#include "ConnectSerialDevice.h"


// CConnectSerialDevice



STDMETHODIMP CConnectSerialDevice::get_SendDataSerial(LPUNKNOWN* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	HRESULT hr = m_pCommThread->m_pSendDataSerial->QueryInterface(pVal);

	return hr;
}


STDMETHODIMP CConnectSerialDevice::put_SendDataSerial(LPUNKNOWN newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	HRESULT hr = newVal->QueryInterface(&m_pCommThread->m_pSendDataSerial);

	return hr;
}


STDMETHODIMP CConnectSerialDevice::get_ReceiveDataSerial(LPUNKNOWN* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	HRESULT hr = m_pCommThread->m_pReceiveDataSerial->QueryInterface(pVal);

	return hr;
}


STDMETHODIMP CConnectSerialDevice::put_ReceiveDataSerial(LPUNKNOWN newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	HRESULT hr = newVal->QueryInterface(&m_pCommThread->m_pReceiveDataSerial);

	return hr;
}


STDMETHODIMP CConnectSerialDevice::get_SendFlag(BYTE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pVal = (BYTE)(m_pCommThread->m_bSendFlag == TRUE ? 1 : 0);

	return S_OK;
}


STDMETHODIMP CConnectSerialDevice::put_SendFlag(BYTE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_pCommThread->m_bSendFlag = (BOOL)(newVal == 0 ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CConnectSerialDevice::get_ReceiveFlag(BYTE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pVal = (BYTE)(m_pCommThread->m_bReceiveFlag == TRUE ? 1 : 0);

	return S_OK;
}


STDMETHODIMP CConnectSerialDevice::put_ReceiveFlag(BYTE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_pCommThread->m_bReceiveFlag = (BOOL)(newVal == 0 ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CConnectSerialDevice::StartThread(BSTR bstrCOMPort)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	if (m_pCommThread)
		return S_FALSE;

	m_pCommThread =(CCommThread*)AfxBeginThread(RUNTIME_CLASS(CCommThread), THREAD_PRIORITY_NORMAL, 0, CREATE_SUSPENDED);
	if (m_pCommThread)
	{
		m_pCommThread->m_csCOMPort = bstrCOMPort;
		m_pCommThread->m_bRun = TRUE;
		m_pCommThread->m_bAutoDelete = FALSE;
		m_pCommThread->ResumeThread();
	}
	else
		return S_FALSE;

	return S_OK;
}


STDMETHODIMP CConnectSerialDevice::EndThread()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	DWORD dw;
	//.受信ｽﾚｯﾄﾞ終了
	if (m_pCommThread != NULL)
	{
		m_pCommThread->m_bRun = FALSE;

		DWORD dwTimeOver = ::GetCurrentTime() + 60 * 1000;

		while (1)
		{
			if (::GetCurrentTime() > dwTimeOver)
			{
				AfxMessageBox(_T("スレッドを正常に終了することができません。\n強制終了します。"), MB_ICONEXCLAMATION);
				break;
			}

			DWORD dw;
			::GetExitCodeThread(m_pCommThread->m_hThread, &dw);

			if (dw != STILL_ACTIVE)
			{
				delete m_pCommThread;
				m_pCommThread = NULL;
				break;
			}
		}
	}

	return S_OK;
}
