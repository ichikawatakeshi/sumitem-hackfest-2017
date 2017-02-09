

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Feb 06 11:42:46 2017
 */
/* Compiler settings for SampleConnectDevice.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IConnectSerialDevice,0x5B242CEA,0xF3F0,0x4CC4,0xBB,0x2F,0x1E,0x0C,0xE3,0xF1,0xBB,0x2A);


MIDL_DEFINE_GUID(IID, IID_ISendDataSerial,0x5AA87535,0xBB84,0x4794,0xBA,0x05,0x1C,0x48,0x90,0x3D,0x63,0x63);


MIDL_DEFINE_GUID(IID, IID_IReceiveDataSerial,0xC5B29D46,0xC335,0x4545,0xA7,0x9C,0x73,0xF3,0xEA,0x98,0xB2,0x7D);


MIDL_DEFINE_GUID(IID, LIBID_SampleConnectDeviceLib,0xE99442AB,0x6849,0x4365,0xA3,0xEB,0x76,0x38,0x0E,0xD6,0x92,0x2C);


MIDL_DEFINE_GUID(CLSID, CLSID_ConnectSerialDevice,0x5F3C302F,0x16B1,0x46A2,0xB0,0xDF,0x89,0xF1,0x94,0x1D,0xF1,0x17);


MIDL_DEFINE_GUID(CLSID, CLSID_SendDataSerial,0xA4A61C1C,0x4988,0x4B88,0xAB,0xA4,0xB1,0x43,0x95,0xF8,0x1A,0xD3);


MIDL_DEFINE_GUID(CLSID, CLSID_ReceiveDataSerial,0xED543B5D,0xBC2E,0x4529,0x85,0xF7,0x52,0xB8,0xFD,0x2E,0x6A,0xB3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



