/*
 * Code for class reference UTF_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ut26.h"
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

/* {UTF_CONVERTER}.is_valid_utf_8_string_8 */
EIF_BOOLEAN F30_665 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_utf_8_string_8", 29, Current, 3, 1, 766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc3) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(4);
		loc2++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
		} else {
			RTHOOK(7);
			tb1 = '\0';
			tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
			if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L))) {
				tb1 = (EIF_BOOLEAN) (loc2 < loc3);
			}
			if (tb1) {
				RTHOOK(8);
				loc2++;
				RTHOOK(9);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
			} else {
				RTHOOK(10);
				tb1 = '\0';
				tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
				if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L))) {
					tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) < loc3);
				}
				if (tb1) {
					RTHOOK(11);
					loc2 += ((EIF_INTEGER_32) 2L);
					RTHOOK(12);
					Result = '\0';
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
					if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
						Result = (EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					}
				} else {
					RTHOOK(13);
					tb1 = '\0';
					tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 248L));
					if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L))) {
						tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) < loc3);
					}
					if (tb1) {
						RTHOOK(14);
						loc2 += ((EIF_INTEGER_32) 3L);
						RTHOOK(15);
						Result = '\0';
						tb1 = '\0';
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L))));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
						if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
							tb1 = (EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						}
						if (tb1) {
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
							Result = (EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						}
					} else {
						RTHOOK(16);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.is_valid_utf_16le_string_8 */
EIF_BOOLEAN F30_666 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_utf_16le_string_8", 29, Current, 4, 1, 767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 >= loc4) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(5);
			loc3 += ((EIF_INTEGER_32) 2L);
			RTHOOK(6);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
			tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc3));
			tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
			tu4_2 = eif_bit_or(tu4_1,tu4_3);
			loc1 = (EIF_NATURAL_32) tu4_2;
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L))) {
					RTHOOK(9);
					loc3 += ((EIF_INTEGER_32) 2L);
					RTHOOK(10);
					if ((EIF_BOOLEAN) (loc3 <= loc4)) {
						RTHOOK(11);
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
						tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc3));
						tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
						tu4_2 = eif_bit_or(tu4_1,tu4_3);
						loc2 = (EIF_NATURAL_32) tu4_2;
						RTHOOK(12);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) <= loc2) && (EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 3583L)));
					} else {
						RTHOOK(13);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				} else {
					RTHOOK(14);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.is_valid_utf_16_subpointer */
EIF_BOOLEAN F30_667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_utf_16_subpointer", 29, Current, 4, 4, 768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		tb3 = (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L));
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)));
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		tb1 = (EIF_BOOLEAN) (arg3 < (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
	}
	if (tb1) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L));
		RTHOOK(3);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 * ((EIF_INTEGER_32) 2L));
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
			tu4_1 = (EIF_NATURAL_32) tu2_1;
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && arg4)) {
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(9);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
					RTHOOK(10);
					loc1++;
				} else {
					RTHOOK(11);
					if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L))) {
						RTHOOK(12);
						loc1 += ((EIF_INTEGER_32) 2L);
						RTHOOK(13);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							RTHOOK(14);
							tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
							tu4_1 = (EIF_NATURAL_32) tu2_1;
							loc4 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(15);
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) <= loc4) && (EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 3583L)));
						} else {
							RTHOOK(16);
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					} else {
						RTHOOK(17);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.is_valid_utf_16 */
EIF_BOOLEAN F30_668 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc3 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_utf_16", 29, Current, 3, 1, 769);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F565_3197(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		tu2_1 = (nstcall = 1, F565_3187(RTCW(arg1), loc1));
		loc3 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_16) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_16) ((EIF_INTEGER_32) 57344L)))) {
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 56319L))) {
				RTHOOK(8);
				loc1++;
				RTHOOK(9);
				if ((EIF_BOOLEAN) (loc1 < loc2)) {
					RTHOOK(10);
					tu2_1 = (nstcall = 1, F565_3187(RTCW(arg1), loc1));
					loc3 = (EIF_NATURAL_16) tu2_1;
					RTHOOK(11);
					Result = '\0';
					ti4_1 = (EIF_INTEGER_32) loc3;
					if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 56320L) <= ti4_1)) {
						Result = (EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 3583L));
					}
				} else {
					RTHOOK(12);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(13);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
		RTHOOK(14);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_bytes_count */
EIF_INTEGER_32 F30_669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_8_bytes_count", 29, Current, 2, 3, 770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(8);
			Result++;
		} else {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(10);
				Result += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(12);
					Result += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(13);
					Result += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		RTHOOK(14);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_characters_count_form_pointer */
EIF_INTEGER_32 F30_670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_16_characters_count_form_pointer", 29, Current, 3, 3, 771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enought", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("even_start_position", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("even_end_position", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		RTHOOK(9);
		tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			RTHOOK(11);
			loc1 += ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc1 <= loc2)) {
				RTHOOK(13);
				loc1 += ((EIF_INTEGER_32) 4L);
			}
		}
		RTHOOK(14);
		Result++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_bytes_count */
EIF_INTEGER_32 F30_671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_16_bytes_count", 29, Current, 2, 3, 772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(8);
			Result += ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(9);
			Result += ((EIF_INTEGER_32) 4L);
		}
		RTHOOK(10);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_to_string_32_count */
