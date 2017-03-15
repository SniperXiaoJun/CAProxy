#pragma once
#include "../common/define.h"

class IClientServerAPI
{
public:
	virtual void help(OUT BSTR* v) = 0;

	/* C1
	ԭ�ͣ�	int SOF_GetVersion(unsigned int *puiVersion)
	������	��ȡ�ӿڵİ汾��
	������	puiVersion [out]	�汾��
	����ֵ��	0	�ɹ�
	��0	ʧ�ܣ����ش������
	��ע��	�汾�ŵĸ�ʽΪ��0xAAAABBBB,����AAAAΪ���汾�ţ�BBBBΪ�ΰ汾�š�
	*/
	CLIENTAPI(1) virtual int SOF_GetVersion(OUT unsigned int *puiVersion) = 0;

	/* S1
	ԭ�ͣ�	int SOF_SetCertTrustList(BSTR CTLAltName, BSTR CTLContent, int CTLContentLen);
	������	����֤�������б�
		������	CTLAltName[in]		֤�������б����
		CTLContent[in]	֤�������б�����(Base64�����ʽ)
		CTLContentLen[in]	֤�������б���
		����ֵ��	0	�ɹ�
		����	ʧ�ܣ�����������б�
		��ע��	������룺SOR_PARAMERR����������
	*/
	SERVERAPI(1) virtual int  SOF_SetCertTrustList(BSTR CTLAltName, BSTR CTLContent, int CTLContentLen) = 0;

	/* S2
	ԭ�ͣ�	BSTR SOF_QueryCertTrustListAltNames();
	������	��ѯ֤�������б����
	������	��
	����ֵ��	�ǿ�	�ɹ��������б�������ַ������,�硰CA001@CA002@CA003��
	����	ʧ�ܣ�����������б�
	��ע��	������룺SOR_CTLNOTFOUND��û�������б�
	*/
	SERVERAPI(2) virtual BSTR SOF_QueryCertTrustListAltNames() = 0;

	/* S3
	ԭ�ͣ�	BSTR SOF_QueryCertTrustList (BSTR CTLAltName);
	������	���ݱ�����ѯ֤�������б�
	������	BSTR CTLAltName[in]	֤�������б����
	����ֵ��	�ǿ�	�ɹ���Base64�����ʽ��֤�������б�
	����	ʧ�ܣ�����������б�
	��ע��	SOR_CTLNOTFOUND��û�������б�
	SOR_PARAMERR����������
	*/
	SERVERAPI(3) virtual BSTR SOF_QueryCertTrustList(BSTR CTLAltName) = 0;

	/* S4
	ԭ�ͣ�	int SOF_DelCertTrustList(BSTR CTLAltName);
	������	���ݱ���ɾ��֤�������б�
	������	CTLAltName[in]	֤�������б����
	����ֵ��	0	�ɹ�
	����	ʧ�ܣ�����������б�
	��ע��	SOR_NULLPOINTER������Ϊ��ָ��
	SOR_CTLNOTFOUND��û�ж�Ӧ�������б�
	*/
	SERVERAPI(4) virtual int  SOF_DelCertTrustList(BSTR CTLAltName) = 0;

	/* S5
	ԭ�ͣ�	int SOF_SetWebAppName(BSTR WebAppName);
	������	����webӦ�õ����ơ�������Ҫ�ͷ�����xml�ļ���Ӧ���ӿڴ�xml�ļ��ж�ȡwebapp�����԰���ʹ�õ�֤�顢���ŵĸ�֤�顢֤����֤�Ĳ��Ե�
	������	WebAppName[in]	Ӧ�õ�����
	����ֵ��	0	�ɹ�
	����	ʧ�ܣ�����������б�
	��ע��	SOR_NULLPOINTER������Ϊ��ָ�롣
	SOR_APPNOTFOUND��Ӧ��û����
	*/
	SERVERAPI(6) virtual int  SOF_SetWebAppName(BSTR WebAppName) = 0;


	/* C2 S6
	ԭ�ͣ�	Void SOF_SetSignMethod(int SignMethod);
	������	���ÿؼ�ǩ��ʹ�õ�ǩ���㷨��ʹ�÷ǶԳƼ����㷨ʱ��Ҳ��ͨ���������������
		������	SignMethod[in]
		����ֵ��	��
	*/
	CLIENTAPI(2) SERVERAPI(6) virtual void SOF_SetSignMethod(int SignMethod) = 0;


