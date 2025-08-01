/*** Autogenerated by WIDL 10.12 from include/ctxtcall.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __ctxtcall_h__
#define __ctxtcall_h__

/* Forward declarations */

#ifndef __IContextCallback_FWD_DEFINED__
#define __IContextCallback_FWD_DEFINED__
typedef interface IContextCallback IContextCallback;
#ifdef __cplusplus
interface IContextCallback;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>
#include <objidl.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct tagComCallData {
    DWORD dwDispid;
    DWORD dwReserved;
    void *pUserDefined;
} ComCallData;
/*****************************************************************************
 * IContextCallback interface
 */
#ifndef __IContextCallback_INTERFACE_DEFINED__
#define __IContextCallback_INTERFACE_DEFINED__

typedef HRESULT (__stdcall *PFNCONTEXTCALL)(ComCallData *pParam);
DEFINE_GUID(IID_IContextCallback, 0x000001da, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("000001da-0000-0000-c000-000000000046")
IContextCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ContextCallback(
        PFNCONTEXTCALL pCallback,
        ComCallData *pParam,
        REFIID riid,
        int iMethod,
        IUnknown *pUnk) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IContextCallback, 0x000001da, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IContextCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextCallback *This);

    /*** IContextCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *ContextCallback)(
        IContextCallback *This,
        PFNCONTEXTCALL pCallback,
        ComCallData *pParam,
        REFIID riid,
        int iMethod,
        IUnknown *pUnk);

    END_INTERFACE
} IContextCallbackVtbl;

interface IContextCallback {
    CONST_VTBL IContextCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IContextCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IContextCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IContextCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IContextCallback methods ***/
#define IContextCallback_ContextCallback(This,pCallback,pParam,riid,iMethod,pUnk) (This)->lpVtbl->ContextCallback(This,pCallback,pParam,riid,iMethod,pUnk)
#else
/*** IUnknown methods ***/
static inline HRESULT IContextCallback_QueryInterface(IContextCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IContextCallback_AddRef(IContextCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IContextCallback_Release(IContextCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IContextCallback methods ***/
static inline HRESULT IContextCallback_ContextCallback(IContextCallback* This,PFNCONTEXTCALL pCallback,ComCallData *pParam,REFIID riid,int iMethod,IUnknown *pUnk) {
    return This->lpVtbl->ContextCallback(This,pCallback,pParam,riid,iMethod,pUnk);
}
#endif
#endif

#endif


#endif  /* __IContextCallback_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ctxtcall_h__ */
