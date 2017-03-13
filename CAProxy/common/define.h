#pragma once

#define IN
#define OUT
#define INOUT


/** �ͻ��˿ؼ���COM����ĺ�������ֵ����� ***/
#define SOR_OK					0	//�ɹ�
#define SOR_UnknownErr			0X0B000001	//�쳣����
#define SOR_NotSupportYetErr	0X0B000002	//��֧�ֵķ���
#define SOR_FileErr				0X0B000003	//�ļ���������
#define SOR_ProviderTypeErr		0X0B000004	//�����ṩ�߲������ʹ���
#define SOR_LoadProviderErr		0X0B000005	//��������ṩ�߽ӿڴ���
#define SOR_LoadDevMngApiErr	0X0B000006	//�����豸����ӿڴ���
#define SOR_AlgoTypeErr			0X0B000007	//�㷨���ʹ���
#define SOR_NameLenErr			0X0B000008	//���Ƴ��ȴ���
#define SOR_KeyUsageErr			0X0B000009	//��Կ��;����
#define SOR_ModulusLenErr		0X0B000010	//ģ�ĳ��ȴ���
#define SOR_NotInitializeErr	0X0B000011	//δ��ʼ��
#define SOR_ObjErr				0X0B000012	//�������
#define SOR_MemoryErr			0X0B000100	//�ڴ����
#define SOR_TimeoutErr			0X0B000101	//����ʱ
#define SOR_IndataLenErr		0X0B000200	//�������ݳ��ȴ���
#define SOR_IndataErr			0X0B000201	//�������ݴ���
#define SOR_GenRandErr			0X0B000300	//�������������
#define SOR_HashObjErr			0X0B000301	//HASH�����
#define SOR_HashErr				0X0B000302	//HASH�������
#define SOR_GenRsaKeyErr		0X0B000303	//����RSA��Կ��
#define SOR_RsaModulusLenErr	0X0B000304	//RSA��Կģ������
#define SOR_CspImprtPubKeyErr	0X0B000305	//CSP�����빫Կ����
#define SOR_RsaEncErr			0X0B000306	//RSA���ܴ���
#define SOR_RSGDecErr			0X0B000307	//RSA���ܴ���
#define SOR_HashNotEqualErr		0X0B000308	//HASHֵ�����
#define SOR_KeyNotFountErr		0X0B000309	//��Կδ����
#define SOR_CertNotFountErr		0X0B000310	//֤��δ����
#define SOR_NotExportErr		0X0B000311	//����δ����
#define SOR_DecryptPadErr		0X0B000400	//����ʱ����������
#define SOR_MacLenErr			0X0B000401	//MAC���ȴ���
#define SOR_KeyInfoTypeErr		0X0B000402	//��Կ���ʹ���
#define SOR_NULLPointerErr		0X0B000403	//ĳһ������Ϊ��ָ��
#define SOR_APPNOTFOUNDErr		0X0B000404	//û���ҵ���Ӧ��
#define SOR_CERTENCODEErr		0X0B000405	//֤������ʽ����
#define SOR_CERTINVALIDErr		0X0B000406	//֤����Ч�����ǿ���ca�䷢��֤�顣
#define SOR_CERTHASEXPIREDErr	0X0B000407	//֤���ѹ��ڡ�
#define SOR_CERTREVOKEDErr		0X0B000408	//֤���Ѿ���������
#define SOR_SIGNDATAErr			0X0B000409	//ǩ��ʧ�ܡ�
#define SOR_VERIFYSIGNDATAErr	0X0B000410	//��֤ǩ��ʧ��
#define SOR_READFILEErr			0X0B000411	//���ļ��쳣�������ļ������ڻ�û�ж�ȡȨ�޵ȡ�
#define SOR_WRITEFILEErr		0X0B000412	//д�ļ��쳣�������ļ������ڻ�û��дȨ�޵�
#define SOR_SECRETSEGMENTErr	0X0B000413	//�����㷨��Կ�ָ�ʧ�ܡ�
#define SOR_SECERTRECOVERYErr	0X0B000414	//���޻ָ�ʧ�ܡ�
#define SOR_ENCRYPTDATAErr		0X0B000415	//�����ݵĶԳƼ���ʧ��
#define SOR_DECRYPTDATAErr		0X0B000416	//�Գ��㷨�����ݽ���ʧ�ܡ�
#define SOR_PKCS7ENCODEErr		0X0B000417	//PKCS#7�����ʽ����
#define SOR_XMLENCODEErr		0X0B000418	//���ǺϷ���xml��������
#define SOR_PARAMETERNOTSUPPORTErr	0X0B000419	//��֧�ֵĲ���

