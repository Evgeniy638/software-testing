/*
 * Code for class DYNAMIC_CHAIN [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy483.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.extendible */
EIF_BOOLEAN F506_3418 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 505, Current, 0, 0, 6205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DYNAMIC_CHAIN}.prune */
void F506_3424 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 505, Current, 0, 1, 6206);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2398[dtype-546])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F400_2709(Current))) {
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-546])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F506_3425 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all", 505, Current, 0, 1, 6207);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[dtype-546])(Current));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2398[dtype-546])(Current, (EIF_REFERENCE) &arg1));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, F400_2709(Current))) break;
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-546])(Current));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2398[dtype-546])(Current, (EIF_REFERENCE) &arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_more_occurrences", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-470])(Current, (EIF_REFERENCE) &arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_exhausted", EX_POST);
		if ((nstcall = 0, F400_2709(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.remove_i_th */
void F506_3428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(8,loc2);
	RTLR(9,tr8);
	RTLR(10,loc3);
	RTLIU(11);
	
	RTEAA("remove_i_th", 505, Current, 3, 1, 6208);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2350[dtype-470])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 0, F1_14(Current));
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		tr6 = (nstcall = 0, F1_14(Current));
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > arg1)) {
		RTHOOK(5);
		loc1--;
	}
	RTHOOK(6);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2777[dtype-546])(Current, arg1));
	RTHOOK(7);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-546])(Current));
	RTHOOK(8);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2777[dtype-546])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_index_if_below", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) <= arg1)) {
			RTCO(tr2);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_index_if_above", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) > arg1)) {
			RTCO(tr3);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_leading_items", EX_POST);
		RTCO(tr5);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2259[Dtype(RTCV(tr4))-178])(tr4));
		loc2 = (EIF_REFERENCE) tr8;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3243[Dtype(loc2)-661])(loc2));
			if (tb2) break;
			RTHOOK(13);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3296[Dtype(loc2)-695])(loc2));
			if ((EIF_BOOLEAN) (ti4_4 < arg1)) {
				tb4 = (nstcall = 1, eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[Dtype(loc2)-661])(loc2));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3296[Dtype(loc2)-695])(loc2));
				tb3 = (EIF_BOOLEAN)(tb4 == (nstcall = 0, eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2348[dtype-470])(Current, (EIF_REFERENCE) &ti4_4)));
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3244[Dtype(loc2)-661])(loc2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("same_trailing_items", EX_POST);
		RTCO(tr7);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2259[Dtype(RTCV(tr6))-178])(tr6));
		loc3 = (EIF_REFERENCE) tr8;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3243[Dtype(loc3)-661])(loc3));
			if (tb2) break;
			RTHOOK(15);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3296[Dtype(loc3)-695])(loc3));
			if ((EIF_BOOLEAN) (ti4_4 > arg1)) {
				tb4 = (nstcall = 1, eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[Dtype(loc3)-661])(loc3));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3296[Dtype(loc3)-695])(loc3));
				ti4_5 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
				tb3 = (EIF_BOOLEAN)(tb4 == (nstcall = 0, eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2348[dtype-470])(Current, (EIF_REFERENCE) &ti4_5)));
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3244[Dtype(loc3)-661])(loc3));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F506_3429 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 505, Current, 0, 0, 6209);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[dtype-546])(Current));
	for (;;) {
		RTHOOK(3);
		if ((nstcall = 0, F321_2638(Current))) break;
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-546])(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F321_2638(Current))) {
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

/* {DYNAMIC_CHAIN}.duplicate */
EIF_REFERENCE F506_3430 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("duplicate", 505, Current, 2, 1, 6210);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off_unless_after", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2388[dtype-546])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[dtype-546])(Current));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_subchain", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2811[dtype-546])(Current));
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current + O2308[dtype-186])) {
		RTHOOK(5);
		(nstcall = 1, F192_2564(RTCW(Result)));
	}
	RTHOOK(6);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2361[dtype-546])(Current));
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc2 == arg1)) {
			tb1 = (nstcall = 0, F400_2709(Current));
		}
		if (tb1) break;
		RTHOOK(8);
		tb2 = (nstcall = 0, eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[dtype-546])(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[Dtype(RTCW(Result))-470])(Result, (EIF_REFERENCE) &tb2));
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[dtype-546])(Current));
		RTHOOK(10);
		loc2++;
	}
	RTHOOK(11);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2363[dtype-546])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit483 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
