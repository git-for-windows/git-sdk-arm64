/*** Autogenerated by WIDL 10.12 from include/inspectable.idl - Do not edit ***/

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

#ifndef __inspectable_h__
#define __inspectable_h__

/* Forward declarations */

#ifndef __IInspectable_FWD_DEFINED__
#define __IInspectable_FWD_DEFINED__
typedef interface IInspectable IInspectable;
#ifdef __cplusplus
interface IInspectable;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>
#include <hstring.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum TrustLevel {
    BaseTrust = 0,
    PartialTrust = 1,
    FullTrust = 2
} TrustLevel;
/*****************************************************************************
 * IInspectable interface
 */
#ifndef __IInspectable_INTERFACE_DEFINED__
#define __IInspectable_INTERFACE_DEFINED__

DEFINE_GUID(IID_IInspectable, 0xaf86e2e0, 0xb12d, 0x4c6a, 0x9c,0x5a, 0xd7,0xaa,0x65,0x10,0x1e,0x90);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("af86e2e0-b12d-4c6a-9c5a-d7aa65101e90")
IInspectable : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetIids(
        ULONG *iidCount,
        IID **iids) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeClassName(
        HSTRING *className) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(
        TrustLevel *trustLevel) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IInspectable, 0xaf86e2e0, 0xb12d, 0x4c6a, 0x9c,0x5a, 0xd7,0xaa,0x65,0x10,0x1e,0x90)
#endif
#else
typedef struct IInspectableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInspectable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInspectable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInspectable *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IInspectable *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IInspectable *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IInspectable *This,
        TrustLevel *trustLevel);

    END_INTERFACE
} IInspectableVtbl;

interface IInspectable {
    CONST_VTBL IInspectableVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IInspectable_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IInspectable_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IInspectable_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IInspectable_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IInspectable_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IInspectable_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
#else
/*** IUnknown methods ***/
static inline HRESULT IInspectable_QueryInterface(IInspectable* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IInspectable_AddRef(IInspectable* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IInspectable_Release(IInspectable* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT IInspectable_GetIids(IInspectable* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT IInspectable_GetRuntimeClassName(IInspectable* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT IInspectable_GetTrustLevel(IInspectable* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
#endif
#endif

#endif


#endif  /* __IInspectable_INTERFACE_DEFINED__ */


#if !defined (CINTERFACE) && defined (__cplusplus)
extern "C++" {
  template<typename T> void **IID_INS_ARGS_internal (T **p) {
    static_cast<IInspectable *> (*p);
    return reinterpret_cast<void **> (p);
  }
}

#define IID_INS_ARGS(P) __uuidof(**(P)), IID_INS_ARGS_internal(P)
#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HSTRING_UserSize     (ULONG *, ULONG, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserMarshal  (ULONG *, unsigned char *, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserUnmarshal(ULONG *, unsigned char *, HSTRING *);
void            __RPC_USER HSTRING_UserFree     (ULONG *, HSTRING *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __inspectable_h__ */
