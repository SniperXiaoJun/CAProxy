// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// ĳЩ CString ���캯��������ʽ��


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include "CertParser\CertParser.h"
#include "HTCSPApi\HTCSPApi.h"

#pragma comment(lib, "comsuppwd.lib")
//#pragma comment(lib,"crypt32.lib")
//#pragma comment(lib, "libs/HTCSPApi/lib/HTCSPApi.lib")
#pragma comment(lib, "SKFAPI/SKFAPI.lib")
#pragma comment(lib, "openssl/libeay32.lib")
#pragma comment(lib, "CertParser/Certsel.lib")

extern DWORD g_dwAlgID;
extern HANDLE g_hCard;
extern char g_szReaderName[1024];
extern DWORD g_dwInitFlag;
