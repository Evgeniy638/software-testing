/*
 * Code for class REAL_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re199.h"
#include <math.h>
#include "eif_built_in.h"
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32_REF}.item */
EIF_REAL_32 F831_5679 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
}


/* {REAL_32_REF}.hash_code */
EIF_INTEGER_32 F831_5680 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 830, Current, 0, 0, 11460);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4205[dtype-830])(Current));
	ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {REAL_32_REF}.sign */
EIF_INTEGER_32 F831_5681 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("sign", 830, Current, 0, 0, 11461);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) eif_is_greater_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) eif_is_less_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("three_way", EX_POST);
		tr1 = (nstcall = 0, F831_5683(Current));
		tr2 = RTCCL(tr1);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F125_1664(Current, tr2)))) {
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
	return Result;
}

/* {REAL_32_REF}.one */
EIF_REFERENCE F831_5682 (EIF_REFERENCE Current)
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
	
	RTEAA("one", 830, Current, 0, 0, 11462);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) 1.0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.zero */
EIF_REFERENCE F831_5683 (EIF_REFERENCE Current)
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
	
	RTEAA("zero", 830, Current, 0, 0, 11463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) 0.0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.nan */
EIF_REAL_32 F831_5684 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("nan", 830, Current, 0, 0, 11464);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_32) eif_builtin_REAL_32_REF_nan__r4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.negative_infinity */
EIF_REAL_32 F831_5685 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("negative_infinity", 830, Current, 0, 0, 11465);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_32) eif_builtin_REAL_32_REF_negative_infinity__r4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.positive_infinity */
EIF_REAL_32 F831_5686 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("positive_infinity", 830, Current, 0, 0, 11466);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_32) eif_builtin_REAL_32_REF_positive_infinity__r4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.is_less */
EIF_BOOLEAN F831_5691 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 830, Current, 0, 1, 11471);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, tr4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1479[Dtype(RTCW(arg1))-119])(arg1, tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.is_equal */
EIF_BOOLEAN F831_5692 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 830, Current, 0, 1, 11472);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F1_9(Current, tr1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1479[Dtype(Current)-119])(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1479[Dtype(RTCW(arg1))-119])(arg1, tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	return Result;
}

