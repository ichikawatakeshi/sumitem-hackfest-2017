

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SampleConnectDevice_i_h__
#define __SampleConnectDevice_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConnectSerialDevice_FWD_DEFINED__
#define __IConnectSerialDevice_FWD_DEFINED__
typedef interface IConnectSerialDevice IConnectSerialDevice;

#endif 	/* __IConnectSerialDevice_FWD_DEFINED__ */


#ifndef __ISendDataSerial_FWD_DEFINED__
#define __ISendDataSerial_FWD_DEFINED__
typedef interface ISendDataSerial ISendDataSerial;

#endif 	/* __ISendDataSerial_FWD_DEFINED__ */


#ifndef __IReceiveDataSerial_FWD_DEFINED__
#define __IReceiveDataSerial_FWD_DEFINED__
typedef interface IReceiveDataSerial IReceiveDataSerial;

#endif 	/* __IReceiveDataSerial_FWD_DEFINED__ */


#ifndef __ConnectSerialDevice_FWD_DEFINED__
#define __ConnectSerialDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConnectSerialDevice ConnectSerialDevice;
#else
typedef struct ConnectSerialDevice ConnectSerialDevice;
#endif /* __cplusplus */

#endif 	/* __ConnectSerialDevice_FWD_DEFINED__ */


#ifndef __SendDataSerial_FWD_DEFINED__
#define __SendDataSerial_FWD_DEFINED__

#ifdef __cplusplus
typedef class SendDataSerial SendDataSerial;
#else
typedef struct SendDataSerial SendDataSerial;
#endif /* __cplusplus */

#endif 	/* __SendDataSerial_FWD_DEFINED__ */


#ifndef __ReceiveDataSerial_FWD_DEFINED__
#define __ReceiveDataSerial_FWD_DEFINED__

#ifdef __cplusplus
typedef class ReceiveDataSerial ReceiveDataSerial;
#else
typedef struct ReceiveDataSerial ReceiveDataSerial;
#endif /* __cplusplus */

#endif 	/* __ReceiveDataSerial_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IConnectSerialDevice_INTERFACE_DEFINED__
#define __IConnectSerialDevice_INTERFACE_DEFINED__

