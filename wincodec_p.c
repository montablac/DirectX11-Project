

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Apr 11 17:14:05 2016
 */
/* Compiler settings for ..\..\..\..\..\..\..\Program Files (x86)\Windows Kits\8.1\Include\um\wincodec.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "wincodec_h.h"

#define TYPE_FORMAT_STRING_SIZE   4091                              
#define PROC_FORMAT_STRING_SIZE   7771                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   6            

typedef struct _wincodec_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_TYPE_FORMAT_STRING;

typedef struct _wincodec_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_PROC_FORMAT_STRING;

typedef struct _wincodec_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const wincodec_MIDL_TYPE_FORMAT_STRING wincodec__MIDL_TypeFormatString;
extern const wincodec_MIDL_PROC_FORMAT_STRING wincodec__MIDL_ProcFormatString;
extern const wincodec_MIDL_EXPR_FORMAT_STRING wincodec__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPalette_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPalette_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapSource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapSource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFormatConverter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFormatConverter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPlanarFormatConverter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPlanarFormatConverter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapScaler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapScaler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapClipper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapClipper_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFlipRotator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFlipRotator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapLock_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapLock_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICColorContext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICColorContext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICColorTransform_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICColorTransform_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFastMetadataEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFastMetadataEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICEnumMetadataItem_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICEnumMetadataItem_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICMetadataQueryReader_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryReader_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICMetadataQueryWriter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryWriter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFrameEncode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameEncode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPlanarBitmapFrameEncode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPlanarBitmapFrameEncode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapDecoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapSourceTransform_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapSourceTransform_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPlanarBitmapSourceTransform_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPlanarBitmapSourceTransform_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFrameDecode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameDecode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICProgressiveLevelControl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICProgressiveLevelControl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICProgressCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICProgressCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapCodecProgressNotification_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecProgressNotification_ProxyInfo;

/* [call_as] */ HRESULT STDMETHODCALLTYPE IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Proxy( 
    IWICBitmapCodecProgressNotification * This,
    /* [unique][in] */ IWICProgressCallback *pICallback,
    /* [in] */ DWORD dwProgressFlags)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &wincodec__MIDL_ProcFormatString.Format[3774],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

void __RPC_API
IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IWICBitmapCodecProgressNotification *This;
        IWICProgressCallback *pICallback;
        DWORD dwProgressFlags;
        HRESULT _RetVal;
        };
    #pragma pack( )
    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IWICBitmapCodecProgressNotification_RegisterProgressNotification_Stub(
                                                                                (IWICBitmapCodecProgressNotification *) pParamStruct->This,
                                                                                pParamStruct->pICallback,
                                                                                pParamStruct->dwProgressFlags);
    
}


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICComponentInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICComponentInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFormatConverterInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFormatConverterInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapCodecInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapEncoderInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoderInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapDecoderInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoderInfo_ProxyInfo;

/* [call_as] */ HRESULT STDMETHODCALLTYPE IWICBitmapDecoderInfo_Remote_GetPatterns_Proxy( 
    IWICBitmapDecoderInfo * This,
    /* [size_is][size_is][out] */ WICBitmapPattern **ppPatterns,
    /* [out] */ UINT *pcPatterns)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &wincodec__MIDL_ProcFormatString.Format[4746],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

void __RPC_API
IWICBitmapDecoderInfo_Remote_GetPatterns_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IWICBitmapDecoderInfo *This;
        WICBitmapPattern **ppPatterns;
        UINT *pcPatterns;
        HRESULT _RetVal;
        };
    #pragma pack( )
    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IWICBitmapDecoderInfo_GetPatterns_Stub(
                                                 (IWICBitmapDecoderInfo *) pParamStruct->This,
                                                 pParamStruct->ppPatterns,
                                                 pParamStruct->pcPatterns);
    
}


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPixelFormatInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPixelFormatInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPixelFormatInfo2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPixelFormatInfo2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICImagingFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICImagingFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICDevelopRawNotificationCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICDevelopRawNotificationCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICDevelopRaw_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICDevelopRaw_ProxyInfo;

/* [call_as] */ HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Proxy( 
    IWICDevelopRaw * This,
    /* [out][in] */ WICRawCapabilitiesInfo *pInfo)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &wincodec__MIDL_ProcFormatString.Format[6300],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

void __RPC_API
IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IWICDevelopRaw *This;
        WICRawCapabilitiesInfo *pInfo;
        HRESULT _RetVal;
        };
    #pragma pack( )
    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IWICDevelopRaw_QueryRawCapabilitiesInfo_Stub((IWICDevelopRaw *) pParamStruct->This,pParamStruct->pInfo);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_SetToneCurve_Proxy( 
    IWICDevelopRaw * This,
    /* [in] */ UINT cPoints,
    /* [size_is][in] */ const WICRawToneCurvePoint *aPoints)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &wincodec__MIDL_ProcFormatString.Format[7200],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

void __RPC_API
IWICDevelopRaw_Remote_SetToneCurve_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IWICDevelopRaw *This;
        UINT cPoints;
        const WICRawToneCurvePoint *aPoints;
        HRESULT _RetVal;
        };
    #pragma pack( )
    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IWICDevelopRaw_SetToneCurve_Stub(
                                           (IWICDevelopRaw *) pParamStruct->This,
                                           pParamStruct->cPoints,
                                           pParamStruct->aPoints);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_GetToneCurve_Proxy( 
    IWICDevelopRaw * This,
    /* [out] */ UINT *pcPoints,
    /* [size_is][size_is][out] */ WICRawToneCurvePoint **paPoints)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &wincodec__MIDL_ProcFormatString.Format[7242],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

void __RPC_API
IWICDevelopRaw_Remote_GetToneCurve_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IWICDevelopRaw *This;
        UINT *pcPoints;
        WICRawToneCurvePoint **paPoints;
        HRESULT _RetVal;
        };
    #pragma pack( )
    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IWICDevelopRaw_GetToneCurve_Stub(
                                           (IWICDevelopRaw *) pParamStruct->This,
                                           pParamStruct->pcPoints,
                                           pParamStruct->paPoints);
    
}


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICDdsDecoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICDdsDecoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICDdsEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICDdsEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICDdsFrameDecode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICDdsFrameDecode_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const wincodec_MIDL_PROC_FORMAT_STRING wincodec__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure InitializePredefined */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0xe ),	/* 14 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ePaletteType */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter fAddTransparentColor */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeCustom */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pColors */

/* 66 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cCount */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromBitmap */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 94 */	NdrFcShort( 0x10 ),	/* 16 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISurface */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter cCount */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAddTransparentColor */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPalette */


	/* Procedure InitializeFromPalette */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */


	/* Parameter pIPalette */

/* 156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */


	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x7 ),	/* 7 */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x22 ),	/* 34 */
/* 182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pePaletteType */

/* 192 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 196 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExifColorSpace */


	/* Procedure GetColorCount */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pValue */


	/* Parameter pcCount */

/* 228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColors */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x9 ),	/* 9 */
/* 248 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 256 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pColors */

/* 270 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pcActualColors */

/* 276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsBlackWhite */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0xa ),	/* 10 */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfIsBlackWhite */

/* 312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsGrayscale */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0xb ),	/* 11 */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfIsGrayscale */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameCount */


	/* Procedure HasAlpha */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xc ),	/* 12 */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pfHasAlpha */

/* 384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSizeInBlocks */


	/* Procedure GetSize */


	/* Procedure GetSize */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x3 ),	/* 3 */
/* 404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x40 ),	/* 64 */
/* 410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWidthInBlocks */


	/* Parameter puiWidth */


	/* Parameter puiWidth */

/* 420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pHeightInBlocks */


	/* Parameter puiHeight */


	/* Parameter puiHeight */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCLSID */


	/* Procedure GetContainerFormat */


	/* Procedure GetPixelFormat */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x4c ),	/* 76 */
/* 452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */


	/* Parameter pguidContainerFormat */


	/* Parameter pPixelFormat */

/* 462 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResolution */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x5 ),	/* 5 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x50 ),	/* 80 */
/* 488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDpiX */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pDpiY */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPixels */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x7 ),	/* 7 */
/* 524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x44 ),	/* 68 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 532 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prc */

/* 540 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter cbStride */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 558 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 562 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 580 */	NdrFcShort( 0x60 ),	/* 96 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter dstFormat */

/* 600 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter dither */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pIPalette */

/* 612 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter alphaThresholdPercent */

/* 618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 620 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 622 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter paletteTranslate */

/* 624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 626 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 628 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanConvert */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x9 ),	/* 9 */
/* 644 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 646 */	NdrFcShort( 0x88 ),	/* 136 */
/* 648 */	NdrFcShort( 0x24 ),	/* 36 */
/* 650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srcPixelFormat */

/* 660 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 664 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter dstPixelFormat */

/* 666 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 670 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pfCanConvert */

/* 672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 694 */	NdrFcShort( 0x68 ),	/* 104 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 700 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppPlanes */

/* 708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Parameter cPlanes */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstFormat */

/* 720 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 724 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter dither */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 730 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pIPalette */

/* 732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 734 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 736 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter alphaThresholdPercent */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 742 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter paletteTranslate */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 748 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanConvert */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x9 ),	/* 9 */
/* 764 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 766 */	NdrFcShort( 0x4c ),	/* 76 */
/* 768 */	NdrFcShort( 0x24 ),	/* 36 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSrcPixelFormats */

/* 780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter cSrcPlanes */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstPixelFormat */

/* 792 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pfCanConvert */

/* 798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 818 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 820 */	NdrFcShort( 0x16 ),	/* 22 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 834 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter uiWidth */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 874 */	NdrFcShort( 0x34 ),	/* 52 */
/* 876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 892 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter prc */

/* 894 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 898 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 916 */	NdrFcShort( 0x6 ),	/* 6 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter options */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentLevel */


	/* Procedure GetStride */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x24 ),	/* 36 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnLevel */


	/* Parameter pcbStride */

/* 972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDataPointer */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x5 ),	/* 5 */
/* 992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x40 ),	/* 64 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1000 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcbBufferSize */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbData */

/* 1014 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormat */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPixelFormat */

/* 1050 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1054 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lock */

/* 1062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1072 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prcLock */

/* 1086 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1090 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter flags */

/* 1092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppILock */

/* 1098 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPalette */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 1134 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetResolution */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0xa ),	/* 10 */
/* 1154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dpiX */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dpiY */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1180 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromFilename */

/* 1188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFilename */

/* 1212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1216 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromMemory */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1240 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBuffer */

/* 1248 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1252 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Parameter cbBufferSize */

/* 1254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCurrentLevel */


	/* Procedure InitializeFromExifColorSpace */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1282 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLevel */


	/* Parameter value */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pType */

/* 1326 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProfileBytes */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1354 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cbBuffer */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 1368 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	NdrFcShort( 0xf6 ),	/* Type Offset=246 */

	/* Parameter pcbActual */

/* 1374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 1386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1396 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 1410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pIContextSource */

/* 1416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter pIContextDest */

/* 1422 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter pixelFmtDest */

/* 1428 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1432 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1484 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1486 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 1494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1498 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 1500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromIStream */

/* 1506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0xe ),	/* 14 */
/* 1514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1520 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1522 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 1530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1534 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Return value */

/* 1536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1538 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromFilename */

/* 1542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0xf ),	/* 15 */
/* 1550 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1556 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1558 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFileName */

/* 1566 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1570 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter dwDesiredAccess */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromMemory */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1600 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBuffer */

/* 1608 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1612 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Parameter cbBufferSize */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromIStreamRegion */

/* 1626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1634 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1636 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 1650 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1654 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter ulOffset */

/* 1656 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1660 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter ulMaxSize */

/* 1662 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1666 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1682 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1688 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1690 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 1698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgeltSchema */

/* 1704 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1708 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter rgeltId */

/* 1710 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0xa1a ),	/* Type Offset=2586 */

	/* Parameter rgeltValue */

/* 1716 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1720 */	NdrFcShort( 0xa1a ),	/* Type Offset=2586 */

	/* Parameter pceltFetched */

/* 1722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1724 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 1734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 1758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEnumMetadataItem */

/* 1824 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1828 */	NdrFcShort( 0xa34 ),	/* Type Offset=2612 */

	/* Return value */

/* 1830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */

/* 1836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1850 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */

/* 1860 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1864 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocation */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1880 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1888 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchMaxLength */

/* 1896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzNamespace */

/* 1902 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActualLength */

/* 1908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataByName */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1936 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1938 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 1944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter pvarValue */

/* 1950 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */

	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEnumerator */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1976 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1978 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEnumString */

/* 1986 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	NdrFcShort( 0xa5e ),	/* Type Offset=2654 */

	/* Return value */

/* 1992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMetadataByName */

/* 1998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2014 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 2022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2026 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter pvarValue */

/* 2028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2032 */	NdrFcShort( 0xa08 ),	/* Type Offset=2568 */

	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveMetadataByName */

/* 2040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 2064 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2068 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2086 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter cacheOption */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEncoderInfo */

/* 2118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEncoderInfo */

/* 2142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2146 */	NdrFcShort( 0xa78 ),	/* Type Offset=2680 */

	/* Return value */

/* 2148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetColorContexts */

/* 2154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2168 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2170 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 2178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContext */

/* 2184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2188 */	NdrFcShort( 0xaa4 ),	/* Type Offset=2724 */

	/* Return value */

/* 2190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPalette */


	/* Procedure SetPalette */

/* 2196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */


	/* Parameter pIPalette */

/* 2220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2224 */	NdrFcShort( 0xaba ),	/* Type Offset=2746 */

	/* Return value */


	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetThumbnail */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIThumbnail */

/* 2256 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2260 */	NdrFcShort( 0xacc ),	/* Type Offset=2764 */

	/* Return value */

/* 2262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetThumbnail */


	/* Procedure SetPreview */

/* 2268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIThumbnail */


	/* Parameter pIPreview */

/* 2292 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2296 */	NdrFcShort( 0xacc ),	/* Type Offset=2764 */

	/* Return value */


	/* Return value */

/* 2298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNewFrame */

/* 2304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0xa ),	/* 10 */
/* 2312 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2318 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIFrameEncode */

/* 2328 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2332 */	NdrFcShort( 0xade ),	/* Type Offset=2782 */

	/* Parameter ppIEncoderOptions */

/* 2334 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2338 */	NdrFcShort( 0xaf4 ),	/* Type Offset=2804 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0xb ),	/* 11 */
/* 2354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2360 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2362 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 2376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0xc ),	/* 12 */
/* 2384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2390 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 2400 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2404 */	NdrFcShort( 0xb0a ),	/* Type Offset=2826 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEncoderOptions */

/* 2436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	NdrFcShort( 0xaf8 ),	/* Type Offset=2808 */

	/* Return value */

/* 2442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSize */

/* 2448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2456 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2458 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 2472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 2478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetResolution */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2498 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2500 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dpiX */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dpiY */

/* 2520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2524 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPixelFormat */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2542 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2544 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPixelFormat */

/* 2556 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetColorContexts */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2576 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2582 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2584 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 2592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContext */

/* 2598 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2602 */	NdrFcShort( 0xaa4 ),	/* Type Offset=2724 */

	/* Return value */

/* 2604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPalette */

/* 2610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2624 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2626 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 2634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2638 */	NdrFcShort( 0xaba ),	/* Type Offset=2746 */

	/* Return value */

/* 2640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePixels */

/* 2646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0xa ),	/* 10 */
/* 2654 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2656 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2660 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2662 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lineCount */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbStride */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbPixels */

/* 2688 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2692 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteSource */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0xb ),	/* 11 */
/* 2708 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2710 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 2724 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2728 */	NdrFcShort( 0xacc ),	/* Type Offset=2764 */

	/* Parameter prc */

/* 2730 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 2732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2734 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 2736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 2742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0xc ),	/* 12 */
/* 2750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2758 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0xd ),	/* 13 */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2786 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 2796 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	NdrFcShort( 0xb0a ),	/* Type Offset=2826 */

	/* Return value */

/* 2802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePixels */

/* 2808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2816 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2818 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2822 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2824 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lineCount */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPlanes */

/* 2838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2842 */	NdrFcShort( 0xb4a ),	/* Type Offset=2890 */

	/* Parameter cPlanes */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteSource */

/* 2856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2864 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2866 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2870 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2872 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppPlanes */

/* 2880 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2884 */	NdrFcShort( 0xb70 ),	/* Type Offset=2928 */

	/* Parameter cPlanes */

/* 2886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prcSource */

/* 2892 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 2894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2896 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 2898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryCapability */

