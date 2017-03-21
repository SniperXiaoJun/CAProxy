/**********************************************************************
	�ļ���ģ�飩����HYErrorCode.h
	�汾��V0.1
	���ߣ�Zhl
	����˵������Ծ��Ŀʹ�õĴ����붨��
	�޶���
	���� 2010-04-08 Zhl
**********************************************************************/
#ifndef _HY_ERROR_CODE_H
#define _HY_ERROR_CODE_H


#define HT_RETURN_SUCCEED				0x00000000	//���سɹ�

#define HKI_ERR_DEV_INDEX				0x80100070	//�豸�����ų���
#define HKI_ERR_DEV_INUSE				0x80100071	//���豸�Ѵ�������״̬����ȴ������³�������
#define HKI_ERR_DEV_READERLEN			0x80100072	//ȡ�豸����ʱ�����豸������
#define HKI_ERR_DEV_INVALIDCTX			0x80100073	//�ͷ��豸ʱ��ָ�����豸�����Ч���������ѵ��ù�HKDisconnectDev����
#define HKI_ERR_DEV_BYNAME				0x80100074	//�Ҳ���ָ�����豸������豸������
#define HKI_ERR_DEV_INVALIDINDEX		0x80100075	//��Ч���豸������
#define HKI_ERR_DEV_NOTFOUND			0x80100076	//δ���ָ��豸
#define HKI_ERR_DEV_ATR_LENGTH			0x80100077	//ȡ���к�ʱ������ATR�ĳ�������ӦΪ2-32�ֽڡ�
#define HKI_ERR_DEV_ATR_FLAG			0x80100078	//ȡ���к�ʱ������ATR�����ֽڱ�־����ȷ��ӦΪ3B��3F
#define HKI_ERR_DEV_ATR_VALUE			0x80100079	//ȡ���к�ʱ������ʶ��ATR���ݵĸ�ʽ������û���ҵ�0x8888��־
#define HKI_ERR_DEV_HID_CRC				0x80100081	//HID�豸ͨ��ʱ������żУ�����
#define HKI_ERR_DEV_HID_TIMEOUT			0x80100082	//HID�豸ͨ��ʱ������ʱ����
#define HKI_ERR_DEV_HID_RESET			0x80100083	//HID�豸ͨ��ʱ������Ƭ��λ��ϢTS��BCC����
#define HKI_ERR_DEV_HID_LEN				0x80100084	//HID�豸ͨ��ʱ�������ȴ���
#define HKI_ERR_DEV_HID_BCC				0x80100085	//HID�豸ͨ���У���������͵�����ϵ��У�����
#define HKI_ERR_DEV_HID_WRITE			0x80100086	//HID�豸д��������
#define HKI_ERR_DEV_HID_READ			0x80100087	//HID�豸����������
#define HKI_ERR_CRYPT_INVALIDPARAM		0x801000A8	////�����ĺ�����������Чֵ��
#define HKI_ERR_MEM_NULLPTR				0x801000A9	//��Ϊ������ָ��Ϊ��
#define HKI_ERR_MEM_BUFTOOSMALL			0x801000AA	//������ڴ�ռ䲻��
#define HKI_ERR_EVT_INVALID				0x801000AB	//��Ч���豸��δ����¼����
#define HKI_ERR_MUTEX_OBJHOST			0x801000AC	//��ǰ�������Ķ�����࣬����ʣ����Դ����
#define HKI_ERR_UNKOWN					0x801000AD	//δ�������
#define HKI_PIN_LEN_ERROR				0x801000AF	//����ȴ���
#define HKI_PIN_RETRY_NUM_ERROR			0x801000B0	//������������������
#define HKI_DEVICE_NAME_LEN_ERROR		0x801000B1	//�豸���ֳ��ȴ���
#define HKI_FILE_TYPE_ERROR				0x801000B2	//�ļ����ʹ���
#define HKI_WRITE_DATA_LEN_ERROR		0x801000B3	//д������ݳ��ȴ���
#define HKI_READ_DATA_LEN_ERROR			0x801000B4	//���������ݳ��ȴ���
#define HKI_RSA_PADDING_TYPE_ERROR		0x801000B5	//RSA�������ʹ���
#define HKI_RSA_DATA_LEN_ERROR			0x801000B6	//RSA���ݳ��ȴ���
#define HKI_ACCESS_TYPE_ERROR			0x801000B7	//Ȩ�����ʹ���
#define HKI_INPUT_DATA_LEN_ERROR		0x801000B8	//SSF33/DES�㷨��������ݳ��ȴ��󣬱���Ϊ16/8�ı���
#define HKI_DEVICE_CMS_DIFFER_ERROR		0x801000B9	//�豸�������Ĵ�С���豸���Ͳ���
#define HKI_KEY_LEN_ERROR				0x801000BA	//SSF33��Կ���ȴ��� �� ��ǰҲʹ�ù� 0x801000BE HKI_SSF33KEY_LEN_ERROR
#define HKI_KEY_ID_ERROR				0x801000BB	//SSF33��ԿID���� �� ��ǰҲʹ�ù�  HKI_SSF33KEY_ID_ERROR
#define HKI_INVALID_PARAM_TYPE			0x801000BC	//�Ƿ��Ĳ�������
#define HKI_RET_DATA_LEN_ERROR			0x801000BD	//�豸���ص����ݳ��ȴ���
#define HKI_ERROR_NOT_ENOUGH_MEMORY		0x801000BF	//�ڴ治��
#define HKI_ENCRYPT_DECRYPT_MODE_ERROR	0x801000C0	//�ӽ���ģʽ����
#define HKI_STRTOHEX_INPUT_DATA_ERROR	0x801000C1	//�ַ�ת�����ݴ���
#define HKI_NOT_SUPPORT_ERROR			0x801000C2	//���ܲ�֧��
#define HKI_FILE_ID_INVALID_ERROR		0x801000C3	//�ļ�IDȡֵ��Χ���Ϸ�
#define HKI_PADDING_INVALID_ERROR		0x801000C4	//���ݵĲ�������
#define HKI_NOT_SUPPORT_SYM				0x801000C5	//��֧�ָ��㷨

