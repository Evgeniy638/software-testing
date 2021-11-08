/*
 * Code for class PHONE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ph981.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PHONE}.make */
void F38_7456 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("make", 37, Current, 0, 3, 13336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {PHONE}.message */
EIF_INTEGER_32 F38_7457 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {PHONE}.sleep_time */
EIF_INTEGER_32 F38_7458 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {PHONE}.gangster */
EIF_REFERENCE F38_7459 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PHONE}.start_infinite_loop */
void F38_7460 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start_infinite_loop", 37, Current, 1, 0, 13340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) 0) break;
		RTHOOK(3);
		loc1++;
		RTHOOK(4);
		(nstcall = 0, F38_7461(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PHONE}.run */
void F38_7461 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("run", 37, Current, 1, 0, 13341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = (EIF_REFERENCE) tr1;
	{
		RTS_SD;
		int uarg;
		int uarg1 = RTS_OU (loc1);
		uarg = uarg1;
		if (uarg) {
			RTS_RC;
			if (uarg1) RTS_RS (loc1);
			RTS_RW;
		}
		RTHOOK(2);
		if (RTS_CI (EIF_TRUE, loc1)) {
			RTS_BI (loc1);
			tb1 = (nstcall = 1, F3_7433(loc1));
			RTS_EI;
		} else {
			RTS_AC (0, loc1);
			RTS_CALL (F3_7433, eif_scr4, 0, &(tb1));
		}
		if ((EIF_BOOLEAN)(tb1 != (EIF_BOOLEAN) 1)) {
			RTHOOK(3);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
			tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(4);
			tr1 = RTMS_EX_H("\012",1,10);
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
			if (RTS_CI (EIF_FALSE, loc1)) {
				RTS_BI (loc1);
				(nstcall = 1, F3_7431(loc1, ti4_1));
				RTS_EI;
			} else {
				RTS_AC (1, loc1);
				RTS_AA (ti4_1, it_i4, SK_INT32, 1);
				RTS_CALL (F3_7431, eif_scr7, 0, NULL);
			}
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti8_1 = (EIF_INTEGER_64) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 10L));
			(nstcall = 0, F37_7455(Current, ti8_1));
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
			if (RTS_CI (EIF_FALSE, loc1)) {
				RTS_BI (loc1);
				(nstcall = 1, F3_7432(loc1, ti4_1));
				RTS_EI;
			} else {
				RTS_AC (1, loc1);
				RTS_AA (ti4_1, it_i4, SK_INT32, 1);
				RTS_CALL (F3_7432, eif_scr7, 0, NULL);
			}
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti8_1 = (EIF_INTEGER_64) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 10L));
			(nstcall = 0, F37_7455(Current, ti8_1));
		} else {
			RTHOOK(9);
			tr1 = (nstcall = 0, F1_24(Current));
			tr2 = RTMS_EX_H("is_talking\012",11,455730698);
			(nstcall = 1, F24_155(RTCW(tr1), tr2));
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			(nstcall = 0, F37_7455(Current, ti8_1));
		}
		if (uarg) RTS_RD;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

void EIF_Minit981 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