	/* C3 S7
	ԭ�ͣ�	int SOF_GetSignMethod();
	������	��ÿؼ�ǩ��ʹ�õ�ǩ���㷨
	������	��	
	����ֵ��	��õ�ǰ��ǩ���㷨����	�����5���㷨�������
	*/ 
	CLIENTAPI(3) SERVERAPI(7) virtual int SOF_GetSignMethod() = 0;

	/* C4 S8
	ԭ�ͣ�	Void SOF_SetEncryptMethod (int EncryptMethod) ;
	������	���ÿؼ�ʹ�õĶԳƼӽ����㷨��
	������	EncryptMethod	[IN] �ԳƼӽ����㷨�������5���㷨�����
	����ֵ��	��
	*/
	CLIENTAPI(4) SERVERAPI(8) virtual void SOF_SetEncryptMethod(int EncryptMethod) = 0;

	/* C5 S9
	ԭ�ͣ�	int SOF_GetEncryptMethod();
	������	��ÿؼ�ʹ�õĶԳƼӽ����㷨���롣�����5���㷨�������
	������	��	
	����ֵ��	��ǰ�ؼ�ʹ�õļ����㷨	
	*/
	CLIENTAPI(5) SERVERAPI(9) virtual int SOF_GetEncryptMethod() = 0;

	/* C6
	ԭ�ͣ�	BSTR SOF_GetUserList();
	������	ȡ�õ�ǰ�Ѱ�װ֤����û��б�
	������	��
	����ֵ��	BSTR ret  �û��б��ַ���	���ݸ�ʽ��(�û�1||��ʶ1&&&�û�2||��ʶ2&&&��)
	*/
	CLIENTAPI(6) virtual BSTR SOF_GetUserList() = 0;

	/* S10
	ԭ�ͣ�	BSTR SOF_GetServerCertificate(int CertUsage);
	������	��ȡ��ǰӦ��ָ���ķ�����֤��
		������	int CertUsage ֤����;	֤����;��1������֤�顢2��ǩ��֤��
		����ֵ��	Base64����ķ�����֤��	�ɹ�
		Null	ʧ��
		��ע��	�������SOR_PARAMETERNOTSUPPORT����֧�ֵĲ���
	*/
	SERVERAPI(10) virtual BSTR SOF_GetServerCertificate(int CertUsage) = 0;

	/* C7
	ԭ�ͣ�	BSTR SOF_ExportUserCert(BSTR CertID);
	������	����֤��ʵ��Ψһ��ʶ����ȡBase64�����֤���ַ�����
	������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
	����ֵ��	BSTR rv	֤���ַ���
			��	ʧ�ܿ�ֵ
	��ע��	�����˫֤�飬��������ǩ��֤�顣
	*/
	CLIENTAPI(7) virtual BSTR SOF_ExportUserCert(BSTR CertID) = 0;

	/* C8
	ԭ�ͣ�	int SOF_Login(BSTR CertID, BSTR PassWd)
	������	У��֤�����
	������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
			BSTR PassWd [in]	�������������
	����ֵ��	�ɹ�����0��ʧ��ʱ�����������Ե�ʣ�����������ʱ���� -1
	*/
	CLIENTAPI(8) virtual int SOF_Login(BSTR CertID, BSTR PassWd) = 0;

	/* C9 
	ԭ�ͣ�	BOOL  SOF_ChangePassWd(BSTR CertID, BSTR OldPassWd��BSTR NewPassWd)
	������	�޸�֤�����
	������	BSTR CertID [in]	���������֤��ʵ��Ψһ��ʶ
			BSTR OldPassWd [in]	����������ɿ���
			BSTR NewPassWd [in]	����������¿���
	����ֵ��	�ɹ� TRUE��ʧ�� FALSE
	*/
	CLIENTAPI(9) virtual BOOL  SOF_ChangePassWd(BSTR CertID, BSTR OldPassWd, BSTR NewPassWd) = 0;

