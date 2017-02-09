// ReceiveDataSerial.h : CReceiveDataSerial ÇÃêÈåæ

#pragma once
#include "SampleConnectDevice_i.h"
#include "resource.h"       // ÉÅÉCÉì ÉVÉìÉ{Éã
#include <comsvcs.h>

using namespace ATL;



// CReceiveDataSerial

class ATL_NO_VTABLE CReceiveDataSerial :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CReceiveDataSerial, &CLSID_ReceiveDataSerial>,
	public IDispatchImpl<IReceiveDataSerial, &IID_IReceiveDataSerial, &LIBID_SampleConnectDeviceLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CReceiveDataSerial()
	{
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_RECEIVEDATASERIAL)

DECLARE_NOT_AGGREGATABLE(CReceiveDataSerial)

BEGIN_COM_MAP(CReceiveDataSerial)
	COM_INTERFACE_ENTRY(IReceiveDataSerial)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()




// IReceiveDataSerial
public:
	STDMETHOD(get_Status)(BSTR* pVal);
	STDMETHOD(put_Status)(BSTR newVal);
	STDMETHOD(get_BpBatchNo)(SHORT* pVal);
	STDMETHOD(put_BpBatchNo)(SHORT newVal);
	STDMETHOD(get_BpTime)(DATE* pVal);
	STDMETHOD(put_BpTime)(DATE newVal);
	STDMETHOD(get_Neriryo)(DOUBLE* pVal);
	STDMETHOD(put_Neriryo)(DOUBLE newVal);
	STDMETHOD(get_Setteichi)(BSTR* pVal);
	STDMETHOD(put_Setteichi)(BSTR newVal);
	STDMETHOD(get_Keiryochi)(BSTR* pVal);
	STDMETHOD(put_Keiryochi)(BSTR newVal);
	STDMETHOD(get_Hyomensui)(BSTR* pVal);
	STDMETHOD(put_Hyomensui)(BSTR newVal);
	STDMETHOD(get_Yoseki)(DOUBLE* pVal);
	STDMETHOD(put_Yoseki)(DOUBLE newVal);
	STDMETHOD(get_RefSykNo)(SHORT* pVal);
	STDMETHOD(put_RefSykNo)(SHORT newVal);
	STDMETHOD(get_RefSyaban)(BSTR* pVal);
	STDMETHOD(put_RefSyaban)(BSTR newVal);
	STDMETHOD(get_RefHaigoNo)(BSTR* pVal);
	STDMETHOD(put_RefHaigoNo)(BSTR newVal);
	STDMETHOD(ClearData)();
private:
	_bstr_t m_bstrStatus;
	short m_nBpBatchNo;
	DATE m_dateBpTime;
	double m_dNeriryo;
	_bstr_t m_bstrSetteichi;
	_bstr_t m_bstrKeiryochi;
	_bstr_t m_bstrHyomensui;
	double m_dYoseki;
	short m_nRefSykNo;
	_bstr_t m_bstrRefSyaban;
	_bstr_t m_bstrRefHaigoNo;
};

OBJECT_ENTRY_AUTO(__uuidof(ReceiveDataSerial), CReceiveDataSerial)
