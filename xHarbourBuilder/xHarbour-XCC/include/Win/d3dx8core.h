#include "d3dx8.h"

#ifndef _D3DX8CORE_H
#define _D3DX8CORE_H

/* D3DX core types and functions */

#ifndef __PODX8API
#if __POCC__ >= 274
#define __PODX8API  __declspec(dllimport)
#else
#define __PODX8API
#endif
#endif /* __PODX8API */

#define D3DXASM_DEBUG  (1<<0)
#define D3DXASM_SKIPVALIDATION  (1<<1)

typedef interface ID3DXBuffer ID3DXBuffer;
typedef interface ID3DXBuffer *LPD3DXBUFFER;

DEFINE_GUID(IID_ID3DXBuffer,0x932e6a7e,0xc68e,0x45dd,0xa7,0xbf,0x53,0xd1,0x9c,0x86,0xdb,0x1f);

#undef INTERFACE
#define INTERFACE ID3DXBuffer
DECLARE_INTERFACE_(ID3DXBuffer, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,LPVOID*) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD_(LPVOID, GetBufferPointer)(THIS) PURE;
    STDMETHOD_(DWORD, GetBufferSize)(THIS) PURE;
};

typedef interface ID3DXFont ID3DXFont;
typedef interface ID3DXFont *LPD3DXFONT;

DEFINE_GUID(IID_ID3DXFont,0x89fad6a5,0x24d,0x49af,0x8f,0xe7,0xf5,0x11,0x23,0xb8,0x5e,0x25);

#undef INTERFACE
#define INTERFACE ID3DXFont
DECLARE_INTERFACE_(ID3DXFont, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,LPVOID*) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8*) PURE;
    STDMETHOD(GetLogFont)(THIS_ LOGFONT*) PURE;
    STDMETHOD(Begin)(THIS) PURE;
    STDMETHOD_(INT, DrawTextA)(THIS_ LPCSTR,INT,LPRECT,DWORD,D3DCOLOR) PURE;
    STDMETHOD_(INT, DrawTextW)(THIS_ LPCWSTR,INT,LPRECT,DWORD,D3DCOLOR) PURE;
    STDMETHOD(End)(THIS) PURE;
    STDMETHOD(OnLostDevice)(THIS) PURE;
    STDMETHOD(OnResetDevice)(THIS) PURE;
};

typedef interface ID3DXSprite ID3DXSprite;
typedef interface ID3DXSprite *LPD3DXSPRITE;

DEFINE_GUID(IID_ID3DXSprite,0x13d69d15,0xf9b0,0x4e0f,0xb3,0x9e,0xc9,0x1e,0xb3,0x3f,0x6c,0xe7);

#undef INTERFACE
#define INTERFACE ID3DXSprite
DECLARE_INTERFACE_(ID3DXSprite, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,LPVOID*) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8*) PURE;
    STDMETHOD(Begin)(THIS) PURE;
    STDMETHOD(Draw)(THIS_ LPDIRECT3DTEXTURE8,CONST RECT*,CONST D3DXVECTOR2*,CONST D3DXVECTOR2*,FLOAT,CONST D3DXVECTOR2*,D3DCOLOR) PURE;
    STDMETHOD(DrawTransform)(THIS_ LPDIRECT3DTEXTURE8,CONST RECT*,CONST D3DXMATRIX*,D3DCOLOR) PURE;
    STDMETHOD(End)(THIS) PURE;
    STDMETHOD(OnLostDevice)(THIS) PURE;
    STDMETHOD(OnResetDevice)(THIS) PURE;
};

typedef struct _D3DXRTS_DESC {
    UINT Width;
    UINT Height;
    D3DFORMAT Format;
    BOOL DepthStencil;
    D3DFORMAT DepthStencilFormat;
} D3DXRTS_DESC;

typedef interface ID3DXRenderToSurface ID3DXRenderToSurface;
typedef interface ID3DXRenderToSurface *LPD3DXRENDERTOSURFACE;

DEFINE_GUID(IID_ID3DXRenderToSurface,0x82df5b90,0xe34e,0x496e,0xac,0x1c,0x62,0x11,0x7a,0x6a,0x59,0x13);