/* 2904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2918 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter pdwCapability */

/* 2934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2956 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2960 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2962 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2970 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2974 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter cacheOptions */

/* 2976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2980 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */

/* 2988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */

/* 3012 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3016 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDecoderInfo */

/* 3024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIDecoderInfo */

/* 3048 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3052 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Return value */

/* 3054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryReader */


	/* Procedure GetMetadataQueryReader */

/* 3060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3074 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryReader */


	/* Parameter ppIMetadataQueryReader */

/* 3084 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3088 */	NdrFcShort( 0xbae ),	/* Type Offset=2990 */

	/* Return value */


	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPreview */

/* 3096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3110 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapSource */

/* 3120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3124 */	NdrFcShort( 0xbc4 ),	/* Type Offset=3012 */

	/* Return value */

/* 3126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorContexts */

/* 3132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0xa ),	/* 10 */
/* 3140 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3148 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 3156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContexts */

/* 3162 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3166 */	NdrFcShort( 0xbc8 ),	/* Type Offset=3016 */

	/* Parameter pcActualCount */

/* 3168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetThumbnail */

/* 3180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0xb ),	/* 11 */
/* 3188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3194 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIThumbnail */

/* 3204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3208 */	NdrFcShort( 0xbc4 ),	/* Type Offset=3012 */

	/* Return value */

/* 3210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrame */

/* 3216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0xd ),	/* 13 */
/* 3224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIBitmapFrame */

/* 3246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3250 */	NdrFcShort( 0xbcc ),	/* Type Offset=3020 */

	/* Return value */

/* 3252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPixels */

/* 3258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3266 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3268 */	NdrFcShort( 0x9e ),	/* 158 */
/* 3270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 3274 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prc */

/* 3282 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 3284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3286 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter uiWidth */

/* 3288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 3294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pguidDstFormat */

/* 3300 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 3302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3304 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter dstTransform */

/* 3306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3310 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter nStride */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 3324 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3326 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3328 */	NdrFcShort( 0xbea ),	/* Type Offset=3050 */

	/* Return value */

/* 3330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3332 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClosestSize */

/* 3336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3346 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3348 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puiWidth */

/* 3360 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter puiHeight */

/* 3366 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClosestPixelFormat */

/* 3378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3388 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3390 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidDstFormat */

/* 3402 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 3404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3406 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportTransform */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3424 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3426 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dstTransform */

/* 3438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3442 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pfIsSupported */

/* 3444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportTransform */

/* 3456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3464 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3466 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3468 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3470 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 3472 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puiWidth */

/* 3480 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter puiHeight */

/* 3486 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstTransform */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dstPlanarOptions */

/* 3498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3502 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pguidDstFormats */

/* 3504 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3506 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3508 */	NdrFcShort( 0xbfe ),	/* Type Offset=3070 */

	/* Parameter pPlaneDescriptions */

/* 3510 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3512 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3514 */	NdrFcShort( 0xc1e ),	/* Type Offset=3102 */

	/* Parameter cPlanes */

/* 3516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3518 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfIsSupported */

/* 3522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3524 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3530 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPixels */

/* 3534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3542 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3544 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3550 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prcSource */

/* 3558 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 3560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3562 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter uiWidth */

/* 3564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 3570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstTransform */

/* 3576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3580 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dstPlanarOptions */

/* 3582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3586 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pDstPlanes */

/* 3588 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3590 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3592 */	NdrFcShort( 0xc32 ),	/* Type Offset=3122 */

	/* Parameter cPlanes */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3602 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorContexts */

/* 3606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3620 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3622 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContexts */

/* 3636 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3640 */	NdrFcShort( 0xbc8 ),	/* Type Offset=3016 */

	/* Parameter pcActualCount */

/* 3642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetThumbnail */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0xa ),	/* 10 */
/* 3662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIThumbnail */

/* 3678 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	NdrFcShort( 0xbc4 ),	/* Type Offset=3012 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLevelCount */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcLevels */

/* 3714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 3726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3734 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3736 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uFrameNum */

/* 3750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter operation */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3760 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dblProgress */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3766 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remote_RegisterProgressNotification */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pICallback */

/* 3798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	NdrFcShort( 0xc54 ),	/* Type Offset=3156 */

	/* Parameter dwProgressFlags */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponentType */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pType */

/* 3840 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 3846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSigningStatus */

/* 3852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStatus */

/* 3876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAuthor */

/* 3888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3902 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3904 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchAuthor */

/* 3912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzAuthor */

/* 3918 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3922 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 3924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVendorGUID */

/* 3936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidVendor */

/* 3960 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3964 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVersion */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3980 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3984 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3988 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchVersion */

/* 3996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzVersion */

/* 4002 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4006 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4016 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecVersion */

/* 4020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4028 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4032 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4036 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchSpecVersion */

/* 4044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzSpecVersion */

/* 4050 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4054 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFriendlyName */

/* 4068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0xa ),	/* 10 */
/* 4076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4080 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4082 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4084 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchFriendlyName */

/* 4092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzFriendlyName */

/* 4098 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4102 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormats */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0xb ),	/* 11 */
/* 4124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4128 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4130 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4132 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFormats */

/* 4140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPixelFormatGUIDs */

/* 4146 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Parameter pcActual */

/* 4152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 4164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0xc ),	/* 12 */
/* 4172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4178 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIConverter */

/* 4188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4192 */	NdrFcShort( 0xc7a ),	/* Type Offset=3194 */

	/* Return value */

/* 4194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatGUID */


	/* Procedure GetContainerFormat */

/* 4200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0xb ),	/* 11 */
/* 4208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFormat */


	/* Parameter pguidContainerFormat */

/* 4224 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4228 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */


	/* Return value */

/* 4230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormats */

/* 4236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4242 */	NdrFcShort( 0xc ),	/* 12 */
/* 4244 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4250 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4252 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFormats */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pguidPixelFormats */

/* 4266 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4270 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Parameter pcActual */

/* 4272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorManagementVersion */

/* 4284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0xd ),	/* 13 */
/* 4292 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4300 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchColorManagementVersion */

/* 4308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzColorManagementVersion */

/* 4314 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4318 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceManufacturer */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0xe ),	/* 14 */
/* 4340 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4346 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4348 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchDeviceManufacturer */

/* 4356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzDeviceManufacturer */

/* 4362 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4366 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceModels */

/* 4380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0xf ),	/* 15 */
/* 4388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4394 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4396 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchDeviceModels */

/* 4404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzDeviceModels */

/* 4410 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMimeTypes */

/* 4428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4442 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4444 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchMimeTypes */

/* 4452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzMimeTypes */

/* 4458 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4462 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileExtensions */

/* 4476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4484 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4490 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4492 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchFileExtensions */

/* 4500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzFileExtensions */

/* 4506 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4510 */	NdrFcShort( 0xa4a ),	/* Type Offset=2634 */

	/* Parameter pcchActual */

/* 4512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportAnimation */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportAnimation */

/* 4548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportChromakey */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportChromakey */

/* 4584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportLossless */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportLossless */

/* 4620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWhitePointKelvin */


	/* Procedure DoesSupportMultiframe */

/* 4632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWhitePointKelvin */


	/* Parameter pfSupportMultiframe */

/* 4656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchesMimeType */

/* 4668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzMimeType */

/* 4692 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4696 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter pfMatches */

/* 4698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 4710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4716 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4724 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4726 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapEncoder */

/* 4734 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4738 */	NdrFcShort( 0xc90 ),	/* Type Offset=3216 */

	/* Return value */

/* 4740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remote_GetPatterns */

/* 4746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4760 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4762 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppPatterns */

/* 4770 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4774 */	NdrFcShort( 0xca6 ),	/* Type Offset=3238 */

	/* Parameter pcPatterns */

/* 4776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchesPattern */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4796 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 4812 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter pfMatches */

/* 4818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 4830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapDecoder */

/* 4854 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4858 */	NdrFcShort( 0xd08 ),	/* Type Offset=3336 */

	/* Return value */

/* 4860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorContext */

/* 4866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0xc ),	/* 12 */
/* 4874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIColorContext */

/* 4890 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4894 */	NdrFcShort( 0xd1e ),	/* Type Offset=3358 */

	/* Return value */

/* 4896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBitsPerPixel */

/* 4902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0xd ),	/* 13 */
/* 4910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puiBitsPerPixel */

/* 4926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChannelCount */

/* 4938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0xe ),	/* 14 */
/* 4946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4952 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4954 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puiChannelCount */

/* 4962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChannelMask */

/* 4974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0xf ),	/* 15 */
/* 4982 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4988 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4990 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiChannelIndex */

/* 4998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbMaskBuffer */

/* 5004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbMaskBuffer */

/* 5010 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 5012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5014 */	NdrFcShort( 0xd34 ),	/* Type Offset=3380 */

	/* Parameter pcbActual */

/* 5016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5024 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SupportsTransparency */

/* 5028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportsTransparency */

/* 5052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumericRepresentation */

/* 5064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNumericRepresentation */

/* 5088 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 5090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5092 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 5094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromFilename */

/* 5100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5108 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5110 */	NdrFcShort( 0x52 ),	/* 82 */
/* 5112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFilename */

/* 5124 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5128 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter pguidVendor */

/* 5130 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5134 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter dwDesiredAccess */

/* 5136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter metadataOptions */

/* 5142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5146 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 5148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5150 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5152 */	NdrFcShort( 0xd08 ),	/* Type Offset=3336 */

	/* Return value */

/* 5154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5156 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromStream */

/* 5160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5168 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5170 */	NdrFcShort( 0x4a ),	/* 74 */
/* 5172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5174 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 5184 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5188 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter pguidVendor */

/* 5190 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5194 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter metadataOptions */

/* 5196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5200 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 5202 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5204 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5206 */	NdrFcShort( 0xd08 ),	/* Type Offset=3336 */

	/* Return value */

/* 5208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5210 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromFileHandle */

/* 5214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5222 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5224 */	NdrFcShort( 0x52 ),	/* 82 */
/* 5226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5228 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 5230 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hFile */

/* 5238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pguidVendor */

/* 5244 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5248 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter metadataOptions */

/* 5250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5254 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 5256 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5260 */	NdrFcShort( 0xd08 ),	/* Type Offset=3336 */

	/* Return value */

/* 5262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5264 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateComponentInfo */

/* 5268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5278 */	NdrFcShort( 0x44 ),	/* 68 */
/* 5280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5282 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsidComponent */

/* 5292 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5296 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter ppIInfo */

/* 5298 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5302 */	NdrFcShort( 0xd44 ),	/* Type Offset=3396 */

	/* Return value */

/* 5304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoder */

/* 5310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5318 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5320 */	NdrFcShort( 0x88 ),	/* 136 */
/* 5322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5324 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidContainerFormat */

/* 5334 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5338 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pguidVendor */

/* 5340 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5344 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter ppIDecoder */

/* 5346 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5350 */	NdrFcShort( 0xd08 ),	/* Type Offset=3336 */

	/* Return value */

/* 5352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5354 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEncoder */

/* 5358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5366 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5368 */	NdrFcShort( 0x88 ),	/* 136 */
/* 5370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5374 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidContainerFormat */

/* 5382 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5386 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pguidVendor */

/* 5388 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5392 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter ppIEncoder */

/* 5394 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5398 */	NdrFcShort( 0xc90 ),	/* Type Offset=3216 */

	/* Return value */

/* 5400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5402 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePalette */

/* 5406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5420 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5422 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIPalette */

/* 5430 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5434 */	NdrFcShort( 0xd5a ),	/* Type Offset=3418 */

	/* Return value */

/* 5436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFormatConverter */

/* 5442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5448 */	NdrFcShort( 0xa ),	/* 10 */
/* 5450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5456 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIFormatConverter */

/* 5466 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5470 */	NdrFcShort( 0xc7a ),	/* Type Offset=3194 */

	/* Return value */

/* 5472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapScaler */

/* 5478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5484 */	NdrFcShort( 0xb ),	/* 11 */
/* 5486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5492 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapScaler */

/* 5502 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5506 */	NdrFcShort( 0xd5e ),	/* Type Offset=3422 */

	/* Return value */

/* 5508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapClipper */

/* 5514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0xc ),	/* 12 */
/* 5522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5528 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5530 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapClipper */

/* 5538 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5542 */	NdrFcShort( 0xd74 ),	/* Type Offset=3444 */

	/* Return value */

/* 5544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFlipRotator */

/* 5550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5556 */	NdrFcShort( 0xd ),	/* 13 */
/* 5558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5564 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5566 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapFlipRotator */

/* 5574 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5578 */	NdrFcShort( 0xd8a ),	/* Type Offset=3466 */

	/* Return value */

/* 5580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStream */

/* 5586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0xe ),	/* 14 */
/* 5594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5600 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICStream */

/* 5610 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5614 */	NdrFcShort( 0xda0 ),	/* Type Offset=3488 */

	/* Return value */

/* 5616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateColorContext */

/* 5622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5628 */	NdrFcShort( 0xf ),	/* 15 */
/* 5630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5636 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5638 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICColorContext */

/* 5646 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5650 */	NdrFcShort( 0xdb6 ),	/* Type Offset=3510 */

	/* Return value */

/* 5652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateColorTransformer */

/* 5658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5672 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5674 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICColorTransform */

/* 5682 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5686 */	NdrFcShort( 0xdba ),	/* Type Offset=3514 */

	/* Return value */

/* 5688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmap */

/* 5694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5702 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5704 */	NdrFcShort( 0x5a ),	/* 90 */
/* 5706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 5710 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 5718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 5724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pixelFormat */

/* 5730 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5734 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter option */

/* 5736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5738 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5740 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 5742 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5744 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5746 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 5748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5750 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromSource */

/* 5754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5762 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5764 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5768 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5770 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 5778 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5782 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter option */

/* 5784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5788 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 5790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5794 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromSourceRect */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5810 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5812 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 5826 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter x */

/* 5832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 5838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 5844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 5850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5852 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 5856 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5858 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5860 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 5862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5864 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromMemory */

/* 5868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5874 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5876 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5878 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5882 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5884 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 5892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 5898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pixelFormat */

/* 5904 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5908 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter cbStride */

/* 5910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 5916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5918 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 5922 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5924 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5926 */	NdrFcShort( 0xdea ),	/* Type Offset=3562 */

	/* Parameter ppIBitmap */

/* 5928 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5930 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5932 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 5934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5936 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromHBITMAP */

/* 5940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5948 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5950 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5954 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5956 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBitmap */

/* 5964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5968 */	NdrFcShort( 0xe32 ),	/* Type Offset=3634 */

	/* Parameter hPalette */

/* 5970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5974 */	NdrFcShort( 0xe82 ),	/* Type Offset=3714 */

	/* Parameter options */

/* 5976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5980 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 5982 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5986 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 5988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5990 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromHICON */

/* 5994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6002 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6008 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6010 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hIcon */

/* 6018 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6022 */	NdrFcShort( 0xea4 ),	/* Type Offset=3748 */

	/* Parameter ppIBitmap */

/* 6024 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6028 */	NdrFcShort( 0xdd0 ),	/* Type Offset=3536 */

	/* Return value */

/* 6030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateComponentEnumerator */

/* 6036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6044 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6046 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6050 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter componentTypes */

/* 6060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter options */

/* 6066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIEnumUnknown */

/* 6072 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6076 */	NdrFcShort( 0xeae ),	/* Type Offset=3758 */

	/* Return value */

/* 6078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6080 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFastMetadataEncoderFromDecoder */

/* 6084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6090 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6098 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIDecoder */

/* 6108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6112 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter ppIFastEncoder */

/* 6114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6118 */	NdrFcShort( 0xec4 ),	/* Type Offset=3780 */

	/* Return value */

/* 6120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFastMetadataEncoderFromFrameDecode */

/* 6126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6132 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIFrameDecoder */

/* 6150 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6154 */	NdrFcShort( 0xeda ),	/* Type Offset=3802 */

	/* Parameter ppIFastEncoder */

/* 6156 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6160 */	NdrFcShort( 0xec4 ),	/* Type Offset=3780 */

	/* Return value */

/* 6162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateQueryWriter */

/* 6168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6178 */	NdrFcShort( 0x88 ),	/* 136 */
/* 6180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidMetadataFormat */

/* 6192 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 6194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6196 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pguidVendor */

/* 6198 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 6200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6202 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter ppIQueryWriter */

/* 6204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6208 */	NdrFcShort( 0xb0a ),	/* Type Offset=2826 */

	/* Return value */

/* 6210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6212 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateQueryWriterFromReader */

/* 6216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6222 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6226 */	NdrFcShort( 0x44 ),	/* 68 */
/* 6228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIQueryReader */

