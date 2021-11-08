/*
 * Code for class INTEGER_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in229.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16_REF}.item */
EIF_INTEGER_16 F861_6383 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
}


/* {INTEGER_16_REF}.hash_code */
EIF_INTEGER_32 F861_6384 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 860, Current, 0, 0, 12368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
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

/* {INTEGER_16_REF}.sign */
EIF_INTEGER_16 F861_6385 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("sign", 860, Current, 0, 0, 12369);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) > (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_16) (EIF_INTEGER_16) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) < (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			Result = (EIF_INTEGER_16) (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("three_way", EX_POST);
		ti4_1 = (EIF_INTEGER_32) Result;
		tr1 = (nstcall = 0, F861_6387(Current));
		tr2 = RTCCL(tr1);
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F125_1664(Current, tr2)))) {
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

/* {INTEGER_16_REF}.one */
EIF_REFERENCE F861_6386 (EIF_REFERENCE Current)
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
	
	RTEAA("one", 860, Current, 0, 0, 12370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) ((EIF_INTEGER_32) 1L)));
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

/* {INTEGER_16_REF}.zero */
EIF_REFERENCE F861_6387 (EIF_REFERENCE Current)
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
	
	RTEAA("zero", 860, Current, 0, 0, 12371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)));
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

/* {INTEGER_16_REF}.ascii_char */
EIF_CHARACTER_8 F861_6388 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ascii_char", 860, Current, 0, 0, 12372);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character_code", EX_PRE);
		RTTE((nstcall = 0, F861_6398(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.is_less */
EIF_BOOLEAN F861_6391 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	
	RTEAA("is_less", 860, Current, 0, 1, 12375);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti2_1 < ti2_2);
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

/* {INTEGER_16_REF}.is_equal */
EIF_BOOLEAN F861_6392 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	
	RTEAA("is_equal", 860, Current, 0, 1, 12376);
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
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 == ti2_2);
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

/* {INTEGER_16_REF}.set_item */
void F861_6393 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 860, Current, 0, 1, 12377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_INTEGER_16) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) == arg1)) {
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
}

/* {INTEGER_16_REF}.divisible */
EIF_BOOLEAN F861_6394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("divisible", 860, Current, 0, 1, 12378);
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
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value", EX_POST);
		ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti2_1 != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)))) {
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

/* {INTEGER_16_REF}.exponentiable */
EIF_BOOLEAN F861_6395 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("exponentiable", 860, Current, 3, 1, 12379);
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
			Result = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
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
				Result = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
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
					Result = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
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
			tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
		}
		if (!tb3) {
			tb3 = '\0';
			tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 0.0;
			tb4 = (nstcall = 1, F1_6(arg1, tr1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) > (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
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

/* {INTEGER_16_REF}.is_hashable */
EIF_BOOLEAN F861_6396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hashable", 860, Current, 0, 0, 12380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.is_valid_character_code */
EIF_BOOLEAN F861_6397 (EIF_REFERENCE Current)
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
	
	RTEAA("is_valid_character_code", 860, Current, 0, 0, 12381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F861_6398(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.is_valid_character_8_code */
EIF_BOOLEAN F861_6398 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_8_code", 860, Current, 0, 0, 12382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		Result = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 255L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 255L));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {INTEGER_16_REF}.is_valid_character_32_code */
EIF_BOOLEAN F861_6399 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_32_code", 860, Current, 0, 0, 12383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti2_1 >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
			tu4_1 = (EIF_NATURAL_32) ti2_1;
			tb2 = (EIF_BOOLEAN) (tu4_1 >= ((EIF_NATURAL_32) 0U));
		}
		if (tb2) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
			tu4_1 = (EIF_NATURAL_32) ti2_1;
			tb1 = (EIF_BOOLEAN) (tu4_1 <= ((EIF_NATURAL_32) 4294967295U));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {INTEGER_16_REF}.abs */
EIF_INTEGER_16 F861_6400 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("abs", 860, Current, 0, 0, 12384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(RTCV((nstcall = 0, F861_6449(Current)))+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_16) ti2_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_absolute_value", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)) || (EIF_BOOLEAN)(Result == (EIF_INTEGER_16) -*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)))) {
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

/* {INTEGER_16_REF}.plus */
EIF_REFERENCE F861_6401 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	
	RTEAA("plus", 860, Current, 0, 1, 12385);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) (ti2_1 + ti2_2)));
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

/* {INTEGER_16_REF}.minus */
EIF_REFERENCE F861_6402 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("minus", 860, Current, 0, 1, 12386);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) (ti2_1 - ti2_2)));
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

