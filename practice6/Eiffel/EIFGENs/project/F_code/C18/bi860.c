/*
 * Code for class BILINEAR [INTEGER_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi860.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F423_2811 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 422, Current, 0, 0, 3951);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, F530_3435(Current))) {
		Result = (nstcall = 0, F530_3434(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BILINEAR}.search */
void F423_2814 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("search", 422, Current, 0, 1, 3952);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((nstcall = 0, F530_3435(Current))) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F330_2638(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, F645_4207(Current));
	}
	RTHOOK(3);
	(nstcall = 0, F409_2705(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("object_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F409_2709(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current + O2308[dtype-186]);
		}
		if (tb2) {
			tb1 = (arg1 == (nstcall = 0, F645_4179(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("item_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F409_2709(Current))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O2308[dtype-186]);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == (nstcall = 0, F645_4179(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {BILINEAR}._invariant */
void F423_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 859, Current, 0, 0);
	RTIT("not_both", Current);
	tb1 = '\0';
	if ((nstcall = 0, F530_3434(Current))) {
		tb1 = (nstcall = 0, F530_3435(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F530_3435(Current))) {
		tb1 = (nstcall = 0, F500_3372(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit860 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
