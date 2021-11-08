/*
 * Code for class UNICODE_CONVERSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "un256.h"
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

/* {UNICODE_CONVERSION}.is_code_page_valid */
EIF_BOOLEAN F919_7293 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("is_code_page_valid", 918, Current, 0, 1, 13281);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTOUCR(175,(nstcall = 0, F919_7305), (Current));
		tb1 = (nstcall = 1, F624_4033(RTCW(tr1), arg1));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UNICODE_CONVERSION}.is_code_page_convertible */
EIF_BOOLEAN F919_7294 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_code_page_convertible", 918, Current, 0, 2, 13282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN)(arg1 == RTOUCR(176,(nstcall = 0, F20_48), (Current)))) {
		Result = (EIF_BOOLEAN)(arg2 == RTOUCR(177,(nstcall = 0, F20_50), (Current)));
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(3);
		tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
		tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
		if (tb1) {
			RTHOOK(4);
			Result = '\01';
			tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
			tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
			if (!tb1) {
				tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
				tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
				Result = tb1;
			}
		} else {
			RTHOOK(5);
			tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
			tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
			if (tb1) {
				RTHOOK(6);
				Result = '\01';
				tb1 = '\01';
				tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
				tb2 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
				if (!tb2) {
					tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
					tb2 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
					tb1 = tb2;
				}
				if (!tb1) {
					tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
					tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
					Result = tb1;
				}
			} else {
				RTHOOK(7);
				tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
				tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
				if (tb1) {
					RTHOOK(8);
					Result = '\01';
					tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
					tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
					if (!tb1) {
						tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
						tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
						Result = tb1;
					}
				} else {
					RTHOOK(9);
					tr1 = RTOUCR(179,(nstcall = 0, F20_47), (Current));
					tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
					if (tb1) {
						RTHOOK(10);
						tr1 = RTOUCR(179,(nstcall = 0, F20_47), (Current));
						tb1 = (nstcall = 1, F906_6774(RTCW(arg2), tr1));
						Result = (EIF_BOOLEAN) tb1;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {UNICODE_CONVERSION}.last_conversion_lost_data */
EIF_BOOLEAN F919_7295 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {UNICODE_CONVERSION}.is_valid_utf8 */
EIF_BOOLEAN F919_7296 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_valid_utf8", 918, Current, 0, 1, 13284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F31_665(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UNICODE_CONVERSION}.is_valid_as_string_16 */
EIF_BOOLEAN F919_7297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("is_valid_as_string_16", 918, Current, 3, 1, 13285);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4779[Dtype(RTCW(arg1))-907])(arg1));
		if (tb1) {
			RTHOOK(3);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			tr1 = (nstcall = 1, F905_6712(RTCW(arg1)));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
			loc3 = (EIF_REFERENCE) tr2;
			for (;;) {
				RTHOOK(6);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				tw1 = (nstcall = 1, F564_3187(RTCW(loc3), loc1));
				ti4_1 = (EIF_INTEGER_32) (tw1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 65535L));
				RTHOOK(8);
				loc1++;
			}
		} else {
			RTHOOK(9);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {UNICODE_CONVERSION}.convert_to */
void F919_7298 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg3);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("convert_to", 918, Current, 0, 3, 13286);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_from_code_page_valid", EX_PRE);
		RTTE((nstcall = 0, F919_7293(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_to_code_page_valid", EX_PRE);
		RTTE((nstcall = 0, F919_7293(Current, arg3)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("code_page_convertible", EX_PRE);
		RTTE((nstcall = 0, F919_7294(Current, arg1, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_from_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	(nstcall = 0, F917_7267(Current));
	RTHOOK(6);
	tb1 = (nstcall = 1, F906_6774(RTCW(arg1), arg3));
	if (tb1) {
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4778[Dtype(RTCW(arg2))-907])(arg2));
		if (tb1) {
			RTHOOK(9);
			tr1 = (nstcall = 1, F905_6706(RTCW(arg2)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(10);
			tr1 = (nstcall = 1, F905_6712(RTCW(arg2)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(11);
		tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
		tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
		if (tb1) {
			RTHOOK(12);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4780[Dtype(RTCW(arg2))-907])(arg2));
			if (tb1) {
				RTHOOK(13);
				tr1 = (nstcall = 1, F905_6706(RTCW(arg2)));
			} else {
				RTHOOK(14);
				tr2 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
				tr1 = (nstcall = 0, F31_675(RTCW(tr2), arg2));
			}
			tr1 = (nstcall = 0, F919_7299(Current, tr1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			RTHOOK(15);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(16);
			tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
			tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
			if (tb1) {
				RTHOOK(17);
				tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
				tb1 = (nstcall = 1, F906_6774(RTCW(arg3), tr1));
				if (tb1) {
					RTHOOK(18);
					tr1 = (nstcall = 1, F905_6712(RTCW(arg2)));
					tr1 = (nstcall = 0, F919_7300(Current, tr1));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
					RTHOOK(19);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(20);
					tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
					tb1 = (nstcall = 1, F906_6774(RTCW(arg3), tr1));
					if (tb1) {
						RTHOOK(21);
						tr1 = (nstcall = 1, F905_6712(RTCW(arg2)));
						tr1 = (nstcall = 0, F919_7301(Current, tr1));
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
						RTHOOK(22);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(23);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
			} else {
				RTHOOK(24);
				tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
				tb1 = (nstcall = 1, F906_6774(RTCW(arg1), tr1));
				if (tb1) {
					RTHOOK(25);
					tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
					tb1 = (nstcall = 1, F906_6774(RTCW(arg3), tr1));
					if (tb1) {
						RTHOOK(26);
						tr1 = (nstcall = 1, F905_6712(RTCW(arg2)));
						tr1 = (nstcall = 0, F919_7302(Current, tr1));
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
						RTHOOK(27);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("success_implies_not_void", EX_POST);
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F917_7268(Current)) != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("success_implies_not_void", EX_POST);
		if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
}

/* {UNICODE_CONVERSION}.utf8_to_utf32 */
EIF_REFERENCE F919_7299 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("utf8_to_utf32", 918, Current, 0, 1, 13287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F31_689(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {UNICODE_CONVERSION}.utf32_to_utf8 */
EIF_REFERENCE F919_7300 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("utf32_to_utf8", 918, Current, 0, 1, 13288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F31_675(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {UNICODE_CONVERSION}.utf32_to_utf16 */
EIF_REFERENCE F919_7301 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("utf32_to_utf16", 918, Current, 3, 1, 13289);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	(nstcall = -1, F909_6992(RTCW(Result), (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L))));
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc2));
		tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1048575L));
		loc1 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(8);
			loc1 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L);
			RTHOOK(9);
			tu4_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 10L));
			tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L));
			(nstcall = 1, F907_6806(RTCW(Result), tu4_2));
			RTHOOK(10);
			tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			tu4_2 = eif_bit_or(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L));
			(nstcall = 1, F907_6806(RTCW(Result), tu4_2));
		} else {
			RTHOOK(11);
			(nstcall = 1, F907_6806(RTCW(Result), loc1));
		}
		RTHOOK(12);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {UNICODE_CONVERSION}.utf16_to_utf32 */
EIF_REFERENCE F919_7302 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("utf16_to_utf32", 918, Current, 5, 1, 13290);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), loc2));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		loc1++;
		RTHOOK(8);
		tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(10);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg1))-907])(arg1, loc1));
			tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
			loc5 = (EIF_NATURAL_32) tu4_2;
		}
		RTHOOK(11);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) && (EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L))) && (EIF_BOOLEAN) (loc1 <= loc2)) && (EIF_BOOLEAN) (loc5 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L))) && (EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
			RTHOOK(12);
			tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 10L));
			tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			(nstcall = 1, F907_6806(RTCW(Result), (EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_2 + tu4_1) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L))));
			RTHOOK(13);
			loc1++;
		} else {
			RTHOOK(14);
			(nstcall = 1, F907_6806(RTCW(Result), loc4));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("result_not_void", EX_POST);
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

/* {UNICODE_CONVERSION}.append_code_point_to_utf8 */
void F919_7303 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("append_code_point_to_utf8", 918, Current, 0, 2, 13291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_is_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1114111L))), label_1);
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
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_4 = ti4_5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr5 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = 0, F31_677(RTCW(tr5), arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("a_string_appended", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\01';
		if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			RTCO(tr1);
			tb4 = (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb4) {
			tb4 = '\01';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L)) && (EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L)))) {
				ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
				RTCO(tr2);
				tb4 = (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L)));
			}
			tb3 = tb4;
		}
		if (tb3) {
			tb3 = '\01';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L)) && (EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L)))) {
				ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
				RTCO(tr3);
				tb3 = (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 3L)));
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\01';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L)) && (EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1114111L)))) {
				ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
				RTCO(tr4);
				tb2 = (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 4L)));
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
}