/* {INTEGER_16_REF}.product */
EIF_REFERENCE F861_6403 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("product", 860, Current, 0, 1, 12387);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) (ti2_1 * ti2_2)));
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

/* {INTEGER_16_REF}.quotient */
EIF_REAL_64 F861_6404 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("quotient", 860, Current, 0, 1, 12388);
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
		RTTE((nstcall = 0, F861_6394(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti2_1) /  (EIF_REAL_64) (ti2_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.identity */
EIF_REFERENCE F861_6405 (EIF_REFERENCE Current)
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
	
	RTEAA("identity", 860, Current, 0, 0, 12389);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)));
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

/* {INTEGER_16_REF}.opposite */
EIF_REFERENCE F861_6406 (EIF_REFERENCE Current)
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
	
	RTEAA("opposite", 860, Current, 0, 0, 12390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) -*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)));
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

/* {INTEGER_16_REF}.integer_quotient */
EIF_REFERENCE F861_6407 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	
	RTEAA("integer_quotient", 860, Current, 0, 1, 12391);
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
		RTTE((nstcall = 0, F861_6394(Current, tr1)), label_1);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) (ti2_1 / ti2_2)));
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

/* {INTEGER_16_REF}.integer_remainder */
EIF_REFERENCE F861_6408 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	
	RTEAA("integer_remainder", 860, Current, 0, 1, 12392);
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
		RTTE((nstcall = 0, F861_6394(Current, tr1)), label_1);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F861_6393(RTCW(Result), (EIF_INTEGER_16) (ti2_1 % ti2_2)));
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

/* {INTEGER_16_REF}.power */
EIF_REAL_64 F861_6409 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 860, Current, 0, 1, 12393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (ti2_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.interval */
EIF_REFERENCE F861_6410 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("interval", 860, Current, 0, 1, 12394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(470, 0x01).id, 470, _OBJSIZ_0_1_0_2_0_0_0_0_);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	(nstcall = -1, F471_3239(RTCW(Result), ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.make_from_reference */
void F861_6411 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 860, Current, 0, 1, 12395);
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
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 0, F861_6393(Current, ti2_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) == ti2_1)) {
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

/* {INTEGER_16_REF}.to_reference */
EIF_REFERENCE F861_6412 (EIF_REFERENCE Current)
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
	
	RTEAA("to_reference", 860, Current, 0, 0, 12396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(860, 0x01).id, 860, _OBJSIZ_0_0_1_0_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F861_6393(RTCW(Result), *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)));
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

/* {INTEGER_16_REF}.to_boolean */
EIF_BOOLEAN F861_6413 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_boolean", 860, Current, 0, 0, 12397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_natural_8 */
EIF_NATURAL_8 F861_6414 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_8", 860, Current, 0, 0, 12398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tu1_1 = (EIF_NATURAL_8) ti2_1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_natural_16 */
EIF_NATURAL_16 F861_6415 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_16", 860, Current, 0, 0, 12399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_1 = (EIF_NATURAL_16) ti2_1;
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_natural_32 */
EIF_NATURAL_32 F861_6416 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_32", 860, Current, 0, 0, 12400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) ti2_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_natural_64 */
EIF_NATURAL_64 F861_6417 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_64", 860, Current, 0, 0, 12401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tu8_1 = (EIF_NATURAL_64) ti2_1;
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_integer_8 */
EIF_INTEGER_8 F861_6418 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_8", 860, Current, 0, 0, 12402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti1_1 = (EIF_INTEGER_8) ti2_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_integer_16 */
EIF_INTEGER_16 F861_6419 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_16", 860, Current, 0, 0, 12403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = (EIF_INTEGER_16) ti2_1;
	Result = (EIF_INTEGER_16) ti2_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_integer_32 */