EIF_INTEGER_32 F30_672 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_8_to_string_32_count", 29, Current, 3, 3, 773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, F573_3197(arg1));
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		tc1 = (nstcall = 1, F573_3187(RTCW(arg1), loc1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 127L))) {
			RTHOOK(9);
			loc1++;
			RTHOOK(10);
			Result++;
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 223L))) {
				RTHOOK(12);
				loc1 += ((EIF_INTEGER_32) 2L);
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					RTHOOK(14);
					Result++;
				}
			} else {
				RTHOOK(15);
				if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 239L))) {
					RTHOOK(16);
					loc1 += ((EIF_INTEGER_32) 3L);
					RTHOOK(17);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						RTHOOK(18);
						Result++;
					}
				} else {
					RTHOOK(19);
					if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 247L))) {
						RTHOOK(20);
						loc1 += ((EIF_INTEGER_32) 4L);
						RTHOOK(21);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							RTHOOK(22);
							Result++;
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.string_32_to_utf_8_string_8 */
EIF_REFERENCE F30_673 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("string_32_to_utf_8_string_8", 29, Current, 0, 1, 774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_675(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_689(Current, Result));
		tb1 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
		if (tb1) {
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

/* {UTF_CONVERTER}.string_32_into_utf_8_string_8 */
void F30_674 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("string_32_into_utf_8_string_8", 29, Current, 0, 2, 775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F30_676(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_689(Current, tr2));
		tb1 = (nstcall = 1, F909_7019(RTCW(tr2), arg1));
		if (tb1) {
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

/* {UTF_CONVERTER}.utf_32_string_to_utf_8_string_8 */
EIF_REFERENCE F30_675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_32_string_to_utf_8_string_8", 29, Current, 0, 1, 776);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = -1, F906_6748(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_676(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_689(Current, Result));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_string_8 */
void F30_676 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_32_string_into_utf_8_string_8", 29, Current, 2, 2, 777);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F908_6908(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + loc2)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		(nstcall = 0, F30_677(Current, tu4_1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_689(Current, tr2));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
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
}

/* {UTF_CONVERTER}.utf_32_code_into_utf_8_string_8 */
void F30_677 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_32_code_into_utf_8_string_8", 29, Current, 0, 2, 778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
		RTHOOK(2);
		tc1 = (EIF_CHARACTER_8) arg1;
		(nstcall = 1, F908_6889(RTCW(arg2), tc1));
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
			RTHOOK(4);
			tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
			tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
			tc1 = (EIF_CHARACTER_8) tu4_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(5);
			tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
			tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
			tc1 = (EIF_CHARACTER_8) tu4_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
				RTHOOK(7);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(8);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(9);
				tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			} else {
				RTHOOK(10);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 18L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(11);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(12);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(13);
				tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_8_0_pointer */
void F30_678 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLR(5,arg6);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("escaped_utf_32_substring_into_utf_8_0_pointer", 29, Current, 8, 6, 779);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(8);
		loc4 = (nstcall = 0, F30_669(Current, arg1, arg2, arg3));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		(nstcall = 1, F788_4660(RTCW(arg4), loc4));
		RTHOOK(10);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(11);
	loc3 = (EIF_INTEGER_32) arg5;
	RTHOOK(12);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		RTHOOK(14);
		loc1++;
		RTHOOK(15);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			RTHOOK(17);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U);
			}
			if (tb1) {
				RTHOOK(18);
				loc1++;
			} else {
				RTHOOK(19);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
					RTHOOK(20);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					loc6 = (EIF_REFERENCE) tr1;
					RTHOOK(21);
					if ((nstcall = 0, F30_732(Current, loc6))) {
						RTHOOK(22);
						loc5 = (nstcall = 0, F30_733(Current, loc6));
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
							RTHOOK(24);
							tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
							loc5 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(25);
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(26);
							loc1 += ((EIF_INTEGER_32) 2L);
						}
					}
				}
			}
		}
		RTHOOK(27);
		if ((EIF_BOOLEAN) !loc7) {
			RTHOOK(28);
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
				RTHOOK(29);
				tu1_1 = (EIF_NATURAL_8) loc5;
				(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, loc3));
				RTHOOK(30);
				loc3++;
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && (EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (arg3 - loc1)) > loc4))) {
					RTHOOK(32);
					loc4 = (nstcall = 0, F30_669(Current, arg1, loc1, arg3));
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 1L));
					RTHOOK(33);
					(nstcall = 1, F788_4660(RTCW(arg4), loc4));
					RTHOOK(34);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				RTHOOK(35);
				if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
					RTHOOK(36);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, loc3));
					RTHOOK(37);
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
					RTHOOK(38);
					loc3 += ((EIF_INTEGER_32) 2L);
				} else {
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
						RTHOOK(40);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
						tu1_1 = (EIF_NATURAL_8) tu4_2;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, loc3));
						RTHOOK(41);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
						RTHOOK(42);
						tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_2;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
						RTHOOK(43);
						loc3 += ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(44);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
						tu1_1 = (EIF_NATURAL_8) tu4_2;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, loc3));
						RTHOOK(45);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
						RTHOOK(46);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
						RTHOOK(47);
						tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_2;
						(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L))));
						RTHOOK(48);
						loc3 += ((EIF_INTEGER_32) 4L);
					}
				}
			}
		} else {
			RTHOOK(49);
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(50);
			tu1_1 = (EIF_NATURAL_8) loc5;
			(nstcall = 1, F788_4601(RTCW(arg4), tu1_1, loc3));
			RTHOOK(51);
			loc3++;
		}
	}
	RTHOOK(52);
	if (loc8) {
		RTHOOK(53);
		(nstcall = 1, F788_4660(RTCW(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
	}
	RTHOOK(54);
	(nstcall = 1, F788_4601(RTCW(arg4), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc3));
	RTHOOK(55);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		RTHOOK(56);
		(nstcall = 1, F128_2035(RTCW(arg6), loc3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(57);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg6 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg6) + O1816[Dtype(arg6)-126]);
			tr1 = (nstcall = 0, F30_687(Current, arg4, arg5, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(58);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg6 == NULL)) {
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr1))-907])(tr1, tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
			tr1 = (nstcall = 0, F30_687(Current, arg4, arg5, ti4_1, (EIF_BOOLEAN) 1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
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
	RTHOOK(59);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.escaped_utf_32_string_to_utf_8_string_8 */
EIF_REFERENCE F30_679 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("escaped_utf_32_string_to_utf_8_string_8", 29, Current, 0, 1, 780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = -1, F906_6748(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_680(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_691(Current, Result));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.escaped_utf_32_string_into_utf_8_string_8 */
void F30_680 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("escaped_utf_32_string_into_utf_8_string_8", 29, Current, 5, 2, 781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F908_6908(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + loc2)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			RTHOOK(7);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U);
			}
			if (tb1) {
				RTHOOK(8);
				loc1++;
			} else {
				RTHOOK(9);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
					RTHOOK(10);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					loc4 = (EIF_REFERENCE) tr2;
					RTHOOK(11);
					if ((nstcall = 0, F30_732(Current, loc4))) {
						RTHOOK(12);
						loc3 = (nstcall = 0, F30_733(Current, loc4));
						RTHOOK(13);
						if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
							RTHOOK(14);
							tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
							loc3 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(15);
							loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(16);
							loc1 += ((EIF_INTEGER_32) 2L);
						}
					}
				}
			}
		}
		RTHOOK(17);
		if ((EIF_BOOLEAN) !loc5) {
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
				RTHOOK(19);
				tc1 = (EIF_CHARACTER_8) loc3;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			} else {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
					RTHOOK(21);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, F908_6889(RTCW(arg2), tc1));
					RTHOOK(22);
					tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
						RTHOOK(24);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
						tc1 = (EIF_CHARACTER_8) tu4_2;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
						RTHOOK(25);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tc1 = (EIF_CHARACTER_8) tu4_1;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
						RTHOOK(26);
						tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tc1 = (EIF_CHARACTER_8) tu4_2;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
					} else {
						RTHOOK(27);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 18L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
						tc1 = (EIF_CHARACTER_8) tu4_2;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
						RTHOOK(28);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tc1 = (EIF_CHARACTER_8) tu4_1;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
						RTHOOK(29);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tc1 = (EIF_CHARACTER_8) tu4_1;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
						RTHOOK(30);
						tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tc1 = (EIF_CHARACTER_8) tu4_2;
						(nstcall = 1, F908_6889(RTCW(arg2), tc1));
					}
				}
			}
		} else {
			RTHOOK(31);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(32);
			tc1 = (EIF_CHARACTER_8) loc3;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(33);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_691(Current, tr2));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.string_32_into_utf_8_0_pointer */