#define HK_LENGTH_INVALID_ERROR			0x80106700	//д�����ݵĳ��ȴ���  , ��ǰҲʹ�ù�0x8010676F��
#define HK_ID_EXIST_ERROR				0x80106AEF	//��ʶ���Ѵ���
#define HK_NOT_SUPPORT_ERROR			0x80106AF0	//���ܲ�֧��
#define HK_ID_NOT_FOUND_ERROR			0x80106AF1	//δ�ҵ��ļ�
#define HK_NOT_ENOUGH_SIZE				0x80106AF3	//�ռ䲻��
#define HK_X_TIMES_LEFT					0x80106430	//--0x8010643E	У�������󣬻���x�λ��ᣬx���Դ�0xF~0x1
#define HK_X_TIMES_LEFT					0x80106430	//--0x8010643E	У�������󣬻���x�λ���
#define HK_1_TIMES_LEFT					0x80106430	//--0x8010643E	У�������󣬻���x�λ���
#define HK_2_TIMES_LEFT					0x80106431	//--0x8010643E	У�������󣬻���x�λ���
#define HK_3_TIMES_LEFT					0x80106432	//--0x8010643E	У�������󣬻���x�λ���
#define HK_4_TIMES_LEFT					0x80106433	//--0x8010643E	У�������󣬻���x�λ���
#define HK_5_TIMES_LEFT					0x80106434	//--0x8010643E	У�������󣬻���x�λ���
#define HK_6_TIMES_LEFT					0x80106435	//--0x8010643E	У�������󣬻���x�λ���
#define HK_7_TIMES_LEFT					0x80106436	//--0x8010643E	У�������󣬻���x�λ���
#define HK_8_TIMES_LEFT					0x80106437	//--0x8010643E	У�������󣬻���x�λ���
#define HK_9_TIMES_LEFT					0x80106438	//--0x8010643E	У�������󣬻���x�λ���
#define HK_A_TIMES_LEFT					0x80106439	//--0x8010643E	У�������󣬻���x�λ���
#define HK_B_TIMES_LEFT					0x8010643A	//--0x8010643E	У�������󣬻���x�λ���
#define HK_C_TIMES_LEFT					0x8010643B	//--0x8010643E	У�������󣬻���x�λ���
#define HK_D_TIMES_LEFT					0x8010643C	//--0x8010643E	У�������󣬻���x�λ���
#define HK_E_TIMES_LEFT					0x8010643D	//--0x8010643E	У�������󣬻���x�λ���
#define HK_F_TIMES_LEFT					0x8010643E	//--0x8010643E	У�������󣬻���x�λ���
#define HK_NOT_ACCESS_ERROR				0x801069F1	//��ȫ����������
#define HK_PIN_LOCKED_ERROR				0x801069F2	//�������
#define HT_PARAM_ERROR					0x88000001	//�����e�`
#define HT_CONTEXT_ERROR				0x88000002	//PC/SC�����Į���
#define HT_LIST_READER_ERROR			0x88000003	//ö�eӲ�w�O��ʧ��
#define HT_LINK_ERROR					0x88000004	//�B��Ӳ�w�O��ʧ��
#define HT_UNLINK_ERROR					0x88000005	//���_Ӳ�w�O���B��ʧ��
#define HT_RESET_ERROR					0x88000006	//��λʧ��
#define HT_PCSC_ERROR					0x88000007	//PC/SCͨӍ�e�`
#define HT_UNKNOWN_ERROR				0x88000008	//δ֪�e�`
#define HT_DATA_ERROR					0x88000020	//�Y���e�`
#define HT_DATA_LEN_ERROR				0x88000021	//�Y���L���e�`
#define HT_CREATE_MF_ERROR				0x88000030	//����MF�e�`
#define HT_ACTIVE_MF_ERROR				0x88000031	//����MF�e�`
#define HT_DELETE_MF_ERROR				0x88000032	//�h��MF�e�`
#define HT_CREATE_DF_ERROR				0x88000033	//����DF�e�`
#define HT_CREATE_EF_ERROR				0x88000034	//�����n�e�`
#define HT_NO_MF						0x88000035	//�]��MF
#define HT_NO_DF						0x88000036	//�]��DF
#define HT_NO_EF						0x88000037	//ԓ�ļ�������
#define HT_EF_EXIST						0x88000038	//�ļ��Ѵ���
#define HT_HW_NO_SPACE					0x88000039	//Ӳ�w�]�п��g
#define HT_HW_INVALID_FORMAT			0x8800003A	//Ӳ�w�ĸ�ʽ����
#define HT_WRITE_KEY_ERROR				0x8800003B	//������e�`
#define HT_PIN_LEN_ERROR				0x8800003C	//pin���L���e�`
#define HT_PIN_ERROR					0x8800003D	//pin�e�`
#define HT_PIN_LOCK						0x8800003E	//pin���i��
#define HT_READ_ERROR					0x8800003F	//�x�e�`
#define HT_WRITE_ERROR					0x88000040	//���e�`
#define HT_RSA_MODE_ERROR				0x88000041	//RSAģʽ�e�`
#define HT_LABEL_LEN_ERROR				0x88000042	//Label��S-Key���֣��L���e�`
#define HT_NEED_RIGHT_ERROR				0x88000043	//����ԓ������Ҫ�S�ə�
#define HT_COMMAND_ERROR				0x88000044	//Ӳ�wָ��شa�e�`
#define HT_SERIAL_ATR_ERROR				0x88000045	//ȡ����̖�r������ATR�����`
#define HT_DONT_SUPPORT_ERROR			0x88000046	//��֧Ԯԓ����
#define HT_CSP_CONTAINER_EXIST			0x88000050	//CSP��������Ѵ���
#define HT_CSP_SILENT_ERROR				0x88000051	//�����CSP�����S����UI���Ñ����棩�r
#define HT_CSP_NO_KEY					0x88000052	//�]���ҵ�RSA��而������P���������_
#define HT_CSP_ERROR					0x88000053	//�{��CSPʧ��
#define HT_INSTALL_ERROR				0x88000060	//�]���ҵ����b�
#define HT_USER_CANCEL					0x88000061	//��UI���Ñ����棩���Ñ��x���ˡ�ȡ�������o
#define HT_LOAD_DLL_ERROR				0x88000062	//�d��ӑB��ʧ��
#define HT_SYS_VER_ERROR				0x88000063	//���Iϵ�y�汾��98,me����֧Ԯԓ����
#define HT_P12_ERROR					0x88000064	//p12�C���������_����
#define HT_P12_PWD_ERROR				0x88000065	//p12�C�������e�`
#define HT_TOO_MORE_FILE_CREATE			0x88000066	//�������^����Ñ��Զ��x�n
#define HT_NO_CACHED_DATA   			0x88000067	//�������ݲ�����
#define HT_NO_CONTAINER   				0x88000068	//����������
#define HT_INVALID_PARAMETER			0xE0020002	//��������
#define HT_BUFFER_NOT_ENOUGH			0xE0020003	//�����ռ䲻��
#define HT_HOST_MEMORY					0xE0020004	//�����ڴ治��
#define HT_FUNC_NOT_SUPPORT				0xE0020005	//���ܲ�֧��
#define HT_DEVICE_NUM_TOO_LARGE			0xE0020006	//�豸��������
#define HT_INVALID_HANDLE				0xE0020007	//�����Ч
#define HT_DEVICE_NO_RESPONSE			0xE0020008	//�豸����Ӧ
#define HT_NO_DEVICE					0xE0020009	//û���豸
#define HT_DEVICE_NOT_IDENTIFIED		0xE002000A	//�豸����ʶ��(��λ��Ϣ����)
#define HT_BAD_CHECKSUM					0xE002000B	//ͨ��У�����
#define HT_ERR_SEND_DATA				0xE002000C	//�������ݹ����г���
#define HT_ERR_READ_DATA				0xE002000D	//��ȡ���ݹ����г���
#define HT_COMM_TIMEOUT					0xE002000E	//��ȡ���ݹ����з�����ʱ
#define HT_BAD_DATA_FORMAT				0xE002000F	//���ݸ�ʽ����ʶ��
#define HT_NO_TOKEN						0xE0020010	//û�����ܿ�
#define HT_COS_NOT_RECOGNIZED			0xE0020011	//����ʶ���COS
#define HT_ERR_DEVICE_BYNAME			0xE0020012	//ϵͳ�豸���ƴ���
#define HT_WAIT_TIME_OUT				0xE0020013	//�ȴ���ʱ
#define HT_SERIAL_NULL					0xE0020015	//KEY�ڵ����к�Ϊ�գ�������û�п����к�
#define HT_NOT_RIGHT_PCODE			    0xE0020016	//PCODE�Ų�ƥ��
#define HT_NOT_NEED_PCODE			    0xE0020017	//����Ҫ�Ƚ�PCODE
#define HT_ENC_ERROR				    0xE0020018	//����ʧ��
#define HT_DEC_ERROR				    0xE0020019	//����ʧ��

#endif _HY_ERROR_CODE_H