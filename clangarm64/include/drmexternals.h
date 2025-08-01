/*** Autogenerated by WIDL 10.12 from include/drmexternals.idl - Do not edit ***/

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

#ifndef __drmexternals_h__
#define __drmexternals_h__

/* Forward declarations */

/* Headers for imported files */

#include <wmdrmsdk.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum WMT_RIGHTS {
    WMT_RIGHT_PLAYBACK = 0x1,
    WMT_RIGHT_COPY_TO_NON_SDMI_DEVICE = 0x2,
    WMT_RIGHT_COPY_TO_CD = 0x8,
    WMT_RIGHT_COPY_TO_SDMI_DEVICE = 0x10,
    WMT_RIGHT_ONE_TIME = 0x20,
    WMT_RIGHT_SAVE_STREAM_PROTECTED = 0x40,
    WMT_RIGHT_COPY = 0x80,
    WMT_RIGHT_COLLABORATIVE_PLAY = 0x100,
    WMT_RIGHT_SDMI_TRIGGER = 0x10000,
    WMT_RIGHT_SDMI_NOMORECOPIES = 0x20000
} WMT_RIGHTS;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __drmexternals_h__ */
