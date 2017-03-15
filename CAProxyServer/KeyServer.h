// KeyServer.h : CKeyServer ������

#pragma once
#include "resource.h"       // ������


#include <memory>
#include "CAProxyServer_i.h"
#include "../CAProxy/custom_impl/USBKeyClient.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CKeyServer

class ATL_NO_VTABLE CKeyServer :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CKeyServer, &CLSID_KeyServer>,
	public IDispatchImpl<IKeyServer, &IID_IKeyServer, &LIBID_CAProxyServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IObjectSafetyImpl<CKeyServer, INTERFACESAFE_FOR_UNTRUSTED_CALLER>
{
private:
	std::shared_ptr<IClientServerAPI> proxy;
public:
	CKeyServer()
	{
		proxy = std::make_shared<ClientServerAPIImpl>();
	}

DECLARE_REGISTRY_RESOURCEID(IDR_KEYSERVER)

DECLARE_NOT_AGGREGATABLE(CKeyServer)

BEGIN_COM_MAP(CKeyServer)
	COM_INTERFACE_ENTRY(IKeyServer)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IObjectSafety)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(SOF_SetCertTrustList)(BSTR CTLAltName, BSTR CTLContent, LONG CTLContentLen);
	STDMETHOD(SOF_QueryCertTrustListAltNames)(BSTR* rv);
	STDMETHOD(SOF_QueryCertTrustList)(BSTR CTLAltName, BSTR* rv);
	STDMETHOD(SOF_DelCertTrustList)(BSTR CTLAltName);
	STDMETHOD(SOF_SetWebAppName)(BSTR WebAppName);

	// 6 - 9 same with client api ---------
	STDMETHOD(SOF_SetSignMethod)(LONG SignMethod);
	STDMETHOD(SOF_GetSignMethod)(LONG* SignMethod);
	STDMETHOD(SOF_SetEncryptMethod)(LONG EncryptMethod);
	STDMETHOD(SOF_GetEncryptMethod)(LONG* EncryptMethod);
	//-------------------------------------

	STDMETHOD(SOF_GetServerCertificate)(LONG CertUsage, BSTR* rv);


	// 11 - 30 same with client api ---------
	STDMETHOD(SOF_GenRandom)(LONG len, LONG* rv);
	STDMETHOD(SOF_GetCertInfo)(BSTR Cert, LONG Type, BSTR* rv);
	STDMETHOD(SOF_GetCertInfoByOid)(BSTR Cert, BSTR Oid, BSTR* rv);
	STDMETHOD(SOF_ValidateCert)(BSTR Cert, BOOL* rv);
	STDMETHOD(SOF_SignData)(BSTR Cert, BSTR InData, BSTR* rv);
	STDMETHOD(SOF_VerifySignedData)(BSTR Cert, BSTR InData, BSTR SignValue, BOOL* rv);
	STDMETHOD(SOF_SignFile)(BSTR Cert, BSTR InFile, BSTR* rv);
	STDMETHOD(SOF_VerifySignedFile)(BSTR Cert, BSTR InFile, BSTR SignValue, BOOL* rv);
	STDMETHOD(SOF_EncryptData)(BSTR SymmKey, BSTR Indata, BSTR* rv);
	STDMETHOD(SOF_DecryptData)(BSTR SymmKey, BSTR Indata, BSTR* rv);
	STDMETHOD(SOF_EncryptFile)(BSTR SymmKey, BSTR InFile, BSTR OutFile, BOOL* rv);
	STDMETHOD(SOF_DecryptFile)(BSTR SymmKey, BSTR InFile, BSTR OutFile, BOOL* rv);
	STDMETHOD(SOF_PubKeyEncrypt)(BSTR Cert, BSTR InData, BSTR* rv);
	STDMETHOD(SOF_PriKeyDecrypt)(BSTR CertID, BSTR InData, BSTR* rv);
	STDMETHOD(SOF_SignDataByP7)(BSTR CertID, BSTR InData, BSTR* rv);
	STDMETHOD(SOF_VerifySignedDataByP7)(BSTR P7Data, BOOL* rv);
	STDMETHOD(SOF_GetP7SignDataInfo)(BSTR P7Data, LONG type, BSTR* rv);
	STDMETHOD(SOF_SignDataXML)(BSTR CertID, BSTR InData, BSTR* rv);
	STDMETHOD(SOF_VerifySignedDataXML)(BSTR InData, BOOL* rv);
	STDMETHOD(SOF_GetXMLSignatureInfo)(BSTR XMLSignedData, LONG type, BSTR* rv);
	//-------------------------------------
	
	STDMETHOD(SOF_CreateTimeStampRequest)(BSTR InData, BSTR* rv);
	STDMETHOD(SOF_CreateTimeStampRequest)(BSTR InData, BSTR* rv);
	STDMETHOD(SOF_VerifyTimeStamp)(BSTR content, BSTR tsResponseData, LONG* rv);
	STDMETHOD(SOF_GetTimeStampInfo)(BSTR tsResponseData, LONG type, BSTR* rv);
	STDMETHOD(SOF_GetLastError)(LONG* rv);

};

OBJECT_ENTRY_AUTO(__uuidof(KeyServer), CKeyServer)