/* 6240 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6244 */	NdrFcShort( 0xeec ),	/* Type Offset=3820 */

	/* Parameter pguidVendor */

/* 6246 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 6248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6250 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Parameter ppIQueryWriter */

/* 6252 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6256 */	NdrFcShort( 0xefe ),	/* Type Offset=3838 */

	/* Return value */

/* 6258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 6264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NotificationMask */

/* 6288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remote_QueryRawCapabilitiesInfo */

/* 6300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6306 */	NdrFcShort( 0xb ),	/* 11 */
/* 6308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6314 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInfo */

/* 6324 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 6326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6328 */	NdrFcShort( 0xf18 ),	/* Type Offset=3864 */

	/* Return value */

/* 6330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadParameterSet */

/* 6336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6342 */	NdrFcShort( 0xc ),	/* 12 */
/* 6344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6346 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParameterSet */

/* 6360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6364 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 6366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentParameterSet */

/* 6372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6378 */	NdrFcShort( 0xd ),	/* 13 */
/* 6380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6386 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppCurrentParameterSet */

/* 6396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6400 */	NdrFcShort( 0xf34 ),	/* Type Offset=3892 */

	/* Return value */

/* 6402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetExposureCompensation */

/* 6408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6414 */	NdrFcShort( 0xe ),	/* 14 */
/* 6416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ev */

/* 6432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6436 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExposureCompensation */

/* 6444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6450 */	NdrFcShort( 0xf ),	/* 15 */
/* 6452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEV */

/* 6468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6472 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWhitePointRGB */

/* 6480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6486 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6490 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Red */

/* 6504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Green */

/* 6510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Blue */

/* 6516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWhitePointRGB */

/* 6528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6540 */	NdrFcShort( 0x5c ),	/* 92 */
/* 6542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRed */

/* 6552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pGreen */

/* 6558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBlue */

/* 6564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNamedWhitePoint */

/* 6576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6582 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6586 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WhitePoint */

/* 6600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6604 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 6606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNamedWhitePoint */

/* 6612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6624 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWhitePoint */

/* 6636 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 6638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6640 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 6642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWhitePointKelvin */

/* 6648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6654 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WhitePointKelvin */

/* 6672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKelvinRangeInfo */

/* 6684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6696 */	NdrFcShort( 0x5c ),	/* 92 */
/* 6698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMinKelvinTemp */

/* 6708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMaxKelvinTemp */

/* 6714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pKelvinTempStepValue */

/* 6720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContrast */

/* 6732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6738 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6742 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Contrast */

/* 6756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6760 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContrast */

/* 6768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6774 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6780 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pContrast */

/* 6792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6796 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetGamma */

/* 6804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6810 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Gamma */

/* 6828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6832 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGamma */

/* 6840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6846 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6852 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pGamma */

/* 6864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6868 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSharpness */

/* 6876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Sharpness */

/* 6900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6904 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSharpness */

/* 6912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6918 */	NdrFcShort( 0x1c ),	/* 28 */
/* 6920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSharpness */

/* 6936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6940 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSaturation */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6958 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Saturation */

/* 6972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6976 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSaturation */

/* 6984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6990 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSaturation */

/* 7008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7012 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTint */

/* 7020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7026 */	NdrFcShort( 0x1f ),	/* 31 */
/* 7028 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7030 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Tint */

/* 7044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7048 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTint */

/* 7056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7062 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7068 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTint */

/* 7080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7084 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNoiseReduction */

/* 7092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7098 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NoiseReduction */

/* 7116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7120 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNoiseReduction */

/* 7128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7140 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNoiseReduction */

/* 7152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7156 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDestinationColorContext */

/* 7164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x23 ),	/* 35 */
/* 7172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pColorContext */

/* 7188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7192 */	NdrFcShort( 0xf4a ),	/* Type Offset=3914 */

	/* Return value */

/* 7194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remote_SetToneCurve */

/* 7200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7208 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cPoints */

/* 7224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter aPoints */

/* 7230 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7234 */	NdrFcShort( 0xf68 ),	/* Type Offset=3944 */

	/* Return value */

/* 7236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remote_GetToneCurve */

/* 7242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7248 */	NdrFcShort( 0x25 ),	/* 37 */
/* 7250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7256 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7258 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcPoints */

/* 7266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter paPoints */

/* 7272 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 7274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7276 */	NdrFcShort( 0xf78 ),	/* Type Offset=3960 */

	/* Return value */

/* 7278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRotation */

/* 7284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x26 ),	/* 38 */
/* 7292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Rotation */

/* 7308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7312 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRotation */

/* 7320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7326 */	NdrFcShort( 0x27 ),	/* 39 */
/* 7328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7332 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRotation */

/* 7344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7348 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRenderMode */

/* 7356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7366 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7370 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RenderMode */

/* 7380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7384 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRenderMode */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x29 ),	/* 41 */
/* 7400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRenderMode */

/* 7416 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 7422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotificationCallback */

/* 7428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7434 */	NdrFcShort( 0x2a ),	/* 42 */
/* 7436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7442 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 7452 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7456 */	NdrFcShort( 0xf90 ),	/* Type Offset=3984 */

	/* Return value */

/* 7458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParameters */

/* 7464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7470 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pParameters */

/* 7488 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 7490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7492 */	NdrFcShort( 0xfa6 ),	/* Type Offset=4006 */

	/* Return value */

/* 7494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrame */

/* 7500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7508 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7510 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7514 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arrayIndex */

/* 7524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mipLevel */

/* 7530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sliceIndex */

/* 7536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIBitmapFrame */

/* 7542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7546 */	NdrFcShort( 0xfb8 ),	/* Type Offset=4024 */

	/* Return value */

/* 7548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7550 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetParameters */

/* 7554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pParameters */

/* 7578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7582 */	NdrFcShort( 0xfa6 ),	/* Type Offset=4006 */

	/* Return value */

/* 7584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParameters */

/* 7590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7604 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pParameters */

/* 7614 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 7616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7618 */	NdrFcShort( 0xfa6 ),	/* Type Offset=4006 */

	/* Return value */

/* 7620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNewFrame */

/* 7626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7632 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7634 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0x5c ),	/* 92 */
/* 7640 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIFrameEncode */

/* 7650 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7654 */	NdrFcShort( 0xfd2 ),	/* Type Offset=4050 */

	/* Parameter pArrayIndex */

/* 7656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMipLevel */

/* 7662 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSliceIndex */

/* 7668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7676 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatInfo */

/* 7680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7694 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFormatInfo */

/* 7704 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7708 */	NdrFcShort( 0xfec ),	/* Type Offset=4076 */

	/* Return value */

/* 7710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyBlocks */

/* 7716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7722 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7724 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7726 */	NdrFcShort( 0x44 ),	/* 68 */
/* 7728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prcBoundsInBlocks */

/* 7740 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 7742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7744 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter cbStride */

/* 7746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 7752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 7758 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 7760 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7762 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 7764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7766 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wincodec_MIDL_TYPE_FORMAT_STRING wincodec__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/*  8 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 16 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 18 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 20 */	NdrFcLong( 0x120 ),	/* 288 */
/* 24 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 26 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 28 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 30 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 32 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 34 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 36 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 38 */	NdrFcLong( 0x40 ),	/* 64 */
/* 42 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 44 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 46 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 48 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 50 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 52 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 54 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 56 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 60 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x11, 0x0,	/* FC_RP */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
/* 70 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 72 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 74 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 76 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 78 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 80 */	NdrFcShort( 0x8 ),	/* Offset= 8 (88) */
/* 82 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 88 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x10 ),	/* 16 */
/* 92 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 94 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 96 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (82) */
			0x5b,		/* FC_END */
/* 100 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 102 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 114 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 116 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 118 */	
			0x11, 0x0,	/* FC_RP */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 126 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 134 */	
			0x11, 0x0,	/* FC_RP */
/* 136 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (88) */
/* 138 */	
			0x11, 0x0,	/* FC_RP */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 150 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 152 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 156 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 158 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (18) */
/* 162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 164 */	
			0x11, 0x0,	/* FC_RP */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 170 */	NdrFcShort( 0x10 ),	/* 16 */
/* 172 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 176 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 178 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (88) */
/* 182 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 184 */	
			0x11, 0x0,	/* FC_RP */
/* 186 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (108) */
/* 188 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 190 */	NdrFcShort( 0x4 ),	/* Offset= 4 (194) */
/* 192 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 194 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	NdrFcShort( 0xfff6 ),	/* Offset= -10 (192) */
/* 204 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (208) */
/* 208 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 210 */	NdrFcLong( 0x123 ),	/* 291 */
/* 214 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 216 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 218 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 220 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 222 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 224 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 226 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 228 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 230 */	
			0x11, 0x0,	/* FC_RP */
/* 232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (234) */
/* 234 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 238 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 242 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 244 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 246 */	
			0x12, 0x0,	/* FC_UP */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 254 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 260 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 262 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 264 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 268 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 270 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 272 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 274 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 276 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 278 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 280 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (284) */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 290 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 292 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 294 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 296 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 298 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 300 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 302 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 304 */	NdrFcLong( 0xc ),	/* 12 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 314 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 316 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 318 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 320 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 322 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x4 ),	/* 4 */
/* 328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0xfff6 ),	/* Offset= -10 (320) */
/* 332 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 336 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 338 */	
			0x12, 0x0,	/* FC_UP */
/* 340 */	NdrFcShort( 0x8c6 ),	/* Offset= 2246 (2586) */
/* 342 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x7,		/* FC_USHORT */
/* 344 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (352) */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0x61 ),	/* 97 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* Offset= 0 (360) */
/* 362 */	NdrFcLong( 0x1 ),	/* 1 */
/* 366 */	NdrFcShort( 0x0 ),	/* Offset= 0 (366) */
/* 368 */	NdrFcLong( 0x10 ),	/* 16 */
/* 372 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 374 */	NdrFcLong( 0x11 ),	/* 17 */
/* 378 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 380 */	NdrFcLong( 0x2 ),	/* 2 */
/* 384 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 386 */	NdrFcLong( 0x12 ),	/* 18 */
/* 390 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 392 */	NdrFcLong( 0x3 ),	/* 3 */
/* 396 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 398 */	NdrFcLong( 0x13 ),	/* 19 */
/* 402 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 404 */	NdrFcLong( 0x16 ),	/* 22 */
/* 408 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 410 */	NdrFcLong( 0x17 ),	/* 23 */
/* 414 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 416 */	NdrFcLong( 0xe ),	/* 14 */
/* 420 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (332) */
/* 422 */	NdrFcLong( 0x14 ),	/* 20 */
/* 426 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (332) */
/* 428 */	NdrFcLong( 0x15 ),	/* 21 */
/* 432 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (332) */
/* 434 */	NdrFcLong( 0x4 ),	/* 4 */
/* 438 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 440 */	NdrFcLong( 0x5 ),	/* 5 */
/* 444 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 446 */	NdrFcLong( 0xb ),	/* 11 */
/* 450 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 452 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 456 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 458 */	NdrFcLong( 0xa ),	/* 10 */
/* 462 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 464 */	NdrFcLong( 0x6 ),	/* 6 */
/* 468 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (332) */
/* 470 */	NdrFcLong( 0x7 ),	/* 7 */
/* 474 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 476 */	NdrFcLong( 0x40 ),	/* 64 */
/* 480 */	NdrFcShort( 0x1cc ),	/* Offset= 460 (940) */
/* 482 */	NdrFcLong( 0x48 ),	/* 72 */
/* 486 */	NdrFcShort( 0x1ce ),	/* Offset= 462 (948) */
/* 488 */	NdrFcLong( 0x47 ),	/* 71 */
/* 492 */	NdrFcShort( 0x1cc ),	/* Offset= 460 (952) */
/* 494 */	NdrFcLong( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x206 ),	/* Offset= 518 (1016) */
/* 500 */	NdrFcLong( 0xfff ),	/* 4095 */
/* 504 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1038) */
/* 506 */	NdrFcLong( 0x41 ),	/* 65 */
/* 510 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1038) */
/* 512 */	NdrFcLong( 0x46 ),	/* 70 */
/* 516 */	NdrFcShort( 0x20a ),	/* Offset= 522 (1038) */
/* 518 */	NdrFcLong( 0x1e ),	/* 30 */
/* 522 */	NdrFcShort( 0x218 ),	/* Offset= 536 (1058) */
/* 524 */	NdrFcLong( 0x1f ),	/* 31 */
/* 528 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1062) */
/* 530 */	NdrFcLong( 0xd ),	/* 13 */
/* 534 */	NdrFcShort( 0x214 ),	/* Offset= 532 (1066) */
/* 536 */	NdrFcLong( 0x9 ),	/* 9 */
/* 540 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1084) */
/* 542 */	NdrFcLong( 0x42 ),	/* 66 */
/* 546 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (302) */
/* 548 */	NdrFcLong( 0x44 ),	/* 68 */
/* 552 */	NdrFcShort( 0xff06 ),	/* Offset= -250 (302) */
/* 554 */	NdrFcLong( 0x43 ),	/* 67 */
/* 558 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1102) */
/* 560 */	NdrFcLong( 0x45 ),	/* 69 */
/* 564 */	NdrFcShort( 0x21a ),	/* Offset= 538 (1102) */
/* 566 */	NdrFcLong( 0x49 ),	/* 73 */
/* 570 */	NdrFcShort( 0x226 ),	/* Offset= 550 (1120) */
/* 572 */	NdrFcLong( 0x2010 ),	/* 8208 */
/* 576 */	NdrFcShort( 0x5c2 ),	/* Offset= 1474 (2050) */
/* 578 */	NdrFcLong( 0x2011 ),	/* 8209 */
/* 582 */	NdrFcShort( 0x5bc ),	/* Offset= 1468 (2050) */
/* 584 */	NdrFcLong( 0x2002 ),	/* 8194 */
/* 588 */	NdrFcShort( 0x5b6 ),	/* Offset= 1462 (2050) */
/* 590 */	NdrFcLong( 0x2012 ),	/* 8210 */
/* 594 */	NdrFcShort( 0x5b0 ),	/* Offset= 1456 (2050) */
/* 596 */	NdrFcLong( 0x2003 ),	/* 8195 */
/* 600 */	NdrFcShort( 0x5aa ),	/* Offset= 1450 (2050) */
/* 602 */	NdrFcLong( 0x2013 ),	/* 8211 */
/* 606 */	NdrFcShort( 0x5a4 ),	/* Offset= 1444 (2050) */
/* 608 */	NdrFcLong( 0x2016 ),	/* 8214 */
/* 612 */	NdrFcShort( 0x59e ),	/* Offset= 1438 (2050) */
/* 614 */	NdrFcLong( 0x2017 ),	/* 8215 */
/* 618 */	NdrFcShort( 0x598 ),	/* Offset= 1432 (2050) */
/* 620 */	NdrFcLong( 0x2004 ),	/* 8196 */
/* 624 */	NdrFcShort( 0x592 ),	/* Offset= 1426 (2050) */
/* 626 */	NdrFcLong( 0x2005 ),	/* 8197 */
/* 630 */	NdrFcShort( 0x58c ),	/* Offset= 1420 (2050) */
/* 632 */	NdrFcLong( 0x2006 ),	/* 8198 */
/* 636 */	NdrFcShort( 0x586 ),	/* Offset= 1414 (2050) */
/* 638 */	NdrFcLong( 0x2007 ),	/* 8199 */
/* 642 */	NdrFcShort( 0x580 ),	/* Offset= 1408 (2050) */
/* 644 */	NdrFcLong( 0x2008 ),	/* 8200 */
/* 648 */	NdrFcShort( 0x57a ),	/* Offset= 1402 (2050) */
/* 650 */	NdrFcLong( 0x200b ),	/* 8203 */
/* 654 */	NdrFcShort( 0x574 ),	/* Offset= 1396 (2050) */
/* 656 */	NdrFcLong( 0x200e ),	/* 8206 */
/* 660 */	NdrFcShort( 0x56e ),	/* Offset= 1390 (2050) */
/* 662 */	NdrFcLong( 0x2009 ),	/* 8201 */
/* 666 */	NdrFcShort( 0x568 ),	/* Offset= 1384 (2050) */
/* 668 */	NdrFcLong( 0x200d ),	/* 8205 */
/* 672 */	NdrFcShort( 0x562 ),	/* Offset= 1378 (2050) */
/* 674 */	NdrFcLong( 0x200a ),	/* 8202 */
/* 678 */	NdrFcShort( 0x55c ),	/* Offset= 1372 (2050) */
/* 680 */	NdrFcLong( 0x200c ),	/* 8204 */
/* 684 */	NdrFcShort( 0x556 ),	/* Offset= 1366 (2050) */
/* 686 */	NdrFcLong( 0x1010 ),	/* 4112 */
/* 690 */	NdrFcShort( 0x566 ),	/* Offset= 1382 (2072) */
/* 692 */	NdrFcLong( 0x1011 ),	/* 4113 */
/* 696 */	NdrFcShort( 0x560 ),	/* Offset= 1376 (2072) */
/* 698 */	NdrFcLong( 0x1002 ),	/* 4098 */
/* 702 */	NdrFcShort( 0x4ce ),	/* Offset= 1230 (1932) */
/* 704 */	NdrFcLong( 0x1012 ),	/* 4114 */
/* 708 */	NdrFcShort( 0x4c8 ),	/* Offset= 1224 (1932) */
/* 710 */	NdrFcLong( 0x1003 ),	/* 4099 */
/* 714 */	NdrFcShort( 0x4e2 ),	/* Offset= 1250 (1964) */
/* 716 */	NdrFcLong( 0x1013 ),	/* 4115 */
/* 720 */	NdrFcShort( 0x4dc ),	/* Offset= 1244 (1964) */
/* 722 */	NdrFcLong( 0x1014 ),	/* 4116 */
/* 726 */	NdrFcShort( 0x566 ),	/* Offset= 1382 (2108) */
/* 728 */	NdrFcLong( 0x1015 ),	/* 4117 */
/* 732 */	NdrFcShort( 0x560 ),	/* Offset= 1376 (2108) */
/* 734 */	NdrFcLong( 0x1004 ),	/* 4100 */
/* 738 */	NdrFcShort( 0x57a ),	/* Offset= 1402 (2140) */
/* 740 */	NdrFcLong( 0x1005 ),	/* 4101 */
/* 744 */	NdrFcShort( 0x594 ),	/* Offset= 1428 (2172) */
/* 746 */	NdrFcLong( 0x100b ),	/* 4107 */
/* 750 */	NdrFcShort( 0x49e ),	/* Offset= 1182 (1932) */
/* 752 */	NdrFcLong( 0x100a ),	/* 4106 */
/* 756 */	NdrFcShort( 0x4b8 ),	/* Offset= 1208 (1964) */
/* 758 */	NdrFcLong( 0x1006 ),	/* 4102 */
/* 762 */	NdrFcShort( 0x542 ),	/* Offset= 1346 (2108) */
/* 764 */	NdrFcLong( 0x1007 ),	/* 4103 */
/* 768 */	NdrFcShort( 0x57c ),	/* Offset= 1404 (2172) */
/* 770 */	NdrFcLong( 0x1040 ),	/* 4160 */
/* 774 */	NdrFcShort( 0x59a ),	/* Offset= 1434 (2208) */
/* 776 */	NdrFcLong( 0x1048 ),	/* 4168 */
/* 780 */	NdrFcShort( 0x5b8 ),	/* Offset= 1464 (2244) */
/* 782 */	NdrFcLong( 0x1047 ),	/* 4167 */
/* 786 */	NdrFcShort( 0x5e8 ),	/* Offset= 1512 (2298) */
/* 788 */	NdrFcLong( 0x1008 ),	/* 4104 */
/* 792 */	NdrFcShort( 0x60c ),	/* Offset= 1548 (2340) */
/* 794 */	NdrFcLong( 0x1fff ),	/* 8191 */
/* 798 */	NdrFcShort( 0x63c ),	/* Offset= 1596 (2394) */
/* 800 */	NdrFcLong( 0x101e ),	/* 4126 */
/* 804 */	NdrFcShort( 0x66a ),	/* Offset= 1642 (2446) */
/* 806 */	NdrFcLong( 0x101f ),	/* 4127 */
/* 810 */	NdrFcShort( 0x698 ),	/* Offset= 1688 (2498) */
/* 812 */	NdrFcLong( 0x100c ),	/* 4108 */
/* 816 */	NdrFcShort( 0x6bc ),	/* Offset= 1724 (2540) */
/* 818 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 822 */	NdrFcShort( 0x3be ),	/* Offset= 958 (1780) */
/* 824 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 828 */	NdrFcShort( 0x3b8 ),	/* Offset= 952 (1780) */
/* 830 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 834 */	NdrFcShort( 0x36c ),	/* Offset= 876 (1710) */
/* 836 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 840 */	NdrFcShort( 0x366 ),	/* Offset= 870 (1710) */
/* 842 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 846 */	NdrFcShort( 0x364 ),	/* Offset= 868 (1714) */
/* 848 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 852 */	NdrFcShort( 0x35e ),	/* Offset= 862 (1714) */
/* 854 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 858 */	NdrFcShort( 0x358 ),	/* Offset= 856 (1714) */
/* 860 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 864 */	NdrFcShort( 0x352 ),	/* Offset= 850 (1714) */
/* 866 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 870 */	NdrFcShort( 0x354 ),	/* Offset= 852 (1722) */
/* 872 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 876 */	NdrFcShort( 0x352 ),	/* Offset= 850 (1726) */
/* 878 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 882 */	NdrFcShort( 0x33c ),	/* Offset= 828 (1710) */
/* 884 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 888 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1776) */
/* 890 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 894 */	NdrFcShort( 0x334 ),	/* Offset= 820 (1714) */
/* 896 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 900 */	NdrFcShort( 0x33e ),	/* Offset= 830 (1730) */
/* 902 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 906 */	NdrFcShort( 0x334 ),	/* Offset= 820 (1726) */
/* 908 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 912 */	NdrFcShort( 0x66c ),	/* Offset= 1644 (2556) */
/* 914 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 918 */	NdrFcShort( 0x334 ),	/* Offset= 820 (1738) */
/* 920 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 924 */	NdrFcShort( 0x332 ),	/* Offset= 818 (1742) */
/* 926 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 930 */	NdrFcShort( 0x65e ),	/* Offset= 1630 (2560) */
/* 932 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 936 */	NdrFcShort( 0x65c ),	/* Offset= 1628 (2564) */
/* 938 */	NdrFcShort( 0xffff ),	/* Offset= -1 (937) */
/* 940 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 948 */	
			0x13, 0x0,	/* FC_OP */