	/* C10 
	ԭ�ͣ�	BSTR SOF_ExportExChangeUserCert (BSTR CertID) ;
	������	����֤��ʵ��Ψһ��ʶ����ȡBase64�����֤���ַ�����ָ����ȡ���ܣ�������֤��
	������	BSTR CertID[in]	֤��ʵ��Ψһ��ʶ
	����ֵ��	BSTR rv	��ȡBase64�����֤���ַ���
			��ֵ		ʧ��
	*/
	CLIENTAPI(10) virtual BSTR SOF_ExportExChangeUserCert(BSTR CertID) = 0;

	/* C11 S12
	ԭ�ͣ�	BSTR SOF_GetCertInfo(BSTR Cert, short Type);
	������	��ȡ֤����Ϣ
	������	BSTR Cert[in]	Base64�����֤��
			short Type[in]	��ȡ��Ϣ�����ͣ�TYPE��������3��֤����Ϣ�����������
	����ֵ��	BSTR	ret		֤����Ϣ
			��ֵ				ʧ��
	*/
	CLIENTAPI(11) SERVERAPI(12) virtual BSTR SOF_GetCertInfo(BSTR Cert, short Type) = 0;


	/* C12 S13
	ԭ�ͣ�	BSTR SOF_GetCertInfoByOid(BSTR Cert, BSTR Oid) ;
	������	����OID��ȡ֤��˽����չ����Ϣ
	������	BSTR Cert[in]	Base64�����֤��
			BSTR Oid [in]	˽����չ����ID�����硰1.2.156.xxx��
	����ֵ��	BSTR ret	֤��OID��Ӧ��ֵ
			��ֵ			ʧ��
	*/
	CLIENTAPI(12) SERVERAPI(13) virtual BSTR SOF_GetCertInfoByOid(BSTR Cert, BSTR Oid) = 0;


	/* C13
	ԭ�ͣ�	BSTR SOF_GetUserInfo (BSTR CertId, short type) ;
	������	����û���Ϣ
	������	BSTR Certid[in]	֤���ʶ
			type[in]	��Ϣ��𣬲������������4��֤���Ӧ��Ϣ����
	����ֵ��	BSTR ret	type��Ӧ��ֵ
			��ֵ			ʧ��
	*/
	CLIENTAPI(13) virtual BSTR SOF_GetUserInfo(BSTR CertId, short type) = 0;

	/* C14 S14
	ԭ�ͣ�	BOOL SOF_ValidateCert(BSTR Cert);
	������	��֤֤����Ч��
	������	BSTR Cert[in]	Base64�����֤��
	����ֵ��	TRUE	�ɹ�
			FALSE	ʧ��
	��ֵ	ʧ��
	*/
	CLIENTAPI(SERVERAPI(14)) virtual BOOL SOF_ValidateCert(BSTR Cert) = 0;

	/* C15 S15
	ԭ�ͣ�	BSTR SOF_SignData(BSTR CertID, BSTR InData) ;
	������	���ַ������ݽ�������ǩ����ǩ����ʽΪPKCS#1
	������	BSTR CertID[in]	֤���ʶ
			BSTR  InData[in] ǩ��ԭ��
	����ֵ��	BSTR  ret	ǩ�����, BASE64����
	��ֵ	ʧ��
	*/
	CLIENTAPI(SERVERAPI(15)) virtual BSTR SOF_SignData(BSTR CertID, BSTR InData) = 0;

	/* C16 S16
	ԭ�ͣ�	BOOL SOF_VerifySignedData(BSTR Cert, BSTR InData, BSTR SignValue) ;
	������	��֤����ǩ��
	������	BSTR Cert[in]	ǩ����֤�飬BASE64����
			BSTR  InData[in]	ǩ��ԭ��
			BSTR  SignValue[in]	ǩ��ֵ��BASE64����
	����ֵ��	TRUE	�ɹ�
	FALSE	ʧ��
	*/
	CLIENTAPI(SERVERAPI(16)) virtual BOOL SOF_VerifySignedData(BSTR Cert, BSTR InData, BSTR SignValue) = 0;
	 
