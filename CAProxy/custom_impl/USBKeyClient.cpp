#include "stdafx.h"
#include "USBKeyClient.h"
#include "../common/define.h"


USBKeyClient::USBKeyClient()
{
}


USBKeyClient::~USBKeyClient()
{
}


void USBKeyClient::help(BSTR* v)
{
	if (v != NULL)
	{
		//::SysFreeString(*v);
		*v = NULL;
	}

	*v = ::SysAllocString(L"help: This ActiveX control is used to manage CA from USBKey device.");
}

/* 1
ԭ�ͣ�	int SOF_GetVersion(unsigned int *puiVersion)
������	��ȡ�ӿڵİ汾��
������	puiVersion [out]	�汾��
����ֵ��	0	�ɹ�
��0	ʧ�ܣ����ش������
��ע��	�汾�ŵĸ�ʽΪ��0xAAAABBBB,����AAAAΪ���汾�ţ�BBBBΪ�ΰ汾�š�
*/
int USBKeyClient::SOF_GetVersion(OUT unsigned int *puiVersion)
{
	*puiVersion = 121;
	return SOR_OK;
}


/* 2
ԭ�ͣ�	Void SOF_SetSignMethod(int SignMethod);
������	���ÿؼ�ǩ��ʹ�õ�ǩ���㷨��ʹ�÷ǶԳƼ����㷨ʱ��Ҳ��ͨ���������������
������	SignMethod[in] ǩ���㷨��ʶ�������5���㷨�����
����ֵ��	��
*/
void SOF_SetSignMethod(int SignMethod)
{

}


/* 3
ԭ�ͣ�	int SOF_GetSignMethod();
������	��ÿؼ�ǩ��ʹ�õ�ǩ���㷨
������	��
����ֵ��	��õ�ǰ��ǩ���㷨����	�����5���㷨�������
*/
int SOF_GetSignMethod()
{
	return 0;
}

/* 4
ԭ�ͣ�	Void SOF_SetEncryptMethod (int EncryptMethod) ;
������	���ÿؼ�ʹ�õĶԳƼӽ����㷨��
������	EncryptMethod	[IN] �ԳƼӽ����㷨�������5���㷨�����
����ֵ��	��
*/
void SOF_SetEncryptMethod(int EncryptMethod)
{

}

/* 5
ԭ�ͣ�	int SOF_GetEncryptMethod();
������	��ÿؼ�ʹ�õĶԳƼӽ����㷨���롣�����5���㷨�������
������	��
����ֵ��	��ǰ�ؼ�ʹ�õļ����㷨
*/
int SOF_GetEncryptMethod()
{
	return 0;
}

/* 6
ԭ�ͣ�	BSTR SOF_GetUserList();
������	ȡ�õ�ǰ�Ѱ�װ֤����û��б�
������	��
����ֵ��	BSTR ret  �û��б��ַ���	���ݸ�ʽ��(�û�1||��ʶ1&&&�û�2||��ʶ2&&&��)
*/
BSTR SOF_GetUserList()
{
	return NULL;
}

/* 7
ԭ�ͣ�	BSTR SOF_ExportUserCert(BSTR CertID);
������	����֤��ʵ��Ψһ��ʶ����ȡBase64�����֤���ַ�����
������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
����ֵ��	BSTR rv	֤���ַ���
��	ʧ�ܿ�ֵ
��ע��	�����˫֤�飬��������ǩ��֤�顣
*/
BSTR SOF_ExportUserCert(BSTR CertID)
{
	return NULL;
}

/* 8
ԭ�ͣ�	int SOF_Login(BSTR CertID, BSTR PassWd)
������	У��֤�����
������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
BSTR PassWd [in]	�������������
����ֵ��	�ɹ�����0��ʧ��ʱ�����������Ե�ʣ�����������ʱ���� -1
*/
int SOF_Login(BSTR CertID, BSTR PassWd)
{
	return 0;
}