/* 950 */	NdrFcShort( 0xfca2 ),	/* Offset= -862 (88) */
/* 952 */	
			0x13, 0x0,	/* FC_OP */
/* 954 */	NdrFcShort( 0xe ),	/* Offset= 14 (968) */
/* 956 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 960 */	0x10,		/* Corr desc:  field pointer,  */
			0x59,		/* FC_CALLBACK */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 966 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 968 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 970 */	NdrFcShort( 0xc ),	/* 12 */
/* 972 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x13, 0x0,	/* FC_OP */
/* 982 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (956) */
/* 984 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 986 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 988 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 990 */	
			0x13, 0x0,	/* FC_OP */
/* 992 */	NdrFcShort( 0xe ),	/* Offset= 14 (1006) */
/* 994 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 996 */	NdrFcShort( 0x2 ),	/* 2 */
/* 998 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1000 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1002 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1004 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1006 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (994) */
/* 1012 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1014 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1016 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0xffde ),	/* Offset= -34 (990) */
/* 1026 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1030 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1036 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1038 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1044 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1046 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1048 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1050 */	0x13, 0x0,	/* FC_OP */
/* 1052 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1026) */
/* 1054 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1056 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1058 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1060 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1062 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1064 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1066 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1078 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1080 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1082 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1084 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1086 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1096 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1098 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1100 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1102 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1104 */	NdrFcLong( 0xb ),	/* 11 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1118 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1120 */	
			0x13, 0x0,	/* FC_OP */
/* 1122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1124) */
/* 1124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1126 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0xc ),	/* Offset= 12 (1142) */
/* 1132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1134 */	NdrFcShort( 0xfbea ),	/* Offset= -1046 (88) */
/* 1136 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1138 */	NdrFcShort( 0xfcbc ),	/* Offset= -836 (302) */
/* 1140 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1142 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1146) */
/* 1146 */	
			0x13, 0x0,	/* FC_OP */
/* 1148 */	NdrFcShort( 0x374 ),	/* Offset= 884 (2032) */
/* 1150 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 1152 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1154 */	NdrFcShort( 0xa ),	/* 10 */
/* 1156 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1160 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1250) */
/* 1162 */	NdrFcLong( 0xd ),	/* 13 */
/* 1166 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1292) */
/* 1168 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1172 */	NdrFcShort( 0x9e ),	/* Offset= 158 (1330) */
/* 1174 */	NdrFcLong( 0xc ),	/* 12 */
/* 1178 */	NdrFcShort( 0x292 ),	/* Offset= 658 (1836) */
/* 1180 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1184 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1884) */
/* 1186 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 1190 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1900) */
/* 1192 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1196 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (1038) */
/* 1198 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1202 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1932) */
/* 1204 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1208 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1964) */
/* 1210 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1214 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1996) */
/* 1216 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1215) */
/* 1218 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1222 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1228 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1230 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1232 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	0x13, 0x0,	/* FC_OP */
/* 1244 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (1006) */
/* 1246 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1260 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1262 */	0x11, 0x0,	/* FC_RP */
/* 1264 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1218) */
/* 1266 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1268 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1270 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1280 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1284 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1288 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (1066) */
/* 1290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1292 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1304) */
/* 1300 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1302 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1304 */	
			0x11, 0x0,	/* FC_RP */
/* 1306 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1270) */
/* 1308 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1318 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1322 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1324 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1326 */	NdrFcShort( 0xff0e ),	/* Offset= -242 (1084) */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1342) */
/* 1338 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1342 */	
			0x11, 0x0,	/* FC_RP */
/* 1344 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1308) */
/* 1346 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1348 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1350 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1352 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1356) */
/* 1356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1358 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1360 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1364 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1366 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1370 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1372 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1376 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 1378 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1382 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1384 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1388 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1390 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1394 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1396 */	NdrFcLong( 0xb ),	/* 11 */
/* 1400 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1402 */	NdrFcLong( 0xa ),	/* 10 */
/* 1406 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1408 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1412 */	NdrFcShort( 0xfbc8 ),	/* Offset= -1080 (332) */
/* 1414 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1418 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1420 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1424 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (990) */
/* 1426 */	NdrFcLong( 0xd ),	/* 13 */
/* 1430 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (1066) */
/* 1432 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1436 */	NdrFcShort( 0xfea0 ),	/* Offset= -352 (1084) */
/* 1438 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1442 */	NdrFcShort( 0xca ),	/* Offset= 202 (1644) */
/* 1444 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1448 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1652) */
/* 1450 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 1454 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (1652) */
/* 1456 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1460 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (1706) */
/* 1462 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1466 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1710) */
/* 1468 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1472 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (1714) */
/* 1474 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 1478 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (1718) */
/* 1480 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1484 */	NdrFcShort( 0xee ),	/* Offset= 238 (1722) */
/* 1486 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1490 */	NdrFcShort( 0xec ),	/* Offset= 236 (1726) */
/* 1492 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1496 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1710) */
/* 1498 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1502 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1714) */
/* 1504 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1508 */	NdrFcShort( 0xde ),	/* Offset= 222 (1730) */
/* 1510 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1514 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1726) */
/* 1516 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1520 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1734) */
/* 1522 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1526 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1738) */
/* 1528 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1532 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (1742) */
/* 1534 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1538 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (1746) */
/* 1540 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1544 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1758) */
/* 1546 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1550 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1552 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1556 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1558 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1562 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1564 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1568 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1570 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1574 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1576 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1580 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1582 */	NdrFcLong( 0xe ),	/* 14 */
/* 1586 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (1766) */
/* 1588 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1592 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (1776) */
/* 1594 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1598 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (1780) */
/* 1600 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1604 */	NdrFcShort( 0x6a ),	/* Offset= 106 (1710) */
/* 1606 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1610 */	NdrFcShort( 0x68 ),	/* Offset= 104 (1714) */
/* 1612 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 1616 */	NdrFcShort( 0x66 ),	/* Offset= 102 (1718) */
/* 1618 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1622 */	NdrFcShort( 0x5c ),	/* Offset= 92 (1714) */
/* 1624 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1628 */	NdrFcShort( 0x56 ),	/* Offset= 86 (1714) */
/* 1630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1634) */
/* 1636 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1640 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1640) */
/* 1642 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1641) */
/* 1644 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1648) */
/* 1648 */	
			0x13, 0x0,	/* FC_OP */
/* 1650 */	NdrFcShort( 0x17e ),	/* Offset= 382 (2032) */
/* 1652 */	
			0x13, 0x0,	/* FC_OP */
/* 1654 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1686) */
/* 1656 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1658 */	NdrFcLong( 0x2f ),	/* 47 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1668 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1672 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1674 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1678 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1682 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1684 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0xa ),	/* Offset= 10 (1702) */
/* 1694 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1698 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1656) */
/* 1700 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1702 */	
			0x13, 0x0,	/* FC_OP */
/* 1704 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1674) */
/* 1706 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1708 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1710 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1712 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1714 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1716 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1718 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1720 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1722 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1724 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1726 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1728 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1730 */	
			0x13, 0x0,	/* FC_OP */
/* 1732 */	NdrFcShort( 0xfa88 ),	/* Offset= -1400 (332) */
/* 1734 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1736 */	NdrFcShort( 0xfd16 ),	/* Offset= -746 (990) */
/* 1738 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1740 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (1066) */
/* 1742 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1744 */	NdrFcShort( 0xfd6c ),	/* Offset= -660 (1084) */
/* 1746 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1750) */
/* 1750 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1752 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1754) */
/* 1754 */	
			0x13, 0x0,	/* FC_OP */
/* 1756 */	NdrFcShort( 0x114 ),	/* Offset= 276 (2032) */
/* 1758 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1762) */
/* 1762 */	
			0x13, 0x0,	/* FC_OP */
/* 1764 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1784) */
/* 1766 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1770 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1772 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1774 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1776 */	
			0x13, 0x0,	/* FC_OP */
/* 1778 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1766) */
/* 1780 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1782 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1786 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1790) */
/* 1792 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1794 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1796 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1798 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1800 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (1346) */
/* 1802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1804 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1806 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1814 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1816 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	0x13, 0x0,	/* FC_OP */
/* 1830 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1784) */
/* 1832 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1834 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1836 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1848) */
/* 1844 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1848 */	
			0x11, 0x0,	/* FC_RP */
/* 1850 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1804) */
/* 1852 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1856 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1862 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1864 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	0x13, 0x0,	/* FC_OP */
/* 1878 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (1686) */
/* 1880 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1884 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1896) */
/* 1892 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1894 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1896 */	
			0x11, 0x0,	/* FC_RP */
/* 1898 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1852) */
/* 1900 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1902 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0xa ),	/* Offset= 10 (1916) */
/* 1908 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1910 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1912 */	NdrFcShort( 0xf8e0 ),	/* Offset= -1824 (88) */
/* 1914 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1916 */	
			0x11, 0x0,	/* FC_RP */
/* 1918 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (1270) */
/* 1920 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1922 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1924 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1930 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1932 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1936 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1938 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1944 */	0x13, 0x0,	/* FC_OP */
/* 1946 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1920) */
/* 1948 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1950 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1952 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1956 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1962 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1964 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1968 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1970 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1974 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1976 */	0x13, 0x0,	/* FC_OP */
/* 1978 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1952) */
/* 1980 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1982 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1984 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1994 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1996 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2000 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2002 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2004 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2006 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2008 */	0x13, 0x0,	/* FC_OP */
/* 2010 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1984) */
/* 2012 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2014 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2016 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2020 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2022 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 2024 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2026 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2028 */	NdrFcShort( 0xfbc0 ),	/* Offset= -1088 (940) */
/* 2030 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2034 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2036 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2016) */
/* 2038 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2038) */
/* 2040 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2042 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2044 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2046 */	NdrFcShort( 0xfc80 ),	/* Offset= -896 (1150) */
/* 2048 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2050 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2052 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0xfc6c ),	/* Offset= -916 (1142) */
/* 2060 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2062 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2064 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2070 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2072 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2076 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2078 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2084 */	0x13, 0x0,	/* FC_OP */
/* 2086 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2060) */
/* 2088 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2090 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2092 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2096 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2102 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2104 */	NdrFcShort( 0xf914 ),	/* Offset= -1772 (332) */
/* 2106 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2108 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2112 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2120 */	0x13, 0x0,	/* FC_OP */
/* 2122 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2092) */
/* 2124 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2126 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2128 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2132 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2138 */	0xa,		/* FC_FLOAT */
			0x5b,		/* FC_END */
