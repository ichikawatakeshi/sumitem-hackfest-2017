// dllmain.cpp : DllMain �̎����ł��B

#include "stdafx.h"
#include "resource.h"
#include "SampleConnectDevice_i.h"
#include "dllmain.h"

CSampleConnectDeviceModule _AtlModule;

class CSampleConnectDeviceApp : public CWinApp
{
public:

// �I�[�o�[���C�h
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CSampleConnectDeviceApp, CWinApp)
END_MESSAGE_MAP()

CSampleConnectDeviceApp theApp;

BOOL CSampleConnectDeviceApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CSampleConnectDeviceApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