void F30_681 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("string_32_into_utf_8_0_pointer", 29, Current, 0, 4, 782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F30_682(Current, arg1, arg2, arg3, arg4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg4 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4) + O1816[Dtype(arg4)-126]);
			tr1 = (nstcall = 0, F30_687(Current, arg2, arg3, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg4 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, F909_7026(RTCW(arg1), tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
			tr1 = (nstcall = 0, F30_687(Current, arg2, arg3, ti4_1, (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_0_pointer */
void F30_682 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("utf_32_string_into_utf_8_0_pointer", 29, Current, 6, 4, 783);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg3) < (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(5);
		loc4 = (nstcall = 0, F30_669(Current, arg1, ((EIF_INTEGER_32) 1L), loc3));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + loc4) + ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		(nstcall = 1, F788_4660(RTCW(arg2), loc4));
		RTHOOK(7);
		loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(8);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	loc1 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		RTHOOK(11);
		loc2++;
		RTHOOK(12);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(14);
			tu1_1 = (EIF_NATURAL_8) loc5;
			(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, loc1));
			RTHOOK(15);
			loc1++;
		} else {
			RTHOOK(16);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc6 && (EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (loc3 - loc2)) > loc4))) {
				RTHOOK(17);
				loc4 = (nstcall = 0, F30_669(Current, arg1, loc2, loc3));
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) + ((EIF_INTEGER_32) 1L));
				RTHOOK(18);
				(nstcall = 1, F788_4660(RTCW(arg2), loc4));
				RTHOOK(19);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(21);
				tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, loc1));
				RTHOOK(22);
				tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				RTHOOK(23);
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(25);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, loc1));
					RTHOOK(26);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					RTHOOK(27);
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					RTHOOK(28);
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(29);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, loc1));
					RTHOOK(30);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					RTHOOK(31);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					RTHOOK(32);
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F788_4601(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
					RTHOOK(33);
					loc1 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}
	RTHOOK(34);
	if (loc6) {
		RTHOOK(35);
		(nstcall = 1, F788_4660(RTCW(arg2), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	}
	RTHOOK(36);
	(nstcall = 1, F788_4601(RTCW(arg2), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc1));
	RTHOOK(37);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		RTHOOK(38);
		(nstcall = 1, F128_2035(RTCW(arg4), loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(39);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg4 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4) + O1816[Dtype(arg4)-126]);
			tr1 = (nstcall = 0, F30_687(Current, arg2, arg3, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(40);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg4 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(arg1))-907])(arg1, tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
			tr1 = (nstcall = 0, F30_687(Current, arg2, arg3, ti4_1, (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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
	RTHOOK(41);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_8 */
EIF_REFERENCE F30_683 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("utf_32_string_to_utf_8", 29, Current, 2, 1, 784);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_684(Current, arg1));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F567_3197(Result));
	tr1 = (nstcall = 1, F567_3220(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_675(Current, arg1));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F567_3194(RTCW(Result)));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F722_4475(loc2));
				if (tb3) break;
				RTHOOK(4);
				tu1_1 = (nstcall = 1, F722_4466(loc2));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				ti4_1 = (nstcall = 1, F722_4468(loc2));
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
				tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
				(nstcall = 1, F722_4481(loc2));
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_8_0 */
EIF_REFERENCE F30_684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLIU(6);
	
	RTEAA("utf_32_string_to_utf_8_0", 29, Current, 6, 1, 785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	loc1 = (nstcall = 0, F30_669(Current, arg1, ((EIF_INTEGER_32) 1L), loc3));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,566,850,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(nstcall = -1, F567_3185(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		RTHOOK(7);
		loc2++;
		RTHOOK(8);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(10);
			tu1_1 = (EIF_NATURAL_8) loc4;
			(nstcall = 1, F567_3202(RTCW(Result), tu1_1, loc1));
			RTHOOK(11);
			loc1++;
		} else {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(13);
				tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 1, F567_3202(RTCW(Result), tu1_1, loc1));
				RTHOOK(14);
				tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				RTHOOK(15);
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(17);
					tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, loc1));
					RTHOOK(18);
					tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					RTHOOK(19);
					tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					RTHOOK(20);
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(21);
					tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 18L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, loc1));
					RTHOOK(22);
					tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					RTHOOK(23);
					tu4_1 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					RTHOOK(24);
					tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_2;
					(nstcall = 1, F567_3202(RTCW(Result), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
					RTHOOK(25);
					loc1 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}
	RTHOOK(26);
	(nstcall = 1, F567_3202(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("attached_utf_8_string", EX_POST);
		tr1 = (nstcall = 0, F30_675(Current, arg1));
		loc5 = tr1;
		if ((EIF_TRUE)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("count", EX_POST);
		ti4_1 = (nstcall = 1, F567_3197(Result));
		ti4_2 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 1, F906_6768(loc5));
		loc6 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F728_4475(loc6));
			if (tb2) break;
			RTHOOK(30);
			tc1 = (nstcall = 1, F728_4466(loc6));
			ti4_1 = (nstcall = 1, F728_4468(loc6));
			tu1_1 = (nstcall = 1, F567_3187(RTCW(Result), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			tc2 = (EIF_CHARACTER_8) tu1_1;
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
			(nstcall = 1, F728_4481(loc6));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("zero_terminated", EX_POST);
		ti4_1 = (nstcall = 1, F567_3196(RTCW(Result)));
		tu1_1 = (nstcall = 1, F567_3187(RTCW(Result), ti4_1));
		if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_0_pointer_to_escaped_string_32 */
EIF_REFERENCE F30_685 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("utf_8_0_pointer_to_escaped_string_32", 29, Current, 2, 1, 786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_686(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_679(Current, Result));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F906_6768(loc1));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F728_4475(loc2));
				if (tb3) break;
				RTHOOK(4);
				tc1 = (nstcall = 1, F728_4466(loc2));
				ti4_1 = (nstcall = 1, F728_4468(loc2));
				tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
				tc2 = (EIF_CHARACTER_8) tu1_1;
				tb2 = (EIF_BOOLEAN)(tc1 == tc2);
				(nstcall = 1, F728_4481(loc2));
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_0_pointer_into_escaped_string_32 */
void F30_686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("utf_8_0_pointer_into_escaped_string_32", 29, Current, 2, 2, 787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = 0, F30_688(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_679(Current, tr2));
		loc1 = tr2;
		if ((EIF_TRUE)) {
			tr2 = (nstcall = 1, F906_6768(loc1));
			loc2 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F728_4475(loc2));
				if (tb3) break;
				RTHOOK(3);
				tc1 = (nstcall = 1, F728_4466(loc2));
				ti4_2 = (nstcall = 1, F728_4468(loc2));
				tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				tc2 = (EIF_CHARACTER_8) tu1_1;
				tb2 = (EIF_BOOLEAN)(tc1 == tc2);
				(nstcall = 1, F728_4481(loc2));
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
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_8_0_subpointer_to_escaped_string_32 */
EIF_REFERENCE F30_687 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("utf_8_0_subpointer_to_escaped_string_32", 29, Current, 2, 4, 788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(5);
	(nstcall = 0, F30_688(Current, arg1, arg2, arg3, arg4, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_679(Current, Result));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F906_6768(loc1));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F728_4475(loc2));
				if (tb3) break;
				RTHOOK(7);
				tc1 = (nstcall = 1, F728_4466(loc2));
				ti4_1 = (nstcall = 1, F728_4468(loc2));
				tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L))));
				tc2 = (EIF_CHARACTER_8) tu1_1;
				tb2 = (EIF_BOOLEAN)(tc1 == tc2);
				(nstcall = 1, F728_4481(loc2));
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
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_0_subpointer_into_escaped_string_32 */
void F30_688 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg5);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,tr2);
	RTLR(6,loc8);
	RTLIU(7);
	
	RTEAA("utf_8_0_subpointer_into_escaped_string_32", 29, Current, 8, 5, 789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg3) - arg2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		RTHOOK(7);
		tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), loc1));
		loc2 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)) && arg4)) {
			RTHOOK(9);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
				RTHOOK(11);
				tw1 = (EIF_CHARACTER_32) loc2;
				(nstcall = 1, F910_7098(RTCW(arg5), tw1));
				RTHOOK(12);
				loc1++;
			} else {
				RTHOOK(13);
				tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc1 < arg3)) {
						RTHOOK(15);
						tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
						loc3 = (EIF_NATURAL_8) tu1_1;
						RTHOOK(16);
						tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
						if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
							RTHOOK(17);
							tu4_1 = (EIF_NATURAL_32) loc2;
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
							tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
							tu4_2 = (EIF_NATURAL_32) loc3;
							tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_2 = eif_bit_or(tu4_1,tu4_3);
							tw1 = (EIF_CHARACTER_32) tu4_2;
							(nstcall = 1, F910_7098(RTCW(arg5), tw1));
							RTHOOK(18);
							loc1 += ((EIF_INTEGER_32) 2L);
						} else {
							RTHOOK(19);
							tu2_1 = (EIF_NATURAL_16) loc2;
							(nstcall = 0, F30_731(Current, arg5, tu2_1));
							RTHOOK(20);
							loc1++;
						}
					} else {
						RTHOOK(21);
						tu2_1 = (EIF_NATURAL_16) loc2;
						(nstcall = 0, F30_731(Current, arg5, tu2_1));
						RTHOOK(22);
						loc1++;
					}
				} else {
					RTHOOK(23);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
						RTHOOK(24);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < arg3)) {
							RTHOOK(25);
							tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
							loc3 = (EIF_NATURAL_8) tu1_1;
							RTHOOK(26);
							tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
							loc4 = (EIF_NATURAL_8) tu1_1;
							RTHOOK(27);
							tb1 = '\0';
							tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
							if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
								tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
							}
							if (tb1) {
								RTHOOK(28);
								tu4_1 = (EIF_NATURAL_32) loc2;
								tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
								tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 12L));
								tu4_2 = (EIF_NATURAL_32) loc3;
								tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 6L));
								tu4_3 = eif_bit_or(tu4_1,tu4_2);
								tu4_1 = (EIF_NATURAL_32) loc4;
								tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_or(tu4_3,tu4_2);
								tw1 = (EIF_CHARACTER_32) tu4_1;
								loc6 = (EIF_CHARACTER_32) tw1;
								RTHOOK(29);
								(nstcall = 1, F910_7098(RTCW(arg5), loc6));
								RTHOOK(30);
								loc1 += ((EIF_INTEGER_32) 3L);
							} else {
								RTHOOK(31);
								tu2_1 = (EIF_NATURAL_16) loc2;
								(nstcall = 0, F30_731(Current, arg5, tu2_1));
								RTHOOK(32);
								loc1++;
							}
						} else {
							RTHOOK(33);
							tu2_1 = (EIF_NATURAL_16) loc2;
							(nstcall = 0, F30_731(Current, arg5, tu2_1));
							RTHOOK(34);
							loc1++;
						}
					} else {
						RTHOOK(35);
						tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
						if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
							RTHOOK(36);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < arg3)) {
								RTHOOK(37);
								tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
								loc3 = (EIF_NATURAL_8) tu1_1;
								RTHOOK(38);
								tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
								loc4 = (EIF_NATURAL_8) tu1_1;
								RTHOOK(39);
								tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
								loc5 = (EIF_NATURAL_8) tu1_1;
								RTHOOK(40);
								tb1 = '\0';
								tb2 = '\0';
								tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
									tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
									tb2 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
								}
								if (tb2) {
									tu1_1 = eif_bit_and(loc5,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
									tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
								}
								if (tb1) {
									RTHOOK(41);
									tu4_1 = (EIF_NATURAL_32) loc2;
									tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
									tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 18L));
									tu4_2 = (EIF_NATURAL_32) loc3;
									tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
									tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 12L));
									tu4_3 = eif_bit_or(tu4_1,tu4_2);
									tu4_1 = (EIF_NATURAL_32) loc4;
									tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
									tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
									tu4_2 = eif_bit_or(tu4_3,tu4_1);
									tu4_1 = (EIF_NATURAL_32) loc5;
									tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
									tu4_1 = eif_bit_or(tu4_2,tu4_3);
									tw1 = (EIF_CHARACTER_32) tu4_1;
									(nstcall = 1, F910_7098(RTCW(arg5), tw1));
									RTHOOK(42);
									loc1 += ((EIF_INTEGER_32) 4L);
								} else {
									RTHOOK(43);
									tu2_1 = (EIF_NATURAL_16) loc2;
									(nstcall = 0, F30_731(Current, arg5, tu2_1));
									RTHOOK(44);
									loc1++;
								}
							} else {
								RTHOOK(45);
								tu2_1 = (EIF_NATURAL_16) loc2;
								(nstcall = 0, F30_731(Current, arg5, tu2_1));
								RTHOOK(46);
								loc1++;
							}
						} else {
							RTHOOK(47);
							tu2_1 = (EIF_NATURAL_16) loc2;
							(nstcall = 0, F30_731(Current, arg5, tu2_1));
							RTHOOK(48);
							loc1++;
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(49);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg5), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_679(Current, tr2));
		loc7 = tr2;
		if ((EIF_TRUE)) {
			tr2 = (nstcall = 1, F906_6768(loc7));
			loc8 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F728_4475(loc8));
				if (tb3) break;
				RTHOOK(50);
				tc1 = (nstcall = 1, F728_4466(loc8));
				ti4_2 = (nstcall = 1, F728_4468(loc8));
				tu1_1 = (nstcall = 1, F788_4581(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_2) - ((EIF_INTEGER_32) 1L))));
				tc2 = (EIF_CHARACTER_8) tu1_1;
				tb2 = (EIF_BOOLEAN)(tc1 == tc2);
				(nstcall = 1, F728_4481(loc8));
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
	RTHOOK(51);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_string_32 */