/* 9
ԭ�ͣ�	BOOL  SOF_ChangePassWd(BSTR CertID, BSTR OldPassWd��BSTR NewPassWd)
������	�޸�֤�����
������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
BSTR OldPassWd [in]	����������ɿ���
BSTR NewPassWd [in]	����������¿���
����ֵ��	�ɹ� TRUE��ʧ�� FALSE
*/
BOOL  SOF_ChangePassWd(BSTR CertID, BSTR OldPassWd, BSTR NewPassWd)
{
	return true;
}

/* 10
ԭ�ͣ�	BSTR SOF_ExportExChangeUserCert (BSTR CertID) ;
������	����֤��ʵ��Ψһ��ʶ����ȡBase64�����֤���ַ�����ָ����ȡ���ܣ�������֤��
������	BSTR CertID[in]	֤��ʵ��Ψһ��ʶ
����ֵ��	BSTR rv	��ȡBase64�����֤���ַ���
��ֵ		ʧ��
*/
BSTR SOF_ExportExChangeUserCert(BSTR CertID)
{
	return NULL;
}

/* 11
ԭ�ͣ�	BSTR SOF_GetCertInfo(BSTR Cert, short Type);
������	��ȡ֤����Ϣ
������	BSTR Cert[in]	Base64�����֤��
short Type[in]	��ȡ��Ϣ�����ͣ�TYPE��������3��֤����Ϣ�����������
����ֵ��	BSTR	ret		֤����Ϣ
��ֵ				ʧ��
*/
BSTR SOF_GetCertInfo(BSTR Cert, short Type)
{
	return NULL;
}


/* 12
ԭ�ͣ�	BSTR SOF_GetCertInfoByOid(BSTR Cert, BSTR Oid) ;
������	����OID��ȡ֤��˽����չ����Ϣ
������	BSTR Cert[in]	Base64�����֤��
BSTR Oid [in]	˽����չ����ID�����硰1.2.156.xxx��
����ֵ��	BSTR ret	֤��OID��Ӧ��ֵ
��ֵ			ʧ��
*/
BSTR SOF_GetCertInfoByOid(BSTR Cert, BSTR Oid)
{
	return NULL;
}


/* 13
ԭ�ͣ�	BSTR SOF_GetUserInfo (BSTR CertId, short type) ;
������	����û���Ϣ
������	BSTR Certid[in]	֤���ʶ
type[in]	��Ϣ��𣬲������������4��֤���Ӧ��Ϣ����
����ֵ��	BSTR ret	type��Ӧ��ֵ
��ֵ			ʧ��
*/
BSTR SOF_GetUserInfo(BSTR CertId, short type)
{
	return NULL;
}

/* 14
ԭ�ͣ�	BOOL SOF_ValidateCert(BSTR Cert);
������	��֤֤����Ч��
������	BSTR Cert[in]	Base64�����֤��
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
��ֵ	ʧ��
*/
BOOL SOF_ValidateCert(BSTR Cert)
{
	return true;
}

/* 15
ԭ�ͣ�	BSTR SOF_SignData(BSTR CertID, BSTR InData) ;
������	���ַ������ݽ�������ǩ����ǩ����ʽΪPKCS#1
������	BSTR CertID[in]	֤���ʶ
BSTR  InData[in] ǩ��ԭ��
����ֵ��	BSTR  ret	ǩ�����, BASE64����
��ֵ	ʧ��
*/
BSTR SOF_SignData(BSTR CertID, BSTR InData)
{
	return NULL;
}

/* 16
ԭ�ͣ�	BOOL SOF_VerifySignedData(BSTR Cert, BSTR InData, BSTR SignValue) ;
������	��֤����ǩ��
������	BSTR Cert[in]	ǩ����֤�飬BASE64����
BSTR  InData[in]	ǩ��ԭ��
BSTR  SignValue[in]	ǩ��ֵ��BASE64����
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
*/
BOOL SOF_VerifySignedData(BSTR Cert, BSTR InData, BSTR SignValue)
{
	return true;
}