#undef INTERFACE
#define INTERFACE ID3DXRenderToSurface
DECLARE_INTERFACE_(ID3DXRenderToSurface, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,LPVOID*) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8*) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DXRTS_DESC*) PURE;
    STDMETHOD(BeginScene)(THIS_ LPDIRECT3DSURFACE8,CONST D3DVIEWPORT8*) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(OnLostDevice)(THIS) PURE;
    STDMETHOD(OnResetDevice)(THIS) PURE;
};

typedef struct _D3DXRTE_DESC {
    UINT Size;
    D3DFORMAT Format;
    BOOL DepthStencil;
    D3DFORMAT DepthStencilFormat;
} D3DXRTE_DESC;

typedef interface ID3DXRenderToEnvMap ID3DXRenderToEnvMap;
typedef interface ID3DXRenderToEnvMap *LPD3DXRenderToEnvMap;

DEFINE_GUID(IID_ID3DXRenderToEnvMap,0x4e42c623,0x9451,0x44b7,0x8c,0x86,0xab,0xcc,0xde,0x5d,0x52,0xc8);

#undef INTERFACE
#define INTERFACE ID3DXRenderToEnvMap
DECLARE_INTERFACE_(ID3DXRenderToEnvMap, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,LPVOID*) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8*) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DXRTE_DESC*) PURE;
    STDMETHOD(BeginCube)(THIS_ LPDIRECT3DCUBETEXTURE8) PURE;
    STDMETHOD(BeginSphere)(THIS_ LPDIRECT3DTEXTURE8) PURE;
    STDMETHOD(BeginHemisphere)(THIS_ LPDIRECT3DTEXTURE8,LPDIRECT3DTEXTURE8) PURE;
    STDMETHOD(BeginParabolic)(THIS_ LPDIRECT3DTEXTURE8,LPDIRECT3DTEXTURE8) PURE;
    STDMETHOD(Face)(THIS_ D3DCUBEMAP_FACES) PURE;
    STDMETHOD(End)(THIS) PURE;
    STDMETHOD(OnLostDevice)(THIS) PURE;
    STDMETHOD(OnResetDevice)(THIS) PURE;
};

#ifdef __cplusplus
extern "C" {
#endif

__PODX8API HRESULT WINAPI D3DXCreateFont(LPDIRECT3DDEVICE8,HFONT,LPD3DXFONT*);
__PODX8API HRESULT WINAPI D3DXCreateFontIndirect(LPDIRECT3DDEVICE8,CONST LOGFONT*,LPD3DXFONT*);
__PODX8API HRESULT WINAPI D3DXCreateSprite(LPDIRECT3DDEVICE8,LPD3DXSPRITE*);
__PODX8API HRESULT WINAPI D3DXCreateRenderToSurface(LPDIRECT3DDEVICE8,UINT,UINT,D3DFORMAT,BOOL,D3DFORMAT,LPD3DXRENDERTOSURFACE*);
__PODX8API HRESULT WINAPI D3DXCreateRenderToEnvMap(LPDIRECT3DDEVICE8,UINT,D3DFORMAT,BOOL,D3DFORMAT,LPD3DXRenderToEnvMap*);
__PODX8API HRESULT WINAPI D3DXAssembleShaderFromFileA(LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXBUFFER*);
__PODX8API HRESULT WINAPI D3DXAssembleShaderFromFileW(LPCWSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXBUFFER*);
__PODX8API HRESULT WINAPI D3DXAssembleShaderFromResourceA(HMODULE,LPCSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXBUFFER*);
__PODX8API HRESULT WINAPI D3DXAssembleShaderFromResourceW(HMODULE,LPCWSTR,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXBUFFER*);
__PODX8API HRESULT WINAPI D3DXAssembleShader(LPCVOID,UINT,DWORD,LPD3DXBUFFER*,LPD3DXBUFFER*,LPD3DXBUFFER*);
__PODX8API HRESULT WINAPI D3DXGetErrorStringA(HRESULT,LPSTR,UINT);
__PODX8API HRESULT WINAPI D3DXGetErrorStringW(HRESULT,LPWSTR,UINT);

#ifdef UNICODE
#ifndef DrawText
#define DrawText DrawTextW
#endif /* DrawText */
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileW
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceW
#define D3DXGetErrorString D3DXGetErrorStringW
#else
#ifndef DrawText
#define DrawText DrawTextA
#endif /* DrawText */
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileA
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceA
#define D3DXGetErrorString D3DXGetErrorStringA
#endif /* UNICODE */

#ifdef __cplusplus
}
#endif

#endif /* _D3DX8CORE_H */