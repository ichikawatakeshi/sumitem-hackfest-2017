// SendDataSerial.cpp : CSendDataSerial ‚ÌŽÀ‘•

#include "stdafx.h"
#include "SendDataSerial.h"


// CSendDataSerial



STDMETHODIMP CSendDataSerial::get_HMCD(BYTE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_byteHMCD;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_HMCD(BYTE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_byteHMCD = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_SykCD(SHORT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_nSykCD;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_SykCD(SHORT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_nSykCD = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_SyohinCD(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrSyohinCD.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_SyohinCD(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrSyohinCD = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_NeriKbn(BYTE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_byteNeriKbn;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_NeriKbn(BYTE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_byteNeriKbn = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Kyodo(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrKyodo.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Kyodo(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrKyodo = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Slump(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrSlump.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Slump(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrSlump = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Kotsusun(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrKotsusun.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Kotsusun(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrKotsusun = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Cement(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrCement.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Cement(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrCement = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Hinmei(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrHinmei.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Hinmei(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrHinmei = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Seizoryo(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dSeizoryo;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Seizoryo(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dSeizoryo = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Syaban(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrSyaban.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Syaban(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrSyaban = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_GenbaName(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrGenbaName.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_GenbaName(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrGenbaName = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_SekoName(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrSekoName.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_SekoName(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrSekoName = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Biko(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_bstrBiko.copy();
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Biko(BSTR newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_bstrBiko = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_DispSykSykryo(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dDispSykSykryo;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_DispSykSykryo(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dDispSykSykryo = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_DispSykDaisu(SHORT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_nDispSykDaisu;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_DispSykDaisu(SHORT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_nDispSykDaisu = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_DispSumSuryo(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dDispSumSuryo;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_DispSumSuryo(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dDispSumSuryo = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_DispSumDaisu(SHORT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_nDispSumDaisu;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_DispSumDaisu(SHORT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_nDispSumDaisu = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Jis(BYTE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_byteJis;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Jis(BYTE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_byteJis = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Yoseki(DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	*pVal = m_dYoseki;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Yoseki(DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_dYoseki = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::get_Setteichi(SHORT nIndex, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (nIndex < 0 || 24 <= nIndex)
		return E_FAIL;
	*pVal = m_arrSetteichi[nIndex];
	return S_OK;
}

STDMETHODIMP CSendDataSerial::put_Setteichi(SHORT nIndex, DOUBLE newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (nIndex < 0 || 24 <= nIndex)
		return E_FAIL;
	m_arrSetteichi[nIndex] = newVal;
	return S_OK;
}

STDMETHODIMP CSendDataSerial::ClearData()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_byteHMCD = 0;
	m_nSykCD = 0;
	m_bstrSyohinCD = _T("");
	m_byteNeriKbn = 0;
	m_bstrKyodo = _T("");
	m_bstrSlump = _T("");
	m_bstrKotsusun = _T("");
	m_bstrCement = _T("");
	m_bstrHinmei = _T("");
	m_dSeizoryo = 0.0;
	m_bstrSyaban = _T("");
	m_bstrGenbaName = _T("");
	m_bstrSekoName = _T("");
	m_bstrBiko = _T("");
	m_dDispSykSykryo = 0.0;
	m_nDispSykDaisu = 0;
	m_dDispSumSuryo = 0.0;
	m_nDispSumDaisu = 0;
	m_byteJis = 0;
	m_dYoseki = 0.0;
	for (int i = 0; i < 24; i++)
	{
		m_arrSetteichi[i] = 0.0;
	}

	return S_OK;
}
