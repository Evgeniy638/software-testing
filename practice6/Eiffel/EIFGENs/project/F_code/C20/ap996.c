/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap996.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.gangster */
EIF_REFERENCE F186_7693 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {APPLICATION}.phones */
EIF_REFERENCE F186_7694 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {APPLICATION}.random */
EIF_REFERENCE F186_7695 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {APPLICATION}.make */
void F186_7696 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 185, Current, 0, 0, 13552);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F186_7697(Current));
	RTHOOK(2);
	(nstcall = 0, F186_7698(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {APPLICATION}.init */
void F186_7697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("init", 185, Current, 3, 0, 13553);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(2, 1).id);
	(nstcall = -1, F3_7429(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,546,0xFF05,37,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F547_3617(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 0, F186_7700(Current));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) < loc2)) break;
		RTHOOK(6);
		loc2++;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = (nstcall = 1, F440_2858(RTCW(tr1)));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 100L)) + ((EIF_INTEGER_32) 1L));
		RTHOOK(8);
		{
			static EIF_TYPE_INDEX typarr1[] = {0xFF01,546,0xFF05,37,0xFFFF};
			EIF_TYPE typres1;
			static EIF_TYPE typcache1 = {INVALID_DTYPE, 0};
			
			typres1 = (typcache1.id != INVALID_DTYPE ? typcache1 : (typcache1 = eif_compound_id(dftype, typarr1)));
			tr1 = RTLNSMART(eif_final_id(Y2355,Y2355_gen_type,typres1.id,268).id);
		}
		RTS_PA (tr1);
		tr2 = *(EIF_REFERENCE *)(Current);
		RTS_AC (3, tr1);
		RTS_AA (loc1, it_i4, SK_INT32, 3);
		RTS_AA (loc2, it_i4, SK_INT32, 2);
		RTS_AA (tr2, it_r, SK_REF, 1);
		RTS_CALL (F38_7456, eif_scr11, 0, NULL);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F547_3644(RTCW(tr1), loc3));
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F440_2865(RTCW(tr1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {APPLICATION}.run */
void F186_7698 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("run", 185, Current, 1, 0, 13554);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) < loc1)) break;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F487_3361(RTCW(tr1), loc1));
		(nstcall = 0, F186_7699(Current, tr2));
		RTHOOK(4);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {APPLICATION}.start_phone */
void F186_7699 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("start_phone", 185, Current, 0, 1, 13555);
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
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(nstcall = 1, F38_7460(RTCW(arg1)));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F38_7460, eif_scr6, 0, NULL);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {APPLICATION}.set_random */
void F186_7700 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("set_random", 185, Current, 1, 0, 13556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(922, 0x01).id, 922, _OBJSIZ_0_0_0_1_0_0_0_1_);
	(nstcall = -1, F923_7838(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(661, 1).id);
	(nstcall = -1, F662_4338(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F49_7487(RTCW(loc1)));
	(nstcall = 1, F662_4339(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 100L))));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F440_2865(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

void EIF_Minit996 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
