#ifndef _ZIP_API_H_
#define _ZIP_API_H_

#define NAME_SIZE 16

typedef struct 
{
    char filename[NAME_SIZE + 1];//�ļ���
    int size;//��ѹ����ļ���С
}ZFILEINFO;

/*----------------------------
 *����zip�ļ���������ڣ������滻
 *filename:�ļ���
 *����<0ʧ�ܣ�>=0 ���������
---------------------------------*/
int CreateZip(const char* filename);

/*----------------------------
 *����ļ���zip�ļ���
 *fid��CreateZip���ص��ļ����������
 *filename:�ļ���
 *���� <0 ʧ�ܣ�0�ɹ�
---------------------------------*/
int AddFiletoZip(int fid, char *filename);

/*----------------------------
 *�ر�zip�ļ���
 *fid��CreateZip���ص��ļ����������
 *���� <0 ʧ�ܣ�0�ɹ�
---------------------------------*/
int CloseZip(int fid, const char* global_comment);

/*----------------------------
 *��ѹzip�ļ���
 *z_filename: zip�ļ���
 *���� <0 ʧ�ܣ�0�ɹ�
 *���zip�ļ�����Ŀ¼��ֻ�Ὣ�ļ���ѹ�������������ڵ�Ŀ¼�ṹ
---------------------------------*/
int Unzip(const char *z_filename);

/*----------------------------
 *��ȡzip�ļ�ָ���ļ�����ѹ������ݼ���С��
 * z_filename: zip�ļ���
 * i_filename:�����ļ���
 * buf������
 * size����������С
 * >=0����ʵ�ʵ����ݴ�С,<0ʧ��
 * ��������zip�ڵ�Ŀ¼���ļ��� ƥ���һ�����ϵ��ļ���
---------------------------------*/
int UnzipFileByName(const char *z_filename, const char *i_filename,
					unsigned char *buf, int size);

/*----------------------------
 *��ȡzip�ļ��ڵ��ļ���Ϣ�ṹ��
 * z_filename: zip�ļ���
 * f_info:�ļ���Ϣ������
 * n:Ԥ��ȡ��f_info����Ŀ
 *����<0ʧ�ܣ�>=0��ȡ�����ļ���Ϣ��Ŀ��
 * ��������zip�ڰ���Ŀ¼����ļ���
---------------------------------*/
int ZipFileInfo(const char *z_filename, ZFILEINFO *f_info, int n);

int CompressData(unsigned char *out, unsigned int *outLen,
			 const unsigned char *in, unsigned int inLen);

int DecompressData(unsigned char *out, unsigned int *outLen,
			 const unsigned char *in, unsigned int inLen);
#endif