/* 17
ԭ�ͣ�	BSTR SOF_SignFile(BSTR CertID, BSTR InFile) ;
������	���ļ�����ǩ��
������	BSTR CertID[in]	֤���ʶ
BSTR  InFile[in]	ǩ��ԭ���ļ�·��
����ֵ��	BSTR ret	ǩ�����
��ֵ	ʧ��
*/
BSTR SOF_SignFile(BSTR CertID, BSTR InFile)
{
	return NULL;
}

/* 18
ԭ�ͣ�	BOOL SOF_VerifySignedFile(BSTR Cert, BSTR InFile, BSTR SignValue) ;
������	��֤�ļ�����ǩ��
������	BSTR Cert[in]	ǩ����֤��
BSTR  InFile[in]	ǩ��ԭ���ļ�·��
BSTR  SignValue[in]	ǩ��ֵ
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
*/
BOOL SOF_VerifySignedFile(BSTR Cert, BSTR InFile, BSTR SignValue)
{
	return true;
}

/* 19
ԭ�ͣ�	BSTR SOF_EncryptData(BSTR SymmKey, BSTR Indata) ;
������	ʹ�öԳ��㷨��������
������	BSTR Key[in]	������Կ
BSTR Indata[in]	�����ܵ�����
����ֵ��	BSTR rv	���ܺ������
��ֵ		ʧ��
*/
BSTR SOF_EncryptData(BSTR SymmKey, BSTR Indata)
{
	return NULL;
}

/* 20
ԭ�ͣ�	BSTR SOF_DecryptData(BSTR SymmKey, BSTR Indata) ;
������	ʹ�öԳ��㷨��������
������	BSTR SymmKey[in]	������Կ
BSTR Indata[in]	�����ܵ�����
����ֵ��	BSTR rv	���ܺ������
��ֵ		ʧ��
*/
BSTR SOF_DecryptData(BSTR SymmKey, BSTR Indata)
{
	return NULL;
}

/* 21
ԭ�ͣ�	BOOL SOF_EncryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) ;
������	ʹ�öԳ��㷨�����ļ�
������	BSTR SymmKey[in]	������Կ
BSTR InFile[in]	�����ܵ������ļ�·��
BSTR OutFile[in]	�����ļ�����·��
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
*/
BOOL SOF_EncryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile)
{
	return true;
}

/* 22
ԭ�ͣ�	BOOL SOF_DecryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) ;
������	ʹ�öԳ��㷨�����ļ�
������	BSTR SymmKey[in]	������Կ
BSTR InFile[in]	�����ܵ������ļ�·��
BSTR OutFile[in]	�����ļ�����·��
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
*/
BOOL SOF_DecryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile)
{
	return true;
}

/* 23
ԭ�ͣ�	BSTR SOF_PubKeyEncrypt(BSTR Cert, BSTR InData) ;
������	ʹ��֤������ݼ��ܡ���PKCS#1��ʽ��
������	BSTR Cert[in]	֤��
BSTR InData[in]	�����ܵ�����
����ֵ��	BSTR  rv	�ɹ����ܺ������
��ֵ	ʧ��
��ע��	��Ϊ��PKCS#1��ʽ���ʼ��ܵ����ݳ���ҪС��֤���λ��������1024λ��֤�飬InData���ȱ���С��128
*/
BSTR SOF_PubKeyEncrypt(BSTR Cert, BSTR InData)
{
	return NULL;
}

/* 24
ԭ�ͣ�	BSTR SOF_PriKeyDecrypt(BSTR CertID, BSTR InData) ;
������	ʹ��֤������ݼ��ܡ���PKCS#1��ʽ��
������	BSTR Cert[in]
BSTR InData[in]
����ֵ��	BSTR  rv
��ֵ
��ע��	��Ϊ��PKCS#1��ʽ���ʼ��ܵ����ݳ���ҪС��֤���λ��������1024λ��֤�飬InData���ȱ���С��128
*/
BSTR SOF_PriKeyDecrypt(BSTR CertID, BSTR InData)
{
	return NULL;
}