	/* C17 S17
	ԭ�ͣ�	BSTR SOF_SignFile(BSTR CertID, BSTR InFile) ;
	������	���ļ�����ǩ��
	������	BSTR CertID[in]	֤���ʶ
			BSTR  InFile[in]	ǩ��ԭ���ļ�·��
	����ֵ��	BSTR ret	ǩ�����
	��ֵ	ʧ��
	*/
	CLIENTAPI(SERVERAPI(17)) virtual BSTR SOF_SignFile(BSTR CertID, BSTR InFile) = 0;

	/* C18 S18
	ԭ�ͣ�	BOOL SOF_VerifySignedFile(BSTR Cert, BSTR InFile, BSTR SignValue) ;
	������	��֤�ļ�����ǩ��
	������	BSTR Cert[in]	ǩ����֤��
			BSTR  InFile[in]	ǩ��ԭ���ļ�·��
			BSTR  SignValue[in]	ǩ��ֵ
	����ֵ��	TRUE	�ɹ�
	FALSE	ʧ��
	*/
	CLIENTAPI(SERVERAPI(18)) virtual BOOL SOF_VerifySignedFile(BSTR Cert, BSTR InFile, BSTR SignValue) = 0;

	/* C19 S19
	ԭ�ͣ�	BSTR SOF_EncryptData(BSTR SymmKey, BSTR Indata) ;
	������	ʹ�öԳ��㷨��������
	������	BSTR Key[in]	������Կ
			BSTR Indata[in]	�����ܵ�����
	����ֵ��	BSTR rv	���ܺ������
			��ֵ		ʧ��
	*/
	CLIENTAPI(SERVERAPI(19)) virtual BSTR SOF_EncryptData(BSTR SymmKey, BSTR Indata) = 0;

	/* C20 S20
	ԭ�ͣ�	BSTR SOF_DecryptData(BSTR SymmKey, BSTR Indata) ;
	������	ʹ�öԳ��㷨��������
	������	BSTR SymmKey[in]	������Կ
			BSTR Indata[in]	�����ܵ�����
	����ֵ��	BSTR rv	���ܺ������
			��ֵ		ʧ��
	*/
	CLIENTAPI(SERVERAPI(20)) virtual BSTR SOF_DecryptData(BSTR SymmKey, BSTR Indata) = 0;
	 
