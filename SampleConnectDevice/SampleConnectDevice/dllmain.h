// dllmain.h : モジュール クラスの宣言です。

class CSampleConnectDeviceModule : public ATL::CAtlDllModuleT< CSampleConnectDeviceModule >
{
public :
	DECLARE_LIBID(LIBID_SampleConnectDeviceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SAMPLECONNECTDEVICE, "{11438616-FE34-4A54-B0F5-BBA19A00CDC1}")
};

extern class CSampleConnectDeviceModule _AtlModule;