/* 2140 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2152 */	0x13, 0x0,	/* FC_OP */
/* 2154 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2128) */
/* 2156 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2160 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2164 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2170 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 2172 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2176 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2178 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2182 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2184 */	0x13, 0x0,	/* FC_OP */
/* 2186 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2160) */
/* 2188 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2190 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2192 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2202 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2204 */	NdrFcShort( 0xfb10 ),	/* Offset= -1264 (940) */
/* 2206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2208 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2212 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2214 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2216 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2220 */	0x13, 0x0,	/* FC_OP */
/* 2222 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2192) */
/* 2224 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2226 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2228 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2230 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2232 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2240 */	NdrFcShort( 0xf798 ),	/* Offset= -2152 (88) */
/* 2242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2244 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2248 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2250 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2256 */	0x13, 0x0,	/* FC_OP */
/* 2258 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2228) */
/* 2260 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2262 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2264 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2266 */	NdrFcShort( 0xc ),	/* 12 */
/* 2268 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2274 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2276 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2278 */	NdrFcShort( 0xc ),	/* 12 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x13, 0x0,	/* FC_OP */
/* 2290 */	NdrFcShort( 0xfaca ),	/* Offset= -1334 (956) */
/* 2292 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2294 */	0x0,		/* 0 */
			NdrFcShort( 0xfad1 ),	/* Offset= -1327 (968) */
			0x5b,		/* FC_END */
/* 2298 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2302 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2304 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2310 */	0x13, 0x0,	/* FC_OP */
/* 2312 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2264) */
/* 2314 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2316 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2318 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2328 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2332 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2334 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2336 */	NdrFcShort( 0xfad8 ),	/* Offset= -1320 (1016) */
/* 2338 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2340 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2346 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2348 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2350 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2352 */	0x13, 0x0,	/* FC_OP */
/* 2354 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2318) */
/* 2356 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2358 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2360 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2364 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2370 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2372 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2380 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2382 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2384 */	0x13, 0x0,	/* FC_OP */
/* 2386 */	NdrFcShort( 0xfab0 ),	/* Offset= -1360 (1026) */
/* 2388 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2390 */	0x0,		/* 0 */
			NdrFcShort( 0xfab7 ),	/* Offset= -1353 (1038) */
			0x5b,		/* FC_END */
/* 2394 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2398 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2400 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2402 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2404 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2406 */	0x13, 0x0,	/* FC_OP */
/* 2408 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2360) */
/* 2410 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2412 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2414 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2416 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2418 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2424 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2426 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2428 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2440 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2442 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2444 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2446 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2450 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2452 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2456 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2458 */	0x13, 0x0,	/* FC_OP */
/* 2460 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2414) */
/* 2462 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2464 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2466 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2470 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2476 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2478 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2492 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2494 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2496 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2498 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2502 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2504 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2508 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2510 */	0x13, 0x0,	/* FC_OP */
/* 2512 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2466) */
/* 2514 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2516 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2518 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2528 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2532 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2534 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2536 */	NdrFcShort( 0x20 ),	/* Offset= 32 (2568) */
/* 2538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2552) */
/* 2548 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2552 */	
			0x13, 0x0,	/* FC_OP */
/* 2554 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2518) */
/* 2556 */	
			0x13, 0x0,	/* FC_OP */
/* 2558 */	NdrFcShort( 0xf9fa ),	/* Offset= -1542 (1016) */
/* 2560 */	
			0x13, 0x0,	/* FC_OP */
/* 2562 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (2050) */
/* 2564 */	
			0x13, 0x0,	/* FC_OP */
/* 2566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2568) */
/* 2568 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2574) */
/* 2576 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 2578 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 2580 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2582 */	NdrFcShort( 0xf740 ),	/* Offset= -2240 (342) */
/* 2584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2586 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2594 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2596 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2600 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2602 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2604 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2568) */
/* 2606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2608 */	
			0x11, 0x0,	/* FC_RP */
/* 2610 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2586) */
/* 2612 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2616) */
/* 2616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2618 */	NdrFcLong( 0xdc2bb46d ),	/* -601115539 */
/* 2622 */	NdrFcShort( 0x3f07 ),	/* 16135 */
/* 2624 */	NdrFcShort( 0x481e ),	/* 18462 */
/* 2626 */	0x86,		/* 134 */
			0x25,		/* 37 */
/* 2628 */	0x22,		/* 34 */
			0xc,		/* 12 */
/* 2630 */	0x4a,		/* 74 */
			0xed,		/* 237 */
/* 2632 */	0xbb,		/* 187 */
			0x33,		/* 51 */
/* 2634 */	
			0x12, 0x0,	/* FC_UP */
/* 2636 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2638) */
/* 2638 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2640 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2642 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2646 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2648 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2650 */	
			0x12, 0x0,	/* FC_UP */
/* 2652 */	NdrFcShort( 0xffac ),	/* Offset= -84 (2568) */
/* 2654 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2656 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2658) */
/* 2658 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2660 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2668 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2672 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2674 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2676 */	
			0x11, 0x0,	/* FC_RP */
/* 2678 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (2568) */
/* 2680 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2682 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2684) */
/* 2684 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2686 */	NdrFcLong( 0x94c9b4ee ),	/* -1798720274 */
/* 2690 */	NdrFcShort( 0xa09f ),	/* -24417 */
/* 2692 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 2694 */	0x8a,		/* 138 */
			0x1e,		/* 30 */
/* 2696 */	0x4a,		/* 74 */
			0x9b,		/* 155 */
/* 2698 */	0xce,		/* 206 */
			0x7e,		/* 126 */
/* 2700 */	0x76,		/* 118 */
			0xfb,		/* 251 */
/* 2702 */	
			0x11, 0x0,	/* FC_RP */
/* 2704 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2724) */
/* 2706 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2708 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 2712 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 2714 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 2716 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 2718 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 2720 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 2722 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 2724 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2732 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2734 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2738 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2740 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2742 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2706) */
/* 2744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2746 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2748 */	NdrFcLong( 0x40 ),	/* 64 */
/* 2752 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2754 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2756 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2758 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2760 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2762 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2764 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2766 */	NdrFcLong( 0x120 ),	/* 288 */
/* 2770 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2772 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2774 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2776 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2778 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2780 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2782 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2784 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2786) */
/* 2786 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2788 */	NdrFcLong( 0x105 ),	/* 261 */
/* 2792 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2794 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2796 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2798 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2800 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2802 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2804 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 2806 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2808) */
/* 2808 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2810 */	NdrFcLong( 0x22f55882 ),	/* 586504322 */
/* 2814 */	NdrFcShort( 0x280b ),	/* 10251 */
/* 2816 */	NdrFcShort( 0x11d0 ),	/* 4560 */
/* 2818 */	0xa8,		/* 168 */
			0xa9,		/* 169 */
/* 2820 */	0x0,		/* 0 */
			0xa0,		/* 160 */
/* 2822 */	0xc9,		/* 201 */
			0xc,		/* 12 */
/* 2824 */	0x20,		/* 32 */
			0x4,		/* 4 */
/* 2826 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2830) */
/* 2830 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2832 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 2836 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 2838 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 2840 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 2842 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 2844 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 2846 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 2848 */	
			0x11, 0x0,	/* FC_RP */
/* 2850 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2890) */
/* 2852 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2856 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2858 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2860 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2862 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2864 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2866 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2868 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2872 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2874 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2876 */	0x12, 0x0,	/* FC_UP */
/* 2878 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2852) */
/* 2880 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2882 */	0x0,		/* 0 */
			NdrFcShort( 0xf515 ),	/* Offset= -2795 (88) */
			0x8,		/* FC_LONG */
/* 2886 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2888 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2890 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2892 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2894 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2898 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2902 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2904 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2910 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2912 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2914 */	0x12, 0x0,	/* FC_UP */
/* 2916 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (2852) */
/* 2918 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2920 */	0x0,		/* 0 */
			NdrFcShort( 0xffc7 ),	/* Offset= -57 (2864) */
			0x5b,		/* FC_END */
/* 2924 */	
			0x11, 0x0,	/* FC_RP */
/* 2926 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2928) */
/* 2928 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2936 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2938 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2942 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2944 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2946 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (2764) */
/* 2948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2950 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2952 */	NdrFcLong( 0xc ),	/* 12 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2962 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2964 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2966 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2968 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2972) */
/* 2972 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2974 */	NdrFcLong( 0xd8cd007f ),	/* -657653633 */
/* 2978 */	NdrFcShort( 0xd08f ),	/* -12145 */
/* 2980 */	NdrFcShort( 0x4191 ),	/* 16785 */
/* 2982 */	0x9b,		/* 155 */
			0xfc,		/* 252 */
/* 2984 */	0x23,		/* 35 */
			0x6e,		/* 110 */
/* 2986 */	0xa7,		/* 167 */
			0xf0,		/* 240 */
/* 2988 */	0xe4,		/* 228 */
			0xb5,		/* 181 */
/* 2990 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2992 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2994) */
/* 2994 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2996 */	NdrFcLong( 0x30989668 ),	/* 815306344 */
/* 3000 */	NdrFcShort( 0xe1c9 ),	/* -7735 */
/* 3002 */	NdrFcShort( 0x4597 ),	/* 17815 */
/* 3004 */	0xb3,		/* 179 */
			0x95,		/* 149 */
/* 3006 */	0x45,		/* 69 */
			0x8e,		/* 142 */
/* 3008 */	0xed,		/* 237 */
			0xb8,		/* 184 */
/* 3010 */	0x8,		/* 8 */
			0xdf,		/* 223 */
/* 3012 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3014 */	NdrFcShort( 0xff06 ),	/* Offset= -250 (2764) */
/* 3016 */	
			0x12, 0x0,	/* FC_UP */
/* 3018 */	NdrFcShort( 0xfeda ),	/* Offset= -294 (2724) */
/* 3020 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3022 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3024) */
/* 3024 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3026 */	NdrFcLong( 0x3b16811b ),	/* 991330587 */
/* 3030 */	NdrFcShort( 0x6a43 ),	/* 27203 */
/* 3032 */	NdrFcShort( 0x4ec9 ),	/* 20169 */
/* 3034 */	0xa8,		/* 168 */
			0x13,		/* 19 */
/* 3036 */	0x3d,		/* 61 */
			0x93,		/* 147 */
/* 3038 */	0xc,		/* 12 */
			0x13,		/* 19 */
/* 3040 */	0xb9,		/* 185 */
			0x40,		/* 64 */
/* 3042 */	
			0x12, 0x0,	/* FC_UP */
/* 3044 */	NdrFcShort( 0xf474 ),	/* Offset= -2956 (88) */
/* 3046 */	
			0x11, 0x0,	/* FC_RP */
/* 3048 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3050) */
/* 3050 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3054 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3056 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3058 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3060 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3062 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 3064 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 3066 */	
			0x11, 0x0,	/* FC_RP */
/* 3068 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3070) */
/* 3070 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3072 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3074 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3076 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3078 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3080 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3082 */	NdrFcShort( 0xf44e ),	/* Offset= -2994 (88) */
/* 3084 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3086 */	
			0x11, 0x0,	/* FC_RP */
/* 3088 */	NdrFcShort( 0xe ),	/* Offset= 14 (3102) */
/* 3090 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3092 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3094 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3096 */	NdrFcShort( 0xf440 ),	/* Offset= -3008 (88) */
/* 3098 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3100 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3102 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3104 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3106 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3108 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3110 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3112 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3114 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (3090) */
/* 3116 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3118 */	
			0x11, 0x0,	/* FC_RP */
/* 3120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3122) */
/* 3122 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3124 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3126 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3130 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3132 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3134 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3136 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3142 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3144 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3146 */	0x12, 0x0,	/* FC_UP */
/* 3148 */	NdrFcShort( 0xfed8 ),	/* Offset= -296 (2852) */
/* 3150 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3152 */	0x0,		/* 0 */
			NdrFcShort( 0xfedf ),	/* Offset= -289 (2864) */
			0x5b,		/* FC_END */
/* 3156 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3158 */	NdrFcLong( 0x4776f9cd ),	/* 1198979533 */
/* 3162 */	NdrFcShort( 0x9517 ),	/* -27369 */
/* 3164 */	NdrFcShort( 0x45fa ),	/* 17914 */
/* 3166 */	0xbf,		/* 191 */
			0x24,		/* 36 */
/* 3168 */	0xe8,		/* 232 */
			0x9c,		/* 156 */
/* 3170 */	0x5e,		/* 94 */
			0xc5,		/* 197 */
/* 3172 */	0xc6,		/* 198 */
			0xc,		/* 12 */
/* 3174 */	
			0x12, 0x0,	/* FC_UP */
/* 3176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3178) */
/* 3178 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3180 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3182 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3188 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3190 */	NdrFcShort( 0xf3e2 ),	/* Offset= -3102 (88) */
/* 3192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3194 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3198) */
/* 3198 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3200 */	NdrFcLong( 0x301 ),	/* 769 */
/* 3204 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3206 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3208 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3210 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3212 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3214 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3216 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3220) */
/* 3220 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3222 */	NdrFcLong( 0x103 ),	/* 259 */
/* 3226 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3228 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3230 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3232 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3234 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3236 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3238 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3242) */
/* 3242 */	
			0x13, 0x0,	/* FC_OP */
/* 3244 */	NdrFcShort( 0x32 ),	/* Offset= 50 (3294) */
/* 3246 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3250 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3254 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3256 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3258 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 3260 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3262 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3264 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3266 */	NdrFcShort( 0xc ),	/* 12 */
/* 3268 */	NdrFcShort( 0xc ),	/* 12 */
/* 3270 */	0x13, 0x0,	/* FC_OP */
/* 3272 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (3246) */
/* 3274 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3280 */	0x13, 0x0,	/* FC_OP */
/* 3282 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3246) */
/* 3284 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3286 */	0x0,		/* 0 */
			NdrFcShort( 0xf475 ),	/* Offset= -2955 (332) */
			0x8,		/* FC_LONG */
/* 3290 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3292 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3294 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 3296 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3298 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3302 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3304 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3306 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3308 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3314 */	NdrFcShort( 0xc ),	/* 12 */
/* 3316 */	NdrFcShort( 0xc ),	/* 12 */
/* 3318 */	0x13, 0x0,	/* FC_OP */
/* 3320 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (3246) */
/* 3322 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3324 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3326 */	0x13, 0x0,	/* FC_OP */
/* 3328 */	NdrFcShort( 0xffae ),	/* Offset= -82 (3246) */
/* 3330 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3332 */	0x0,		/* 0 */
			NdrFcShort( 0xffb5 ),	/* Offset= -75 (3258) */
			0x5b,		/* FC_END */
/* 3336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3340) */
/* 3340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3342 */	NdrFcLong( 0x9edde9e7 ),	/* -1629623833 */
/* 3346 */	NdrFcShort( 0x8dee ),	/* -29202 */
/* 3348 */	NdrFcShort( 0x47ea ),	/* 18410 */
/* 3350 */	0x99,		/* 153 */
			0xdf,		/* 223 */
/* 3352 */	0xe6,		/* 230 */
			0xfa,		/* 250 */
/* 3354 */	0xf2,		/* 242 */
			0xed,		/* 237 */
/* 3356 */	0x44,		/* 68 */
			0xbf,		/* 191 */
/* 3358 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3362) */
/* 3362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3364 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 3368 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 3370 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 3372 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 3374 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 3376 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 3378 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 3380 */	
			0x12, 0x0,	/* FC_UP */
/* 3382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3384) */
/* 3384 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3388 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3392 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3394 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3396 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3400) */
/* 3400 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3402 */	NdrFcLong( 0x23bc3f0a ),	/* 599539466 */
/* 3406 */	NdrFcShort( 0x698b ),	/* 27019 */
/* 3408 */	NdrFcShort( 0x4357 ),	/* 17239 */
/* 3410 */	0x88,		/* 136 */
			0x6b,		/* 107 */
/* 3412 */	0xf2,		/* 242 */
			0x4d,		/* 77 */
/* 3414 */	0x50,		/* 80 */
			0x67,		/* 103 */
/* 3416 */	0x13,		/* 19 */
			0x34,		/* 52 */
/* 3418 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3420 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (2746) */
/* 3422 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3424 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3426) */
/* 3426 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3428 */	NdrFcLong( 0x302 ),	/* 770 */
/* 3432 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3434 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3436 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3438 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3440 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3442 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3444 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3446 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3448) */
/* 3448 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3450 */	NdrFcLong( 0xe4fbcf03 ),	/* -453259517 */
/* 3454 */	NdrFcShort( 0x223d ),	/* 8765 */
/* 3456 */	NdrFcShort( 0x4e81 ),	/* 20097 */
/* 3458 */	0x93,		/* 147 */
			0x33,		/* 51 */
/* 3460 */	0xd6,		/* 214 */
			0x35,		/* 53 */
/* 3462 */	0x55,		/* 85 */
			0x6d,		/* 109 */
/* 3464 */	0xd1,		/* 209 */
			0xb5,		/* 181 */
