/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da993.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_DURATION}.make */
void F123_7629 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 122, Current, 0, 6, 13486);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(121, 1).id);
	(nstcall = -1, F122_7602(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(123, 1).id);
	(nstcall = -1, F124_7654(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7526(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7527(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7528(Current)) == arg6)) {
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
}

/* {DATE_TIME_DURATION}.make_definite */
void F123_7630 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_definite", 122, Current, 0, 4, 13487);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(121, 1).id);
	(nstcall = -1, F122_7603(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(123, 1).id);
	(nstcall = -1, F124_7654(RTCW(tr1), arg2, arg3, arg4));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_result", EX_POST);
		if ((nstcall = 0, F123_7642(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7526(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7527(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7528(Current)) == arg4)) {
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
}

/* {DATE_TIME_DURATION}.make_fine */
void F123_7631 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_fine", 122, Current, 0, 6, 13488);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(121, 1).id);
	(nstcall = -1, F122_7602(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(123, 1).id);
	(nstcall = -1, F124_7655(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7526(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7527(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 ((nstcall = 0, F52_7529(Current)), arg6)) {
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
}

/* {DATE_TIME_DURATION}.make_by_date_time */
void F123_7632 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_by_date_time", 122, Current, 0, 2, 13489);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("time_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg2)) {
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

/* {DATE_TIME_DURATION}.make_by_date */
void F123_7633 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("make_by_date", 122, Current, 0, 1, 13490);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(123, 1).id);
	(nstcall = -1, F124_7654(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("time_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F124_7660(RTCW(tr2)));
		tb1 = (nstcall = 1, F124_7667(RTCW(tr1), tr3));
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

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F123_7634 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F123_7635 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.origin_date_time */
EIF_REFERENCE F123_7636 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_DURATION}.zero */
EIF_REFERENCE F123_7637 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("zero", 122, Current, 0, 0, 13494);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F122_7604(RTCW(tr1)));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F124_7660(RTCW(tr1)));
	(nstcall = -1, F123_7632(RTCW(Result), tr2, tr3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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

/* {DATE_TIME_DURATION}.seconds_count */
EIF_INTEGER_64 F123_7638 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("seconds_count", 122, Current, 0, 0, 13495);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_origin", EX_PRE);
		RTTE((nstcall = 0, F123_7645(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F122_7609(RTCW(tr1)));
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 86400L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F124_7659(RTCW(tr1)));
	ti8_3 = (EIF_INTEGER_64) ti4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_64) (ti8_1 * ti8_2) + ti8_3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.fine_seconds_count */
EIF_REAL_64 F123_7639 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fine_seconds_count", 122, Current, 0, 0, 13496);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_origin", EX_PRE);
		RTTE((nstcall = 0, F123_7645(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F122_7609(RTCW(tr1)));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 86400L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr8_3 = (nstcall = 1, F124_7658(RTCW(tr1)));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_less */
EIF_BOOLEAN F123_7640 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("is_less", 122, Current, 0, 1, 13497);
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
	tb1 = '\0';
	if ((nstcall = 0, F123_7642(Current))) {
		tb2 = (nstcall = 1, F123_7642(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		Result = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F124_7682(RTCW(tr1)));
		ti4_2 = (nstcall = 1, F52_7525(RTCW(arg1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_3 = (nstcall = 1, F124_7682(RTCW(tr1)));
		if (!(EIF_BOOLEAN) ((EIF_INTEGER_32) ((nstcall = 0, F52_7525(Current)) + ti4_1) < (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F124_7682(RTCW(tr1)));
			ti4_2 = (nstcall = 1, F52_7525(RTCW(arg1)));
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			ti4_3 = (nstcall = 1, F124_7682(RTCW(tr1)));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((nstcall = 0, F52_7525(Current)) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = (nstcall = 1, F124_7683(RTCW(tr1)));
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
				tr3 = (nstcall = 1, F124_7683(RTCW(tr1)));
				tb2 = (nstcall = 1, F124_7666(RTCW(tr2), tr3));
				tb1 = tb2;
			}
			Result = tb1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("non_definite_result", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((nstcall = 0, F123_7642(Current))) {
			tb3 = (nstcall = 1, F123_7642(RTCW(arg1)));
			tb2 = tb3;
		}
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
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

/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F123_7641 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("is_equal", 122, Current, 0, 1, 13498);
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
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = (nstcall = 1, F52_7523(RTCW(arg1)));
	if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == ti4_1)) {
		ti4_1 = (nstcall = 1, F52_7524(RTCW(arg1)));
		tb2 = (EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F124_7682(RTCW(tr1)));
		ti4_2 = (nstcall = 1, F52_7525(RTCW(arg1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_3 = (nstcall = 1, F124_7682(RTCW(tr1)));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) ((nstcall = 0, F52_7525(Current)) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F124_7683(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr3 = (nstcall = 1, F124_7683(RTCW(tr1)));
		tb1 = (nstcall = 1, F124_7667(RTCW(tr2), tr3));
		Result = tb1;
	}
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
		if ((nstcall = 0, F1_9(Current, arg1))) {
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.definite */
EIF_BOOLEAN F123_7642 (EIF_REFERENCE Current)
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
	
	RTEAA("definite", 122, Current, 0, 0, 13499);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = (nstcall = 1, F122_7612(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == ((EIF_INTEGER_32) 0L));
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

/* {DATE_TIME_DURATION}.canonical */
EIF_BOOLEAN F123_7643 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("canonical", 122, Current, 1, 1, 13500);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_date_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F926_7923(RTCW(arg1), Current));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F125_1662(RTCW(loc1), arg1));
	if (tb1) {
		RTHOOK(4);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb3 = (nstcall = 1, F122_7613(RTCW(tr1), tr2));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F124_7659(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F124_7668(RTCW(tr1)));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) ((nstcall = 0, F52_7526(Current)) < ((EIF_INTEGER_32) 24L));
		}
	} else {
		RTHOOK(5);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb3 = (nstcall = 1, F122_7613(RTCW(tr1), tr2));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F124_7659(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F124_7668(RTCW(tr1)));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) ((nstcall = 0, F52_7526(Current)) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 24L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_positive */
EIF_BOOLEAN F123_7644 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_positive", 122, Current, 0, 0, 13501);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb3 = (nstcall = 1, F122_7614(RTCW(tr1)));
	if (!tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb3 = (nstcall = 1, F121_7599(RTCW(tr1)));
		tb2 = tb3;
	}
	if (tb2) {
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb3 = (nstcall = 1, F124_7669(RTCW(tr1)));
		if (!tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb3 = (nstcall = 1, F121_7599(RTCW(tr1)));
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb2 = (nstcall = 1, F121_7599(RTCW(tr1)));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F121_7599(RTCW(tr1)));
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.has_origin_date_time */
EIF_BOOLEAN F123_7645 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_origin_date_time", 122, Current, 0, 0, 13502);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.set_origin_date_time */
void F123_7646 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("set_origin_date_time", 122, Current, 0, 1, 13503);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		(nstcall = 1, F122_7616(RTCW(tr1), tr2));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F122_7616(RTCW(tr1), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("origin_date_time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("origin_date_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
			tb1 = (EIF_BOOLEAN)(tr1 == tr3);
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
}

/* {DATE_TIME_DURATION}.set_date */
void F123_7647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_date", 122, Current, 0, 1, 13504);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
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

/* {DATE_TIME_DURATION}.set_time */
void F123_7648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_time", 122, Current, 0, 1, 13505);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DATE_TIME_DURATION}.plus */
EIF_REFERENCE F123_7649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("plus", 122, Current, 1, 1, 13506);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F122_7624(RTCW(tr1), tr2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr3 = (nstcall = 1, F124_7679(RTCW(tr1), tr3));
	(nstcall = -1, F123_7632(RTCW(Result), tr2, tr3));
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F123_7646(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		(nstcall = 1, F123_7646(RTCW(Result), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("commutative", EX_POST);
		tr1 = (nstcall = 1, F123_7649(RTCW(arg1), Current));
		tb1 = (nstcall = 1, F123_7641(RTCW(Result), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("origin_date_time", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
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

/* {DATE_TIME_DURATION}.opposite */
EIF_REFERENCE F123_7650 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("opposite", 122, Current, 1, 0, 13507);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F122_7625(RTCW(tr1)));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F124_7680(RTCW(tr1)));
	(nstcall = -1, F123_7632(RTCW(Result), tr2, tr3));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F123_7646(RTCW(Result), tr1));
	} else {
		RTHOOK(5);
		(nstcall = 1, F123_7646(RTCW(Result), NULL));
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
		RTCT("result_definition", EX_POST);
		tr1 = (nstcall = 1, F123_7649(RTCW(Result), Current));
		tr2 = (nstcall = 0, F123_7637(Current));
		tb1 = (nstcall = 1, F123_7641(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_date_time", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
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

/* {DATE_TIME_DURATION}.day_add */
void F123_7651 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("day_add", 122, Current, 0, 1, 13508);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F52_7525(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_2 = (nstcall = 0, F52_7525(Current));
	(nstcall = 1, F122_7617(RTCW(tr2), (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_TIME_DURATION}.to_canonical */
EIF_REFERENCE F123_7652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTEAA("to_canonical", 122, Current, 3, 1, 13509);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F123_7643(Current, arg1))) {
		RTHOOK(2);
		Result = (nstcall = 0, F1_20(Current));
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 1, F926_7923(RTCW(arg1), Current));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		loc3 = RTLNS(eif_new_type(123, 0x01).id, 123, _OBJSIZ_0_0_0_2_0_0_0_1_);
		ti4_1 = (nstcall = 1, F52_7526(RTCW(loc1)));
		ti4_2 = (nstcall = 1, F52_7526(RTCW(arg1)));
		ti4_3 = (nstcall = 1, F52_7527(RTCW(loc1)));
		ti4_4 = (nstcall = 1, F52_7527(RTCW(arg1)));
		tr8_1 = (nstcall = 1, F52_7529(RTCW(loc1)));
		tr8_2 = (nstcall = 1, F52_7529(RTCW(arg1)));
		(nstcall = -1, F124_7655(RTCW(loc3), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_REAL_64) (tr8_1 - tr8_2)));
		RTHOOK(5);
		tb1 = '\0';
		tb2 = (nstcall = 1, F125_1662(RTCW(loc1), arg1));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb2 = (nstcall = 1, F923_7846(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			(nstcall = 1, F124_7678(RTCW(loc3), ((EIF_INTEGER_32) 24L)));
			RTHOOK(7);
			(nstcall = 1, F926_7927(RTCW(loc1), ((EIF_INTEGER_32) -1L)));
		} else {
			RTHOOK(8);
			tb1 = '\0';
			tb2 = (nstcall = 1, F926_7917(RTCW(loc1), arg1));
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				tb2 = (nstcall = 1, F125_1661(RTCW(tr1), tr2));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(9);
				(nstcall = 1, F124_7678(RTCW(loc3), ((EIF_INTEGER_32) -24L)));
				RTHOOK(10);
				(nstcall = 1, F926_7927(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			}
		}
		RTHOOK(11);
		loc2 = RTLNS(eif_new_type(121, 0x01).id, 121, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = (nstcall = 1, F926_7914(RTCW(loc1)));
		ti4_2 = (nstcall = 1, F926_7914(RTCW(arg1)));
		(nstcall = -1, F122_7603(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
		RTHOOK(12);
		Result = RTLNSMART(Dftype(Current));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr1 = (nstcall = 1, F122_7626(RTCW(loc2), tr1));
		tr2 = (nstcall = 1, F124_7681(RTCW(loc3)));
		(nstcall = -1, F123_7632(RTCW(Result), tr1, tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("canonical_set", EX_POST);
		tb1 = (nstcall = 1, F123_7643(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("duration_not_changed", EX_POST);
		tr1 = (nstcall = 1, F926_7923(RTCW(arg1), Current));
		tr2 = (nstcall = 1, F926_7923(RTCW(arg1), Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
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

/* {DATE_TIME_DURATION}.time_to_canonical */
EIF_REFERENCE F123_7653 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("time_to_canonical", 122, Current, 0, 0, 13510);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("definite_duration", EX_PRE);
		RTTE((nstcall = 0, F123_7642(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_20(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, F123_7637(Current));
	tb1 = (nstcall = 1, F119_1658(Current, tr1));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F124_7660(RTCW(tr2)));
		tb1 = (nstcall = 1, F124_7666(RTCW(tr1), tr3));
		if (tb1) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F124_7682(RTCW(tr2)));
			(nstcall = 1, F124_7678(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 * ((EIF_INTEGER_32) 24L))));
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F124_7682(RTCW(tr1)));
		(nstcall = 1, F123_7651(RTCW(Result), ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		tr2 = (nstcall = 1, F124_7683(RTCW(tr1)));
		(nstcall = 1, F123_7648(RTCW(Result), tr2));
	} else {
		RTHOOK(8);
		tr1 = (nstcall = 1, F123_7650(RTCW(Result)));
		tr2 = (nstcall = 1, F123_7653(RTCW(tr1)));
		tr1 = (nstcall = 1, F123_7650(RTCW(tr2)));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("time_canonical", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		tb1 = (nstcall = 1, F124_7668(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_sign", EX_POST);
		tb1 = '\0';
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr3 = (nstcall = 1, F122_7604(RTCW(tr2)));
		tb3 = (nstcall = 1, F119_1657(RTCW(tr1), tr3));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr3 = (nstcall = 1, F124_7660(RTCW(tr2)));
			tb3 = (nstcall = 1, F119_1658(RTCW(tr1), tr3));
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\01';
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_2_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = (nstcall = 1, F122_7604(RTCW(tr2)));
			tb3 = (nstcall = 1, F122_7610(RTCW(tr1), tr3));
			if (tb3) {
				tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr3 = (nstcall = 1, F124_7660(RTCW(tr2)));
				tb3 = (nstcall = 1, F119_1656(RTCW(tr1), tr3));
				tb2 = tb3;
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
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}._invariant */
void F123_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLIU(6);
	RTEAINV(l_feature_name, 992, Current, 2, 0);
	RTIT("date_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("time_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("origin_constraint", Current);
	tb1 = '\01';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb2 = (EIF_BOOLEAN)(tr2 == NULL);
	}
	if (!tb2) {
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
			tb2 = (EIF_BOOLEAN)(tr1 == tr3);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("same_signs", Current);
	tb1 = '\01';
	tb2 = '\0';
	tb3 = '\0';
	if ((nstcall = 0, F123_7645(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = tr1;
		tb3 = EIF_TEST(loc2);
	}
	if (tb3) {
		tb2 = (nstcall = 0, F123_7643(Current, loc2));
	}
	if (tb2) {
		tb2 = '\01';
		tb3 = '\0';
		tb4 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb5 = (nstcall = 1, F122_7614(RTCW(tr1)));
		if (!tb5) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb5 = (nstcall = 1, F121_7599(RTCW(tr1)));
			tb4 = tb5;
		}
		if (tb4) {
			tb4 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb5 = (nstcall = 1, F124_7669(RTCW(tr1)));
			if (!tb5) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb5 = (nstcall = 1, F121_7599(RTCW(tr1)));
				tb4 = tb5;
			}
			tb3 = tb4;
		}
		if (!tb3) {
			tb3 = '\0';
			tb4 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb5 = (nstcall = 1, F121_7598(RTCW(tr1)));
			if (!tb5) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tb5 = (nstcall = 1, F121_7599(RTCW(tr1)));
				tb4 = tb5;
			}
			if (tb4) {
				tb4 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb5 = (nstcall = 1, F121_7598(RTCW(tr1)));
				if (!tb5) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb5 = (nstcall = 1, F121_7599(RTCW(tr1)));
					tb4 = tb5;
				}
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit993 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
