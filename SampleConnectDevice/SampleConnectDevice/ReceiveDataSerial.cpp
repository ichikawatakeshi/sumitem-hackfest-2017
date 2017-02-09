// ReceiveDataSerial.cpp : CReceiveDataSerial ‚ÌŽÀ‘•

#include "stdafx.h"
#include "ReceiveDataSerial.h"


// CReceiveDataSerial



STDMETHODIMP CReceiveDataSerial::get_Status(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrStatus.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Status(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrStatus = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_BpBatchNo(SHORT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_nBpBatchNo;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_BpBatchNo(SHORT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_nBpBatchNo = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_BpTime(DATE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dateBpTime;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_BpTime(DATE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dateBpTime = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_Neriryo(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dNeriryo;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Neriryo(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dNeriryo = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_Setteichi(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrSetteichi.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Setteichi(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrSetteichi = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_Keiryochi(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrKeiryochi.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Keiryochi(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrKeiryochi = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_Hyomensui(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrHyomensui.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Hyomensui(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrHyomensui = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_Yoseki(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dYoseki;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_Yoseki(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dYoseki = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_RefSykNo(SHORT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_nRefSykNo;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_RefSykNo(SHORT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_nRefSykNo = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_RefSyaban(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrRefSyaban.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_RefSyaban(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrRefSyaban = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::get_RefHaigoNo(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrRefHaigoNo.copy();
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::put_RefHaigoNo(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrRefHaigoNo = newVal;
	return S_OK;
}


STDMETHODIMP CReceiveDataSerial::ClearData()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_bstrStatus = _T("");
	m_nBpBatchNo = 0;
	m_dateBpTime = COleDateTime::GetCurrentTime().m_dt;
	m_dNeriryo = 0.0;
	m_bstrSetteichi = _T("");
	m_bstrKeiryochi = _T("");
	m_bstrHyomensui = _T("");
	m_dYoseki = 0.0;
	m_nRefSykNo = 0;
	m_bstrRefSyaban = _T("");
	m_bstrRefHaigoNo = _T("");

	return S_OK;
}