/* 3466 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3468 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3470) */
/* 3470 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3472 */	NdrFcLong( 0x5009834f ),	/* 1342800719 */
/* 3476 */	NdrFcShort( 0x2d6a ),	/* 11626 */
/* 3478 */	NdrFcShort( 0x41ce ),	/* 16846 */
/* 3480 */	0x9e,		/* 158 */
			0x1b,		/* 27 */
/* 3482 */	0x17,		/* 23 */
			0xc5,		/* 197 */
/* 3484 */	0xaf,		/* 175 */
			0xf7,		/* 247 */
/* 3486 */	0xa7,		/* 167 */
			0x82,		/* 130 */
/* 3488 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3490 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3492) */
/* 3492 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3494 */	NdrFcLong( 0x135ff860 ),	/* 325056608 */
/* 3498 */	NdrFcShort( 0x22b7 ),	/* 8887 */
/* 3500 */	NdrFcShort( 0x4ddf ),	/* 19935 */
/* 3502 */	0xb0,		/* 176 */
			0xf6,		/* 246 */
/* 3504 */	0x21,		/* 33 */
			0x8f,		/* 143 */
/* 3506 */	0x4f,		/* 79 */
			0x29,		/* 41 */
/* 3508 */	0x9a,		/* 154 */
			0x43,		/* 67 */
/* 3510 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3512 */	NdrFcShort( 0xfcda ),	/* Offset= -806 (2706) */
/* 3514 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3518) */
/* 3518 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3520 */	NdrFcLong( 0xb66f034f ),	/* -1234238641 */
/* 3524 */	NdrFcShort( 0xd0e2 ),	/* -12062 */
/* 3526 */	NdrFcShort( 0x40ab ),	/* 16555 */
/* 3528 */	0xb4,		/* 180 */
			0x36,		/* 54 */
/* 3530 */	0x6d,		/* 109 */
			0xe3,		/* 227 */
/* 3532 */	0x9e,		/* 158 */
			0x32,		/* 50 */
/* 3534 */	0x1a,		/* 26 */
			0x94,		/* 148 */
/* 3536 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3538 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3540) */
/* 3540 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3542 */	NdrFcLong( 0x121 ),	/* 289 */
/* 3546 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3548 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3550 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3552 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3554 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3556 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3558 */	
			0x11, 0x0,	/* FC_RP */
/* 3560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3562) */
/* 3562 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3566 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3568 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3570 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3572 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3574 */	
			0x12, 0x0,	/* FC_UP */
/* 3576 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3578) */
/* 3578 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x88,		/* 136 */
/* 3580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3582 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3584 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3588 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3590 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3594 */	NdrFcShort( 0xa ),	/* Offset= 10 (3604) */
/* 3596 */	NdrFcLong( 0x50746457 ),	/* 1349805143 */
/* 3600 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 3602 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3601) */
/* 3604 */	
			0x12, 0x0,	/* FC_UP */
/* 3606 */	NdrFcShort( 0xe ),	/* Offset= 14 (3620) */
/* 3608 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3612 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3614 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3616 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3618 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3620 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 3622 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3624 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (3608) */
/* 3626 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3628 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3630 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3632 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3634 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3636 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3638 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (3574) */
/* 3644 */	
			0x12, 0x0,	/* FC_UP */
/* 3646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3648) */
/* 3648 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x88,		/* 136 */
/* 3650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3652 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3654 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3658 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3660 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3664 */	NdrFcShort( 0xa ),	/* Offset= 10 (3674) */
/* 3666 */	NdrFcLong( 0x50746457 ),	/* 1349805143 */
/* 3670 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 3672 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3671) */
/* 3674 */	
			0x12, 0x0,	/* FC_UP */
/* 3676 */	NdrFcShort( 0x1c ),	/* Offset= 28 (3704) */
/* 3678 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 3680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3682 */	0x1,		/* FC_BYTE */
			0x1,		/* FC_BYTE */
/* 3684 */	0x1,		/* FC_BYTE */
			0x1,		/* FC_BYTE */
/* 3686 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3688 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3692 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 3694 */	NdrFcShort( 0xfffe ),	/* -2 */
/* 3696 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3698 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3700 */	NdrFcShort( 0xffea ),	/* Offset= -22 (3678) */
/* 3702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3704 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 3706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3708 */	NdrFcShort( 0xffec ),	/* Offset= -20 (3688) */
/* 3710 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3714 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3718 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (3644) */
/* 3724 */	
			0x12, 0x0,	/* FC_UP */
/* 3726 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3728) */
/* 3728 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 3730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3732 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3734 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3738 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3740 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3744 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3746 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3745) */
/* 3748 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3750 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3752 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (3724) */
/* 3758 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3762) */
/* 3762 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3764 */	NdrFcLong( 0x100 ),	/* 256 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 3774 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3776 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3778 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 3780 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3784) */
/* 3784 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3786 */	NdrFcLong( 0xb84e2c09 ),	/* -1202836471 */
/* 3790 */	NdrFcShort( 0x78c9 ),	/* 30921 */
/* 3792 */	NdrFcShort( 0x4ac4 ),	/* 19140 */
/* 3794 */	0x8b,		/* 139 */
			0xd3,		/* 211 */
/* 3796 */	0x52,		/* 82 */
			0x4a,		/* 74 */
/* 3798 */	0xe1,		/* 225 */
			0x66,		/* 102 */
/* 3800 */	0x3a,		/* 58 */
			0x2f,		/* 47 */
/* 3802 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3804 */	NdrFcLong( 0x3b16811b ),	/* 991330587 */
/* 3808 */	NdrFcShort( 0x6a43 ),	/* 27203 */
/* 3810 */	NdrFcShort( 0x4ec9 ),	/* 20169 */
/* 3812 */	0xa8,		/* 168 */
			0x13,		/* 19 */
/* 3814 */	0x3d,		/* 61 */
			0x93,		/* 147 */
/* 3816 */	0xc,		/* 12 */
			0x13,		/* 19 */
/* 3818 */	0xb9,		/* 185 */
			0x40,		/* 64 */
/* 3820 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3822 */	NdrFcLong( 0x30989668 ),	/* 815306344 */
/* 3826 */	NdrFcShort( 0xe1c9 ),	/* -7735 */
/* 3828 */	NdrFcShort( 0x4597 ),	/* 17815 */
/* 3830 */	0xb3,		/* 179 */
			0x95,		/* 149 */
/* 3832 */	0x45,		/* 69 */
			0x8e,		/* 142 */
/* 3834 */	0xed,		/* 237 */
			0xb8,		/* 184 */
/* 3836 */	0x8,		/* 8 */
			0xdf,		/* 223 */
/* 3838 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3840 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3842) */
/* 3842 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3844 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 3848 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 3850 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 3852 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 3854 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 3856 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 3858 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 3860 */	
			0x11, 0x0,	/* FC_RP */
/* 3862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3864) */
/* 3864 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3866 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3870) */
/* 3872 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3874 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 3876 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3878 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 3880 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3882 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3884 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3886 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3888 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 3890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3892 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3894 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3896) */
/* 3896 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3898 */	NdrFcLong( 0x22f55882 ),	/* 586504322 */
/* 3902 */	NdrFcShort( 0x280b ),	/* 10251 */
/* 3904 */	NdrFcShort( 0x11d0 ),	/* 4560 */
/* 3906 */	0xa8,		/* 168 */
			0xa9,		/* 169 */
/* 3908 */	0x0,		/* 0 */
			0xa0,		/* 160 */
/* 3910 */	0xc9,		/* 201 */
			0xc,		/* 12 */
/* 3912 */	0x20,		/* 32 */
			0x4,		/* 4 */
/* 3914 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3916 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 3920 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 3922 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 3924 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 3926 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 3928 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 3930 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 3932 */	
			0x11, 0x0,	/* FC_RP */
/* 3934 */	NdrFcShort( 0xa ),	/* Offset= 10 (3944) */
/* 3936 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3938 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3940 */	0xc,		/* FC_DOUBLE */
			0xc,		/* FC_DOUBLE */
/* 3942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3944 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 3946 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3948 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3952 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3954 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3956 */	NdrFcShort( 0xffec ),	/* Offset= -20 (3936) */
/* 3958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3960 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3964) */
/* 3964 */	
			0x13, 0x0,	/* FC_OP */
/* 3966 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3968) */
/* 3968 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 3970 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3972 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3976 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3978 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3980 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (3936) */
/* 3982 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3984 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3986 */	NdrFcLong( 0x95c75a6e ),	/* -1782097298 */
/* 3990 */	NdrFcShort( 0x3e8c ),	/* 16012 */
/* 3992 */	NdrFcShort( 0x4ec2 ),	/* 20162 */
/* 3994 */	0x85,		/* 133 */
			0xa8,		/* 168 */
/* 3996 */	0xae,		/* 174 */
			0xbc,		/* 188 */
/* 3998 */	0xc5,		/* 197 */
			0x51,		/* 81 */
/* 4000 */	0xe5,		/* 229 */
			0x9b,		/* 155 */
/* 4002 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4006) */
/* 4006 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4008 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4012) */
/* 4014 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4018 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 4020 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 4022 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4024 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 4026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4028) */
/* 4028 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 4030 */	NdrFcLong( 0x3b16811b ),	/* 991330587 */
/* 4034 */	NdrFcShort( 0x6a43 ),	/* 27203 */
/* 4036 */	NdrFcShort( 0x4ec9 ),	/* 20169 */
/* 4038 */	0xa8,		/* 168 */
			0x13,		/* 19 */
/* 4040 */	0x3d,		/* 61 */
			0x93,		/* 147 */
/* 4042 */	0xc,		/* 12 */
			0x13,		/* 19 */
/* 4044 */	0xb9,		/* 185 */
			0x40,		/* 64 */
/* 4046 */	
			0x11, 0x0,	/* FC_RP */
/* 4048 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (4006) */
/* 4050 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 4052 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4054) */
/* 4054 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 4056 */	NdrFcLong( 0x105 ),	/* 261 */
/* 4060 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 4062 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 4064 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 4066 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 4068 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 4070 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 4072 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4074 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4076) */
/* 4076 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4082) */
/* 4084 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 4086 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4088 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            WICInProcPointer_UserSize
            ,WICInProcPointer_UserMarshal
            ,WICInProcPointer_UserUnmarshal
            ,WICInProcPointer_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            HBITMAP_UserSize
            ,HBITMAP_UserMarshal
            ,HBITMAP_UserUnmarshal
            ,HBITMAP_UserFree
            },
            {
            HPALETTE_UserSize
            ,HPALETTE_UserMarshal
            ,HPALETTE_UserUnmarshal
            ,HPALETTE_UserFree
            },
            {
            HICON_UserSize
            ,HICON_UserMarshal
            ,HICON_UserUnmarshal
            ,HICON_UserFree
            }

        };


static void __RPC_USER IWICEnumMetadataItem_PROPVARIANTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    PROPVARIANT *pS	=	( PROPVARIANT * )(( pStubMsg->StackTop - 8 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( unsigned short  )pS->vt );
}

static void __RPC_USER IWICEnumMetadataItem_CLIPDATAExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    CLIPDATA *pS	=	( CLIPDATA * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( pS->cbSize - 4 )  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IWICEnumMetadataItem_PROPVARIANTExprEval_0000
    ,IWICEnumMetadataItem_CLIPDATAExprEval_0001
    };



/* Standard interface: __MIDL_itf_wincodec_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWICPalette, ver. 0.0,
   GUID={0x00000040,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPalette_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    132,
    168,
    204,
    240,
    288,
    324,
    360
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPalette_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPalette_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPalette_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPalette_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICPaletteProxyVtbl = 
{
    &IWICPalette_ProxyInfo,
    &IID_IWICPalette,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializePredefined */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeCustom */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeFromBitmap */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeFromPalette */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetType */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetColorCount */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetColors */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::IsBlackWhite */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::IsGrayscale */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::HasAlpha */
};

