/*
 * Code for class READABLE_STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re238.h"
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

/* {READABLE_STRING_GENERAL}.make_empty */
void F905_6653 (EIF_REFERENCE Current)
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
	
	RTEAA("make_empty", 904, Current, 0, 0, 12758);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4764[dtype-907])(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4804[dtype-907])(Current)) >= ((EIF_INTEGER_32) 0L))) {
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

/* {READABLE_STRING_GENERAL}.index_of */
EIF_INTEGER_32 F905_6656 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("index_of", 904, Current, 2, 2, 12759);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1)) == arg1);
			}
			if (tb1) break;
			RTHOOK(7);
			loc1++;
		}
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32) loc1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_result", EX_POST);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb3 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				tb3 = (EIF_BOOLEAN) (Result <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)));
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("zero_if_absent", EX_POST);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("none_before", EX_POST);
		tb2 = '\01';
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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
	return Result;
}

/* {READABLE_STRING_GENERAL}.last_index_of */
EIF_INTEGER_32 F905_6657 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("last_index_of", 904, Current, 0, 2, 12760);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, Result)) == arg1);
		}
		if (tb1) break;
		RTHOOK(5);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= Result) && (EIF_BOOLEAN) (Result <= arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("none_after", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)), arg2));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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

/* {READABLE_STRING_GENERAL}.index_of_code */
EIF_INTEGER_32 F905_6658 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("index_of_code", 904, Current, 2, 2, 12761);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1)) == arg1);
			}
			if (tb1) break;
			RTHOOK(7);
			loc1++;
		}
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32) loc1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_result", EX_POST);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb3 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				tb3 = (EIF_BOOLEAN) (Result <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)));
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("zero_if_absent", EX_POST);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb2 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("none_before", EX_POST);
		tb2 = '\01';
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, ti4_1));
		tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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
	return Result;
}

/* {READABLE_STRING_GENERAL}.last_index_of_code */
EIF_INTEGER_32 F905_6659 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("last_index_of_code", 904, Current, 0, 2, 12762);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, Result)) == arg1);
		}
		if (tb1) break;
		RTHOOK(5);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= Result) && (EIF_BOOLEAN) (Result <= arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb2 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("none_after", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)), arg2));
			tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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

/* {READABLE_STRING_GENERAL}.false_constant */

EIF_REFERENCE F905_6660 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (194,RTMS_EX_H("false",5,1635280741));
}

/* {READABLE_STRING_GENERAL}.true_constant */

EIF_REFERENCE F905_6661 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (193,RTMS_EX_H("true",4,1953658213));
}

/* {READABLE_STRING_GENERAL}.hash_code */
EIF_INTEGER_32 F905_6662 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 904, Current, 2, 0, 12765);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O4856[dtype-904]);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(4);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			ti4_1 = eif_bit_shift_left((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L)),((EIF_INTEGER_32) 8L));
			tw1 = (nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1));
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			RTHOOK(7);
			loc1++;
		}
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {READABLE_STRING_GENERAL}.case_insensitive_hash_code */
EIF_INTEGER_32 F905_6663 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("case_insensitive_hash_code", 904, Current, 3, 0, 12766);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O4857[dtype-904]);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(4);
		loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(5);
		loc1 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc2 > loc3)) break;
			RTHOOK(7);
			ti4_1 = eif_bit_shift_left((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L)),((EIF_INTEGER_32) 8L));
			tw1 = (nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc2));
			tw1 = (nstcall = 1, F28_249(RTCW(loc1), tw1));
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			RTHOOK(8);
			loc2++;
		}
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current + O4857[dtype-904]) = (EIF_INTEGER_32) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("consistent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
		ti4_1 = (nstcall = 1, F905_6663(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_immutable */
EIF_BOOLEAN F905_6664 (EIF_REFERENCE Current)
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
	
	RTEAA("is_immutable", 904, Current, 0, 0, 12767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.valid_index */
EIF_BOOLEAN F905_6665 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 904, Current, 0, 1, 12768);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)));
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