/* {UNICODE_CONVERSION}.read_character_from_utf8 */
EIF_CHARACTER_32 F919_7304 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("read_character_from_utf8", 918, Current, 3, 3, 13292);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_in_range", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3) + O4892[Dtype(arg3)-905]);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_position_valid", EX_PRE);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = '\01';
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
		tu1_1 = (EIF_NATURAL_8) tu4_1;
		if (!((EIF_BOOLEAN) (tu1_1 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L)))) {
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
			tb5 = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		}
		if (!tb5) {
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
			tb4 = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
		}
		if (!tb4) {
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
			tb3 = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
		}
		if (!tb3) {
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 252L));
			tb2 = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
		}
		if (!tb2) {
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, arg1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 254L));
			tb1 = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 252L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, loc1));
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	loc2 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
		RTHOOK(7);
		tw1 = (EIF_CHARACTER_32) loc2;
		Result = (EIF_CHARACTER_32) tw1;
	} else {
		RTHOOK(8);
		tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
		if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
			RTHOOK(9);
			tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 31L));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
			loc3 = (EIF_NATURAL_32) tu4_2;
			RTHOOK(10);
			loc1++;
			RTHOOK(11);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, loc1));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			loc2 = (EIF_NATURAL_8) tu1_1;
			RTHOOK(12);
			tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			tu4_2 = eif_bit_or(loc3,tu4_1);
			loc3 = (EIF_NATURAL_32) tu4_2;
			RTHOOK(13);
			tw1 = (EIF_CHARACTER_32) loc3;
			Result = (EIF_CHARACTER_32) tw1;
		} else {
			RTHOOK(14);
			tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
				RTHOOK(15);
				tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
				loc3 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(16);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				loc2 = (EIF_NATURAL_8) tu1_1;
				RTHOOK(17);
				tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
				tu4_1 = eif_bit_or(loc3,tu4_2);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(18);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				loc2 = (EIF_NATURAL_8) tu1_1;
				RTHOOK(19);
				tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				tu4_2 = eif_bit_or(loc3,tu4_1);
				loc3 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(20);
				tw1 = (EIF_CHARACTER_32) loc3;
				Result = (EIF_CHARACTER_32) tw1;
				RTHOOK(21);
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(22);
				tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
					RTHOOK(23);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 7L));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 18L));
					loc3 = (EIF_NATURAL_32) tu4_2;
					RTHOOK(24);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					loc2 = (EIF_NATURAL_8) tu1_1;
					RTHOOK(25);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_or(loc3,tu4_2);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(26);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					loc2 = (EIF_NATURAL_8) tu1_1;
					RTHOOK(27);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_or(loc3,tu4_2);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(28);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4766[Dtype(RTCW(arg3))-907])(arg3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					loc2 = (EIF_NATURAL_8) tu1_1;
					RTHOOK(29);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_2 = eif_bit_or(loc3,tu4_1);
					loc3 = (EIF_NATURAL_32) tu4_2;
					RTHOOK(30);
					tw1 = (EIF_CHARACTER_32) loc3;
					Result = (EIF_CHARACTER_32) tw1;
					RTHOOK(31);
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(32);
					tu1_1 = eif_bit_and(loc2,(EIF_NATURAL_8) ((EIF_INTEGER_32) 252L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L))) {
						RTHOOK(33);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
						Result = (EIF_CHARACTER_32) tw1;
						RTHOOK(34);
						loc1 += ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(35);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
						Result = (EIF_CHARACTER_32) tw1;
						RTHOOK(36);
						loc1 += ((EIF_INTEGER_32) 5L);
					}
				}
			}
		}
	}
	RTHOOK(37);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(38);
		(nstcall = 1, F858_6298(RTCW(arg2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) + ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
	return Result;
}

/* {UNICODE_CONVERSION}.unicode_encodings */
static EIF_REFERENCE F919_7305_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(175)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("unicode_encodings", 918, Current, 0, 0, 13293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,628,0xFF01,905,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 628, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	(nstcall = -1, F624_4026(RTCW(tr1), ((EIF_INTEGER_32) 8L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(179,(nstcall = 0, F20_47), (Current));
	tr2 = RTOUCR(179,(nstcall = 0, F20_47), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(3);
	tr1 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
	tr2 = RTOUCR(176,(nstcall = 0, F20_48), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(4);
	tr1 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
	tr2 = RTOUCR(178,(nstcall = 0, F20_49), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(5);
	tr1 = RTOUCR(180,(nstcall = 0, F20_51), (Current));
	tr2 = RTOUCR(180,(nstcall = 0, F20_51), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(6);
	tr1 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
	tr2 = RTOUCR(177,(nstcall = 0, F20_50), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(7);
	tr1 = RTOUCR(181,(nstcall = 0, F20_52), (Current));
	tr2 = RTOUCR(181,(nstcall = 0, F20_52), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(8);
	tr1 = RTOUCR(182,(nstcall = 0, F20_53), (Current));
	tr2 = RTOUCR(182,(nstcall = 0, F20_53), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(9);
	tr1 = RTOUCR(183,(nstcall = 0, F20_54), (Current));
	tr2 = RTOUCR(183,(nstcall = 0, F20_54), (Current));
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F919_7305 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(175,F919_7305_body,(Current));
}

void EIF_Minit256 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
