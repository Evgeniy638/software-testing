/*
 * Code for class STRING_32_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st175.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_32_ITERATION_CURSOR}.make */
void F744_4492 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make", 743, Current, 1, 1, 9255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) loc1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_) = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F909_7044(RTCW(arg1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_valid", EX_POST);
		if ((nstcall = 0, F744_4495(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
		RTHOOK(12);
		RTCT("first_index_set", EX_POST);
		ti4_1 = ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("last_index_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		if ((EIF_BOOLEAN)((nstcall = 0, F719_4469(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {STRING_32_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F744_4493 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {STRING_32_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F744_4494 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("new_cursor", 743, Current, 0, 0, 9257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(743, 0x01).id, 743, _OBJSIZ_2_0_0_3_0_0_0_0_);
	(nstcall = -1, F744_4492(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_32_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F744_4495 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("is_valid", 743, Current, 0, 0, 9252);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	if ((EIF_BOOLEAN)(tr2 == *(EIF_REFERENCE *)(Current))) {
		Result = (nstcall = 0, F719_4477(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_32_ITERATION_CURSOR}.target */
EIF_REFERENCE F744_4496 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {STRING_32_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F744_4497 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_);
}


void EIF_Minit175 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
