// SendDataSerial.h : CSendDataSerial ÇÃêÈåæ

#pragma once
#include "SampleConnectDevice_i.h"
#include "resource.h"       // ÉÅÉCÉì ÉVÉìÉ{Éã
#include <comsvcs.h>

using namespace ATL;



// CSendDataSerial

class ATL_NO_VTABLE CSendDataSerial :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSendDataSerial, &CLSID_SendDataSerial>,
	public IDispatchImpl<ISendDataSerial, &IID_ISendDataSerial, &LIBID_SampleConnectDeviceLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSendDataSerial()
	{
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		m_bstrSyohinCD.copy();

		return S_OK;
	}

	void FinalRelease()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SENDDATASERIAL)

DECLARE_NOT_AGGREGATABLE(CSendDataSerial)

BEGIN_COM_MAP(CSendDataSerial)
	COM_INTERFACE_ENTRY(ISendDataSerial)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()




// ISendDataSerial
public:
	STDMETHOD(get_HMCD)(BYTE* pVal);
	STDMETHOD(put_HMCD)(BYTE newVal);
	STDMETHOD(get_SykCD)(SHORT* pVal);
	STDMETHOD(put_SykCD)(SHORT newVal);
	STDMETHOD(get_SyohinCD)(BSTR* pVal);
	STDMETHOD(put_SyohinCD)(BSTR newVal);
	STDMETHOD(get_NeriKbn)(BYTE* pVal);
	STDMETHOD(put_NeriKbn)(BYTE newVal);
	STDMETHOD(get_Kyodo)(BSTR* pVal);
	STDMETHOD(put_Kyodo)(BSTR newVal);
	STDMETHOD(get_Slump)(BSTR* pVal);
	STDMETHOD(put_Slump)(BSTR newVal);
	STDMETHOD(get_Kotsusun)(BSTR* pVal);
	STDMETHOD(put_Kotsusun)(BSTR newVal);
	STDMETHOD(get_Cement)(BSTR* pVal);
	STDMETHOD(put_Cement)(BSTR newVal);
	STDMETHOD(get_Hinmei)(BSTR* pVal);
	STDMETHOD(put_Hinmei)(BSTR newVal);
	STDMETHOD(get_Seizoryo)(DOUBLE* pVal);
	STDMETHOD(put_Seizoryo)(DOUBLE newVal);
	STDMETHOD(get_Syaban)(BSTR* pVal);
	STDMETHOD(put_Syaban)(BSTR newVal);
	STDMETHOD(get_GenbaName)(BSTR* pVal);
	STDMETHOD(put_GenbaName)(BSTR newVal);
	STDMETHOD(get_SekoName)(BSTR* pVal);
	STDMETHOD(put_SekoName)(BSTR newVal);
	STDMETHOD(get_Biko)(BSTR* pVal);
	STDMETHOD(put_Biko)(BSTR newVal);
	STDMETHOD(get_DispSykSykryo)(DOUBLE* pVal);
	STDMETHOD(put_DispSykSykryo)(DOUBLE newVal);
	STDMETHOD(get_DispSykDaisu)(SHORT* pVal);
	STDMETHOD(put_DispSykDaisu)(SHORT newVal);
	STDMETHOD(get_DispSumSuryo)(DOUBLE* pVal);
	STDMETHOD(put_DispSumSuryo)(DOUBLE newVal);
	STDMETHOD(get_DispSumDaisu)(SHORT* pVal);
	STDMETHOD(put_DispSumDaisu)(SHORT newVal);
	STDMETHOD(get_Jis)(BYTE* pVal);
	STDMETHOD(put_Jis)(BYTE newVal);
	STDMETHOD(get_Yoseki)(DOUBLE* pVal);
	STDMETHOD(put_Yoseki)(DOUBLE newVal);
	STDMETHOD(get_Setteichi)(SHORT nIndex, DOUBLE* pVal);
	STDMETHOD(put_Setteichi)(SHORT nIndex, DOUBLE newVal);
	STDMETHOD(ClearData)();
private:
	BYTE m_byteHMCD;
	short m_nSykCD;
	_bstr_t m_bstrSyohinCD;
	BYTE m_byteNeriKbn;
	_bstr_t m_bstrKyodo;
	_bstr_t m_bstrSlump;
	_bstr_t m_bstrKotsusun;
	_bstr_t m_bstrCement;
	_bstr_t m_bstrHinmei;
	double m_dSeizoryo;
	_bstr_t m_bstrSyaban;
	_bstr_t m_bstrGenbaName;
	_bstr_t m_bstrSekoName;
	_bstr_t m_bstrBiko;
	double m_dDispSykSykryo;
	short m_nDispSykDaisu;
	double m_dDispSumSuryo;
	short m_nDispSumDaisu;
	BYTE m_byteJis;
	double m_dYoseki;
	double m_arrSetteichi[24];
};

OBJECT_ENTRY_AUTO(__uuidof(SendDataSerial), CSendDataSerial)