EIF_REFERENCE F30_689 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_8_string_8_to_string_32", 29, Current, 0, 1, 790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_690(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_665(Current, arg1))) {
			tr1 = (nstcall = 0, F30_675(Current, Result));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_into_string_32 */
void F30_690 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_8_string_8_into_string_32", 29, Current, 3, 2, 791);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + loc2)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 1, F910_7098(RTCW(arg2), tw1));
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L))) {
				RTHOOK(9);
				loc1++;
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					RTHOOK(11);
					tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
					tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
					tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(tu4_2,tu4_3);
					tw1 = (EIF_CHARACTER_32) tu4_1;
					(nstcall = 1, F910_7098(RTCW(arg2), tw1));
				}
			} else {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L))) {
					RTHOOK(13);
					loc1 += ((EIF_INTEGER_32) 2L);
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						RTHOOK(15);
						tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
						tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
						tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 6L));
						tu4_3 = eif_bit_or(tu4_2,tu4_1);
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_3,tu4_2);
						tw1 = (EIF_CHARACTER_32) tu4_1;
						(nstcall = 1, F910_7098(RTCW(arg2), tw1));
					}
				} else {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L))) {
						RTHOOK(17);
						loc1 += ((EIF_INTEGER_32) 3L);
						RTHOOK(18);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							RTHOOK(19);
							tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
							tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 18L));
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L))));
							tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 12L));
							tu4_3 = eif_bit_or(tu4_2,tu4_1);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
							tu4_2 = eif_bit_or(tu4_3,tu4_1);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
							tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_or(tu4_2,tu4_3);
							tw1 = (EIF_CHARACTER_32) tu4_1;
							(nstcall = 1, F910_7098(RTCW(arg2), tw1));
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_665(Current, arg1))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_675(Current, tr2));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr2), arg1));
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
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_escaped_string_32 */
EIF_REFERENCE F30_691 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_8_string_8_to_escaped_string_32", 29, Current, 0, 1, 792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_692(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_679(Current, Result));
		tb1 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.utf_8_string_8_into_escaped_string_32 */
void F30_692 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc6 = (EIF_NATURAL_8) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_8_string_8_into_escaped_string_32", 29, Current, 7, 2, 793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + loc2)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		tu1_1 = (EIF_NATURAL_8) tu4_1;
		loc3 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 1, F910_7098(RTCW(arg2), tw1));
		} else {
			RTHOOK(8);
			tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				RTHOOK(9);
				if ((EIF_BOOLEAN) (loc1 < loc2)) {
					RTHOOK(10);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					loc4 = (EIF_NATURAL_8) tu1_1;
					RTHOOK(11);
					tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
						RTHOOK(12);
						tu4_1 = (EIF_NATURAL_32) loc3;
						tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
						tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) loc4;
						tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_or(tu4_1,tu4_3);
						tw1 = (EIF_CHARACTER_32) tu4_2;
						(nstcall = 1, F910_7098(RTCW(arg2), tw1));
						RTHOOK(13);
						loc1++;
					} else {
						RTHOOK(14);
						tu2_1 = (EIF_NATURAL_16) loc3;
						(nstcall = 0, F30_731(Current, arg2, tu2_1));
					}
				} else {
					RTHOOK(15);
					tu2_1 = (EIF_NATURAL_16) loc3;
					(nstcall = 0, F30_731(Current, arg2, tu2_1));
				}
			} else {
				RTHOOK(16);
				tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
						RTHOOK(18);
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						loc4 = (EIF_NATURAL_8) tu1_1;
						RTHOOK(19);
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						loc5 = (EIF_NATURAL_8) tu1_1;
						RTHOOK(20);
						tb1 = '\0';
						tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
						if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
							tu1_1 = eif_bit_and(loc5,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
							tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
						}
						if (tb1) {
							RTHOOK(21);
							tu4_1 = (EIF_NATURAL_32) loc3;
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
							tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 12L));
							tu4_2 = (EIF_NATURAL_32) loc4;
							tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 6L));
							tu4_3 = eif_bit_or(tu4_1,tu4_2);
							tu4_1 = (EIF_NATURAL_32) loc5;
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_or(tu4_3,tu4_2);
							tw1 = (EIF_CHARACTER_32) tu4_1;
							loc7 = (EIF_CHARACTER_32) tw1;
							RTHOOK(22);
							(nstcall = 1, F910_7098(RTCW(arg2), loc7));
							RTHOOK(23);
							loc1 += ((EIF_INTEGER_32) 2L);
						} else {
							RTHOOK(24);
							tu2_1 = (EIF_NATURAL_16) loc3;
							(nstcall = 0, F30_731(Current, arg2, tu2_1));
						}
					} else {
						RTHOOK(25);
						tu2_1 = (EIF_NATURAL_16) loc3;
						(nstcall = 0, F30_731(Current, arg2, tu2_1));
					}
				} else {
					RTHOOK(26);
					tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < loc2)) {
							RTHOOK(28);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
							tu1_1 = (EIF_NATURAL_8) tu4_1;
							loc4 = (EIF_NATURAL_8) tu1_1;
							RTHOOK(29);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
							tu1_1 = (EIF_NATURAL_8) tu4_1;
							loc5 = (EIF_NATURAL_8) tu1_1;
							RTHOOK(30);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
							tu1_1 = (EIF_NATURAL_8) tu4_1;
							loc6 = (EIF_NATURAL_8) tu1_1;
							RTHOOK(31);
							tb1 = '\0';
							tb2 = '\0';
							tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
							if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
								tu1_1 = eif_bit_and(loc5,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								tb2 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
							}
							if (tb2) {
								tu1_1 = eif_bit_and(loc6,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
							}
							if (tb1) {
								RTHOOK(32);
								tu4_1 = (EIF_NATURAL_32) loc3;
								tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
								tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 18L));
								tu4_2 = (EIF_NATURAL_32) loc4;
								tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 12L));
								tu4_3 = eif_bit_or(tu4_1,tu4_2);
								tu4_1 = (EIF_NATURAL_32) loc5;
								tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
								tu4_2 = eif_bit_or(tu4_3,tu4_1);
								tu4_1 = (EIF_NATURAL_32) loc6;
								tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_or(tu4_2,tu4_3);
								tw1 = (EIF_CHARACTER_32) tu4_1;
								(nstcall = 1, F910_7098(RTCW(arg2), tw1));
								RTHOOK(33);
								loc1 += ((EIF_INTEGER_32) 3L);
							} else {
								RTHOOK(34);
								tu2_1 = (EIF_NATURAL_16) loc3;
								(nstcall = 0, F30_731(Current, arg2, tu2_1));
							}
						} else {
							RTHOOK(35);
							tu2_1 = (EIF_NATURAL_16) loc3;
							(nstcall = 0, F30_731(Current, arg2, tu2_1));
						}
					} else {
						RTHOOK(36);
						tu2_1 = (EIF_NATURAL_16) loc3;
						(nstcall = 0, F30_731(Current, arg2, tu2_1));
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(37);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_679(Current, tr2));
		tb1 = (nstcall = 1, F906_6776(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.string_32_to_utf_16 */
EIF_REFERENCE F30_693 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("string_32_to_utf_16", 29, Current, 2, 1, 794);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_694(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_701(Current, arg1));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F565_3194(RTCW(Result)));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc2));
				if (tb3) break;
				RTHOOK(3);
				tu2_1 = (nstcall = 1, F720_4466(loc2));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L))));
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_3 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
				tu4_4 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 16L));
				tu4_3 = eif_bit_or(tu4_2,tu4_4);
				tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_3);
				(nstcall = 1, F720_4481(loc2));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_16 */
