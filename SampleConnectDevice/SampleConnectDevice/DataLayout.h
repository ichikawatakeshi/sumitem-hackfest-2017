#include "stdafx.h"

typedef struct SEND_LAYOUT
{
	BYTE	stx;
	BYTE	hm;
	BYTE	sykno[3];
	BYTE	syohincd[5];
	BYTE	nerikbn;
	BYTE	yb_kyodo[8];
	BYTE	yb_slump[3];
	BYTE	yb_kotsusun[2];
	BYTE	yb_cement[2];
	BYTE	hinmei[10];
	BYTE	seizoryo[3];
	BYTE	syaban[4];
	BYTE	genbamei[20];
	BYTE	sekoname[20];
	BYTE	biko[20];
	BYTE	dispsyksykryo[5];
	BYTE	dispsykdaisu[3];
	BYTE	dispsumsykryo[5];
	BYTE	dispsumdaisu[3];
	BYTE	jis;
	BYTE	yoseki[4];
	BYTE	setteichi[24][4];
	BYTE	etx;

}	SEND_LAYOUT;

typedef struct RECEIVE_LAYOUT_STATUS
{
	BYTE	stx;
	BYTE	id;
	BYTE	etx;
}	RECEIVE_LAYOUT_STATUS, *LPRECEIVE_LAYOUT_STATUS;

typedef struct RECEIVE_LAYOUT_DOKAJU
{
	BYTE	stx;

	BYTE	id;
	BYTE	batchno[4];
	struct date
	{
		BYTE	mm[2];
		BYTE	dd[2];
	} date;
	struct time
	{
		BYTE	hh[2];
		BYTE	mm[2];
	} time;
	BYTE	seizoryo[3];
	BYTE	setteichi[24][4];
	BYTE	keiryochi[24][4];
	BYTE	hyomensui[8][4];
	BYTE	yoseki[4];
	BYTE	sykno[3];
	BYTE	syaban[4];
	BYTE	haigo[5];
	BYTE	etx;

}	RECEIVE_LAYOUT_DOKAJU, *LPRECEIVE_LAYOUT_DOKAJU;