/* {READABLE_STRING_GENERAL}.is_whitespace */
EIF_BOOLEAN F905_6671 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_whitespace", 904, Current, 0, 0, 12769);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4783[dtype-907])(Current, ((EIF_INTEGER_32) 1L), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.has */
EIF_BOOLEAN F905_6673 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has", 904, Current, 2, 1, 12770);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1)) == arg1);
			}
			if (tb1) break;
			RTHOOK(5);
			loc1++;
		}
		RTHOOK(6);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 <= loc2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("false_if_empty", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) !Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("true_if_first", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb3) {
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), ti4_1));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, arg1));
			tb2 = (EIF_BOOLEAN)(Result == tb3);
		}
		if (tb2) {
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

/* {READABLE_STRING_GENERAL}.has_code */
EIF_BOOLEAN F905_6674 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_code", 904, Current, 2, 1, 12771);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1)) == arg1);
			}
			if (tb1) break;
			RTHOOK(5);
			loc1++;
		}
		RTHOOK(6);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 <= loc2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("false_if_empty", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) !Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("true_if_first", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb3) {
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), ti4_1));
			tb3 = (nstcall = 1, F905_6674(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN)(Result == tb3);
		}
		if (tb2) {
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

/* {READABLE_STRING_GENERAL}.is_number_sequence */
EIF_BOOLEAN F905_6675 (EIF_REFERENCE Current)
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
	
	RTEAA("is_number_sequence", 904, Current, 0, 0, 12772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_real_sequence */
EIF_BOOLEAN F905_6676 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_real_sequence", 904, Current, 1, 0, 12773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(2);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, F68_1436(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_real */
EIF_BOOLEAN F905_6677 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_real", 904, Current, 1, 0, 12774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(2);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 100L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, F68_1437(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_real_32 */
EIF_BOOLEAN F905_6678 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_real_32", 904, Current, 1, 0, 12775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(2);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 100L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, F68_1437(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_double */
EIF_BOOLEAN F905_6679 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_double", 904, Current, 1, 0, 12776);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(2);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 101L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, F68_1436(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_real_64 */
EIF_BOOLEAN F905_6680 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_real_64", 904, Current, 1, 0, 12777);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(2);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 101L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, F68_1436(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_integer_8 */
EIF_BOOLEAN F905_6682 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer_8", 904, Current, 0, 0, 12778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_integer_16 */
EIF_BOOLEAN F905_6683 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer_16", 904, Current, 0, 0, 12704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 2L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_integer */
EIF_BOOLEAN F905_6684 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer", 904, Current, 0, 0, 12705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 3L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_integer_32 */
EIF_BOOLEAN F905_6685 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer_32", 904, Current, 0, 0, 12706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 3L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_integer_64 */
EIF_BOOLEAN F905_6686 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer_64", 904, Current, 0, 0, 12707);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_natural_8 */
EIF_BOOLEAN F905_6687 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural_8", 904, Current, 0, 0, 12708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 11L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_natural_16 */
EIF_BOOLEAN F905_6688 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural_16", 904, Current, 0, 0, 12709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 12L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_natural */
EIF_BOOLEAN F905_6689 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural", 904, Current, 0, 0, 12710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 13L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_natural_32 */
EIF_BOOLEAN F905_6690 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural_32", 904, Current, 0, 0, 12711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 13L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_natural_64 */
EIF_BOOLEAN F905_6691 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural_64", 904, Current, 0, 0, 12712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6738(Current, ((EIF_INTEGER_32) 14L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.occurrences */
EIF_INTEGER_32 F905_6694 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("occurrences", 904, Current, 2, 1, 12713);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1)) == arg1)) {
				RTHOOK(6);
				Result++;
			}
			RTHOOK(7);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("zero_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), ti4_1));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32)) R4805[Dtype(RTCW(tr1))-907])(tr1, arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), ti4_1));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32)) R4805[Dtype(RTCW(tr1))-907])(tr1, arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_case_insensitive_equal */
EIF_BOOLEAN F905_6695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("is_case_insensitive_equal", 904, Current, 2, 1, 12714);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(5);
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = (nstcall = 0, F905_6696(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("symmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F905_6695(RTCW(arg1), Current));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(Dftype(Current), 1),loc2);
		if (EIF_TEST(loc2)) {
			tb2 = '\01';
			if ((nstcall = 0, F1_9(Current, loc2))) {
				tb2 = Result;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[Dtype(RTCW(arg1))-907])(arg1));
		if (RTEQ(tr1, tr2)) {
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

/* {READABLE_STRING_GENERAL}.same_caseless_characters */
EIF_BOOLEAN F905_6696 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("same_caseless_characters", 904, Current, 6, 4, 12715);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F905_6665(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(8);
		loc4 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
		RTHOOK(9);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(10);
		loc1 = (EIF_INTEGER_32) arg4;
		RTHOOK(11);
		loc2 = (EIF_INTEGER_32) arg2;
		RTHOOK(12);
		loc3 += loc1;
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(14);
			loc5 = (nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1));
			RTHOOK(15);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc2));
			loc6 = (EIF_CHARACTER_32) tw1;
			RTHOOK(16);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc5 != loc6)) {
				tw1 = (nstcall = 1, F28_249(RTCW(loc4), loc5));
				tw2 = (nstcall = 1, F28_249(RTCW(loc4), loc6));
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				RTHOOK(17);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(18);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(19);
			loc1++;
			RTHOOK(20);
			loc2++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("same_characters", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
		tb1 = (nstcall = 1, F905_6695(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.has_substring */
EIF_BOOLEAN F905_6697 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTEAA("has_substring", 904, Current, 0, 1, 12716);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN) (ti4_1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)))) {
			RTHOOK(5);
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4814[dtype-907])(Current, arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) < ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), ti4_1));
			tb2 = (nstcall = 1, F905_6697(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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

/* {READABLE_STRING_GENERAL}.same_string */
EIF_BOOLEAN F905_6698 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("same_string", 904, Current, 1, 1, 12717);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(6);
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = (nstcall = 0, F905_6699(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L)));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_characters */
EIF_BOOLEAN F905_6699 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_characters", 904, Current, 3, 4, 12718);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F905_6665(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(8);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) arg4;
		RTHOOK(10);
		loc2 = (EIF_INTEGER_32) arg2;
		RTHOOK(11);
		loc3 += loc1;
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(13);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc2));
			if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, loc1)) != tw1)) {
				RTHOOK(14);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(15);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(16);
			loc1++;
			RTHOOK(17);
			loc2++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("same_characters", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.starts_with */
EIF_BOOLEAN F905_6700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("starts_with", 904, Current, 1, 1, 12719);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)))) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(8);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
				if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1)) != tu4_1)) {
					RTHOOK(9);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(10);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
				RTHOOK(11);
				loc1--;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("definition", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), ti4_1));
		tb1 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.ends_with */