EIF_REFERENCE F30_694 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("utf_32_string_to_utf_16", 29, Current, 2, 1, 795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_696(Current, arg1));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F565_3197(Result));
	tr1 = (nstcall = 1, F565_3220(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_701(Current, arg1));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F565_3194(RTCW(Result)));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc2));
				if (tb3) break;
				RTHOOK(4);
				tu2_1 = (nstcall = 1, F720_4466(loc2));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L))));
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_3 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
				tu4_4 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 8L));
				tu4_3 = eif_bit_or(tu4_2,tu4_4);
				tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_3);
				(nstcall = 1, F720_4481(loc2));
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.string_32_to_utf_16_0 */
EIF_REFERENCE F30_695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("string_32_to_utf_16_0", 29, Current, 2, 1, 796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_696(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_701(Current, arg1));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			ti4_1 = (nstcall = 1, F565_3197(Result));
			tr1 = (nstcall = 1, F565_3218(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F565_3194(RTCW(tr1)));
			loc2 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc2));
				if (tb3) break;
				RTHOOK(3);
				tu2_1 = (nstcall = 1, F720_4466(loc2));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L))));
				ti4_1 = (nstcall = 1, F720_4468(loc2));
				tu4_3 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
				tu4_4 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 8L));
				tu4_3 = eif_bit_or(tu4_2,tu4_4);
				tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_3);
				(nstcall = 1, F720_4481(loc2));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_16_0 */
