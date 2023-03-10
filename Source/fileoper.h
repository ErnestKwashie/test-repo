
/****************************************************************************
NAME
    fileoper.h - 

DESCRIPTION

REFERENCE

MODIFICATION SHEET:
    MODIFIED   (YYYY.MM.DD)
    shengjx     2006.09.12      - created
****************************************************************************/

#ifndef _FILEOPER_H
#define _FILEOPER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int InitTranLogFile(void);
int LoadSysParam(void);
int SaveSysParam(void);
int SaveEdcParam(void);
int SavePassword(void);
int ExistSysFiles(void);
int ValidSysFiles(void);
void RemoveSysFiles(void);
int LoadSysCtrlAll(void);
int SaveSysCtrlAll(void);
int SaveSysCtrlBase(void);
int SaveSysCtrlNormal(void);
int SaveField56(void);
int SaveRevInfo(uchar bSaveRevInfo);
int SaveRePrnStlInfo(void);
int LoadTranLog(void *pstLog, ushort uiIndex);
int UpdateTranLog(const void *pstLog, ushort uiIndex);
int SaveTranLog(const void *pstLog);
int RecoverTranLog(void);
ushort GetTranLogNum(uchar ucAcqKey);
uchar AllowDuplicateTran(void);
int GetRecord(uint uiStatus, void *pstOutTranLog);
void CalcTotal(uchar ucAcqKey);
int SaveEmvStatus(void);
int LoadEmvStatus(void);
int SaveEmvErrLog(void);
int LoadErrLog(ushort uiRecNo, void *pOutErrLog);
int SyncPassword(void);
int LastRecordIsFallback(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif	// _FILEOPER_H

// end of file
