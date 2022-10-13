#include <ultra64.h>
#include <os_internal.h>
#include "piint.h"

extern s32 osPiRawStartDma(s32, u32, void *, u32); // TODO: DEFINE
extern s32 osEPiRawStartDma(OSPiHandle *, s32, u32, void *, u32); // TODO: DEFINE

extern OSDevMgr __osPiDevMgr;
extern OSPiHandle *__osPiTable;
extern OSPiHandle *__osCurrentHandle[2];
extern OSThread piThread;
extern char piThreadStack[OS_PIM_STACKSIZE];
#ifdef _DEBUG
extern OSThread ramromThread;
extern char ramromThreadStack[OS_RAMROM_STACKSIZE];
extern OSMesgQueue getRamromQ;
extern OSMesg getRamromBuf[1];
extern OSMesgQueue freeRamromQ;
extern OSMesg freeRamromBuf[1];
#endif
extern OSMesgQueue piEventQueue;
extern OSMesg piEventBuf[1];
void osCreatePiManager(OSPri pri, OSMesgQueue *cmdQ, OSMesg *cmdBuf, s32 cmdMsgCnt)
{
	u32 savedMask;
	OSPri oldPri;
	OSPri myPri;
	if (!__osPiDevMgr.active)
	{
		osCreateMesgQueue(cmdQ, cmdBuf, cmdMsgCnt);
		osCreateMesgQueue(&piEventQueue, (OSMesg*)&piEventBuf, 1);
		if (!__osPiAccessQueueEnabled)
			__osPiCreateAccessQueue();
		osSetEventMesg(OS_EVENT_PI, &piEventQueue, (OSMesg)0x22222222);
		oldPri = -1;
		myPri = osGetThreadPri(NULL);
		if (myPri < pri)
		{
			oldPri = myPri;
			osSetThreadPri(NULL, pri);
		}
		savedMask = __osDisableInt();
		__osPiDevMgr.active = 1;
		__osPiDevMgr.thread = &piThread;
		__osPiDevMgr.cmdQueue = cmdQ;
		__osPiDevMgr.evtQueue = &piEventQueue;
		__osPiDevMgr.acsQueue = &__osPiAccessQueue;
		__osPiDevMgr.dma = osPiRawStartDma;
		__osPiDevMgr.edma = osEPiRawStartDma;
		osCreateThread(&piThread, 0, __osDevMgrMain, &__osPiDevMgr, &piThreadStack[OS_PIM_STACKSIZE], pri);
		osStartThread(&piThread);
		__osRestoreInt(savedMask);
		if (oldPri != -1)
		{
			osSetThreadPri(NULL, oldPri);
		}
	}
}