EIF_REFERENCE F30_696 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("utf_32_string_to_utf_16_0", 29, Current, 7, 1, 797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc4 = (EIF_INTEGER_32) loc2;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,564,856,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_16), EIF_TRUE);
		RT_SPECIAL_COUNT(Result) = 0;
	}
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(6);
		loc1++;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc4 < (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)))) {
			RTHOOK(8);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + (EIF_INTEGER_32) (loc2 - loc1)) + ((EIF_INTEGER_32) 2L));
			RTHOOK(9);
			tr1 = (nstcall = 1, F565_3219(Result, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L))));
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(10);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(12);
			tu2_1 = (EIF_NATURAL_16) loc5;
			(nstcall = 1, F565_3204(RTCW(Result), tu2_1));
			RTHOOK(13);
			loc3++;
		} else {
			RTHOOK(14);
			tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 10L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
			(nstcall = 1, F565_3204(RTCW(Result), tu2_1));
			RTHOOK(15);
			tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
			(nstcall = 1, F565_3204(RTCW(Result), tu2_1));
			RTHOOK(16);
			loc3 += ((EIF_INTEGER_32) 2L);
		}
	}
	RTHOOK(17);
	(nstcall = 1, F565_3204(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_701(Current, arg1));
		loc6 = tr1;
		if ((EIF_TRUE)) {
			ti4_1 = (nstcall = 1, F565_3197(Result));
			tr1 = (nstcall = 1, F565_3218(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F565_3194(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc7));
				if (tb3) break;
				RTHOOK(19);
				tu2_1 = (nstcall = 1, F720_4466(loc7));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				ti4_1 = (nstcall = 1, F720_4468(loc7));
				tu4_2 = (nstcall = 1, F908_6844(loc6, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L))));
				ti4_1 = (nstcall = 1, F720_4468(loc7));
				tu4_3 = (nstcall = 1, F908_6844(loc6, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
				tu4_4 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 8L));
				tu4_3 = eif_bit_or(tu4_2,tu4_4);
				tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_3);
				(nstcall = 1, F720_4481(loc7));
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
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.string_32_into_utf_16_pointer */
void F30_697 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("string_32_into_utf_16_pointer", 29, Current, 0, 4, 798);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("even_p_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	(nstcall = 0, F30_699(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1, arg2, arg3, arg4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg4 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4) + O1816[Dtype(arg4)-126]);
			tr1 = (nstcall = 0, F30_708(Current, arg2, (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg4 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, F909_7026(RTCW(arg1), tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
			tr1 = (nstcall = 0, F30_708(Current, arg2, (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.string_32_into_utf_16_0_pointer */
void F30_698 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("string_32_into_utf_16_0_pointer", 29, Current, 0, 4, 799);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("even_p_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	(nstcall = 0, F30_700(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1, arg2, arg3, arg4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg4 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4) + O1816[Dtype(arg4)-126]);
			tr1 = (nstcall = 0, F30_708(Current, arg2, (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg4 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, F909_7026(RTCW(arg1), tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
			tr1 = (nstcall = 0, F30_708(Current, arg2, (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F909_7019(RTCW(tr1), arg1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_32_substring_into_utf_16_pointer */
void F30_699 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,tr1);
	RTLR(3,arg6);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("utf_32_substring_into_utf_16_pointer", 29, Current, 1, 6, 800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("even_p_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg5 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(7);
	(nstcall = 0, F30_700(Current, arg1, arg2, arg3, arg4, arg5, arg6));
	RTHOOK(8);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
		RTHOOK(9);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		(nstcall = 1, F788_4660(RTCW(arg4), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 2L))));
		RTHOOK(10);
		if ((EIF_BOOLEAN)(arg6 != NULL)) {
			RTHOOK(11);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
			(nstcall = 1, F128_2035(RTCW(arg6), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 2L))));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("p_count_may_increase", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg6 != NULL)) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg6) + O1816[Dtype(arg6)-126]);
			tr2 = (nstcall = 0, F30_708(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg6 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(arg1))-907])(arg1, tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
			tr2 = (nstcall = 0, F30_708(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
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
}

/* {UTF_CONVERTER}.utf_32_substring_into_utf_16_0_pointer */
void F30_700 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg6);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("utf_32_substring_into_utf_16_0_pointer", 29, Current, 5, 6, 801);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("even_p_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg5 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)))) {
		RTHOOK(9);
		loc4 = (nstcall = 0, F30_671(Current, arg1, arg2, arg3));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 2L));
		RTHOOK(10);
		(nstcall = 1, F788_4660(RTCW(arg4), loc4));
		RTHOOK(11);
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(12);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(13);
	loc3 = (EIF_INTEGER_32) arg5;
	for (;;) {
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		RTHOOK(15);
		loc1++;
		RTHOOK(16);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(18);
			tu2_1 = (EIF_NATURAL_16) loc2;
			(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, loc3));
			RTHOOK(19);
			loc3 += ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(20);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && (EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - loc1) * ((EIF_INTEGER_32) 2L))) > loc4))) {
				RTHOOK(21);
				loc4 = (nstcall = 0, F30_671(Current, arg1, loc1, arg3));
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 2L));
				RTHOOK(22);
				(nstcall = 1, F788_4660(RTCW(arg4), loc4));
				RTHOOK(23);
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(24);
			tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 10L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
			(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, loc3));
			RTHOOK(25);
			tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
			(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
			RTHOOK(26);
			loc3 += ((EIF_INTEGER_32) 4L);
		}
	}
	RTHOOK(27);
	if (loc5) {
		RTHOOK(28);
		(nstcall = 1, F788_4660(RTCW(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
	}
	RTHOOK(29);
	(nstcall = 1, F788_4602(RTCW(arg4), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), loc3));
	RTHOOK(30);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		RTHOOK(31);
		(nstcall = 1, F128_2035(RTCW(arg6), loc3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("p_count_may_increase", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg6 != NULL)) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg6) + O1816[Dtype(arg6)-126]);
			tr2 = (nstcall = 0, F30_708(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(34);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg6 == NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(arg1))-907])(arg1, tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
			tr2 = (nstcall = 0, F30_708(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
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
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_16le_string_8 */
EIF_REFERENCE F30_701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_32_string_to_utf_16le_string_8", 29, Current, 0, 1, 802);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = -1, F906_6748(RTCW(Result), (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L))));
	RTHOOK(2);
	(nstcall = 0, F30_702(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_716(Current, Result));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.utf_32_string_into_utf_16le_string_8 */
void F30_702 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_16 loc4 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("utf_32_string_into_utf_16le_string_8", 29, Current, 4, 2, 803);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F908_6908(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L)))));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(7);
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
			tc1 = (EIF_CHARACTER_8) tu4_1;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(8);
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
			tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
			tc1 = (EIF_CHARACTER_8) tu4_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
		} else {
			RTHOOK(9);
			tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 10L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
			loc4 = (EIF_NATURAL_16) tu2_1;
			RTHOOK(10);
			tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
			tc1 = (EIF_CHARACTER_8) tu2_1;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(11);
			tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
			tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
			tc1 = (EIF_CHARACTER_8) tu2_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(12);
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
			loc4 = (EIF_NATURAL_16) tu2_1;
			RTHOOK(13);
			tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
			tc1 = (EIF_CHARACTER_8) tu2_1;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(14);
			tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
			tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
			tc1 = (EIF_CHARACTER_8) tu2_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_716(Current, tr2));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
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

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_16_0_pointer */
void F30_703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,arg6);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("escaped_utf_32_substring_into_utf_16_0_pointer", 29, Current, 8, 6, 804);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("even_p_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg5 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("p_offset_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)))) {
		RTHOOK(9);
		loc4 = (nstcall = 0, F30_671(Current, arg1, arg2, arg3));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 2L));
		RTHOOK(10);
		(nstcall = 1, F788_4660(RTCW(arg4), loc4));
		RTHOOK(11);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(12);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(13);
	loc3 = (EIF_INTEGER_32) arg5;
	for (;;) {
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		RTHOOK(15);
		loc1++;
		RTHOOK(16);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(17);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				RTHOOK(19);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				if ((EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U)) {
					RTHOOK(20);
					loc1++;
				} else {
					RTHOOK(21);
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						RTHOOK(22);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)) < loc2)) {
							RTHOOK(23);
							tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L))));
							loc6 = (EIF_REFERENCE) tr2;
							RTHOOK(24);
							if ((nstcall = 0, F30_732(Current, loc6))) {
								RTHOOK(25);
								loc5 = (nstcall = 0, F30_733(Current, loc6));
								RTHOOK(26);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc5 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
									RTHOOK(27);
									tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
									loc5 = (EIF_NATURAL_32) tu4_1;
								} else {
									RTHOOK(28);
									loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(29);
									loc1 += ((EIF_INTEGER_32) 5L);
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(30);
		if ((EIF_BOOLEAN) !loc7) {
			RTHOOK(31);
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
				RTHOOK(32);
				tu2_1 = (EIF_NATURAL_16) loc5;
				(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, loc3));
				RTHOOK(33);
				loc3 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(34);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && (EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - loc1) * ((EIF_INTEGER_32) 2L))) > loc4))) {
					RTHOOK(35);
					loc4 = (nstcall = 0, F30_671(Current, arg1, loc1, arg3));
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 2L));
					RTHOOK(36);
					(nstcall = 1, F788_4660(RTCW(arg4), loc4));
					RTHOOK(37);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				RTHOOK(38);
				tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 10L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
				(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, loc3));
				RTHOOK(39);
				tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
				(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
				RTHOOK(40);
				loc3 += ((EIF_INTEGER_32) 4L);
			}
		} else {
			RTHOOK(41);
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(42);
			tu2_1 = (EIF_NATURAL_16) loc5;
			(nstcall = 1, F788_4602(RTCW(arg4), tu2_1, loc3));
			RTHOOK(43);
			loc3 += ((EIF_INTEGER_32) 2L);
		}
	}
	RTHOOK(44);
	if (loc8) {
		RTHOOK(45);
		(nstcall = 1, F788_4660(RTCW(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
	}
	RTHOOK(46);
	(nstcall = 1, F788_4602(RTCW(arg4), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), loc3));
	RTHOOK(47);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		RTHOOK(48);
		(nstcall = 1, F128_2035(RTCW(arg6), loc3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(49);
		RTCT("p_count_may_increase", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(50);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg6 != NULL)) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg6) + O1816[Dtype(arg6)-126]);
			tr2 = (nstcall = 0, F30_712(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(51);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg6 == NULL)) {
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4784[Dtype(RTCW(tr2))-907])(tr2, tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
			tr2 = (nstcall = 0, F30_712(Current, arg4, (EIF_INTEGER_32) (arg5 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr2), tr3));
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
	RTHOOK(52);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.escaped_utf_32_string_to_utf_16le_string_8 */
EIF_REFERENCE F30_704 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("escaped_utf_32_string_to_utf_16le_string_8", 29, Current, 0, 1, 805);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = -1, F906_6748(RTCW(Result), (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L))));
	RTHOOK(2);
	(nstcall = 0, F30_705(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_718(Current, Result));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.escaped_utf_32_string_into_utf_16le_string_8 */
void F30_705 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_16 loc4 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("escaped_utf_32_string_into_utf_16le_string_8", 29, Current, 6, 2, 806);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F908_6908(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L)))));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		loc1++;
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				RTHOOK(8);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				if ((EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U)) {
					RTHOOK(9);
					loc1++;
				} else {
					RTHOOK(10);
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						RTHOOK(11);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)) < loc2)) {
							RTHOOK(12);
							tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L))));
							loc5 = (EIF_REFERENCE) tr2;
							RTHOOK(13);
							if ((nstcall = 0, F30_732(Current, loc5))) {
								RTHOOK(14);
								loc3 = (nstcall = 0, F30_733(Current, loc5));
								RTHOOK(15);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
									RTHOOK(16);
									tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
									loc3 = (EIF_NATURAL_32) tu4_1;
								} else {
									RTHOOK(17);
									loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(18);
									loc1 += ((EIF_INTEGER_32) 5L);
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) !loc6) {
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
				RTHOOK(21);
				tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(22);
				tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			} else {
				RTHOOK(23);
				tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 10L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
				loc4 = (EIF_NATURAL_16) tu2_1;
				RTHOOK(24);
				tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
				tc1 = (EIF_CHARACTER_8) tu2_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(25);
				tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
				tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu2_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(26);
				tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
				loc4 = (EIF_NATURAL_16) tu2_1;
				RTHOOK(27);
				tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
				tc1 = (EIF_CHARACTER_8) tu2_1;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
				RTHOOK(28);
				tu2_1 = eif_bit_and(loc4,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
				tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu2_2;
				(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			}
		} else {
			RTHOOK(29);
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(30);
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
			tc1 = (EIF_CHARACTER_8) tu4_1;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
			RTHOOK(31);
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
			tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
			tc1 = (EIF_CHARACTER_8) tu4_2;
			(nstcall = 1, F908_6889(RTCW(arg2), tc1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_718(Current, tr2));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_to_string_32 */
EIF_REFERENCE F30_706 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("utf_16_0_pointer_to_string_32", 29, Current, 1, 1, 807);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(4);
	(nstcall = 0, F30_707(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		if ((nstcall = 0, F30_667(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)), (EIF_BOOLEAN) 1))) {
			tr1 = (nstcall = 0, F30_693(Current, Result));
			tr2 = (nstcall = 1, F565_3194(RTCW(tr1)));
			loc1 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc1));
				if (tb3) break;
				RTHOOK(6);
				tu2_1 = (nstcall = 1, F720_4466(loc1));
				ti4_1 = (nstcall = 1, F720_4468(loc1));
				tu2_2 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
				tb2 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
				(nstcall = 1, F720_4481(loc1));
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
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_into_string_32 */
void F30_707 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("utf_16_0_pointer_into_string_32", 29, Current, 1, 2, 808);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = 0, F30_709(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		if ((nstcall = 0, F30_667(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)), (EIF_BOOLEAN) 1))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_693(Current, tr2));
			tr3 = (nstcall = 1, F565_3194(RTCW(tr2)));
			loc1 = (EIF_REFERENCE) tr3;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc1));
				if (tb3) break;
				RTHOOK(5);
				tu2_1 = (nstcall = 1, F720_4466(loc1));
				ti4_2 = (nstcall = 1, F720_4468(loc1));
				tu2_2 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L))));
				tb2 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
				(nstcall = 1, F720_4481(loc1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_to_string_32 */
EIF_REFERENCE F30_708 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("utf_16_0_subpointer_to_string_32", 29, Current, 1, 4, 809);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(6);
	(nstcall = 0, F30_709(Current, arg1, arg2, arg3, arg4, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_667(Current, arg1, arg2, arg3, arg4))) {
			tr1 = (nstcall = 0, F30_693(Current, Result));
			tr2 = (nstcall = 1, F565_3194(RTCW(tr1)));
			loc1 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc1));
				if (tb3) break;
				RTHOOK(8);
				tu2_1 = (nstcall = 1, F720_4466(loc1));
				ti4_1 = (nstcall = 1, F720_4468(loc1));
				tu2_2 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L))));
				tb2 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
				(nstcall = 1, F720_4481(loc1));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_into_string_32 */
