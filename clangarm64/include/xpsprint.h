/*** Autogenerated by WIDL 10.12 from include/xpsprint.idl - Do not edit ***/

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

#ifndef __xpsprint_h__
#define __xpsprint_h__

/* Forward declarations */

#ifndef __IXpsPrintJobStream_FWD_DEFINED__
#define __IXpsPrintJobStream_FWD_DEFINED__
typedef interface IXpsPrintJobStream IXpsPrintJobStream;
#ifdef __cplusplus
interface IXpsPrintJobStream;
#endif /* __cplusplus */
#endif

#ifndef __IXpsPrintJob_FWD_DEFINED__
#define __IXpsPrintJob_FWD_DEFINED__
typedef interface IXpsPrintJob IXpsPrintJob;
#ifdef __cplusplus
interface IXpsPrintJob;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <ocidl.h>
#include <xpsobjectmodel.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if NTDDI_VERSION >= 0x06010000
typedef enum __WIDL_xpsprint_generated_name_0000004A {
    XPS_JOB_IN_PROGRESS = 0,
    XPS_JOB_COMPLETED = 1,
    XPS_JOB_CANCELLED = 2,
    XPS_JOB_FAILED = 3
} XPS_JOB_COMPLETION;
typedef struct __WIDL_xpsprint_generated_name_0000004B {
    UINT32 jobId;
    INT32 currentDocument;
    INT32 currentPage;
    INT32 currentPageTotal;
    XPS_JOB_COMPLETION completion;
    HRESULT jobStatus;
} XPS_JOB_STATUS;
/*****************************************************************************
 * IXpsPrintJobStream interface
 */
#ifndef __IXpsPrintJobStream_INTERFACE_DEFINED__
#define __IXpsPrintJobStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXpsPrintJobStream, 0x7a77dc5f, 0x45d6, 0x4dff, 0x93,0x07, 0xd8,0xcb,0x84,0x63,0x47,0xca);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7a77dc5f-45d6-4dff-9307-d8cb846347ca")
IXpsPrintJobStream : public ISequentialStream
{
    virtual HRESULT STDMETHODCALLTYPE Close(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXpsPrintJobStream, 0x7a77dc5f, 0x45d6, 0x4dff, 0x93,0x07, 0xd8,0xcb,0x84,0x63,0x47,0xca)
#endif
#else
typedef struct IXpsPrintJobStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsPrintJobStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsPrintJobStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsPrintJobStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IXpsPrintJobStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IXpsPrintJobStream *This,
        const void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IXpsPrintJobStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Close)(
        IXpsPrintJobStream *This);

    END_INTERFACE
} IXpsPrintJobStreamVtbl;

interface IXpsPrintJobStream {
    CONST_VTBL IXpsPrintJobStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXpsPrintJobStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXpsPrintJobStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXpsPrintJobStream_Release(This) (This)->lpVtbl->Release(This)
/*** ISequentialStream methods ***/
#define IXpsPrintJobStream_Read(This,pv,cb,pcbRead) (This)->lpVtbl->Read(This,pv,cb,pcbRead)
#define IXpsPrintJobStream_Write(This,pv,cb,pcbWritten) (This)->lpVtbl->Write(This,pv,cb,pcbWritten)
/*** IXpsPrintJobStream methods ***/
#define IXpsPrintJobStream_Close(This) (This)->lpVtbl->Close(This)
#else
/*** IUnknown methods ***/
static inline HRESULT IXpsPrintJobStream_QueryInterface(IXpsPrintJobStream* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IXpsPrintJobStream_AddRef(IXpsPrintJobStream* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IXpsPrintJobStream_Release(IXpsPrintJobStream* This) {
    return This->lpVtbl->Release(This);
}
/*** ISequentialStream methods ***/
static inline HRESULT IXpsPrintJobStream_Read(IXpsPrintJobStream* This,void *pv,ULONG cb,ULONG *pcbRead) {
    return This->lpVtbl->Read(This,pv,cb,pcbRead);
}
static inline HRESULT IXpsPrintJobStream_Write(IXpsPrintJobStream* This,const void *pv,ULONG cb,ULONG *pcbWritten) {
    return This->lpVtbl->Write(This,pv,cb,pcbWritten);
}
/*** IXpsPrintJobStream methods ***/
static inline HRESULT IXpsPrintJobStream_Close(IXpsPrintJobStream* This) {
    return This->lpVtbl->Close(This);
}
#endif
#endif

#endif


#endif  /* __IXpsPrintJobStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsPrintJob interface
 */
#ifndef __IXpsPrintJob_INTERFACE_DEFINED__
#define __IXpsPrintJob_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXpsPrintJob, 0x5ab89b06, 0x8194, 0x425f, 0xab,0x3b, 0xd7,0xa9,0x6e,0x35,0x01,0x61);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5ab89b06-8194-425f-ab3b-d7a96e350161")
IXpsPrintJob : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Cancel(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetJobStatus(
        XPS_JOB_STATUS *jobStatus) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXpsPrintJob, 0x5ab89b06, 0x8194, 0x425f, 0xab,0x3b, 0xd7,0xa9,0x6e,0x35,0x01,0x61)
#endif
#else
typedef struct IXpsPrintJobVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsPrintJob *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsPrintJob *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsPrintJob *This);

    /*** IXpsPrintJob methods ***/
    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IXpsPrintJob *This);

    HRESULT (STDMETHODCALLTYPE *GetJobStatus)(
        IXpsPrintJob *This,
        XPS_JOB_STATUS *jobStatus);

    END_INTERFACE
} IXpsPrintJobVtbl;

interface IXpsPrintJob {
    CONST_VTBL IXpsPrintJobVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXpsPrintJob_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXpsPrintJob_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXpsPrintJob_Release(This) (This)->lpVtbl->Release(This)
/*** IXpsPrintJob methods ***/
#define IXpsPrintJob_Cancel(This) (This)->lpVtbl->Cancel(This)
#define IXpsPrintJob_GetJobStatus(This,jobStatus) (This)->lpVtbl->GetJobStatus(This,jobStatus)
#else
/*** IUnknown methods ***/
static inline HRESULT IXpsPrintJob_QueryInterface(IXpsPrintJob* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IXpsPrintJob_AddRef(IXpsPrintJob* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IXpsPrintJob_Release(IXpsPrintJob* This) {
    return This->lpVtbl->Release(This);
}
/*** IXpsPrintJob methods ***/
static inline HRESULT IXpsPrintJob_Cancel(IXpsPrintJob* This) {
    return This->lpVtbl->Cancel(This);
}
static inline HRESULT IXpsPrintJob_GetJobStatus(IXpsPrintJob* This,XPS_JOB_STATUS *jobStatus) {
    return This->lpVtbl->GetJobStatus(This,jobStatus);
}
#endif
#endif

#endif


#endif  /* __IXpsPrintJob_INTERFACE_DEFINED__ */

HRESULT WINAPI StartXpsPrintJob (LPCWSTR printerName, LPCWSTR jobName, LPCWSTR outputFileName, HANDLE progressEvent, HANDLE completionEvent, UINT8 *printablePagesOn, UINT32 printablePagesOnCount, IXpsPrintJob **xpsPrintJob, IXpsPrintJobStream **documentStream, IXpsPrintJobStream **printTicketStream);
HRESULT WINAPI StartXpsPrintJob1 (LPCWSTR printerName, LPCWSTR jobName, LPCWSTR outputFileName, HANDLE progressEvent, HANDLE completionEvent, IXpsPrintJob **xpsPrintJob, IXpsOMPackageTarget **printContentReceiver);
#endif
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __xpsprint_h__ */