/* {REAL_32_REF}.set_item */
void F831_5693 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 830, Current, 0, 1, 11473);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) = (EIF_REAL_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {REAL_32_REF}.divisible */
EIF_BOOLEAN F831_5694 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("divisible", 830, Current, 0, 1, 11474);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !eif_is_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("ref_not_exact_zero", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
			tb1 = (EIF_BOOLEAN) !eif_is_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.exponentiable */
EIF_BOOLEAN F831_5695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("exponentiable", 830, Current, 3, 1, 11475);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(857, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		if (!(EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			Result = (EIF_BOOLEAN) !eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0);
		}
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(830, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			Result = '\01';
			tr4_1 = *(EIF_REAL_32 *)(loc2+ _R32OFF_0_0_0_0_0_);
			if (!((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0))) {
				Result = (EIF_BOOLEAN) !eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0);
			}
		} else {
			RTHOOK(6);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(845, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(7);
				Result = '\01';
				tr8_1 = *(EIF_REAL_64 *)(loc3+ _R64OFF_0_0_0_0_0_0_0_0_);
				if (!(EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
					Result = (EIF_BOOLEAN) !eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("safe_values", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tb4 = (nstcall = 1, F1_6(arg1, tr1));
		if (tb4) {
			tb3 = (EIF_BOOLEAN) !eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0);
		}
		if (!tb3) {
			tb3 = '\0';
			tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 0.0;
			tb4 = (nstcall = 1, F1_6(arg1, tr1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN) eif_is_greater_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0);
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
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
	return Result;
}

/* {REAL_32_REF}.is_hashable */
EIF_BOOLEAN F831_5696 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hashable", 830, Current, 0, 0, 11476);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !eif_is_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.is_nan */
EIF_BOOLEAN F831_5697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_nan", 830, Current, 0, 0, 11477);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tb1 = eif_is_nan_real_32 (tr4_1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.is_negative_infinity */
EIF_BOOLEAN F831_5698 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_negative_infinity", 830, Current, 0, 0, 11478);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tb1 = eif_is_negative_infinity_real_32 (tr4_1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.is_positive_infinity */
EIF_BOOLEAN F831_5699 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_positive_infinity", 830, Current, 0, 0, 11479);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tb1 = eif_is_positive_infinity_real_32 (tr4_1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.make_from_reference */
void F831_5700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 830, Current, 0, 1, 11480);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	(nstcall = 0, F831_5693(Current, tr4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), tr4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {REAL_32_REF}.to_reference */
EIF_REFERENCE F831_5701 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_reference", 830, Current, 0, 0, 11481);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(830, 0x01).id, 830, _OBJSIZ_0_0_0_0_1_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F831_5693(RTCW(Result), *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.truncated_to_integer */
EIF_INTEGER_32 F831_5702 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("truncated_to_integer", 830, Current, 0, 0, 11482);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tr4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.truncated_to_integer_64 */
EIF_INTEGER_64 F831_5703 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("truncated_to_integer_64", 830, Current, 0, 0, 11483);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	ti8_1 = (EIF_INTEGER_64) tr4_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.to_double */
EIF_REAL_64 F831_5704 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_double", 830, Current, 0, 0, 11484);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.ceiling */
EIF_INTEGER_32 F831_5705 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ceiling", 830, Current, 0, 0, 11485);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_REAL_32, (EIF_REFERENCE)) R4211[dtype-830])(Current));
	ti4_1 = (EIF_INTEGER_32) tr4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_no_smaller", EX_POST);
		tr4_1 = (EIF_REAL_32) (Result);
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("close_enough", EX_POST);
		tr4_1 = (EIF_REAL_32) (Result);
		tr4_2 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
		tr4_3 = 1.0;
		if ((EIF_BOOLEAN) eif_is_less_real_32 ((EIF_REAL_32) (tr4_1 - *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)), tr4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.floor */
EIF_INTEGER_32 F831_5706 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("floor", 830, Current, 0, 0, 11486);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_REAL_32, (EIF_REFERENCE)) R4212[dtype-830])(Current));
	ti4_1 = (EIF_INTEGER_32) tr4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_no_greater", EX_POST);
		tr4_1 = (EIF_REAL_32) (Result);
		if ((EIF_BOOLEAN) eif_is_less_equal_real_32 (tr4_1, *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("close_enough", EX_POST);
		tr4_1 = (EIF_REAL_32) (Result);
		ti4_1 = 1;
		tr4_2 = (EIF_REAL_32) (ti4_1);
		if ((EIF_BOOLEAN) eif_is_less_real_32 ((EIF_REAL_32) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) - tr4_1), tr4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.rounded */
EIF_INTEGER_32 F831_5707 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("rounded", 830, Current, 0, 0, 11487);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F831_5681(Current));
	tr4_1 = (nstcall = 0, F831_5711(Current));
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32) (tr4_1 + (EIF_REAL_32) (EIF_REAL_64) 0.5));
	ti4_1 = (nstcall = 1, F831_5706(RTCW(tr1)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr4_1 = (nstcall = 0, F831_5711(Current));
		tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32) (tr4_1 + (EIF_REAL_32) (EIF_REAL_64) 0.5));
		ti4_1 = (nstcall = 1, F831_5706(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) ((nstcall = 0, F831_5681(Current)) * ti4_1))) {
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

/* {REAL_32_REF}.ceiling_real_32 */
EIF_REAL_32 F831_5708 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ceiling_real_32", 830, Current, 0, 0, 11488);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = (EIF_REAL_32) ceil ((double)tr4_1);
	Result = (EIF_REAL_32) tr4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_no_smaller", EX_POST);
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_32 (Result, *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("close_enough", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
		tr4_2 = 1.0;
		if ((EIF_BOOLEAN) eif_is_less_real_32 ((EIF_REAL_32) (Result - *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)), tr4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.floor_real_32 */
EIF_REAL_32 F831_5709 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("floor_real_32", 830, Current, 0, 0, 11489);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = (EIF_REAL_32) floor ((double)tr4_1);
	Result = (EIF_REAL_32) tr4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_no_greater", EX_POST);
		if ((EIF_BOOLEAN) eif_is_less_equal_real_32 (Result, *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("close_enough", EX_POST);
		tr4_1 = 1.0;
		if ((EIF_BOOLEAN) eif_is_less_real_32 ((EIF_REAL_32) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) - Result), tr4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.rounded_real_32 */
EIF_REAL_32 F831_5710 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("rounded_real_32", 830, Current, 0, 0, 11490);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F831_5681(Current));
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr4_2 = (nstcall = 0, F831_5711(Current));
	tr4_3 = (EIF_REAL_32) floor ((double)(EIF_REAL_32) (tr4_2 + (EIF_REAL_32) 0.5));
	Result = (EIF_REAL_32) (EIF_REAL_32) (tr4_1 * tr4_3);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = (nstcall = 0, F831_5681(Current));
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tr4_2 = (nstcall = 0, F831_5711(Current));
		tr4_3 = (EIF_REAL_32) floor ((double)(EIF_REAL_32) (tr4_2 + (EIF_REAL_32) 0.5));
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (Result, (EIF_REAL_32) (tr4_1 * tr4_3))) {
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

/* {REAL_32_REF}.abs */
EIF_REAL_32 F831_5711 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("abs", 830, Current, 0, 0, 11491);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(RTCV((nstcall = 0, F831_5720(Current)))+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_REAL_32) tr4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_32 (Result, (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_absolute_value", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_equal_real_32 (Result, *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)) || (EIF_BOOLEAN) eif_is_equal_real_32 (Result, (EIF_REAL_32) -*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.plus */
EIF_REFERENCE F831_5712 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("plus", 830, Current, 0, 1, 11492);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) (tr4_1 + tr4_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("commutative", EX_POST);
		tr1 = RTCCL(Current);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2219[Dtype(RTCW(arg1))-827])(arg1, tr1));
		if (RTEQ(Result, tr1)) {
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
	return Result;
}

/* {REAL_32_REF}.minus */
EIF_REFERENCE F831_5713 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("minus", 830, Current, 0, 1, 11493);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) (tr4_1 - tr4_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.product */
EIF_REFERENCE F831_5714 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("product", 830, Current, 0, 1, 11494);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) (tr4_1 * tr4_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.quotient */
EIF_REFERENCE F831_5715 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("quotient", 830, Current, 0, 1, 11495);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F831_5694(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) ((EIF_REAL_64) (tr4_1) /  (EIF_REAL_64) (tr4_2))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {REAL_32_REF}.power */
EIF_REAL_64 F831_5716 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 830, Current, 0, 1, 11496);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (tr4_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.identity */
EIF_REFERENCE F831_5717 (EIF_REFERENCE Current)
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
	
	RTEAA("identity", 830, Current, 0, 0, 11497);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.opposite */
EIF_REFERENCE F831_5718 (EIF_REFERENCE Current)
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
	
	RTEAA("opposite", 830, Current, 0, 0, 11498);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F831_5693(RTCW(Result), (EIF_REAL_32) -*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.out */
EIF_REFERENCE F831_5719 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("out", 830, Current, 0, 0, 11499);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr1 = eif_out__r4_s1(tr4_1);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}.abs_ref */
EIF_REFERENCE F831_5720 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("abs_ref", 830, Current, 0, 0, 11500);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		Result = (nstcall = 0, F831_5683(Current));
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) eif_is_greater_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) RTCCL(Current);
		} else {
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2224[Dtype(Current)-827])(Current));
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_absolute_value", EX_POST);
		tb1 = '\01';
		if (!RTEQ(Result, Current)) {
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2224[Dtype(Current)-827])(Current));
			tb1 = RTEQ(Result, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {REAL_32_REF}._invariant */
void F831_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 198, Current, 0, 0);
	RTIT("sign_times_abs", Current);
	tb1 = '\01';
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tb2 = eif_is_nan_real_32 (tr4_1);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = (nstcall = 0, F831_5681(Current));
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tb1 = (EIF_BOOLEAN) eif_is_equal_real_32 ((EIF_REAL_32) (tr4_1 * (nstcall = 0, F831_5711(Current))), *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit199 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