void F30_709 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg5);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("utf_16_0_subpointer_into_string_32", 29, Current, 4, 5, 810);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg3) - arg2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L));
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 * ((EIF_INTEGER_32) 2L));
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(9);
		tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && arg4)) {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(12);
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(13);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
				RTHOOK(14);
				tw1 = (EIF_CHARACTER_32) loc3;
				(nstcall = 1, F910_7098(RTCW(arg5), tw1));
			} else {
				RTHOOK(15);
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					RTHOOK(16);
					tu4_1 = (EIF_NATURAL_32) loc3;
					tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 10L));
					tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
					tu4_1 = (EIF_NATURAL_32) tu2_1;
					tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_2 + tu4_1) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
					(nstcall = 1, F910_7098(RTCW(arg5), tw1));
					RTHOOK(17);
					loc1 += ((EIF_INTEGER_32) 2L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_667(Current, arg1, arg2, arg3, arg4))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F910_7131(RTCW(arg5), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_693(Current, tr2));
			tr3 = (nstcall = 1, F565_3194(RTCW(tr2)));
			loc4 = (EIF_REFERENCE) tr3;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F720_4475(loc4));
				if (tb3) break;
				RTHOOK(19);
				tu2_1 = (nstcall = 1, F720_4466(loc4));
				ti4_2 = (nstcall = 1, F720_4468(loc4));
				tu2_2 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L))));
				tb2 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
				(nstcall = 1, F720_4481(loc4));
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
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_to_escaped_string_32 */
EIF_REFERENCE F30_710 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("utf_16_0_pointer_to_escaped_string_32", 29, Current, 2, 1, 811);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(4);
	(nstcall = 0, F30_711(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_704(Current, Result));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F906_6768(loc1));
			tr2 = (nstcall = 1, F728_4472(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
			tr1 = (nstcall = 1, F703_4438(RTCW(tr2)));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F703_4444(loc2));
				if (tb3) break;
				RTHOOK(6);
				tc1 = (nstcall = 1, F688_4426(loc2));
				tu4_1 = (EIF_NATURAL_32) tc1;
				ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				tb2 = (EIF_BOOLEAN)(tu4_2 == tu4_1);
				(nstcall = 1, F703_4452(loc2));
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
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_into_escaped_string_32 */
void F30_711 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("utf_16_0_pointer_into_escaped_string_32", 29, Current, 2, 2, 812);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	(nstcall = 0, F30_713(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_704(Current, tr2));
		loc1 = tr2;
		if ((EIF_TRUE)) {
			tr2 = (nstcall = 1, F906_6768(loc1));
			tr3 = (nstcall = 1, F728_4472(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tr2 = (nstcall = 1, F703_4438(RTCW(tr3)));
			loc2 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F703_4444(loc2));
				if (tb3) break;
				RTHOOK(5);
				tc1 = (nstcall = 1, F688_4426(loc2));
				tu4_1 = (EIF_NATURAL_32) tc1;
				ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				tb2 = (EIF_BOOLEAN)(tu4_2 == tu4_1);
				(nstcall = 1, F703_4452(loc2));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_to_escaped_string_32 */
EIF_REFERENCE F30_712 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("utf_16_0_subpointer_to_escaped_string_32", 29, Current, 2, 4, 813);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	(nstcall = 0, F30_713(Current, arg1, arg2, arg3, arg4, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F30_704(Current, Result));
		loc1 = tr1;
		if ((EIF_TRUE)) {
			tr1 = (nstcall = 1, F906_6768(loc1));
			tr2 = (nstcall = 1, F728_4472(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
			tr1 = (nstcall = 1, F703_4438(RTCW(tr2)));
			loc2 = (EIF_REFERENCE) tr1;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F703_4444(loc2));
				if (tb3) break;
				RTHOOK(8);
				tc1 = (nstcall = 1, F688_4426(loc2));
				tu4_1 = (EIF_NATURAL_32) tc1;
				ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu4_2 = (nstcall = 1, F908_6844(loc1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_1_1_0_4_);
				tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L)) + ti4_1) - ((EIF_INTEGER_32) 1L))));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				tb2 = (EIF_BOOLEAN)(tu4_2 == tu4_1);
				(nstcall = 1, F703_4452(loc2));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_into_escaped_string_32 */
void F30_713 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg5);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,loc6);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("utf_16_0_subpointer_into_escaped_string_32", 29, Current, 6, 5, 814);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("minimum_size", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 < (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg3) - arg2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L));
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 * ((EIF_INTEGER_32) 2L));
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(9);
		tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && arg4)) {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(12);
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(13);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
				RTHOOK(14);
				tw1 = (EIF_CHARACTER_32) loc3;
				(nstcall = 1, F910_7098(RTCW(arg5), tw1));
			} else {
				RTHOOK(15);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L)) && (EIF_BOOLEAN) (loc1 <= loc2))) {
					RTHOOK(16);
					tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), loc1));
					tu4_1 = (EIF_NATURAL_32) tu2_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L)) && (EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
						RTHOOK(18);
						tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
						tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
						(nstcall = 1, F910_7098(RTCW(arg5), tw1));
						RTHOOK(19);
						loc1 += ((EIF_INTEGER_32) 2L);
					} else {
						RTHOOK(20);
						tu2_1 = (EIF_NATURAL_16) loc3;
						(nstcall = 0, F30_731(Current, arg5, tu2_1));
					}
				} else {
					RTHOOK(21);
					tu2_1 = (EIF_NATURAL_16) loc3;
					(nstcall = 0, F30_731(Current, arg5, tu2_1));
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("roundtrip", EX_POST);
		tb1 = '\0';
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg5)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg5), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_704(Current, tr2));
		loc5 = tr2;
		if ((EIF_TRUE)) {
			tr2 = (nstcall = 1, F906_6768(loc5));
			tr3 = (nstcall = 1, F728_4472(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tr2 = (nstcall = 1, F703_4438(RTCW(tr3)));
			loc6 = (EIF_REFERENCE) tr2;
			tb2 = EIF_TRUE;
			for (;;) {
				if (!tb2) break;
				tb3 = (nstcall = 1, F703_4444(loc6));
				if (tb3) break;
				RTHOOK(23);
				tc1 = (nstcall = 1, F688_4426(loc6));
				tu4_1 = (EIF_NATURAL_32) tc1;
				ti4_2 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_4_);
				tu4_2 = (nstcall = 1, F908_6844(loc5, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				ti4_2 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_4_);
				tu2_1 = (nstcall = 1, F788_4582(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L)) + ti4_2) - ((EIF_INTEGER_32) 1L))));
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				tb2 = (EIF_BOOLEAN)(tu4_2 == tu4_1);
				(nstcall = 1, F703_4452(loc6));
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
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16_to_string_32 */
EIF_REFERENCE F30_714 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_16_to_string_32", 29, Current, 0, 1, 815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, F565_3197(arg1));
	(nstcall = -1, F909_6992(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_715(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_668(Current, arg1))) {
			tr1 = (nstcall = 0, F30_693(Current, Result));
			tb2 = (nstcall = 1, F1_8(tr1, arg1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_into_string_32 */
void F30_715 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_16_into_string_32", 29, Current, 3, 2, 816);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 1, F565_3197(arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 1, F910_7117(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + loc2)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(4);
		tu2_1 = (nstcall = 1, F565_3187(RTCW(arg1), loc1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		loc1++;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 1, F910_7098(RTCW(arg2), tw1));
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				RTHOOK(9);
				tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
				tu2_1 = (nstcall = 1, F565_3187(RTCW(arg1), loc1));
				tu4_2 = (EIF_NATURAL_32) tu2_1;
				tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
				(nstcall = 1, F910_7098(RTCW(arg2), tw1));
				RTHOOK(10);
				loc1++;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_668(Current, arg1))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_693(Current, tr2));
			tb2 = (nstcall = 1, F1_8(tr2, arg1));
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
}

/* {UTF_CONVERTER}.utf_16le_string_8_to_string_32 */
EIF_REFERENCE F30_716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_16le_string_8_to_string_32", 29, Current, 0, 1, 817);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 1L));
	(nstcall = -1, F909_6992(RTCW(Result), ti4_2));
	RTHOOK(2);
	(nstcall = 0, F30_717(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_666(Current, arg1))) {
			tr1 = (nstcall = 0, F30_704(Current, Result));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16le_string_8_into_string_32 */
void F30_717 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_16le_string_8_into_string_32", 29, Current, 4, 2, 818);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	ti4_3 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 1L));
	(nstcall = 1, F910_7117(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) >= loc2)) break;
		RTHOOK(4);
		loc1 += ((EIF_INTEGER_32) 2L);
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
		tu4_2 = eif_bit_or(tu4_1,tu4_3);
		loc3 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 1, F910_7098(RTCW(arg2), tw1));
		} else {
			RTHOOK(8);
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 <= loc2)) {
				RTHOOK(10);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
				tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				loc4 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(11);
				tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
				tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
				(nstcall = 1, F910_7098(RTCW(arg2), tw1));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_666(Current, arg1))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_704(Current, tr2));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr2), arg1));
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
}

