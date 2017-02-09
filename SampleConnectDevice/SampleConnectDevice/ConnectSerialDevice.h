// ConnectSerialDevice.h : CConnectSerialDevice ÇÃêÈåæ

#pragma once
#include "SampleConnectDevice_i.h"
#include "resource.h"       // ÉÅÉCÉì ÉVÉìÉ{Éã
#include <comsvcs.h>

#include "SendDataSerial.h"
#include "ReceiveDataSerial.h"
#include "CommThread.h"

using namespace ATL;



// CConnectSerialDevice

class ATL_NO_VTABLE CConnectSerialDevice :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CConnectSerialDevice, &CLSID_ConnectSerialDevice>,
	public IDispatchImpl<IConnectSerialDevice, &IID_IConnectSerialDevice, &LIBID_SampleConnectDeviceLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CConnectSerialDevice()
	{
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		m_pCommThread = NULL;

		return S_OK;
	}

	void FinalRelease()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CONNECTSERIALDEVICE)

DECLARE_NOT_AGGREGATABLE(CConnectSerialDevice)

BEGIN_COM_MAP(CConnectSerialDevice)
	COM_INTERFACE_ENTRY(IConnectSerialDevice)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IConnectSerialDevice
public:
	CCommThread* m_pCommThread;
	STDMETHOD(get_SendDataSerial)(LPUNKNOWN* pVal);
	STDMETHOD(put_SendDataSerial)(LPUNKNOWN newVal);
	STDMETHOD(get_ReceiveDataSerial)(LPUNKNOWN* pVal);
	STDMETHOD(put_ReceiveDataSerial)(LPUNKNOWN newVal);
	STDMETHOD(get_SendFlag)(BYTE* pVal);
	STDMETHOD(put_SendFlag)(BYTE newVal);
	STDMETHOD(get_ReceiveFlag)(BYTE* pVal);
	STDMETHOD(put_ReceiveFlag)(BYTE newVal);
	STDMETHOD(StartThread)(BSTR bstrCOMPort);
	STDMETHOD(EndThread)();
};

OBJECT_ENTRY_AUTO(__uuidof(ConnectSerialDevice), CConnectSerialDevice)
