// KeyClient.h : CKeyClient ������

#pragma once
#include "resource.h"       // ������



#include "CAProxy_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CKeyClient

class ATL_NO_VTABLE CKeyClient :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CKeyClient, &CLSID_KeyClient>,
	public IDispatchImpl<IKeyClient, &IID_IKeyClient, &LIBID_CAProxyLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CKeyClient()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_KEYCLIENT)

DECLARE_NOT_AGGREGATABLE(CKeyClient)

BEGIN_COM_MAP(CKeyClient)
	COM_INTERFACE_ENTRY(IKeyClient)
	COM_INTERFACE_ENTRY(IDispatch)
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



	STDMETHOD(help)(BSTR* v);
};

OBJECT_ENTRY_AUTO(__uuidof(KeyClient), CKeyClient)