EIF_BOOLEAN F905_6701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("ends_with", 904, Current, 2, 1, 12720);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(7);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(9);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
				if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc2)) != tu4_1)) {
					RTHOOK(10);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(11);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
				RTHOOK(12);
				loc1--;
				RTHOOK(13);
				loc2--;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("definition", EX_POST);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), ti4_3));
		tb1 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_cil */
EIF_REFERENCE F905_6705 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_cil", 904, Current, 0, 0, 12721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_dotnet", EX_PRE);
		RTTE((nstcall = 0, F116_1912(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(7,(nstcall = 0, F905_6743), (Current));
	tr2 = (nstcall = 1, F4_35(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_cil_not_void", EX_POST);
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

/* {READABLE_STRING_GENERAL}.to_string_8 */
EIF_REFERENCE F905_6706 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("to_string_8", 904, Current, 3, 0, 12722);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_as_string_8", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4780[dtype-907])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = Current;
	loc3 = RTRV(eif_new_type(907, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(4);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(5);
		Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F906_6748(RTCW(Result), loc2));
		RTHOOK(6);
		(nstcall = 1, F908_6924(RTCW(Result), loc2));
		RTHOOK(7);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			
			RTHOOK(9);
			tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1));
			(nstcall = 1, F908_6863(RTCW(Result), tu4_1, loc1));
			RTHOOK(10);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("as_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTMS_EX_H("",0,0);
		if ((nstcall = 0, F1_6(Current, tr1))) {
			tb2 = (EIF_BOOLEAN)(Result == Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTMS_EX_H("",0,0);
			if ((EIF_BOOLEAN) !(nstcall = 0, F1_6(Current, tr1))) {
				tb2 = (EIF_BOOLEAN)(Result != Current);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_8_conversion */
EIF_REFERENCE F905_6707 (EIF_REFERENCE Current)
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
	
	RTEAA("as_string_8_conversion", 904, Current, 0, 0, 12723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6709(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_readable_string_8 */
EIF_REFERENCE F905_6708 (EIF_REFERENCE Current)
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
	
	RTEAA("as_readable_string_8", 904, Current, 0, 0, 12724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6709(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_8 */
EIF_REFERENCE F905_6709 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("as_string_8", 904, Current, 4, 0, 12725);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = Current;
	loc4 = RTRV(eif_new_type(907, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc4;
	} else {
		RTHOOK(3);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(4);
		Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F906_6748(RTCW(Result), loc2));
		RTHOOK(5);
		(nstcall = 1, F908_6924(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1));
			RTHOOK(9);
			tb1 = (nstcall = 1, F906_6786(RTCW(Result), loc3));
			if (tb1) {
				RTHOOK(10);
				(nstcall = 1, F908_6863(RTCW(Result), loc3, loc1));
			} else {
				RTHOOK(11);
				(nstcall = 1, F908_6863(RTCW(Result), (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L), loc1));
			}
			RTHOOK(12);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("as_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTMS_EX_H("",0,0);
		if ((nstcall = 0, F1_6(Current, tr1))) {
			tb2 = (EIF_BOOLEAN)(Result == Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTMS_EX_H("",0,0);
			if ((EIF_BOOLEAN) !(nstcall = 0, F1_6(Current, tr1))) {
				tb2 = (EIF_BOOLEAN)(Result != Current);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_32_conversion */
EIF_REFERENCE F905_6710 (EIF_REFERENCE Current)
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
	
	RTEAA("as_string_32_conversion", 904, Current, 0, 0, 12726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6712(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_readable_string_32 */
EIF_REFERENCE F905_6711 (EIF_REFERENCE Current)
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
	
	RTEAA("as_readable_string_32", 904, Current, 0, 0, 12727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F905_6712(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_32 */
EIF_REFERENCE F905_6712 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("as_string_32", 904, Current, 3, 0, 12728);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = Current;
	loc3 = RTRV(eif_new_type(909, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(3);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(4);
		Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F909_6992(RTCW(Result), loc2));
		RTHOOK(5);
		(nstcall = 1, F910_7133(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1));
			(nstcall = 1, F910_7072(RTCW(Result), tu4_1, loc1));
			RTHOOK(9);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("as_string_32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F905_6653(RTCW(tr1)));
		if ((nstcall = 0, F1_6(Current, tr1))) {
			tb2 = (EIF_BOOLEAN)(Result == Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F905_6653(RTCW(tr1)));
			if ((EIF_BOOLEAN) !(nstcall = 0, F1_6(Current, tr1))) {
				tb2 = (EIF_BOOLEAN)(Result != Current);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_string_32 */
EIF_REFERENCE F905_6713 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("to_string_32", 904, Current, 3, 0, 12729);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = Current;
	loc3 = RTRV(eif_new_type(909, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(3);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		RTHOOK(4);
		Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F909_6992(RTCW(Result), loc2));
		RTHOOK(5);
		(nstcall = 1, F910_7133(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[dtype-907])(Current, loc1));
			(nstcall = 1, F910_7072(RTCW(Result), tu4_1, loc1));
			RTHOOK(9);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("as_string_32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F905_6653(RTCW(tr1)));
		if ((nstcall = 0, F1_6(Current, tr1))) {
			tb2 = (EIF_BOOLEAN)(Result == Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F905_6653(RTCW(tr1)));
			if ((EIF_BOOLEAN) !(nstcall = 0, F1_6(Current, tr1))) {
				tb2 = (EIF_BOOLEAN)(Result != Current);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer_8 */
EIF_INTEGER_8 F905_6716 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_integer_8", 904, Current, 1, 0, 12730);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer_8", EX_PRE);
		RTTE((nstcall = 0, F905_6682(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	ti1_1 = (nstcall = 1, F69_1464(RTCW(loc1)));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer_16 */
EIF_INTEGER_16 F905_6717 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_integer_16", 904, Current, 1, 0, 12731);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer_16", EX_PRE);
		RTTE((nstcall = 0, F905_6683(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	ti2_1 = (nstcall = 1, F69_1465(RTCW(loc1)));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer */
EIF_INTEGER_32 F905_6718 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_integer", 904, Current, 1, 0, 12732);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F905_6685(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F69_1467(RTCW(loc1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer_32 */
EIF_INTEGER_32 F905_6719 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_integer_32", 904, Current, 1, 0, 12733);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F905_6685(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F69_1467(RTCW(loc1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer_64 */
EIF_INTEGER_64 F905_6720 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_integer_64", 904, Current, 1, 0, 12734);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer_64", EX_PRE);
		RTTE((nstcall = 0, F905_6686(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	ti8_1 = (nstcall = 1, F69_1468(RTCW(loc1)));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_natural_8 */
EIF_NATURAL_8 F905_6721 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_natural_8", 904, Current, 1, 0, 12735);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural_8", EX_PRE);
		RTTE((nstcall = 0, F905_6687(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu1_1 = (nstcall = 1, F69_1469(RTCW(loc1)));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_natural_16 */
EIF_NATURAL_16 F905_6722 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_natural_16", 904, Current, 1, 0, 12736);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural_16", EX_PRE);
		RTTE((nstcall = 0, F905_6688(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu2_1 = (nstcall = 1, F69_1470(RTCW(loc1)));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_natural */
EIF_NATURAL_32 F905_6723 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_natural", 904, Current, 1, 0, 12737);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural", EX_PRE);
		RTTE((nstcall = 0, F905_6690(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F69_1471(RTCW(loc1)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_natural_32 */
EIF_NATURAL_32 F905_6724 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_natural_32", 904, Current, 1, 0, 12738);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural", EX_PRE);
		RTTE((nstcall = 0, F905_6690(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F69_1471(RTCW(loc1)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_natural_64 */
EIF_NATURAL_64 F905_6725 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_natural_64", 904, Current, 1, 0, 12739);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural_64", EX_PRE);
		RTTE((nstcall = 0, F905_6691(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu8_1 = (nstcall = 1, F69_1473(RTCW(loc1)));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_real */
EIF_REAL_32 F905_6726 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real", 904, Current, 0, 0, 12740);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("represents_a_real", EX_PRE);
		RTTE((nstcall = 0, F905_6677(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = (nstcall = 0, F905_6728(Current));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_real_32 */
EIF_REAL_32 F905_6727 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real_32", 904, Current, 0, 0, 12741);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("represents_a_real", EX_PRE);
		RTTE((nstcall = 0, F905_6677(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = (nstcall = 0, F905_6728(Current));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_double */
EIF_REAL_64 F905_6728 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_double", 904, Current, 1, 0, 12742);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("represents_a_double", EX_PRE);
		RTTE((nstcall = 0, F905_6679(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(3);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tr8_1 = (nstcall = 1, F68_1440(RTCW(loc1)));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_real_64 */
EIF_REAL_64 F905_6729 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_real_64", 904, Current, 1, 0, 12743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("represents_a_double", EX_PRE);
		RTTE((nstcall = 0, F905_6679(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(259,(nstcall = 0, F905_6742), (Current));
	RTHOOK(3);
	(nstcall = 1, F68_1443(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tr8_1 = (nstcall = 1, F68_1440(RTCW(loc1)));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_boolean */
EIF_BOOLEAN F905_6730 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("to_boolean", 904, Current, 0, 0, 12744);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_boolean", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4792[dtype-907])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ((EIF_INTEGER_32) 4L))) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("to_boolean", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
		tr2 = RTOUCR(193,(nstcall = 0, F905_6661), (Current));
		tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
		if (!(EIF_BOOLEAN)(Result == tb2)) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
			tr2 = RTOUCR(194,(nstcall = 0, F905_6660), (Current));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
			tb1 = (EIF_BOOLEAN)((EIF_BOOLEAN) !Result == tb2);
		}
		if (tb1) {
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

/* {READABLE_STRING_GENERAL}.split */
EIF_REFERENCE F905_6731 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("split", 904, Current, 4, 1, 12745);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F632_4174(RTCW(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			RTHOOK(6);
			loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32, EIF_INTEGER_32)) R4768[dtype-907])(Current, arg1, loc2));
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
			(nstcall = 1, F632_4215(RTCW(loc1), tr1));
			RTHOOK(10);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc3 == loc4)) {
			
			RTHOOK(12);
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4848[dtype-907])(Current, ((EIF_INTEGER_32) 0L)));
			(nstcall = 1, F632_4215(RTCW(loc1), tr1));
		}
	} else {
		RTHOOK(13);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4848[dtype-907])(Current, ((EIF_INTEGER_32) 0L)));
		(nstcall = 1, F632_4215(RTCW(loc1), tr1));
	}
	RTHOOK(14);
	Result = (EIF_REFERENCE) loc1;
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("Result /= Void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {READABLE_STRING_GENERAL}.head */
EIF_REFERENCE F905_6734 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("head", 904, Current, 0, 1, 12746);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)))) {
		RTHOOK(3);
		Result = (nstcall = 0, F1_14(Current));
	} else {
		RTHOOK(4);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(Result))-907])(Result));
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		ti4_4 = eif_min_int32 (arg1,ti4_3);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_4)) {
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

/* {READABLE_STRING_GENERAL}.tail */
EIF_REFERENCE F905_6735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("tail", 904, Current, 0, 1, 12747);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)))) {
		RTHOOK(3);
		Result = (nstcall = 0, F1_14(Current));
	} else {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - arg1) + ((EIF_INTEGER_32) 1L)), ti4_3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(Result))-907])(Result));
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[dtype-907])(Current));
		ti4_4 = eif_min_int32 (arg1,ti4_3);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_4)) {
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

/* {READABLE_STRING_GENERAL}.is_valid_integer_or_natural */
EIF_BOOLEAN F905_6738 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_integer_or_natural", 904, Current, 1, 1, 12749);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(260,(nstcall = 0, F905_6741), (Current));
	RTHOOK(2);
	(nstcall = 1, F69_1454(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 1, F69_1462(RTCW(loc1), Current, arg1));
	RTHOOK(4);
	tb1 = (nstcall = 1, F69_1461(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.c_string_provider */
static EIF_REFERENCE F905_6740_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(8)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("c_string_provider", 904, Current, 0, 0, 12750);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(117, 0x01).id, 117, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F118_1993(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("c_string_provider_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F905_6740 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(8,F905_6740_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctoi_convertor */
static EIF_REFERENCE F905_6741_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(260)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctoi_convertor", 904, Current, 0, 0, 12751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(68, 0x01).id, 68, _OBJSIZ_2_3_0_3_0_0_2_0_);
	(nstcall = -1, F69_1453(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H(" ",1,32);
	(nstcall = 1, F66_1398(RTCW(Result), tr1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(" ",1,32);
	(nstcall = 1, F66_1399(RTCW(Result), tr1));
	RTHOOK(4);
	(nstcall = 1, F66_1397(RTCW(Result), (EIF_BOOLEAN) 1));
	RTHOOK(5);
	(nstcall = 1, F66_1396(RTCW(Result), (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("ctoi_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F905_6741 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(260,F905_6741_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctor_convertor */
static EIF_REFERENCE F905_6742_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(259)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctor_convertor", 904, Current, 0, 0, 12752);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_2_6_0_4_0_0_0_3_);
	(nstcall = -1, F68_1430(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H(" ",1,32);
	(nstcall = 1, F66_1398(RTCW(Result), tr1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(" ",1,32);
	(nstcall = 1, F66_1399(RTCW(Result), tr1));
	RTHOOK(4);
	(nstcall = 1, F66_1397(RTCW(Result), (EIF_BOOLEAN) 1));
	RTHOOK(5);
	(nstcall = 1, F66_1396(RTCW(Result), (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("ctor_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F905_6742 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(259,F905_6742_body,(Current));
}

/* {READABLE_STRING_GENERAL}.dotnet_convertor */
static EIF_REFERENCE F905_6743_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(7)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("dotnet_convertor", 904, Current, 0, 0, 12753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(3, 0x01).id, 3, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dotnet_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F905_6743 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(7,F905_6743_body,(Current));
}

/* {READABLE_STRING_GENERAL}.character_properties */
static EIF_REFERENCE F905_6744_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(11)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("character_properties", 904, Current, 0, 0, 12754);
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

EIF_REFERENCE F905_6744 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(11,F905_6744_body,(Current));
}

/* {READABLE_STRING_GENERAL}.internal_hash_code */
EIF_INTEGER_32 F905_6745 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4856[Dtype(Current)-904]);
}


/* {READABLE_STRING_GENERAL}.internal_case_insensitive_hash_code */
EIF_INTEGER_32 F905_6746 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4857[Dtype(Current)-904]);
}


/* {READABLE_STRING_GENERAL}.new_character_32_cursor */
EIF_REFERENCE F905_6747 (EIF_REFERENCE Current)
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
	
	RTEAA("new_character_32_cursor", 904, Current, 0, 0, 12757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(662, 0x01).id, 662, _OBJSIZ_1_0_0_3_0_0_0_0_);
	(nstcall = -1, F663_4360(RTCW(Result), Current));
	RTHOOK(2);
	(nstcall = 1, F663_4366(RTCW(Result)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