#define SOR_LoginErr			0X0B000420	//��¼ʧ��
#define SOR_AddP7BErr			0X0B000421	//��������б�ʧ��
#define SOR_CertRevokedErr		0X0B000422	//֤����ע��



/***** ֤����Ϣ��������� *****/
#define SGD_GET_CERT_VERSION	0x00000001	//֤��汾
#define SGD_GET_CERT_SERIAL		0x00000002	//֤�����к�
#define SGD_GET_CERT_SIGNALG	0x00000003	//֤��ǩ���㷨��ʶ
#define SGD_GET_CERT_ISSUER_C	0x00000004	//֤��䷢�߹���(C)
#define SGD_GET_CERT_ISSUER_O	0x00000005	//֤��䷢����֯��(O)
#define SGD_GET_CERT_ISSUER_OU	0x00000006	//֤��䷢�߲�����(OU)
#define SGD_GET_CERT_ISSUER_S	0x00000007	//֤��䷢�����ڵ�ʡ����������ֱϽ��(S)
#define SGD_GET_CERT_ISSUER_CN	0x00000008	//֤��䷢��ͨ������(CN)
#define SGD_GET_CERT_ISSUER_L	0x00000009	//֤��䷢�����ڵĳ��С�����(L)
#define SGD_GET_CERT_ISSUER_E	0x00000010	//֤��䷢��Email
#define SGD_GET_CERT_NOTBEFORE	0x00000011	//֤����Ч�ڣ���ʼ����
#define SGD_GET_CERT_AFTER		0x00000012	//֤����Ч�ڣ���ֹ����
#define SGD_GET_CERT_SUBJECT_C	0x00000013	//֤��ӵ���߹���(C )
#define SGD_GET_CERT_SUBJECT_O	0x00000014	//֤��ӵ������֯��(O)
#define SGD_GET_CERT_SUBJECT_OU	0x00000015	//֤��ӵ���߲�����(OU)
#define SGD_GET_CERT_SUBJECT_S	0x00000016	//֤��ӵ�������ڵ�ʡ����������ֱϽ��(S)
#define SGD_GET_CERT_SUBJECT_CN	0x00000017	//֤��ӵ����ͨ������(CN)
#define SGD_GET_CERT_SUBJECT_L	0x00000018	//֤��ӵ�������ڵĳ��С�����(L)
#define SGD_GET_CERT_SUBJECT_E	0x00000019	//֤��ӵ����Email
#define SGD_GET_CERT_ISSUER_DN	0x00000020	//֤��䷢��DN
#define SGD_GET_CERT_SUBJECT_DN	0x00000021	//֤��ӵ����DN
#define SGD_GET_CERT_DER_PUBKEY	0x00000022	//֤�鹫Կ��Ϣ
#define SGD_GET_CERT_DER_EXTENSIONS		0x00000023	//֤����չ����Ϣ
#define SGD_EXT_AUTHORITYKEYIDENTIFIER	0x00000024	//�䷢����Կ��ʶ��
#define SGD_EXT_SUBJECTKEYIDENTIFIER	0x00000025	//֤���������Կ��ʶ��
#define SGD_EXT_KEYUSAGE				0x00000026	//��Կ��;
#define SGD_EXT_PRIVATEKEYUSAGEPERIOD	0x00000027	//˽Կ��Ч��
#define SGD_EXT_CERTIFICATEPOLICIES		0x00000028	//֤�����
#define SGD_EXT_POLICYMAPPINGS			0x00000029	//����ӳ��
#define SGD_EXT_BASICCONSTRAINTS		0x00000030	//��������
#define SGD_EXT_POLICYCONSTRAINTS		0x00000031	//��������
#define SGD_EXT_EXTKEYUSAGE				0x00000032	//��չ��Կ��;
#define SGD_EXT_CRLDISTRIBUTIONPO		0x00000033	//CRL������
#define SGD_EXT_NETSCAPE_CERT_TYPE		0x00000034	//netscape����
#define SGD_EXT_CERT_UNIQUEID			0x00000035	//֤��ʵ��Ψһ��ʶ
#define SGD_EXT_IDENTIFYCARDNUMBER		0x00000036	//�������֤����
#define SGD_EXT_INURANCENUMBER			0x00000037	//������ᱣ�պ�
#define SGD_EXT_ICREGISTRATIONNUMBER	0x00000038	//��ҵ����ע���
#define SGD_EXT_ORGANIZATIONCODE		0x00000039	//��ҵ��֯��������
#define SGD_EXT_TAXATIONNUMBER			0x00000040	//˰��Ǽ�֤��


/***** ֤���Ӧ��Ϣ�� *****/
#define CERT_SUBJECT		1	//�û���
#define CERT_UNIQUEID		2	//֤��ʵ��Ψһ��ʶ
#define CERT_DEPT			3	//����
#define CERT_ISSUE			4	//�䷢��DN
#define CERT_DEVICETYPE		8	//֤���������
#define CERT_CATYPE			9	//CA����
#define CERT_KEYTYPE		10	//�û�֤����Կ���ͣ���˫֤��֤��
#define CERT_DEVICENAME		13	//�û�֤���������
#define CERT_DEVICEPROVIDER	14	//�û�֤������ṩ�߼�csp����
#define CERT_DEVICEAFFIX	15	//�û�֤����ʸ��ӿ�
#define CERT_SIGNPATH		16	//�û�ǩ��֤��·��
#define CERT_EXCHPATH		17	//�û�����֤��·��
#define CERT_SIGNPFXPATH	18	//�û�ǩ��P12֤��·��
#define CERT_EXCHPFXPATH	19	//�û�����P12֤��·��
#define CERT_UNIQUEIDOID	22	//�û�֤��UniqueID��OID


/***** �Գ��㷨��ʶ *****/
#define SGD_SM1_ECB		0x00000101	//SM1�㷨ECB����ģʽ
#define SGD_SM1_CBC		0x00000102	//SM1�㷨CBC����ģʽ
#define SGD_SM1_CFB		0x00000104	//SM1�㷨CFB����ģʽ
#define SGD_SM1_OFB		0x00000108	//SM1�㷨OFB����ģʽ
#define SGD_SM1_MAC		0x00000110	//SM1�㷨MAC����ģʽ
#define SGD_SSF33_ECB	0x00000201	//SSF33�㷨ECB����ģʽ
#define SGD_SSF33_CBC	0x00000202	//SSF33�㷨CBC����ģʽ
#define SGD_SSF33_CFB	0x00000204	//SSF33�㷨CFB����ģʽ
#define SGD_SSF33_OFB	0x00000208	//SSF33�㷨OFB����ģʽ
#define SGD_SSF33_MAC	0x00000210	//SSF33�㷨MAC����ģʽ


/***** �ǶԳ��㷨��ʶ *****/
#define SGD_SM2_1	0x00020100	//SM2ǩ���㷨
#define SGD_SM2_2	0x00020200	//SM2��Կ����Э��
#define SGD_SM2_3	0x00020400	//SM2�����㷨
#define SGD_RSA		0x00010000	//RSA�㷨


/***** �Ӵ��㷨��ʶ *****/
#define SGD_SM3		0x00000001	//SM3�Ӵ��㷨
#define SGD_SHA1	0x00000002	//SHA1�Ӵ��㷨
#define SGD_SHA256	0x00000004	//SHA256�Ӵ��㷨


/***** ǩ���㷨��ʶ *****/
#define SGD_SHA1_RSA	0x00001002	//Sha1RSA�㷨
#define SGD_SHA256_RSA	0x00001004	//Sha256RSA�㷨
#define SGD_SM3_RSA		0x00001001	//SM3RSA�㷨
#define SGD_SM3_SM2		0x00020101	//SM3SM2�㷨