	/* C21 S21
	ԭ�ͣ�	BOOL SOF_EncryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) ;
	������	ʹ�öԳ��㷨�����ļ�
	������	BSTR SymmKey[in]	������Կ
			BSTR InFile[in]	�����ܵ������ļ�·��
			BSTR OutFile[in]	�����ļ�����·��
	����ֵ��	TRUE	�ɹ�
			FALSE	ʧ��
	*/
	CLIENTAPI(SERVERAPI(21)) virtual BOOL SOF_EncryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) = 0;

	/* C22 S22
	ԭ�ͣ�	BOOL SOF_DecryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) ;
	������	ʹ�öԳ��㷨�����ļ�
	������	BSTR SymmKey[in]	������Կ
			BSTR InFile[in]	�����ܵ������ļ�·��
			BSTR OutFile[in]	�����ļ�����·��
	����ֵ��	TRUE	�ɹ�
	FALSE	ʧ��
	*/
	CLIENTAPI(SERVERAPI(22)) virtual BOOL SOF_DecryptFile(BSTR SymmKey, BSTR InFile, BSTR OutFile) = 0;

	/* C23 S23
	ԭ�ͣ�	BSTR SOF_PubKeyEncrypt(BSTR Cert, BSTR InData) ;
	������	ʹ��֤������ݼ��ܡ���PKCS#1��ʽ��
	������	BSTR Cert[in]	֤��
			BSTR InData[in]	�����ܵ�����
	����ֵ��	BSTR  rv	�ɹ����ܺ������
	��ֵ	ʧ��
	��ע��	��Ϊ��PKCS#1��ʽ���ʼ��ܵ����ݳ���ҪС��֤���λ��������1024λ��֤�飬InData���ȱ���С��128
	*/
	CLIENTAPI(SERVERAPI(23)) virtual BSTR SOF_PubKeyEncrypt(BSTR Cert, BSTR InData) = 0;

	/* C24 S24
	ԭ�ͣ�	BSTR SOF_PriKeyDecrypt(BSTR CertID, BSTR InData) ;
	������	ʹ��֤������ݼ��ܡ���PKCS#1��ʽ��
	������	BSTR Cert[in]
			BSTR InData[in]
	����ֵ��	BSTR  rv
			��ֵ
	��ע��	��Ϊ��PKCS#1��ʽ���ʼ��ܵ����ݳ���ҪС��֤���λ��������1024λ��֤�飬InData���ȱ���С��128
	*/
	CLIENTAPI(SERVERAPI(24)) virtual BSTR SOF_PriKeyDecrypt(BSTR CertID, BSTR InData) = 0;

	/* C25 S25
	ԭ�ͣ�	BSTR SOF_SignDataByP7(BSTR CertID, BSTR InData)
	������	���ַ������ݽ�������ǩ����ǩ����ʽΪPKCS#7
	������	BSTR CertID[in]	֤���ʶ
			BSTR  InData[in]	ǩ��ԭ��
	����ֵ��	BSTR  ret 	ǩ�����
			��ֵ	ʧ��
	��ע��	PKCS#7ǩ���������ԭ��+ǩ����֤��+ǩ��ֵ��
	*/
	CLIENTAPI(SERVERAPI(25)) virtual BSTR SOF_SignDataByP7(BSTR CertID, BSTR InData) = 0;

	/* C26 S26
	ԭ�ͣ�	BOOL SOF_VerifySignedDataByP7 (BSTR P7Data) ;
	������	��֤����ǩ��
	������	BSTR P7Data[in]	PKCS#7ǩ����
	����ֵ��	TRUE	�ɹ�
			FALSE	ʧ��
	*/
	CLIENTAPI(SERVERAPI(26)) virtual BOOL SOF_VerifySignedDataByP7(BSTR P7Data) = 0;

	/* C27 S27
	ԭ�ͣ�	BSTR SOF_GetP7SignDataInfo ( BSTR P7Data��short type) ;
	������	����PKCS#7ǩ��������Ϣ���ɻ��ԭ�ġ�ǩ��ֵ��ǩ��֤�����Ϣ
	������	BSTR P7Data[in]	PKCS#7ǩ����
			short type[in]	����
	����ֵ��	BSTR ret	�ɹ�
			��ֵ	ʧ��
	��ע��	���ͣ�1��ԭ�ģ�2��ǩ����֤�飻3��ǩ��ֵ
	*/
	CLIENTAPI(SERVERAPI(27)) virtual BSTR SOF_GetP7SignDataInfo(BSTR P7Data, short type) = 0;

	/* C28 S28
	ԭ�ͣ�	BSTR SOF_SignDataXML(BSTR CertID, BSTR InData) ;
	������	��XML���ݽ�������ǩ����������Ϲ��ʱ�׼��XMLǩ�����
	������	BSTR CertID[in]	֤���ʶ
			BSTR  InData[in]	ǩ��ԭ�ģ�XML��ʽ
	����ֵ��	BSTR  ret	ǩ�����
			��ֵ	ʧ��
	��ע��	XMLǩ����׼�� http://www.w3.org/TR/xmldsig-core/
	*/
	CLIENTAPI(SERVERAPI(28)) virtual BSTR SOF_SignDataXML(BSTR CertID, BSTR InData) = 0;

	/* C29 S29
	ԭ�ͣ�	BOOL  SOF_VerifySignedDataXML (BSTR InData) ;
	������	��֤xmlǩ��
	������	BSTR  InData[in]	XMLǩ��ֵ
	����ֵ��	TRUE	�ɹ�
			FALSE	ʧ��
	��ע��	XMLǩ����׼�� http://www.w3.org/TR/xmldsig-core/
	*/
	CLIENTAPI(29) virtual BOOL  SOF_VerifySignedDataXML(BSTR InData) = 0;

	/* C30 S30
	ԭ�ͣ�	BSTR  SOF_GetXMLSignatureInfo (BSTR XMLSignedData,short type) ;
	������	����XMLǩ�����ݣ���ȡǩ��ֵ��XMLԭ�ġ�֤�����Ϣ
	������	BSTR  XMLSignedData[in]
			Type[in]
	����ֵ��	�����Ӧ����Ϣ
	��ע��	type��ѡ�Ĳ��������壺1��xmlԭ�ģ�2��ժҪ��3��ǩ��ֵ��4��ǩ��֤�飻5��ժҪ�㷨��6��ǩ���㷨��ʧ�ܷ��ؿ�ֵ
	*/
	CLIENTAPI(SERVERAPI(30)) virtual BSTR  SOF_GetXMLSignatureInfo(BSTR XMLSignedData, short type) = 0;

	/* 31
	ԭ�ͣ�	Int SOF_CheckSupport();
	������	���ؼ��Ƿ�֧�ֵ�ǰ����ϵͳ��������汾
	������	��
	����ֵ��	int rv	0��ʾ֧�֣�1��ʾ��֧�֡�
	*/
	CLIENTAPI(31) virtual int SOF_CheckSupport() = 0;

	/* C32 S11
	ԭ�ͣ�	BSTR SOF_GenRandom(short len);
	������	���������
	������	int RanddomLen[in]	����������������ȣ�bytes���ֽڳ��ȣ�
	����ֵ��	BSTR rv	�����ֵ��Base64�����ģ�
	*/
	CLIENTAPI(32) SERVERAPI(11) virtual BSTR SOF_GenRandom(short len) = 0;

	/* S31
	ԭ�ͣ�	BSTR SOF_CreateTimeStampRequest(BSTR InData);
	������	����ʱ�������
	������	BSTR  InData	������ʱ��������ԭ��
	����ֵ��	BSTR  ret	ʱ�������base64�����ʽ��
	��ֵ	ʧ��
	��ע��	������룺
	SOR_NULLPOINTER: �����ĳһ������Ϊnull
	*/
	SERVERAPI(31) virtual BSTR SOF_CreateTimeStampRequest(BSTR InData) = 0;

	/* S32
	ԭ�ͣ�	BSTR SOF_CreateTimeStampResponse (BSTR InData);
	������	����ʱ�����Ӧ����ǩ��ʱ���
	������	BSTR  InData	ʱ�������
	����ֵ��	BSTR  ret	ʱ�����Ӧ��base64�����ʽ��
	��ֵ	ʧ��
	��ע��	������룺
	SOR_NULLPOINTER: �����ĳһ������Ϊnull��
	SOR_SIGNDATA ��ǩ��ʱ���ʧ��
	*/
	SERVERAPI(32) virtual BSTR SOF_CreateTimeStampResponse(BSTR InData) = 0;

	/* S33
	ԭ�ͣ�	int  SOF_VerifyTimeStamp(BSTR content��BSTR tsResponseData);
	������	��֤ʱ���
	������	BSTR  content	����֤��ԭ��
	BSTR tsResponseData	ʱ���
	����ֵ��	0		�ɹ�
	����	��������
	��ע��	������룺
	SOR_NULLPOINTER: �����ĳһ������Ϊnull��
	SOR_VERIFYSIGNDATA����֤ʱ���ʧ��
	*/
	SERVERAPI(33) virtual int  SOF_VerifyTimeStamp(BSTR conten, BSTR tsResponseData) = 0;

	/* S34
	ԭ�ͣ�	BSTR SOF_GetTimeStampInfo(BSTR tsResponseData,int type);
	������	����ʱ��������ʱ�������Ϣ������ʱ�䡢ʱ���������֤�顢ǩ��ֵ��
	������	BSTR tsResponseData	ʱ���
	int type	����
	����ֵ��	type��Ӧ��ֵ	�ɹ�
	null	����
	��ע��	������룺
	SOR_NULLPOINTER: �����ĳһ������Ϊnull��
	SOR_VERIFYSIGNDATA����֤ʱ���ʧ�ܡ�
	SOR_PARAMETERNOTSUPPORT����֧�ֵĲ���
	type =1������ʱ�䣻type ��2������ǩ��ֵ��type ��3������ǩ��֤�顣
	*/
	SERVERAPI(34) virtual BSTR SOF_GetTimeStampInfo(BSTR tsResponseData, int type) = 0;

	/* S35
	ԭ�ͣ�	int SOF_GetLastError();
	������	����ϸ������Ĵ�����
	������	��
	*/
	SERVERAPI(35) virtual int SOF_GetLastError() = 0;
};

