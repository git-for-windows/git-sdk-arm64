/*** Autogenerated by WIDL 10.12 from include/dcommon.idl - Do not edit ***/

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

#ifndef __dcommon_h__
#define __dcommon_h__

/* Forward declarations */

/* Headers for imported files */

#include <dxgiformat.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
typedef struct __WIDL_dcommon_generated_name_00000000 {
    LONG x;
    LONG y;
} POINT;
typedef struct __WIDL_dcommon_generated_name_00000001 {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT;
typedef unsigned int UINT32;
#endif
typedef enum DWRITE_MEASURING_MODE {
    DWRITE_MEASURING_MODE_NATURAL = 0,
    DWRITE_MEASURING_MODE_GDI_CLASSIC = 1,
    DWRITE_MEASURING_MODE_GDI_NATURAL = 2
} DWRITE_MEASURING_MODE;
typedef enum DWRITE_GLYPH_IMAGE_FORMATS {
    DWRITE_GLYPH_IMAGE_FORMATS_NONE = 0,
    DWRITE_GLYPH_IMAGE_FORMATS_TRUETYPE = 1 << 0,
    DWRITE_GLYPH_IMAGE_FORMATS_CFF = 1 << 1,
    DWRITE_GLYPH_IMAGE_FORMATS_COLR = 1 << 2,
    DWRITE_GLYPH_IMAGE_FORMATS_SVG = 1 << 3,
    DWRITE_GLYPH_IMAGE_FORMATS_PNG = 1 << 4,
    DWRITE_GLYPH_IMAGE_FORMATS_JPEG = 1 << 5,
    DWRITE_GLYPH_IMAGE_FORMATS_TIFF = 1 << 6,
    DWRITE_GLYPH_IMAGE_FORMATS_PREMULTIPLIED_B8G8R8A8 = 1 << 7,
    DWRITE_GLYPH_IMAGE_FORMATS_COLR_PAINT_TREE = 1 << 8
} DWRITE_GLYPH_IMAGE_FORMATS;
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_GLYPH_IMAGE_FORMATS)
#define DWRITE_GLYPH_IMAGE_FORMATS_COLR_PAINT_TREE_DEFINED
typedef enum D2D1_ALPHA_MODE {
    D2D1_ALPHA_MODE_UNKNOWN = 0,
    D2D1_ALPHA_MODE_PREMULTIPLIED = 1,
    D2D1_ALPHA_MODE_STRAIGHT = 2,
    D2D1_ALPHA_MODE_IGNORE = 3,
    D2D1_ALPHA_MODE_FORCE_DWORD = 0xffffffff
} D2D1_ALPHA_MODE;
typedef struct D2D1_PIXEL_FORMAT {
    DXGI_FORMAT format;
    D2D1_ALPHA_MODE alphaMode;
} D2D1_PIXEL_FORMAT;
typedef struct D2D_POINT_2F {
    float x;
    float y;
} D2D_POINT_2F;
typedef struct D2D_POINT_2F D2D1_POINT_2F;
typedef POINT D2D_POINT_2L;
typedef POINT D2D1_POINT_2L;
typedef struct D2D_VECTOR_2F {
    float x;
    float y;
} D2D_VECTOR_2F;
typedef struct D2D_VECTOR_3F {
    float x;
    float y;
    float z;
} D2D_VECTOR_3F;
typedef struct D2D_VECTOR_4F {
    float x;
    float y;
    float z;
    float w;
} D2D_VECTOR_4F;
typedef struct D2D_RECT_F {
    float left;
    float top;
    float right;
    float bottom;
} D2D_RECT_F;
typedef RECT D2D_RECT_L;
typedef RECT D2D1_RECT_L;
typedef struct D2D_SIZE_U {
    UINT32 width;
    UINT32 height;
} D2D_SIZE_U;
typedef struct D2D_SIZE_U D2D1_SIZE_U;
typedef struct D2D_MATRIX_3X2_F {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            float m11;
            float m12;
            float m21;
            float m22;
            float dx;
            float dy;
        } __C89_NAMELESSSTRUCTNAME1;
        __C89_NAMELESS struct {
            float _11;
            float _12;
            float _21;
            float _22;
            float _31;
            float _32;
        } __C89_NAMELESSSTRUCTNAME2;
        float m[3][2];
    } __C89_NAMELESSUNIONNAME;
} D2D_MATRIX_3X2_F;
typedef struct D2D_MATRIX_4X3_F {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            float _11;
            float _12;
            float _13;
            float _21;
            float _22;
            float _23;
            float _31;
            float _32;
            float _33;
            float _41;
            float _42;
            float _43;
        } __C89_NAMELESSSTRUCTNAME;
        float m[4][3];
    } __C89_NAMELESSUNIONNAME;
} D2D_MATRIX_4X3_F;
typedef struct D2D_MATRIX_4X4_F {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            float _11;
            float _12;
            float _13;
            float _14;
            float _21;
            float _22;
            float _23;
            float _24;
            float _31;
            float _32;
            float _33;
            float _34;
            float _41;
            float _42;
            float _43;
            float _44;
        } __C89_NAMELESSSTRUCTNAME;
        float m[4][4];
    } __C89_NAMELESSUNIONNAME;
} D2D_MATRIX_4X4_F;
typedef struct D2D_MATRIX_5X4_F {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            float _11;
            float _12;
            float _13;
            float _14;
            float _21;
            float _22;
            float _23;
            float _24;
            float _31;
            float _32;
            float _33;
            float _34;
            float _41;
            float _42;
            float _43;
            float _44;
            float _51;
            float _52;
            float _53;
            float _54;
        } __C89_NAMELESSSTRUCTNAME;
        float m[5][4];
    } __C89_NAMELESSUNIONNAME;
} D2D_MATRIX_5X4_F;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dcommon_h__ */