/* 25
ԭ�ͣ�	BSTR SOF_SignDataByP7(BSTR CertID, BSTR InData)
������	���ַ������ݽ�������ǩ����ǩ����ʽΪPKCS#7
������	BSTR CertID[in]	֤���ʶ
BSTR  InData[in]	ǩ��ԭ��
����ֵ��	BSTR  ret 	ǩ�����
��ֵ	ʧ��
��ע��	PKCS#7ǩ���������ԭ��+ǩ����֤��+ǩ��ֵ��
*/
BSTR SOF_SignDataByP7(BSTR CertID, BSTR InData)
{
	return NULL;
}

/* 26
ԭ�ͣ�	BOOL SOF_VerifySignedDataByP7 (BSTR P7Data) ;
������	��֤����ǩ��
������	BSTR P7Data[in]	PKCS#7ǩ����
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
*/
BOOL SOF_VerifySignedDataByP7(BSTR P7Data)
{
	return true;
}

/* 27
ԭ�ͣ�	BSTR SOF_GetP7SignDataInfo ( BSTR P7Data��short type) ;
������	����PKCS#7ǩ��������Ϣ���ɻ��ԭ�ġ�ǩ��ֵ��ǩ��֤�����Ϣ
������	BSTR P7Data[in]	PKCS#7ǩ����
short type[in]	����
����ֵ��	BSTR ret	�ɹ�
��ֵ	ʧ��
��ע��	���ͣ�1��ԭ�ģ�2��ǩ����֤�飻3��ǩ��ֵ
*/
BSTR SOF_GetP7SignDataInfo(BSTR P7Data, short type)
{
	return NULL;
}

/* 28
ԭ�ͣ�	BSTR SOF_SignDataXML(BSTR CertID, BSTR InData) ;
������	��XML���ݽ�������ǩ����������Ϲ��ʱ�׼��XMLǩ�����
������	BSTR CertID[in]	֤���ʶ
BSTR  InData[in]	ǩ��ԭ�ģ�XML��ʽ
����ֵ��	BSTR  ret	ǩ�����
��ֵ	ʧ��
��ע��	XMLǩ����׼�� http://www.w3.org/TR/xmldsig-core/
*/
BSTR SOF_SignDataXML(BSTR CertID, BSTR InData)
{
	return NULL;
}

/* 29
ԭ�ͣ�	BOOL  SOF_VerifySignedDataXML (BSTR InData) ;
������	��֤xmlǩ��
������	BSTR  InData[in]	XMLǩ��ֵ
����ֵ��	TRUE	�ɹ�
FALSE	ʧ��
��ע��	XMLǩ����׼�� http://www.w3.org/TR/xmldsig-core/
*/
BOOL  SOF_VerifySignedDataXML(BSTR InData)
{
	return true;
}

/* 30
ԭ�ͣ�	BSTR  SOF_GetXMLSignatureInfo (BSTR XMLSignedData,short type) ;
������	����XMLǩ�����ݣ���ȡǩ��ֵ��XMLԭ�ġ�֤�����Ϣ
������	BSTR  XMLSignedData[in]
Type[in]
����ֵ��	�����Ӧ����Ϣ
��ע��	type��ѡ�Ĳ��������壺1��xmlԭ�ģ�2��ժҪ��3��ǩ��ֵ��4��ǩ��֤�飻5��ժҪ�㷨��6��ǩ���㷨��ʧ�ܷ��ؿ�ֵ
*/
BSTR  SOF_GetXMLSignatureInfo(BSTR XMLSignedData, short type)
{
	return NULL;
}

/* 31
ԭ�ͣ�	Int SOF_CheckSupport();
������	���ؼ��Ƿ�֧�ֵ�ǰ����ϵͳ��������汾
������	��
����ֵ��	int rv	0��ʾ֧�֣�1��ʾ��֧�֡�
*/
int SOF_CheckSupport()
{
	return 0;
}

/* 32
ԭ�ͣ�	BSTR SOF_GenRandom(short len);
������	���������
������	int RanddomLen[in]	����������������ȣ�bytes���ֽڳ��ȣ�
����ֵ��	BSTR rv	�����ֵ��Base64�����ģ�
*/
BSTR SOF_GenRandom(short len)
{
	return NULL;
}