const CInterfaceStubVtbl _IWICPaletteStubVtbl =
{
    &IID_IWICPalette,
    &IWICPalette_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapSource, ver. 0.0,
   GUID={0x00000120,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapSource_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapSource_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSource_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapSource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSource_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWICBitmapSourceProxyVtbl = 
{
    &IWICBitmapSource_ProxyInfo,
    &IID_IWICBitmapSource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */
};

const CInterfaceStubVtbl _IWICBitmapSourceStubVtbl =
{
    &IID_IWICBitmapSource,
    &IWICBitmapSource_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFormatConverter, ver. 0.0,
   GUID={0x00000301,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFormatConverter_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    570,
    636
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFormatConverter_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFormatConverter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWICFormatConverterProxyVtbl = 
{
    &IWICFormatConverter_ProxyInfo,
    &IID_IWICFormatConverter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverter::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverter::CanConvert */
};

const CInterfaceStubVtbl _IWICFormatConverterStubVtbl =
{
    &IID_IWICFormatConverter,
    &IWICFormatConverter_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPlanarFormatConverter, ver. 0.0,
   GUID={0xBEBEE9CB,0x83B0,0x4DCC,{0x81,0x32,0xB0,0xAA,0xA5,0x5E,0xAC,0x96}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPlanarFormatConverter_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    684,
    756
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPlanarFormatConverter_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPlanarFormatConverter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWICPlanarFormatConverterProxyVtbl = 
{
    &IWICPlanarFormatConverter_ProxyInfo,
    &IID_IWICPlanarFormatConverter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICPlanarFormatConverter::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICPlanarFormatConverter::CanConvert */
};

const CInterfaceStubVtbl _IWICPlanarFormatConverterStubVtbl =
{
    &IID_IWICPlanarFormatConverter,
    &IWICPlanarFormatConverter_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapScaler, ver. 0.0,
   GUID={0x00000302,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapScaler_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    810
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapScaler_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapScaler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapScaler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapScaler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapScalerProxyVtbl = 
{
    &IWICBitmapScaler_ProxyInfo,
    &IID_IWICBitmapScaler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapScaler::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapScalerStubVtbl =
{
    &IID_IWICBitmapScaler,
    &IWICBitmapScaler_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapClipper, ver. 0.0,
   GUID={0xE4FBCF03,0x223D,0x4e81,{0x93,0x33,0xD6,0x35,0x55,0x6D,0xD1,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapClipper_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    864
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapClipper_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapClipper_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapClipper_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapClipper_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapClipperProxyVtbl = 
{
    &IWICBitmapClipper_ProxyInfo,
    &IID_IWICBitmapClipper,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapClipper::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapClipperStubVtbl =
{
    &IID_IWICBitmapClipper,
    &IWICBitmapClipper_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFlipRotator, ver. 0.0,
   GUID={0x5009834F,0x2D6A,0x41ce,{0x9E,0x1B,0x17,0xC5,0xAF,0xF7,0xA7,0x82}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFlipRotator_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    906
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFlipRotator_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFlipRotator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFlipRotator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFlipRotator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapFlipRotatorProxyVtbl = 
{
    &IWICBitmapFlipRotator_ProxyInfo,
    &IID_IWICBitmapFlipRotator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFlipRotator::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapFlipRotatorStubVtbl =
{
    &IID_IWICBitmapFlipRotator,
    &IWICBitmapFlipRotator_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapLock, ver. 0.0,
   GUID={0x00000123,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapLock_FormatStringOffsetTable[] =
    {
    396,
    948,
    984,
    1026
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapLock_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapLock_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapLock_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapLock_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICBitmapLockProxyVtbl = 
{
    &IWICBitmapLock_ProxyInfo,
    &IID_IWICBitmapLock,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetStride */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetDataPointer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetPixelFormat */
};

const CInterfaceStubVtbl _IWICBitmapLockStubVtbl =
{
    &IID_IWICBitmapLock,
    &IWICBitmapLock_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmap, ver. 0.0,
   GUID={0x00000121,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmap_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    1062,
    1110,
    1146
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmap_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmap_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmap_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICBitmapProxyVtbl = 
{
    &IWICBitmap_ProxyInfo,
    &IID_IWICBitmap,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::Lock */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::SetResolution */
};

const CInterfaceStubVtbl _IWICBitmapStubVtbl =
{
    &IID_IWICBitmap,
    &IWICBitmap_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICColorContext, ver. 0.0,
   GUID={0x3C613A02,0x34B2,0x44ea,{0x9A,0x7C,0x45,0xAE,0xA9,0xC6,0xFD,0x6D}} */

#pragma code_seg(".orpc")
static const unsigned short IWICColorContext_FormatStringOffsetTable[] =
    {
    1188,
    1224,
    1266,
    1302,
    1338,
    204
    };

static const MIDL_STUBLESS_PROXY_INFO IWICColorContext_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorContext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICColorContext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorContext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICColorContextProxyVtbl = 
{
    &IWICColorContext_ProxyInfo,
    &IID_IWICColorContext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromExifColorSpace */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetType */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetProfileBytes */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetExifColorSpace */
};

const CInterfaceStubVtbl _IWICColorContextStubVtbl =
{
    &IID_IWICColorContext,
    &IWICColorContext_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICColorTransform, ver. 0.0,
   GUID={0xB66F034F,0xD0E2,0x40ab,{0xB4,0x36,0x6D,0xE3,0x9E,0x32,0x1A,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICColorTransform_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    1386
    };

static const MIDL_STUBLESS_PROXY_INFO IWICColorTransform_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICColorTransform_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICColorTransformProxyVtbl = 
{
    &IWICColorTransform_ProxyInfo,
    &IID_IWICColorTransform,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICColorTransform::Initialize */
};

const CInterfaceStubVtbl _IWICColorTransformStubVtbl =
{
    &IID_IWICColorTransform,
    &IWICColorTransform_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFastMetadataEncoder, ver. 0.0,
   GUID={0xB84E2C09,0x78C9,0x4AC4,{0x8B,0xD3,0x52,0x4A,0xE1,0x66,0x3A,0x2F}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFastMetadataEncoder_FormatStringOffsetTable[] =
    {
    1440,
    1470
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFastMetadataEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFastMetadataEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFastMetadataEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFastMetadataEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWICFastMetadataEncoderProxyVtbl = 
{
    &IWICFastMetadataEncoder_ProxyInfo,
    &IID_IWICFastMetadataEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICFastMetadataEncoder::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICFastMetadataEncoder::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICFastMetadataEncoderStubVtbl =
{
    &IID_IWICFastMetadataEncoder,
    &IWICFastMetadataEncoder_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISequentialStream, ver. 0.0,
   GUID={0x0c733a30,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


/* Object interface: IStream, ver. 0.0,
   GUID={0x0000000c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWICStream, ver. 0.0,
   GUID={0x135FF860,0x22B7,0x4ddf,{0xB0,0xF6,0x21,0x8F,0x4F,0x29,0x9A,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short IWICStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1506,
    1542,
    1584,
    1626
    };

static const MIDL_STUBLESS_PROXY_INFO IWICStream_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICStream_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IWICStreamProxyVtbl = 
{
    &IWICStream_ProxyInfo,
    &IID_IWICStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* ISequentialStream_Read_Proxy */ ,
    0 /* ISequentialStream_Write_Proxy */ ,
    0 /* IStream_Seek_Proxy */ ,
    0 /* IStream::SetSize */ ,
    0 /* IStream_CopyTo_Proxy */ ,
    0 /* IStream::Commit */ ,
    0 /* IStream::Revert */ ,
    0 /* IStream::LockRegion */ ,
    0 /* IStream::UnlockRegion */ ,
    0 /* IStream::Stat */ ,
    0 /* IStream::Clone */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromIStream */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromIStreamRegion */
};


static const PRPC_STUB_FUNCTION IWICStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWICStreamStubVtbl =
{
    &IID_IWICStream,
    &IWICStream_ServerInfo,
    18,
    &IWICStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWICEnumMetadataItem, ver. 0.0,
   GUID={0xDC2BB46D,0x3F07,0x481E,{0x86,0x25,0x22,0x0C,0x4A,0xED,0xBB,0x33}} */

#pragma code_seg(".orpc")
static const unsigned short IWICEnumMetadataItem_FormatStringOffsetTable[] =
    {
    1674,
    1734,
    1770,
    1800
    };

static const MIDL_STUBLESS_PROXY_INFO IWICEnumMetadataItem_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICEnumMetadataItem_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICEnumMetadataItem_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICEnumMetadataItem_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICEnumMetadataItemProxyVtbl = 
{
    &IWICEnumMetadataItem_ProxyInfo,
    &IID_IWICEnumMetadataItem,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICEnumMetadataItem::Next */ ,
    (void *) (INT_PTR) -1 /* IWICEnumMetadataItem::Skip */ ,
    (void *) (INT_PTR) -1 /* IWICEnumMetadataItem::Reset */ ,
    (void *) (INT_PTR) -1 /* IWICEnumMetadataItem::Clone */
};

const CInterfaceStubVtbl _IWICEnumMetadataItemStubVtbl =
{
    &IID_IWICEnumMetadataItem,
    &IWICEnumMetadataItem_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICMetadataQueryReader, ver. 0.0,
   GUID={0x30989668,0xE1C9,0x4597,{0xB3,0x95,0x45,0x8E,0xED,0xB8,0x08,0xDF}} */

#pragma code_seg(".orpc")
static const unsigned short IWICMetadataQueryReader_FormatStringOffsetTable[] =
    {
    1836,
    1872,
    1920,
    1962
    };

static const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryReader_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryReader_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICMetadataQueryReader_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryReader_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICMetadataQueryReaderProxyVtbl = 
{
    &IWICMetadataQueryReader_ProxyInfo,
    &IID_IWICMetadataQueryReader,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetEnumerator */
};

const CInterfaceStubVtbl _IWICMetadataQueryReaderStubVtbl =
{
    &IID_IWICMetadataQueryReader,
    &IWICMetadataQueryReader_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICMetadataQueryWriter, ver. 0.0,
   GUID={0xA721791A,0x0DEF,0x4d06,{0xBD,0x91,0x21,0x18,0xBF,0x1D,0xB1,0x0B}} */

#pragma code_seg(".orpc")
static const unsigned short IWICMetadataQueryWriter_FormatStringOffsetTable[] =
    {
    1836,
    1872,
    1920,
    1962,
    1998,
    2040
    };

static const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryWriter_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICMetadataQueryWriter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICMetadataQueryWriterProxyVtbl = 
{
    &IWICMetadataQueryWriter_ProxyInfo,
    &IID_IWICMetadataQueryWriter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetEnumerator */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryWriter::SetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryWriter::RemoveMetadataByName */
};

const CInterfaceStubVtbl _IWICMetadataQueryWriterStubVtbl =
{
    &IID_IWICMetadataQueryWriter,
    &IWICMetadataQueryWriter_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapEncoder, ver. 0.0,
   GUID={0x00000103,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapEncoder_FormatStringOffsetTable[] =
    {
    2076,
    438,
    2118,
    2154,
    2196,
    2232,
    2268,
    2304,
    2346,
    2376
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICBitmapEncoderProxyVtbl = 
{
    &IWICBitmapEncoder_ProxyInfo,
    &IID_IWICBitmapEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetEncoderInfo */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetPreview */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::CreateNewFrame */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICBitmapEncoderStubVtbl =
{
    &IID_IWICBitmapEncoder,
    &IWICBitmapEncoder_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFrameEncode, ver. 0.0,
   GUID={0x00000105,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFrameEncode_FormatStringOffsetTable[] =
    {
    2412,
    2448,
    2490,
    2532,
    2568,
    2610,
    2268,
    2646,
    2700,
    2742,
    2772
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameEncode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFrameEncode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWICBitmapFrameEncodeProxyVtbl = 
{
    &IWICBitmapFrameEncode_ProxyInfo,
    &IID_IWICBitmapFrameEncode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::WritePixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::WriteSource */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICBitmapFrameEncodeStubVtbl =
{
    &IID_IWICBitmapFrameEncode,
    &IWICBitmapFrameEncode_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPlanarBitmapFrameEncode, ver. 0.0,
   GUID={0xF928B7B8,0x2221,0x40C1,{0xB7,0x2E,0x7E,0x82,0xF1,0x97,0x4D,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPlanarBitmapFrameEncode_FormatStringOffsetTable[] =
    {
    2808,
    2856
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPlanarBitmapFrameEncode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPlanarBitmapFrameEncode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWICPlanarBitmapFrameEncodeProxyVtbl = 
{
    &IWICPlanarBitmapFrameEncode_ProxyInfo,
    &IID_IWICPlanarBitmapFrameEncode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICPlanarBitmapFrameEncode::WritePixels */ ,
    (void *) (INT_PTR) -1 /* IWICPlanarBitmapFrameEncode::WriteSource */
};

const CInterfaceStubVtbl _IWICPlanarBitmapFrameEncodeStubVtbl =
{
    &IID_IWICPlanarBitmapFrameEncode,
    &IWICPlanarBitmapFrameEncode_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICImageEncoder, ver. 0.0,
   GUID={0x04C75BF8,0x3CE1,0x473B,{0xAC,0xC5,0x3C,0xC4,0xF5,0xE9,0x49,0x99}} */


/* Standard interface: __MIDL_itf_wincodec_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICBitmapDecoder, ver. 0.0,
   GUID={0x9EDDE9E7,0x8DEE,0x47ea,{0x99,0xDF,0xE6,0xFA,0xF2,0xED,0x44,0xBF}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapDecoder_FormatStringOffsetTable[] =
    {
    2904,
    2946,
    2988,
    3024,
    2196,
    3060,
    3096,
    3132,
    3180,
    360,
    3216
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapDecoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWICBitmapDecoderProxyVtbl = 
{
    &IWICBitmapDecoder_ProxyInfo,
    &IID_IWICBitmapDecoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::QueryCapability */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetDecoderInfo */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetMetadataQueryReader */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetPreview */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetFrameCount */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetFrame */
};

const CInterfaceStubVtbl _IWICBitmapDecoderStubVtbl =
{
    &IID_IWICBitmapDecoder,
    &IWICBitmapDecoder_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapSourceTransform, ver. 0.0,
   GUID={0x3B16811B,0x6A43,0x4ec9,{0xB7,0x13,0x3D,0x5A,0x0C,0x13,0xB9,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapSourceTransform_FormatStringOffsetTable[] =
    {
    3258,
    3336,
    3378,
    3414
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapSourceTransform_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSourceTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapSourceTransform_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSourceTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICBitmapSourceTransformProxyVtbl = 
{
    &IWICBitmapSourceTransform_ProxyInfo,
    &IID_IWICBitmapSourceTransform,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSourceTransform::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSourceTransform::GetClosestSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSourceTransform::GetClosestPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSourceTransform::DoesSupportTransform */
};

const CInterfaceStubVtbl _IWICBitmapSourceTransformStubVtbl =
{
    &IID_IWICBitmapSourceTransform,
    &IWICBitmapSourceTransform_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPlanarBitmapSourceTransform, ver. 0.0,
   GUID={0x3AFF9CCE,0xBE95,0x4303,{0xB9,0x27,0xE7,0xD1,0x6F,0xF4,0xA6,0x13}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPlanarBitmapSourceTransform_FormatStringOffsetTable[] =
    {
    3456,
    3534
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPlanarBitmapSourceTransform_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarBitmapSourceTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPlanarBitmapSourceTransform_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPlanarBitmapSourceTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWICPlanarBitmapSourceTransformProxyVtbl = 
{
    &IWICPlanarBitmapSourceTransform_ProxyInfo,
    &IID_IWICPlanarBitmapSourceTransform,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICPlanarBitmapSourceTransform::DoesSupportTransform */ ,
    (void *) (INT_PTR) -1 /* IWICPlanarBitmapSourceTransform::CopyPixels */
};

const CInterfaceStubVtbl _IWICPlanarBitmapSourceTransformStubVtbl =
{
    &IID_IWICPlanarBitmapSourceTransform,
    &IWICPlanarBitmapSourceTransform_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFrameDecode, ver. 0.0,
   GUID={0x3B16811B,0x6A43,0x4ec9,{0xA8,0x13,0x3D,0x93,0x0C,0x13,0xB9,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFrameDecode_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    3060,
    3606,
    3654
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameDecode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFrameDecode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICBitmapFrameDecodeProxyVtbl = 
{
    &IWICBitmapFrameDecode_ProxyInfo,
    &IID_IWICBitmapFrameDecode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetMetadataQueryReader */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetThumbnail */
};

const CInterfaceStubVtbl _IWICBitmapFrameDecodeStubVtbl =
{
    &IID_IWICBitmapFrameDecode,
    &IWICBitmapFrameDecode_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICProgressiveLevelControl, ver. 0.0,
   GUID={0xDAAC296F,0x7AA5,0x4dbf,{0x8D,0x15,0x22,0x5C,0x59,0x76,0xF8,0x91}} */

#pragma code_seg(".orpc")
static const unsigned short IWICProgressiveLevelControl_FormatStringOffsetTable[] =
    {
    3690,
    948,
    1266
    };

static const MIDL_STUBLESS_PROXY_INFO IWICProgressiveLevelControl_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICProgressiveLevelControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICProgressiveLevelControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICProgressiveLevelControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWICProgressiveLevelControlProxyVtbl = 
{
    &IWICProgressiveLevelControl_ProxyInfo,
    &IID_IWICProgressiveLevelControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICProgressiveLevelControl::GetLevelCount */ ,
    (void *) (INT_PTR) -1 /* IWICProgressiveLevelControl::GetCurrentLevel */ ,
    (void *) (INT_PTR) -1 /* IWICProgressiveLevelControl::SetCurrentLevel */
};

const CInterfaceStubVtbl _IWICProgressiveLevelControlStubVtbl =
{
    &IID_IWICProgressiveLevelControl,
    &IWICProgressiveLevelControl_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICProgressCallback, ver. 0.0,
   GUID={0x4776F9CD,0x9517,0x45FA,{0xBF,0x24,0xE8,0x9C,0x5E,0xC5,0xC6,0x0C}} */

#pragma code_seg(".orpc")
static const unsigned short IWICProgressCallback_FormatStringOffsetTable[] =
    {
    3726
    };

static const MIDL_STUBLESS_PROXY_INFO IWICProgressCallback_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICProgressCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICProgressCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICProgressCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWICProgressCallbackProxyVtbl = 
{
    &IWICProgressCallback_ProxyInfo,
    &IID_IWICProgressCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICProgressCallback::Notify */
};

const CInterfaceStubVtbl _IWICProgressCallbackStubVtbl =
{
    &IID_IWICProgressCallback,
    &IWICProgressCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapCodecProgressNotification, ver. 0.0,
   GUID={0x64C1024E,0xC3CF,0x4462,{0x80,0x78,0x88,0xC2,0xB1,0x1C,0x46,0xD9}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapCodecProgressNotification_FormatStringOffsetTable[] =
    {
    3774
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecProgressNotification_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecProgressNotification_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const STUB_THUNK IWICBitmapCodecProgressNotification_StubThunkTable[] = 
    {
    IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Thunk
    };

static const MIDL_SERVER_INFO IWICBitmapCodecProgressNotification_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecProgressNotification_FormatStringOffsetTable[-3],
    &IWICBitmapCodecProgressNotification_StubThunkTable[-3],
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWICBitmapCodecProgressNotificationProxyVtbl = 
{
    &IWICBitmapCodecProgressNotification_ProxyInfo,
    &IID_IWICBitmapCodecProgressNotification,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IWICBitmapCodecProgressNotification_RegisterProgressNotification_Proxy
};

const CInterfaceStubVtbl _IWICBitmapCodecProgressNotificationStubVtbl =
{
    &IID_IWICBitmapCodecProgressNotification,
    &IWICBitmapCodecProgressNotification_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICComponentInfo, ver. 0.0,
   GUID={0x23BC3F0A,0x698B,0x4357,{0x88,0x6B,0xF2,0x4D,0x50,0x67,0x13,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IWICComponentInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068
    };

static const MIDL_STUBLESS_PROXY_INFO IWICComponentInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICComponentInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICComponentInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICComponentInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICComponentInfoProxyVtbl = 
{
    &IWICComponentInfo_ProxyInfo,
    &IID_IWICComponentInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */
};

const CInterfaceStubVtbl _IWICComponentInfoStubVtbl =
{
    &IID_IWICComponentInfo,
    &IWICComponentInfo_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFormatConverterInfo, ver. 0.0,
   GUID={0x9F34FB65,0x13F4,0x4f15,{0xBC,0x57,0x37,0x26,0xB5,0xE5,0x3D,0x9F}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFormatConverterInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4116,
    4164
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFormatConverterInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverterInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFormatConverterInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverterInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICFormatConverterInfoProxyVtbl = 
{
    &IWICFormatConverterInfo_ProxyInfo,
    &IID_IWICFormatConverterInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverterInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverterInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICFormatConverterInfoStubVtbl =
{
    &IID_IWICFormatConverterInfo,
    &IWICFormatConverterInfo_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapCodecInfo, ver. 0.0,
   GUID={0xE87A44C4,0xB76E,0x4c47,{0x8B,0x09,0x29,0x8E,0xB1,0x2A,0x27,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapCodecInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4200,
    4236,
    4284,
    4332,
    4380,
    4428,
    4476,
    4524,
    4560,
    4596,
    4632,
    4668
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapCodecInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IWICBitmapCodecInfoProxyVtbl = 
{
    &IWICBitmapCodecInfo_ProxyInfo,
    &IID_IWICBitmapCodecInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromakey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */
};

const CInterfaceStubVtbl _IWICBitmapCodecInfoStubVtbl =
{
    &IID_IWICBitmapCodecInfo,
    &IWICBitmapCodecInfo_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapEncoderInfo, ver. 0.0,
   GUID={0x94C9B4EE,0xA09F,0x4f92,{0x8A,0x1E,0x4A,0x9B,0xCE,0x7E,0x76,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapEncoderInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4200,
    4236,
    4284,
    4332,
    4380,
    4428,
    4476,
    4524,
    4560,
    4596,
    4632,
    4668,
    4710
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoderInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapEncoderInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IWICBitmapEncoderInfoProxyVtbl = 
{
    &IWICBitmapEncoderInfo_ProxyInfo,
    &IID_IWICBitmapEncoderInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromakey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoderInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICBitmapEncoderInfoStubVtbl =
{
    &IID_IWICBitmapEncoderInfo,
    &IWICBitmapEncoderInfo_ServerInfo,
    24,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapDecoderInfo, ver. 0.0,
   GUID={0xD8CD007F,0xD08F,0x4191,{0x9B,0xFC,0x23,0x6E,0xA7,0xF0,0xE4,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapDecoderInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4200,
    4236,
    4284,
    4332,
    4380,
    4428,
    4476,
    4524,
    4560,
    4596,
    4632,
    4668,
    4746,
    4788,
    4830
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoderInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const STUB_THUNK IWICBitmapDecoderInfo_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IWICBitmapDecoderInfo_Remote_GetPatterns_Thunk,
    0,
    0
    };

static const MIDL_SERVER_INFO IWICBitmapDecoderInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoderInfo_FormatStringOffsetTable[-3],
    &IWICBitmapDecoderInfo_StubThunkTable[-3],
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IWICBitmapDecoderInfoProxyVtbl = 
{
    &IWICBitmapDecoderInfo_ProxyInfo,
    &IID_IWICBitmapDecoderInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromakey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */ ,
    IWICBitmapDecoderInfo_GetPatterns_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoderInfo::MatchesPattern */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoderInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICBitmapDecoderInfoStubVtbl =
{
    &IID_IWICBitmapDecoderInfo,
    &IWICBitmapDecoderInfo_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPixelFormatInfo, ver. 0.0,
   GUID={0xE8EDA601,0x3D48,0x431a,{0xAB,0x44,0x69,0x05,0x9B,0xE8,0x8B,0xBE}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPixelFormatInfo_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4200,
    4866,
    4902,
    4938,
    4974
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPixelFormatInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPixelFormatInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPixelFormatInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPixelFormatInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IWICPixelFormatInfoProxyVtbl = 
{
    &IWICPixelFormatInfo_ProxyInfo,
    &IID_IWICPixelFormatInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetFormatGUID */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetColorContext */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetBitsPerPixel */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetChannelCount */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetChannelMask */
};

const CInterfaceStubVtbl _IWICPixelFormatInfoStubVtbl =
{
    &IID_IWICPixelFormatInfo,
    &IWICPixelFormatInfo_ServerInfo,
    16,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPixelFormatInfo2, ver. 0.0,
   GUID={0xA9DB33A2,0xAF5F,0x43C7,{0xB6,0x79,0x74,0xF5,0x98,0x4B,0x5A,0xA4}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPixelFormatInfo2_FormatStringOffsetTable[] =
    {
    3816,
    438,
    3852,
    3888,
    3936,
    3972,
    4020,
    4068,
    4200,
    4866,
    4902,
    4938,
    4974,
    5028,
    5064
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPixelFormatInfo2_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPixelFormatInfo2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPixelFormatInfo2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPixelFormatInfo2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IWICPixelFormatInfo2ProxyVtbl = 
{
    &IWICPixelFormatInfo2_ProxyInfo,
    &IID_IWICPixelFormatInfo2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetFormatGUID */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetColorContext */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetBitsPerPixel */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetChannelCount */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo::GetChannelMask */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo2::SupportsTransparency */ ,
    (void *) (INT_PTR) -1 /* IWICPixelFormatInfo2::GetNumericRepresentation */
};

const CInterfaceStubVtbl _IWICPixelFormatInfo2StubVtbl =
{
    &IID_IWICPixelFormatInfo2,
    &IWICPixelFormatInfo2_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICImagingFactory, ver. 0.0,
   GUID={0xec5ec8a9,0xc395,0x4314,{0x9c,0x77,0x54,0xd7,0xa9,0x35,0xff,0x70}} */

#pragma code_seg(".orpc")
static const unsigned short IWICImagingFactory_FormatStringOffsetTable[] =
    {
    5100,
    5160,
    5214,
    5268,
    5310,
    5358,
    5406,
    5442,
    5478,
    5514,
    5550,
    5586,
    5622,
    5658,
    5694,
    5754,
    5802,
    5868,
    5940,
    5994,
    6036,
    6084,
    6126,
    6168,
    6216
    };

static const MIDL_STUBLESS_PROXY_INFO IWICImagingFactory_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICImagingFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICImagingFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICImagingFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(28) _IWICImagingFactoryProxyVtbl = 
{
    &IWICImagingFactory_ProxyInfo,
    &IID_IWICImagingFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromStream */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromFileHandle */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateComponentInfo */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateEncoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreatePalette */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFormatConverter */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapScaler */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapClipper */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFlipRotator */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateStream */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateColorContext */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateColorTransformer */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmap */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromSource */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromSourceRect */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromHBITMAP */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromHICON */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateComponentEnumerator */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFastMetadataEncoderFromDecoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFastMetadataEncoderFromFrameDecode */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateQueryWriter */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateQueryWriterFromReader */
};

const CInterfaceStubVtbl _IWICImagingFactoryStubVtbl =
{
    &IID_IWICImagingFactory,
    &IWICImagingFactory_ServerInfo,
    28,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0035, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICImagingFactory2, ver. 0.0,
   GUID={0x7B816B45,0x1996,0x4476,{0xB1,0x32,0xDE,0x9E,0x24,0x7C,0x8A,0xF0}} */


/* Standard interface: __MIDL_itf_wincodec_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICDevelopRawNotificationCallback, ver. 0.0,
   GUID={0x95c75a6e,0x3e8c,0x4ec2,{0x85,0xa8,0xae,0xbc,0xc5,0x51,0xe5,0x9b}} */

#pragma code_seg(".orpc")
static const unsigned short IWICDevelopRawNotificationCallback_FormatStringOffsetTable[] =
    {
    6264
    };

static const MIDL_STUBLESS_PROXY_INFO IWICDevelopRawNotificationCallback_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDevelopRawNotificationCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICDevelopRawNotificationCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDevelopRawNotificationCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWICDevelopRawNotificationCallbackProxyVtbl = 
{
    &IWICDevelopRawNotificationCallback_ProxyInfo,
    &IID_IWICDevelopRawNotificationCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDevelopRawNotificationCallback::Notify */
};

const CInterfaceStubVtbl _IWICDevelopRawNotificationCallbackStubVtbl =
{
    &IID_IWICDevelopRawNotificationCallback,
    &IWICDevelopRawNotificationCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICDevelopRaw, ver. 0.0,
   GUID={0xfbec5e44,0xf7be,0x4b65,{0xb7,0xf8,0xc0,0xc8,0x1f,0xef,0x02,0x6d}} */

#pragma code_seg(".orpc")
static const unsigned short IWICDevelopRaw_FormatStringOffsetTable[] =
    {
    396,
    438,
    474,
    132,
    516,
    3060,
    3606,
    3654,
    6300,
    6336,
    6372,
    6408,
    6444,
    6480,
    6528,
    6576,
    6612,
    6648,
    4632,
    6684,
    6732,
    6768,
    6804,
    6840,
    6876,
    6912,
    6948,
    6984,
    7020,
    7056,
    7092,
    7128,
    7164,
    7200,
    7242,
    7284,
    7320,
    7356,
    7392,
    7428
    };

static const MIDL_STUBLESS_PROXY_INFO IWICDevelopRaw_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDevelopRaw_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const STUB_THUNK IWICDevelopRaw_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Thunk,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IWICDevelopRaw_Remote_SetToneCurve_Thunk,
    IWICDevelopRaw_Remote_GetToneCurve_Thunk,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IWICDevelopRaw_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDevelopRaw_FormatStringOffsetTable[-3],
    &IWICDevelopRaw_StubThunkTable[-3],
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(43) _IWICDevelopRawProxyVtbl = 
{
    &IWICDevelopRaw_ProxyInfo,
    &IID_IWICDevelopRaw,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetMetadataQueryReader */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetThumbnail */ ,
    IWICDevelopRaw_QueryRawCapabilitiesInfo_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::LoadParameterSet */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetCurrentParameterSet */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetExposureCompensation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetExposureCompensation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetWhitePointRGB */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetWhitePointRGB */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetNamedWhitePoint */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetNamedWhitePoint */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetWhitePointKelvin */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetWhitePointKelvin */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetKelvinRangeInfo */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetContrast */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetContrast */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetGamma */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetGamma */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetSharpness */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetSharpness */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetSaturation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetSaturation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetTint */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetTint */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetNoiseReduction */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetNoiseReduction */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetDestinationColorContext */ ,
    IWICDevelopRaw_SetToneCurve_Proxy ,
    IWICDevelopRaw_GetToneCurve_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetRotation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetRotation */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetRenderMode */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::GetRenderMode */ ,
    (void *) (INT_PTR) -1 /* IWICDevelopRaw::SetNotificationCallback */
};

const CInterfaceStubVtbl _IWICDevelopRawStubVtbl =
{
    &IID_IWICDevelopRaw,
    &IWICDevelopRaw_ServerInfo,
    43,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0038, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICDdsDecoder, ver. 0.0,
   GUID={0x409cd537,0x8532,0x40cb,{0x97,0x74,0xe2,0xfe,0xb2,0xdf,0x4e,0x9c}} */

#pragma code_seg(".orpc")
static const unsigned short IWICDdsDecoder_FormatStringOffsetTable[] =
    {
    7464,
    7500
    };

static const MIDL_STUBLESS_PROXY_INFO IWICDdsDecoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICDdsDecoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWICDdsDecoderProxyVtbl = 
{
    &IWICDdsDecoder_ProxyInfo,
    &IID_IWICDdsDecoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDdsDecoder::GetParameters */ ,
    (void *) (INT_PTR) -1 /* IWICDdsDecoder::GetFrame */
};

const CInterfaceStubVtbl _IWICDdsDecoderStubVtbl =
{
    &IID_IWICDdsDecoder,
    &IWICDdsDecoder_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICDdsEncoder, ver. 0.0,
   GUID={0x5cacdb4c,0x407e,0x41b3,{0xb9,0x36,0xd0,0xf0,0x10,0xcd,0x67,0x32}} */

#pragma code_seg(".orpc")
static const unsigned short IWICDdsEncoder_FormatStringOffsetTable[] =
    {
    7554,
    7590,
    7626
    };

static const MIDL_STUBLESS_PROXY_INFO IWICDdsEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICDdsEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWICDdsEncoderProxyVtbl = 
{
    &IWICDdsEncoder_ProxyInfo,
    &IID_IWICDdsEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDdsEncoder::SetParameters */ ,
    (void *) (INT_PTR) -1 /* IWICDdsEncoder::GetParameters */ ,
    (void *) (INT_PTR) -1 /* IWICDdsEncoder::CreateNewFrame */
};

const CInterfaceStubVtbl _IWICDdsEncoderStubVtbl =
{
    &IID_IWICDdsEncoder,
    &IWICDdsEncoder_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICDdsFrameDecode, ver. 0.0,
   GUID={0x3d4c0c61,0x18a4,0x41e4,{0xbd,0x80,0x48,0x1a,0x4f,0xc9,0xf4,0x64}} */

#pragma code_seg(".orpc")
static const unsigned short IWICDdsFrameDecode_FormatStringOffsetTable[] =
    {
    396,
    7680,
    7716
    };

static const MIDL_STUBLESS_PROXY_INFO IWICDdsFrameDecode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICDdsFrameDecode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICDdsFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWICDdsFrameDecodeProxyVtbl = 
{
    &IWICDdsFrameDecode_ProxyInfo,
    &IID_IWICDdsFrameDecode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICDdsFrameDecode::GetSizeInBlocks */ ,
    (void *) (INT_PTR) -1 /* IWICDdsFrameDecode::GetFormatInfo */ ,
    (void *) (INT_PTR) -1 /* IWICDdsFrameDecode::CopyBlocks */
};

const CInterfaceStubVtbl _IWICDdsFrameDecodeStubVtbl =
{
    &IID_IWICDdsFrameDecode,
    &IWICDdsFrameDecode_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    ExprEvalRoutines,
    0,
    wincodec__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _wincodec_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWICFormatConverterProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPixelFormatInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapScalerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICColorContextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapClipperProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFrameEncodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICFastMetadataEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICComponentInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICMetadataQueryWriterProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFrameDecodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapSourceTransformProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapSourceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapLockProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICDdsDecoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPaletteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICDevelopRawProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICDdsEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapCodecProgressNotificationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICColorTransformProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFlipRotatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICDdsFrameDecodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICFormatConverterInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICMetadataQueryReaderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICEnumMetadataItemProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICDevelopRawNotificationCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICProgressiveLevelControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapDecoderInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPixelFormatInfo2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICImagingFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPlanarBitmapFrameEncodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapCodecInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPlanarFormatConverterProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICProgressCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPlanarBitmapSourceTransformProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapDecoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapEncoderInfoProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wincodec_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWICFormatConverterStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPixelFormatInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapScalerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICColorContextStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapClipperStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFrameEncodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICFastMetadataEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICComponentInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICMetadataQueryWriterStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFrameDecodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapSourceTransformStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapSourceStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapLockStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICDdsDecoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPaletteStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICDevelopRawStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICDdsEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapCodecProgressNotificationStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICColorTransformStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFlipRotatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICDdsFrameDecodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICFormatConverterInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICMetadataQueryReaderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICEnumMetadataItemStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICDevelopRawNotificationCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICProgressiveLevelControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapDecoderInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPixelFormatInfo2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWICImagingFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPlanarBitmapFrameEncodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapCodecInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPlanarFormatConverterStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICProgressCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPlanarBitmapSourceTransformStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapDecoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapEncoderInfoStubVtbl,
    0
};

PCInterfaceName const _wincodec_InterfaceNamesList[] = 
{
    "IWICFormatConverter",
    "IWICPixelFormatInfo",
    "IWICBitmapScaler",
    "IWICColorContext",
    "IWICBitmapEncoder",
    "IWICBitmapClipper",
    "IWICBitmapFrameEncode",
    "IWICFastMetadataEncoder",
    "IWICComponentInfo",
    "IWICMetadataQueryWriter",
    "IWICBitmapFrameDecode",
    "IWICBitmapSourceTransform",
    "IWICBitmapSource",
    "IWICBitmap",
    "IWICBitmapLock",
    "IWICDdsDecoder",
    "IWICPalette",
    "IWICDevelopRaw",
    "IWICDdsEncoder",
    "IWICBitmapCodecProgressNotification",
    "IWICColorTransform",
    "IWICBitmapFlipRotator",
    "IWICStream",
    "IWICDdsFrameDecode",
    "IWICFormatConverterInfo",
    "IWICMetadataQueryReader",
    "IWICEnumMetadataItem",
    "IWICDevelopRawNotificationCallback",
    "IWICProgressiveLevelControl",
    "IWICBitmapDecoderInfo",
    "IWICPixelFormatInfo2",
    "IWICImagingFactory",
    "IWICPlanarBitmapFrameEncode",
    "IWICBitmapCodecInfo",
    "IWICPlanarFormatConverter",
    "IWICProgressCallback",
    "IWICPlanarBitmapSourceTransform",
    "IWICBitmapDecoder",
    "IWICBitmapEncoderInfo",
    0
};

const IID *  const _wincodec_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IStream,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};


#define _wincodec_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wincodec, pIID, n)

int __stdcall _wincodec_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _wincodec, 39, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _wincodec, 39, *pIndex )
    
}

const ExtendedProxyFileInfo wincodec_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wincodec_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wincodec_StubVtblList,
    (const PCInterfaceName * ) & _wincodec_InterfaceNamesList,
    (const IID ** ) & _wincodec_BaseIIDList,
    & _wincodec_IID_Lookup, 
    39,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