/* {UTF_CONVERTER}.utf_16le_string_8_to_escaped_string_32 */
EIF_REFERENCE F30_718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_16le_string_8_to_escaped_string_32", 29, Current, 0, 1, 819);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 1L));
	(nstcall = -1, F909_6992(RTCW(Result), ti4_2));
	RTHOOK(2);
	(nstcall = 0, F30_719(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tr1 = (nstcall = 0, F30_704(Current, Result));
		tb1 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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

/* {UTF_CONVERTER}.utf_16le_string_8_into_escaped_string_32 */
void F30_719 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_16le_string_8_into_escaped_string_32", 29, Current, 4, 2, 820);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	ti4_3 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 1L));
	(nstcall = 1, F910_7117(RTCW(arg2), (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) >= loc2)) break;
		RTHOOK(4);
		loc1 += ((EIF_INTEGER_32) 2L);
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
		tu4_2 = eif_bit_or(tu4_1,tu4_3);
		loc3 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 1, F910_7098(RTCW(arg2), tw1));
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L)) && (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) <= loc2))) {
				RTHOOK(9);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				loc4 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L)) && (EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
					RTHOOK(11);
					tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
					tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
					(nstcall = 1, F910_7098(RTCW(arg2), tw1));
					RTHOOK(12);
					loc1 += ((EIF_INTEGER_32) 2L);
				} else {
					RTHOOK(13);
					tu2_1 = (EIF_NATURAL_16) loc3;
					(nstcall = 0, F30_731(Current, arg2, tu2_1));
				}
			} else {
				RTHOOK(14);
				tu2_1 = (EIF_NATURAL_16) loc3;
				(nstcall = 0, F30_731(Current, arg2, tu2_1));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("roundtrip", EX_POST);
		RTCO(tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr2 = (nstcall = 1, F910_7131(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tr2 = (nstcall = 0, F30_704(Current, tr2));
		tb1 = (nstcall = 1, F906_6776(RTCW(tr2), arg1));
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

/* {UTF_CONVERTER}.utf_16_to_utf_8_string_8 */
EIF_REFERENCE F30_720 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("utf_16_to_utf_8_string_8", 29, Current, 0, 1, 821);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F30_714(Current, arg1));
	Result = (nstcall = 0, F30_673(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_668(Current, arg1))) {
			tr1 = (nstcall = 0, F30_689(Current, Result));
			tr1 = (nstcall = 0, F30_693(Current, tr1));
			tb2 = (nstcall = 1, F1_8(tr1, arg1));
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_into_utf_8_string_8 */
void F30_721 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("utf_16_into_utf_8_string_8", 29, Current, 0, 2, 822);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = (nstcall = 0, F30_714(Current, arg1));
	(nstcall = 0, F30_674(Current, tr2, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_668(Current, arg1))) {
			RTCO(tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			tr2 = (nstcall = 0, F30_689(Current, tr2));
			tr2 = (nstcall = 0, F30_693(Current, tr2));
			tb2 = (nstcall = 1, F1_8(tr2, arg1));
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
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_16le_string_8_to_utf_8_string_8 */
EIF_REFERENCE F30_722 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("utf_16le_string_8_to_utf_8_string_8", 29, Current, 0, 1, 823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	(nstcall = -1, F906_6748(RTCW(Result), ti4_1));
	RTHOOK(2);
	(nstcall = 0, F30_723(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_666(Current, arg1))) {
			tr1 = (nstcall = 0, F30_689(Current, Result));
			tr1 = (nstcall = 0, F30_701(Current, tr1));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16le_string_8_into_utf_8_string_8 */
void F30_723 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("utf_16le_string_8_into_utf_8_string_8", 29, Current, 3, 2, 824);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("even_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
		ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 1L));
		RTTE((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	ti4_2 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,564,856,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNSP2(typres0.id,0,ti4_2,sizeof(EIF_NATURAL_16), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		RTHOOK(5);
		loc2 += ((EIF_INTEGER_32) 2L);
		
		RTHOOK(6);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(arg1))-470])(arg1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
		ti4_3 = (EIF_INTEGER_32) (tc1);
		tu2_1 = (EIF_NATURAL_16) ti4_3;
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(arg1))-470])(arg1, loc2));
		ti4_3 = (EIF_INTEGER_32) (tc1);
		tu2_2 = (EIF_NATURAL_16) ti4_3;
		tu2_3 = eif_bit_shift_left(tu2_2,((EIF_INTEGER_32) 8L));
		tu2_2 = eif_bit_or(tu2_1,tu2_3);
		(nstcall = 1, F565_3204(RTCW(loc1), tu2_2));
	}
	RTHOOK(7);
	(nstcall = 0, F30_721(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_666(Current, arg1))) {
			RTCO(tr1);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, F908_6922(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_3));
			tr2 = (nstcall = 0, F30_689(Current, tr2));
			tr2 = (nstcall = 0, F30_701(Current, tr2));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr2), arg1));
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
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_utf_16 */
EIF_REFERENCE F30_724 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("utf_8_string_8_to_utf_16", 29, Current, 0, 1, 825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F30_689(Current, arg1));
	Result = (nstcall = 0, F30_693(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_665(Current, arg1))) {
			tr1 = (nstcall = 0, F30_720(Current, Result));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_utf_16_0 */
EIF_REFERENCE F30_725 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("utf_8_string_8_to_utf_16_0", 29, Current, 0, 1, 826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F30_724(Current, arg1));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F565_3197(Result));
	tr1 = (nstcall = 1, F565_3220(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("roundtrip", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F30_665(Current, arg1))) {
			tr1 = (nstcall = 0, F30_720(Current, Result));
			tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_bom_to_string_8 */

EIF_REFERENCE F30_726 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (36,RTMS_EX_H("\357\273\277",3,15711167));
}

/* {UTF_CONVERTER}.utf_16be_bom_to_string_8 */

EIF_REFERENCE F30_727 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (37,RTMS_EX_H("\376\377",2,65279));
}

/* {UTF_CONVERTER}.utf_16le_bom_to_string_8 */

EIF_REFERENCE F30_728 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (38,RTMS_EX_H("\377\376",2,65534));
}

/* {UTF_CONVERTER}.utf_32be_bom_to_string_8 */

EIF_REFERENCE F30_729 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (39,RTMS_EX_H("\000\000\376\377",4,65279));
}

/* {UTF_CONVERTER}.utf_32le_bom_to_string_8 */

EIF_REFERENCE F30_730 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (40,RTMS_EX_H("\377\376\000\000",4,2147356416));
}

/* {UTF_CONVERTER}.escape_code_into */
void F30_731 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("escape_code_into", 29, Current, 0, 2, 832);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, F910_7097(RTCW(arg1), (EIF_CHARACTER_32) 65533U));
	RTHOOK(2);
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_8) 255U);
	if ((EIF_BOOLEAN) (arg2 <= tu2_1)) {
		RTHOOK(3);
		tu1_1 = (EIF_NATURAL_8) arg2;
		tr1 = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)tr1 = tu1_1;
		tr2 = (nstcall = 1, F849_6064(RTCW(tr1)));
		(nstcall = 1, F910_7083(RTCW(arg1), tr2));
	} else {
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
		(nstcall = 1, F910_7097(RTCW(arg1), tw1));
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = arg2;
		tr2 = (nstcall = 1, F855_6245(RTCW(tr1)));
		(nstcall = 1, F910_7083(RTCW(arg1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UTF_CONVERTER}.is_hexa_decimal */
EIF_BOOLEAN F30_732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_hexa_decimal", 29, Current, 1, 1, 833);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(41,(nstcall = 0, F30_734), (Current));
	RTHOOK(2);
	(nstcall = 1, F67_1409(RTCW(loc1), ((EIF_INTEGER_32) 13L)));
	RTHOOK(3);
	(nstcall = 1, F67_1410(RTCW(loc1), arg1, ((EIF_INTEGER_32) 13L)));
	RTHOOK(4);
	tb1 = (nstcall = 1, F67_1414(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.to_natural_32 */
EIF_NATURAL_32 F30_733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("to_natural_32", 29, Current, 1, 1, 834);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa", EX_PRE);
		RTTE((nstcall = 0, F30_732(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(41,(nstcall = 0, F30_734), (Current));
	RTHOOK(3);
	(nstcall = 1, F67_1410(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F67_1422(RTCW(loc1)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UTF_CONVERTER}.ctoi_convertor */
static EIF_REFERENCE F30_734_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(41)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctoi_convertor", 29, Current, 0, 0, 835);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(66, 0x01).id, 66, _OBJSIZ_2_4_0_3_0_0_2_0_);
	(nstcall = -1, F67_1404(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F66_1397(RTCW(Result), (EIF_BOOLEAN) 0));
	RTHOOK(3);
	(nstcall = 1, F66_1396(RTCW(Result), (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F30_734 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(41,F30_734_body,(Current));
}

void EIF_Minit26 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