EIF_INTEGER_32 F861_6420 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_32", 860, Current, 0, 0, 12404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.as_integer_64 */
EIF_INTEGER_64 F861_6421 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_64", 860, Current, 0, 0, 12405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti8_1 = (EIF_INTEGER_64) ti2_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_natural_8 */
EIF_NATURAL_8 F861_6422 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_8", 860, Current, 0, 0, 12406);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_8) 255U);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) <= ti2_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R4613[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_natural_16 */
EIF_NATURAL_16 F861_6423 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_16", 860, Current, 0, 0, 12407);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R4614[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_natural_32 */
EIF_NATURAL_32 F861_6424 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_32", 860, Current, 0, 0, 12408);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4615[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_natural_64 */
EIF_NATURAL_64 F861_6425 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_64", 860, Current, 0, 0, 12409);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4616[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_integer_8 */
EIF_INTEGER_8 F861_6426 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_8", 860, Current, 0, 0, 12410);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_8) -128L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= ti2_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_8) 127L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) <= ti2_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_8, (EIF_REFERENCE)) R4617[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_integer */
EIF_INTEGER_32 F861_6427 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer", 860, Current, 0, 0, 12411);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4619[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_integer_32 */
EIF_INTEGER_32 F861_6428 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_32", 860, Current, 0, 0, 12412);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4619[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_integer_16 */
EIF_INTEGER_16 F861_6429 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_16", 860, Current, 0, 0, 12413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_integer_64 */
EIF_INTEGER_64 F861_6430 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_64", 860, Current, 0, 0, 12414);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_64, (EIF_REFERENCE)) R4620[dtype-860])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_real */
EIF_REAL_32 F861_6431 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real", 860, Current, 0, 0, 12415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tr4_1 = (EIF_REAL_32) (ti2_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_double */
EIF_REAL_64 F861_6432 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_double", 860, Current, 0, 0, 12416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tr8_1 = (EIF_REAL_64) (ti2_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_hex_string */
EIF_REFERENCE F861_6433 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_hex_string", 860, Current, 2, 0, 12417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) / ((EIF_INTEGER_32) 4L));
	RTHOOK(2);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6749(RTCW(Result), (EIF_CHARACTER_8) '0', loc1));
	RTHOOK(3);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tc1 = (nstcall = 1, F858_6339(RTCW(tr1)));
		(nstcall = 1, F908_6862(RTCW(Result), tc1, loc1));
		RTHOOK(6);
		ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) / ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_hex_character */
