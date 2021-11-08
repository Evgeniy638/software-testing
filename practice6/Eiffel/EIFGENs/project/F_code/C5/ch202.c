/*
 * Code for class CHARACTER_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch202.h"
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

/* {CHARACTER_32_REF}.item */
EIF_CHARACTER_32 F834_5745 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {CHARACTER_32_REF}.code */
EIF_INTEGER_32 F834_5746 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code", 833, Current, 0, 0, 11583);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.hash_code */
EIF_INTEGER_32 F834_5747 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 833, Current, 0, 0, 11584);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	Result = (EIF_INTEGER_32) ti4_1;
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

/* {CHARACTER_32_REF}.natural_32_code */
EIF_NATURAL_32 F834_5748 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_code", 833, Current, 0, 0, 11585);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("natural_32_code_in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_NATURAL_32) 0U)) && (EIF_BOOLEAN) (Result <= ((EIF_NATURAL_32) 4294967295U)))) {
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

/* {CHARACTER_32_REF}.is_less */
EIF_BOOLEAN F834_5752 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 833, Current, 0, 1, 11552);
	RTSA(dtype);
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
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[Dtype(RTCW(arg1))-833])(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F834_5752(RTCW(arg1), tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[Dtype(RTCW(arg1))-833])(arg1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current)) < tu4_1))) {
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

/* {CHARACTER_32_REF}.is_equal */
EIF_BOOLEAN F834_5753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
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
	
	RTEAA("is_equal", 833, Current, 0, 1, 11553);
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
	tw1 = *(EIF_CHARACTER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tw2 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
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
		tb2 = (nstcall = 1, F834_5752(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F834_5752(RTCW(arg1), tr1));
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

/* {CHARACTER_32_REF}.plus */
EIF_CHARACTER_32 F834_5754 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("plus", 833, Current, 0, 1, 11554);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_2 = (EIF_NATURAL_64) arg1;
		tr1 = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)tr1 = (EIF_NATURAL_64) (tu8_1 + tu8_2);
		tb1 = (nstcall = 1, F864_6494(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 + arg1);
	Result = (EIF_CHARACTER_32) tw1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (nstcall = 1, F834_5756(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
		ti8_2 = (EIF_INTEGER_64) arg1;
		if ((EIF_BOOLEAN)(ti8_1 == ti8_2)) {
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

/* {CHARACTER_32_REF}.minus */
EIF_CHARACTER_32 F834_5755 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("minus", 833, Current, 0, 1, 11555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) tw1;
		ti8_1 = (EIF_INTEGER_64) tu4_1;
		ti8_2 = (EIF_INTEGER_64) arg1;
		tr1 = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)tr1 = (EIF_INTEGER_64) (ti8_1 - ti8_2);
		tb1 = (nstcall = 1, F840_5851(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 - arg1);
	Result = (EIF_CHARACTER_32) tw1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = tw1;
		ti8_1 = (nstcall = 1, F834_5756(RTCW(tr1), Result));
		ti8_2 = (EIF_INTEGER_64) arg1;
		if ((EIF_BOOLEAN)(ti8_1 == ti8_2)) {
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

/* {CHARACTER_32_REF}.difference */
EIF_INTEGER_64 F834_5756 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("difference", 833, Current, 0, 1, 11556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	ti8_1 = (EIF_INTEGER_64) tu4_1;
	tu4_1 = (EIF_NATURAL_32) arg1;
	ti8_2 = (EIF_INTEGER_64) tu4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) (ti8_1 - ti8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_non_negative_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			tu4_1 = (EIF_NATURAL_32) Result;
			tw1 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) arg1) + tu4_1);
			tb1 = (EIF_BOOLEAN)(tw1 == *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_negative_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
			tu4_1 = (EIF_NATURAL_32) Result;
			tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) + tu4_1);
			tb1 = (EIF_BOOLEAN)(arg1 == tw2);
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

/* {CHARACTER_32_REF}.next */
EIF_CHARACTER_32 F834_5757 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("next", 833, Current, 0, 0, 11557);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tr1 = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)tr1 = ((EIF_NATURAL_64) (tu8_1 + (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L)));
		tb1 = (nstcall = 1, F864_6494(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_32) tw2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (nstcall = 1, F834_5756(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
		if ((EIF_BOOLEAN)(ti8_1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L))) {
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

/* {CHARACTER_32_REF}.previous */
EIF_CHARACTER_32 F834_5758 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("previous", 833, Current, 0, 0, 11558);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tr1 = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)tr1 = ((EIF_NATURAL_64) (tu8_1 - (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L)));
		tb1 = (nstcall = 1, F864_6494(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_32) tw2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (nstcall = 1, F834_5756(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
		if ((EIF_BOOLEAN)(ti8_1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) -1L))) {
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

/* {CHARACTER_32_REF}.set_item */
void F834_5759 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 833, Current, 0, 1, 11559);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_CHARACTER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {CHARACTER_32_REF}.out */
EIF_REFERENCE F834_5760 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("out", 833, Current, 0, 0, 11560);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(Result), ((EIF_INTEGER_32) 6L)));
	RTHOOK(2);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) 'U'));
	RTHOOK(3);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '+'));
	RTHOOK(4);
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	tr1 = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	tr2 = (nstcall = 1, F852_6154(RTCW(tr1)));
	(nstcall = 1, F908_6877(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("out_not_void", EX_POST);
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

/* {CHARACTER_32_REF}.make_from_reference */
void F834_5761 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 833, Current, 0, 1, 11561);
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
	tw1 = *(EIF_CHARACTER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F834_5759(Current, tw1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) == tw1)) {
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

/* {CHARACTER_32_REF}.to_reference */
EIF_REFERENCE F834_5762 (EIF_REFERENCE Current)
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
	
	RTEAA("to_reference", 833, Current, 0, 0, 11562);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(833, 0x01).id, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F834_5759(RTCW(Result), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
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

/* {CHARACTER_32_REF}.to_character_8 */
EIF_CHARACTER_8 F834_5763 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_8", 833, Current, 0, 0, 11563);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_character_8_compatible", EX_PRE);
		RTTE((nstcall = 0, F834_5770(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tc1 = (EIF_CHARACTER_8) tw1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.to_character_32 */
EIF_CHARACTER_32 F834_5764 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 833, Current, 0, 0, 11564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.as_upper */
EIF_CHARACTER_32 F834_5765 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("as_upper", 833, Current, 0, 0, 11565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tw1 = (nstcall = 1, F28_250(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.upper */
EIF_CHARACTER_32 F834_5766 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("upper", 833, Current, 0, 0, 11566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tw1 = (nstcall = 1, F28_250(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.as_lower */
EIF_CHARACTER_32 F834_5767 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("as_lower", 833, Current, 0, 0, 11567);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tw1 = (nstcall = 1, F28_249(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.lower */
EIF_CHARACTER_32 F834_5768 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("lower", 833, Current, 0, 0, 11568);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tw1 = (nstcall = 1, F28_249(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.to_hexa_digit */
EIF_NATURAL_8 F834_5769 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_hexa_digit", 833, Current, 1, 0, 11569);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa_digit", EX_PRE);
		RTTE((nstcall = 0, F834_5776(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 127L));
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 256L));
	tu4_1 = eif_bit_shift_right(tu4_3,((EIF_INTEGER_32) 3L));
	tu1_1 = (EIF_NATURAL_8) (EIF_NATURAL_32) (tu4_2 + tu4_1);
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	tu1_1 = eif_bit_and(Result,(EIF_NATURAL_8) ((EIF_INTEGER_32) 79L));
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	tu1_1 = eif_bit_shift_left(Result,((EIF_INTEGER_32) 1L));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	ti1_2 = eif_bit_shift_right(ti1_1,((EIF_INTEGER_32) 7L));
	tu1_1 = (EIF_NATURAL_8) ti1_2;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(5);
	tu1_1 = eif_bit_not(loc1);
	tu1_2 = eif_bit_and(Result,tu1_1);
	tu1_1 = eif_bit_and(((EIF_NATURAL_8) (Result - (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L))),loc1);
	tu1_3 = eif_bit_or(tu1_2,tu1_1);
	Result = (EIF_NATURAL_8) tu1_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("range", EX_POST);
		tb1 = '\0';
		ti4_1 = (EIF_INTEGER_32) Result;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (Result < (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("value", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
		tc1 = (nstcall = 1, F908_6841(tr1, ti4_1));
		tw1 = (EIF_CHARACTER_32) tc1;
		if (!(EIF_BOOLEAN)(tw1 == (nstcall = 0, F834_5765(Current)))) {
			tr1 = RTMS32_EX_H("\020\377\000\000\021\377\000\000\022\377\000\000\023\377\000\000\024\377\000\000\025\377\000\000\026\377\000\000\027\377\000\000\030\377\000\000\031\377\000\000!\377\000\000\"\377\000\000#\377\000\000$\377\000\000%\377\000\000&\377\000\000",16,1242333478);
			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
			tw1 = (nstcall = 1, F910_7051(tr1, ti4_1));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F834_5765(Current)));
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

/* {CHARACTER_32_REF}.is_character_8 */
EIF_BOOLEAN F834_5770 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_8", 833, Current, 0, 0, 11570);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4226[dtype-833])(Current));
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_alpha */
EIF_BOOLEAN F834_5771 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_alpha", 833, Current, 0, 0, 11571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_237(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_upper */
EIF_BOOLEAN F834_5772 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_upper", 833, Current, 0, 0, 11572);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_239(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_lower */
EIF_BOOLEAN F834_5773 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_lower", 833, Current, 0, 0, 11573);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_238(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_digit */
EIF_BOOLEAN F834_5774 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_digit", 833, Current, 0, 0, 11574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (tw1 <= *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_))) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		Result = (EIF_BOOLEAN) (*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) <= tw1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_unicode_digit */
EIF_BOOLEAN F834_5775 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_unicode_digit", 833, Current, 0, 0, 11575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_241(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_hexa_digit */
EIF_BOOLEAN F834_5776 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_hexa_digit", 833, Current, 0, 0, 11576);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_244(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_space */
EIF_BOOLEAN F834_5777 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_space", 833, Current, 0, 0, 11577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_245(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_punctuation */
EIF_BOOLEAN F834_5778 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_punctuation", 833, Current, 0, 0, 11578);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_242(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_alpha_numeric */
EIF_BOOLEAN F834_5779 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_alpha_numeric", 833, Current, 0, 0, 11579);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_237(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	if (!tb1) {
		tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
		tb1 = (nstcall = 1, F28_241(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.is_control */
EIF_BOOLEAN F834_5780 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_control", 833, Current, 0, 0, 11580);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(255,(nstcall = 0, F834_5781), (Current));
	tb1 = (nstcall = 1, F28_243(RTCW(tr1), *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_32_REF}.properties */
static EIF_REFERENCE F834_5781_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(255)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("properties", 833, Current, 0, 0, 11581);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(27, 0x01).id, 27, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F834_5781 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(255,F834_5781_body,(Current));
}

void EIF_Minit202 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