/* interface IConnectSerialDevice */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IConnectSerialDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B242CEA-F3F0-4CC4-BB2F-1E0CE3F1BB2A")
    IConnectSerialDevice : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SendDataSerial( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SendDataSerial( 
            /* [in] */ LPUNKNOWN newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceiveDataSerial( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceiveDataSerial( 
            /* [in] */ LPUNKNOWN newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SendFlag( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SendFlag( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceiveFlag( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceiveFlag( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartThread( 
            /* [in] */ BSTR bstrCOMPort) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EndThread( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConnectSerialDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConnectSerialDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConnectSerialDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConnectSerialDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConnectSerialDevice * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConnectSerialDevice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConnectSerialDevice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConnectSerialDevice * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SendDataSerial )( 
            IConnectSerialDevice * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SendDataSerial )( 
            IConnectSerialDevice * This,
            /* [in] */ LPUNKNOWN newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceiveDataSerial )( 
            IConnectSerialDevice * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceiveDataSerial )( 
            IConnectSerialDevice * This,
            /* [in] */ LPUNKNOWN newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SendFlag )( 
            IConnectSerialDevice * This,
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SendFlag )( 
            IConnectSerialDevice * This,
            /* [in] */ BYTE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceiveFlag )( 
            IConnectSerialDevice * This,
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceiveFlag )( 
            IConnectSerialDevice * This,
            /* [in] */ BYTE newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartThread )( 
            IConnectSerialDevice * This,
            /* [in] */ BSTR bstrCOMPort);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EndThread )( 
            IConnectSerialDevice * This);
        
        END_INTERFACE
    } IConnectSerialDeviceVtbl;

    interface IConnectSerialDevice
    {
        CONST_VTBL struct IConnectSerialDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConnectSerialDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConnectSerialDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConnectSerialDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConnectSerialDevice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConnectSerialDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConnectSerialDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConnectSerialDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConnectSerialDevice_get_SendDataSerial(This,pVal)	\
    ( (This)->lpVtbl -> get_SendDataSerial(This,pVal) ) 

#define IConnectSerialDevice_put_SendDataSerial(This,newVal)	\
    ( (This)->lpVtbl -> put_SendDataSerial(This,newVal) ) 

#define IConnectSerialDevice_get_ReceiveDataSerial(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceiveDataSerial(This,pVal) ) 

#define IConnectSerialDevice_put_ReceiveDataSerial(This,newVal)	\
    ( (This)->lpVtbl -> put_ReceiveDataSerial(This,newVal) ) 

#define IConnectSerialDevice_get_SendFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_SendFlag(This,pVal) ) 

#define IConnectSerialDevice_put_SendFlag(This,newVal)	\
    ( (This)->lpVtbl -> put_SendFlag(This,newVal) ) 

#define IConnectSerialDevice_get_ReceiveFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceiveFlag(This,pVal) ) 

#define IConnectSerialDevice_put_ReceiveFlag(This,newVal)	\
    ( (This)->lpVtbl -> put_ReceiveFlag(This,newVal) ) 

#define IConnectSerialDevice_StartThread(This,bstrCOMPort)	\
    ( (This)->lpVtbl -> StartThread(This,bstrCOMPort) ) 

#define IConnectSerialDevice_EndThread(This)	\
    ( (This)->lpVtbl -> EndThread(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConnectSerialDevice_INTERFACE_DEFINED__ */


#ifndef __ISendDataSerial_INTERFACE_DEFINED__
#define __ISendDataSerial_INTERFACE_DEFINED__

/* interface ISendDataSerial */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISendDataSerial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AA87535-BB84-4794-BA05-1C48903D6363")
    ISendDataSerial : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HMCD( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HMCD( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SykCD( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SykCD( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SyohinCD( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SyohinCD( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NeriKbn( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NeriKbn( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Kyodo( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Kyodo( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Slump( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Slump( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Kotsusun( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Kotsusun( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Cement( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Cement( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hinmei( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Hinmei( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Seizoryo( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Seizoryo( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Syaban( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Syaban( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GenbaName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GenbaName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SekoName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SekoName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Biko( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Biko( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DispSykSykryo( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DispSykSykryo( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DispSykDaisu( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DispSykDaisu( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DispSumSuryo( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DispSumSuryo( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DispSumDaisu( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DispSumDaisu( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Jis( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Jis( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Yoseki( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Yoseki( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Setteichi( 
            /* [in] */ SHORT nIndex,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Setteichi( 
            /* [in] */ SHORT nIndex,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearData( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISendDataSerialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISendDataSerial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISendDataSerial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISendDataSerial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISendDataSerial * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISendDataSerial * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISendDataSerial * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISendDataSerial * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HMCD )( 
            ISendDataSerial * This,
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HMCD )( 
            ISendDataSerial * This,
            /* [in] */ BYTE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SykCD )( 
            ISendDataSerial * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SykCD )( 
            ISendDataSerial * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyohinCD )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyohinCD )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeriKbn )( 
            ISendDataSerial * This,
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeriKbn )( 
            ISendDataSerial * This,
            /* [in] */ BYTE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kyodo )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Kyodo )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slump )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slump )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kotsusun )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Kotsusun )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cement )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cement )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hinmei )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hinmei )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Seizoryo )( 
            ISendDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Seizoryo )( 
            ISendDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Syaban )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Syaban )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GenbaName )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GenbaName )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SekoName )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SekoName )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Biko )( 
            ISendDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Biko )( 
            ISendDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DispSykSykryo )( 
            ISendDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DispSykSykryo )( 
            ISendDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DispSykDaisu )( 
            ISendDataSerial * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DispSykDaisu )( 
            ISendDataSerial * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DispSumSuryo )( 
            ISendDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DispSumSuryo )( 
            ISendDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DispSumDaisu )( 
            ISendDataSerial * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DispSumDaisu )( 
            ISendDataSerial * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Jis )( 
            ISendDataSerial * This,
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Jis )( 
            ISendDataSerial * This,
            /* [in] */ BYTE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Yoseki )( 
            ISendDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Yoseki )( 
            ISendDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Setteichi )( 
            ISendDataSerial * This,
            /* [in] */ SHORT nIndex,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Setteichi )( 
            ISendDataSerial * This,
            /* [in] */ SHORT nIndex,
            /* [in] */ DOUBLE newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearData )( 
            ISendDataSerial * This);
        
        END_INTERFACE
    } ISendDataSerialVtbl;

    interface ISendDataSerial
    {
        CONST_VTBL struct ISendDataSerialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISendDataSerial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISendDataSerial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISendDataSerial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISendDataSerial_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISendDataSerial_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISendDataSerial_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISendDataSerial_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISendDataSerial_get_HMCD(This,pVal)	\
    ( (This)->lpVtbl -> get_HMCD(This,pVal) ) 

#define ISendDataSerial_put_HMCD(This,newVal)	\
    ( (This)->lpVtbl -> put_HMCD(This,newVal) ) 

#define ISendDataSerial_get_SykCD(This,pVal)	\
    ( (This)->lpVtbl -> get_SykCD(This,pVal) ) 

#define ISendDataSerial_put_SykCD(This,newVal)	\
    ( (This)->lpVtbl -> put_SykCD(This,newVal) ) 

#define ISendDataSerial_get_SyohinCD(This,pVal)	\
    ( (This)->lpVtbl -> get_SyohinCD(This,pVal) ) 

#define ISendDataSerial_put_SyohinCD(This,newVal)	\
    ( (This)->lpVtbl -> put_SyohinCD(This,newVal) ) 

#define ISendDataSerial_get_NeriKbn(This,pVal)	\
    ( (This)->lpVtbl -> get_NeriKbn(This,pVal) ) 

#define ISendDataSerial_put_NeriKbn(This,newVal)	\
    ( (This)->lpVtbl -> put_NeriKbn(This,newVal) ) 

#define ISendDataSerial_get_Kyodo(This,pVal)	\
    ( (This)->lpVtbl -> get_Kyodo(This,pVal) ) 

#define ISendDataSerial_put_Kyodo(This,newVal)	\
    ( (This)->lpVtbl -> put_Kyodo(This,newVal) ) 

#define ISendDataSerial_get_Slump(This,pVal)	\
    ( (This)->lpVtbl -> get_Slump(This,pVal) ) 

#define ISendDataSerial_put_Slump(This,newVal)	\
    ( (This)->lpVtbl -> put_Slump(This,newVal) ) 

#define ISendDataSerial_get_Kotsusun(This,pVal)	\
    ( (This)->lpVtbl -> get_Kotsusun(This,pVal) ) 

#define ISendDataSerial_put_Kotsusun(This,newVal)	\
    ( (This)->lpVtbl -> put_Kotsusun(This,newVal) ) 

#define ISendDataSerial_get_Cement(This,pVal)	\
    ( (This)->lpVtbl -> get_Cement(This,pVal) ) 

#define ISendDataSerial_put_Cement(This,newVal)	\
    ( (This)->lpVtbl -> put_Cement(This,newVal) ) 

#define ISendDataSerial_get_Hinmei(This,pVal)	\
    ( (This)->lpVtbl -> get_Hinmei(This,pVal) ) 

#define ISendDataSerial_put_Hinmei(This,newVal)	\
    ( (This)->lpVtbl -> put_Hinmei(This,newVal) ) 

#define ISendDataSerial_get_Seizoryo(This,pVal)	\
    ( (This)->lpVtbl -> get_Seizoryo(This,pVal) ) 

#define ISendDataSerial_put_Seizoryo(This,newVal)	\
    ( (This)->lpVtbl -> put_Seizoryo(This,newVal) ) 

#define ISendDataSerial_get_Syaban(This,pVal)	\
    ( (This)->lpVtbl -> get_Syaban(This,pVal) ) 

#define ISendDataSerial_put_Syaban(This,newVal)	\
    ( (This)->lpVtbl -> put_Syaban(This,newVal) ) 

#define ISendDataSerial_get_GenbaName(This,pVal)	\
    ( (This)->lpVtbl -> get_GenbaName(This,pVal) ) 

#define ISendDataSerial_put_GenbaName(This,newVal)	\
    ( (This)->lpVtbl -> put_GenbaName(This,newVal) ) 

#define ISendDataSerial_get_SekoName(This,pVal)	\
    ( (This)->lpVtbl -> get_SekoName(This,pVal) ) 

#define ISendDataSerial_put_SekoName(This,newVal)	\
    ( (This)->lpVtbl -> put_SekoName(This,newVal) ) 

#define ISendDataSerial_get_Biko(This,pVal)	\
    ( (This)->lpVtbl -> get_Biko(This,pVal) ) 

#define ISendDataSerial_put_Biko(This,newVal)	\
    ( (This)->lpVtbl -> put_Biko(This,newVal) ) 

#define ISendDataSerial_get_DispSykSykryo(This,pVal)	\
    ( (This)->lpVtbl -> get_DispSykSykryo(This,pVal) ) 

#define ISendDataSerial_put_DispSykSykryo(This,newVal)	\
    ( (This)->lpVtbl -> put_DispSykSykryo(This,newVal) ) 

#define ISendDataSerial_get_DispSykDaisu(This,pVal)	\
    ( (This)->lpVtbl -> get_DispSykDaisu(This,pVal) ) 

#define ISendDataSerial_put_DispSykDaisu(This,newVal)	\
    ( (This)->lpVtbl -> put_DispSykDaisu(This,newVal) ) 

#define ISendDataSerial_get_DispSumSuryo(This,pVal)	\
    ( (This)->lpVtbl -> get_DispSumSuryo(This,pVal) ) 

#define ISendDataSerial_put_DispSumSuryo(This,newVal)	\
    ( (This)->lpVtbl -> put_DispSumSuryo(This,newVal) ) 

#define ISendDataSerial_get_DispSumDaisu(This,pVal)	\
    ( (This)->lpVtbl -> get_DispSumDaisu(This,pVal) ) 

#define ISendDataSerial_put_DispSumDaisu(This,newVal)	\
    ( (This)->lpVtbl -> put_DispSumDaisu(This,newVal) ) 

#define ISendDataSerial_get_Jis(This,pVal)	\
    ( (This)->lpVtbl -> get_Jis(This,pVal) ) 

#define ISendDataSerial_put_Jis(This,newVal)	\
    ( (This)->lpVtbl -> put_Jis(This,newVal) ) 

#define ISendDataSerial_get_Yoseki(This,pVal)	\
    ( (This)->lpVtbl -> get_Yoseki(This,pVal) ) 

#define ISendDataSerial_put_Yoseki(This,newVal)	\
    ( (This)->lpVtbl -> put_Yoseki(This,newVal) ) 

#define ISendDataSerial_get_Setteichi(This,nIndex,pVal)	\
    ( (This)->lpVtbl -> get_Setteichi(This,nIndex,pVal) ) 

#define ISendDataSerial_put_Setteichi(This,nIndex,newVal)	\
    ( (This)->lpVtbl -> put_Setteichi(This,nIndex,newVal) ) 

#define ISendDataSerial_ClearData(This)	\
    ( (This)->lpVtbl -> ClearData(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISendDataSerial_INTERFACE_DEFINED__ */


#ifndef __IReceiveDataSerial_INTERFACE_DEFINED__
#define __IReceiveDataSerial_INTERFACE_DEFINED__

/* interface IReceiveDataSerial */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IReceiveDataSerial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5B29D46-C335-4545-A79C-73F3EA98B27D")
    IReceiveDataSerial : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BpBatchNo( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BpBatchNo( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BpTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BpTime( 
            /* [in] */ DATE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Neriryo( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Neriryo( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Setteichi( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Setteichi( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Keiryochi( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Keiryochi( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hyomensui( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Hyomensui( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Yoseki( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Yoseki( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RefSykNo( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RefSykNo( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RefSyaban( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RefSyaban( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RefHaigoNo( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RefHaigoNo( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearData( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReceiveDataSerialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReceiveDataSerial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReceiveDataSerial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReceiveDataSerial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReceiveDataSerial * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReceiveDataSerial * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReceiveDataSerial * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReceiveDataSerial * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BpBatchNo )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BpBatchNo )( 
            IReceiveDataSerial * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BpTime )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BpTime )( 
            IReceiveDataSerial * This,
            /* [in] */ DATE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Neriryo )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Neriryo )( 
            IReceiveDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Setteichi )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Setteichi )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Keiryochi )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Keiryochi )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hyomensui )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hyomensui )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Yoseki )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Yoseki )( 
            IReceiveDataSerial * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefSykNo )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefSykNo )( 
            IReceiveDataSerial * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefSyaban )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefSyaban )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefHaigoNo )( 
            IReceiveDataSerial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefHaigoNo )( 
            IReceiveDataSerial * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearData )( 
            IReceiveDataSerial * This);
        
        END_INTERFACE
    } IReceiveDataSerialVtbl;

    interface IReceiveDataSerial
    {
        CONST_VTBL struct IReceiveDataSerialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReceiveDataSerial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReceiveDataSerial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReceiveDataSerial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReceiveDataSerial_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReceiveDataSerial_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReceiveDataSerial_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReceiveDataSerial_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReceiveDataSerial_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define IReceiveDataSerial_put_Status(This,newVal)	\
    ( (This)->lpVtbl -> put_Status(This,newVal) ) 

#define IReceiveDataSerial_get_BpBatchNo(This,pVal)	\
    ( (This)->lpVtbl -> get_BpBatchNo(This,pVal) ) 

#define IReceiveDataSerial_put_BpBatchNo(This,newVal)	\
    ( (This)->lpVtbl -> put_BpBatchNo(This,newVal) ) 

#define IReceiveDataSerial_get_BpTime(This,pVal)	\
    ( (This)->lpVtbl -> get_BpTime(This,pVal) ) 

#define IReceiveDataSerial_put_BpTime(This,newVal)	\
    ( (This)->lpVtbl -> put_BpTime(This,newVal) ) 

#define IReceiveDataSerial_get_Neriryo(This,pVal)	\
    ( (This)->lpVtbl -> get_Neriryo(This,pVal) ) 

#define IReceiveDataSerial_put_Neriryo(This,newVal)	\
    ( (This)->lpVtbl -> put_Neriryo(This,newVal) ) 

#define IReceiveDataSerial_get_Setteichi(This,pVal)	\
    ( (This)->lpVtbl -> get_Setteichi(This,pVal) ) 

#define IReceiveDataSerial_put_Setteichi(This,newVal)	\
    ( (This)->lpVtbl -> put_Setteichi(This,newVal) ) 

#define IReceiveDataSerial_get_Keiryochi(This,pVal)	\
    ( (This)->lpVtbl -> get_Keiryochi(This,pVal) ) 

#define IReceiveDataSerial_put_Keiryochi(This,newVal)	\
    ( (This)->lpVtbl -> put_Keiryochi(This,newVal) ) 

#define IReceiveDataSerial_get_Hyomensui(This,pVal)	\
    ( (This)->lpVtbl -> get_Hyomensui(This,pVal) ) 

#define IReceiveDataSerial_put_Hyomensui(This,newVal)	\
    ( (This)->lpVtbl -> put_Hyomensui(This,newVal) ) 

#define IReceiveDataSerial_get_Yoseki(This,pVal)	\
    ( (This)->lpVtbl -> get_Yoseki(This,pVal) ) 

#define IReceiveDataSerial_put_Yoseki(This,newVal)	\
    ( (This)->lpVtbl -> put_Yoseki(This,newVal) ) 

#define IReceiveDataSerial_get_RefSykNo(This,pVal)	\
    ( (This)->lpVtbl -> get_RefSykNo(This,pVal) ) 

#define IReceiveDataSerial_put_RefSykNo(This,newVal)	\
    ( (This)->lpVtbl -> put_RefSykNo(This,newVal) ) 

#define IReceiveDataSerial_get_RefSyaban(This,pVal)	\
    ( (This)->lpVtbl -> get_RefSyaban(This,pVal) ) 

#define IReceiveDataSerial_put_RefSyaban(This,newVal)	\
    ( (This)->lpVtbl -> put_RefSyaban(This,newVal) ) 

#define IReceiveDataSerial_get_RefHaigoNo(This,pVal)	\
    ( (This)->lpVtbl -> get_RefHaigoNo(This,pVal) ) 

#define IReceiveDataSerial_put_RefHaigoNo(This,newVal)	\
    ( (This)->lpVtbl -> put_RefHaigoNo(This,newVal) ) 

#define IReceiveDataSerial_ClearData(This)	\
    ( (This)->lpVtbl -> ClearData(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReceiveDataSerial_INTERFACE_DEFINED__ */



#ifndef __SampleConnectDeviceLib_LIBRARY_DEFINED__
#define __SampleConnectDeviceLib_LIBRARY_DEFINED__

/* library SampleConnectDeviceLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SampleConnectDeviceLib;

EXTERN_C const CLSID CLSID_ConnectSerialDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("5F3C302F-16B1-46A2-B0DF-89F1941DF117")
ConnectSerialDevice;
#endif

EXTERN_C const CLSID CLSID_SendDataSerial;

#ifdef __cplusplus

class DECLSPEC_UUID("A4A61C1C-4988-4B88-ABA4-B14395F81AD3")
SendDataSerial;
#endif

EXTERN_C const CLSID CLSID_ReceiveDataSerial;

#ifdef __cplusplus

class DECLSPEC_UUID("ED543B5D-BC2E-4529-85F7-52B8FD2E6AB3")
ReceiveDataSerial;
#endif
#endif /* __SampleConnectDeviceLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