EIF_CHARACTER_8 F861_6434 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_hex_character", 860, Current, 1, 0, 12418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) <= (EIF_INTEGER_16) ((EIF_INTEGER_32) 15L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		RTHOOK(5);
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ((EIF_INTEGER_32) 10L));
		tc1 = tc2;
	}
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + loc1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		tb1 = (nstcall = 1, F906_6783(tr1, Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_character */
EIF_CHARACTER_8 F861_6435 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character", 860, Current, 0, 0, 12419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F861_6398(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_character_8 */
EIF_CHARACTER_8 F861_6436 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_8", 860, Current, 0, 0, 12420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F861_6398(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.to_character_32 */
EIF_CHARACTER_32 F861_6437 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 860, Current, 0, 0, 12421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F861_6399(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	tw1 = (EIF_CHARACTER_32) ti2_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.bit_and */
EIF_REFERENCE F861_6438 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_and", 860, Current, 0, 1, 12422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	ti2_3 = eif_bit_and(ti2_1,ti2_2);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_and_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_or */
EIF_REFERENCE F861_6439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_or", 860, Current, 0, 1, 12423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	ti2_3 = eif_bit_or(ti2_1,ti2_2);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_or_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_xor */
EIF_REFERENCE F861_6440 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_xor", 860, Current, 0, 1, 12424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	ti2_3 = eif_bit_xor(ti2_1,ti2_2);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_xor_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_not */
EIF_REFERENCE F861_6441 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_not", 860, Current, 0, 0, 12425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = eif_bit_not(ti2_1);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("bit_not_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_shift */
EIF_INTEGER_16 F861_6442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_shift", 860, Current, 0, 1, 12426);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_greater_than_minus_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) -16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4643[dtype-860])(Current, arg1));
		ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_0_0_0_);
		Result = (EIF_INTEGER_16) ti2_1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4642[dtype-860])(Current, (EIF_INTEGER_32) -arg1));
		ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_0_0_0_);
		Result = (EIF_INTEGER_16) ti2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.bit_shift_left */
EIF_REFERENCE F861_6443 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_left", 860, Current, 0, 1, 12427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = eif_bit_shift_left(ti2_1,arg1);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_left_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_shift_right */
EIF_REFERENCE F861_6444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_right", 860, Current, 0, 1, 12428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = eif_bit_shift_right(ti2_1,arg1);
	(nstcall = 1, F861_6393(RTCW(Result), ti2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_right_not_void", EX_POST);
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

/* {INTEGER_16_REF}.bit_test */
EIF_BOOLEAN F861_6445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bit_test", 860, Current, 0, 1, 12429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = eif_bit_shift_left(((EIF_INTEGER_16) 1L),arg1);
	ti2_3 = eif_bit_and(ti2_1,ti2_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_3 != (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.set_bit */
EIF_INTEGER_16 F861_6446 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit", 860, Current, 0, 2, 12430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg1) {
		RTHOOK(4);
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti2_2 = eif_bit_shift_left(((EIF_INTEGER_16) 1L),arg2);
		ti2_3 = eif_bit_or(ti2_1,ti2_2);
		Result = (EIF_INTEGER_16) ti2_3;
	} else {
		RTHOOK(5);
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti2_2 = eif_bit_shift_left(((EIF_INTEGER_16) 1L),arg2);
		ti2_3 = eif_bit_not(ti2_2);
		ti2_2 = eif_bit_and(ti2_1,ti2_3);
		Result = (EIF_INTEGER_16) ti2_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.set_bit_with_mask */
EIF_INTEGER_16 F861_6447 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit_with_mask", 860, Current, 0, 2, 12431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti2_2 = eif_bit_or(ti2_1,arg2);
		Result = (EIF_INTEGER_16) ti2_2;
	} else {
		RTHOOK(3);
		ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
		ti2_2 = eif_bit_not(arg2);
		ti2_3 = eif_bit_and(ti2_1,ti2_2);
		Result = (EIF_INTEGER_16) ti2_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}.out */
EIF_REFERENCE F861_6448 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 860, Current, 0, 0, 12432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(Result), ((EIF_INTEGER_32) 6L)));
	RTHOOK(2);
	(nstcall = 1, F908_6880(RTCW(Result), *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
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

/* {INTEGER_16_REF}.abs_ref */
EIF_REFERENCE F861_6449 (EIF_REFERENCE Current)
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
	
	RTEAA("abs_ref", 860, Current, 0, 0, 12433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) >= (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) RTCCL(Current);
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2224[Dtype(Current)-827])(Current));
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_16_REF}._invariant */
void F861_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 228, Current, 0, 0);
	RTIT("sign_times_abs", Current);
	if ((EIF_BOOLEAN)((EIF_INTEGER_16) ((nstcall = 0, F861_6385(Current)) * (nstcall = 0, F861_6400(Current))) == *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit229 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
