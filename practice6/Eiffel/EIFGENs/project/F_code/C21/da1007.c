/*
 * Code for class DATE_TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da1007.h"
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

/* {DATE_TIME}.make */
void F926_7899 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 925, Current, 0, 6, 13758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date_time", EX_PRE);
		tr8_1 = (EIF_REAL_64) (arg6);
		RTTE((nstcall = 0, F924_7867(Current, arg1, arg2, arg3, arg4, arg5, tr8_1, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_final_id(Y5270,Y5270_gen_type,dftype,52).id);
	(nstcall = -1, F921_7792(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y5269,Y5269_gen_type,dftype,52).id);
	(nstcall = -1, F923_7836(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7526(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7527(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7528(Current)) == arg6)) {
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

/* {DATE_TIME}.make_fine */
void F926_7900 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_fine", 925, Current, 0, 6, 13759);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date_time", EX_PRE);
		RTTE((nstcall = 0, F924_7867(Current, arg1, arg2, arg3, arg4, arg5, arg6, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_final_id(Y5270,Y5270_gen_type,dftype,52).id);
	(nstcall = -1, F921_7792(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y5269,Y5269_gen_type,dftype,52).id);
	(nstcall = -1, F923_7837(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7523(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7524(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7525(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7526(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_7527(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 ((nstcall = 0, F52_7529(Current)), arg6)) {
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

/* {DATE_TIME}.make_by_date_time */
void F926_7901 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("make_by_date_time", 925, Current, 0, 2, 13760);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("t_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg2)) {
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

/* {DATE_TIME}.make_by_date */
void F926_7902 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_by_date", 925, Current, 0, 1, 13761);
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y5269,Y5269_gen_type,Dftype(Current),52).id);
	(nstcall = -1, F923_7836(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("time_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = RTOUCR(261,(nstcall = 1, F923_7845), (RTCW(tr2)));
		tb1 = (nstcall = 1, F125_1663(RTCW(tr1), tr3));
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

/* {DATE_TIME}.make_now */
void F926_7903 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_now", 925, Current, 1, 0, 13762);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1, 0x01).id, 1, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F2_7402(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNSMART(eif_final_id(Y5270,Y5270_gen_type,dftype,52).id);
	ti4_1 = (nstcall = 1, F2_7406(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7407(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7408(RTCW(loc1)));
	(nstcall = -1, F921_7792(RTCW(tr1), ti4_1, ti4_2, ti4_3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y5269,Y5269_gen_type,dftype,52).id);
	ti4_1 = (nstcall = 1, F2_7409(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7410(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7411(RTCW(loc1)));
	tr8_1 = (EIF_REAL_64) (ti4_3);
	ti4_3 = (nstcall = 1, F2_7412(RTCW(loc1)));
	(nstcall = -1, F923_7837(RTCW(tr1), ti4_1, ti4_2, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) ((EIF_REAL_64) (ti4_3) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L))))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_now_utc */
void F926_7904 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_now_utc", 925, Current, 1, 0, 13763);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1, 0x01).id, 1, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F2_7403(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNSMART(eif_final_id(Y5270,Y5270_gen_type,dftype,52).id);
	ti4_1 = (nstcall = 1, F2_7406(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7407(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7408(RTCW(loc1)));
	(nstcall = -1, F921_7792(RTCW(tr1), ti4_1, ti4_2, ti4_3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y5269,Y5269_gen_type,dftype,52).id);
	ti4_1 = (nstcall = 1, F2_7409(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7410(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7411(RTCW(loc1)));
	tr8_1 = (EIF_REAL_64) (ti4_3);
	ti4_3 = (nstcall = 1, F2_7412(RTCW(loc1)));
	(nstcall = -1, F923_7837(RTCW(tr1), ti4_1, ti4_2, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) ((EIF_REAL_64) (ti4_3) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L))))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_from_string_default */
void F926_7905 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string_default", 925, Current, 0, 1, 13764);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("date_time_valid", EX_PRE);
		tr1 = (nstcall = 0, F46_7465(Current));
		RTTE((nstcall = 0, F924_7865(Current, arg1, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F46_7465(Current));
	(nstcall = 0, F926_7907(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_from_string_default_with_base */
void F926_7906 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string_default_with_base", 925, Current, 0, 2, 13765);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("date_time_valid", EX_PRE);
		tr1 = (nstcall = 0, F46_7465(Current));
		RTTE((nstcall = 0, F924_7866(Current, arg1, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 0, F46_7465(Current));
	(nstcall = 0, F926_7908(Current, arg1, tr1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_from_string */
void F926_7907 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("make_from_string", 925, Current, 1, 2, 13766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("c_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("date_time_valid", EX_PRE);
		RTTE((nstcall = 0, F924_7865(Current, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(915, 0x01).id, 915, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F916_7760(RTCW(tr1), arg2));
	tr2 = (nstcall = 1, F916_7774(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F926_7901(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_from_string_with_base */
void F926_7908 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("make_from_string_with_base", 925, Current, 2, 3, 13767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("c_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("date_time_valid", EX_PRE);
		RTTE((nstcall = 0, F924_7866(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(915, 0x01).id, 915, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F916_7760(RTCW(loc1), arg2));
	RTHOOK(6);
	(nstcall = 1, F916_7769(RTCW(loc1), arg3));
	RTHOOK(7);
	tr1 = (nstcall = 1, F916_7774(RTCW(loc1), arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
	(nstcall = 0, F926_7901(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.make_from_epoch */
void F926_7909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_epoch", 925, Current, 3, 1, 13768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	} else {
		RTHOOK(3);
		loc2 = (EIF_INTEGER_32) arg1;
	}
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 86400L));
	RTHOOK(5);
	loc2 %= ((EIF_INTEGER_32) 86400L);
	RTHOOK(6);
	loc3 = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F123_7630(RTCW(loc3), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc2));
	RTHOOK(7);
	(nstcall = 0, F926_7900(Current, ((EIF_INTEGER_32) 1970L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_REAL_64) 0.0));
	RTHOOK(8);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(9);
		tr1 = (nstcall = 1, F123_7650(RTCW(loc3)));
		(nstcall = 0, F926_7924(Current, tr1));
	} else {
		RTHOOK(10);
		(nstcall = 0, F926_7924(Current, loc3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.date */
EIF_REFERENCE F926_7910 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME}.time */
EIF_REFERENCE F926_7911 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME}.origin */
static EIF_REFERENCE F926_7912_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(262)

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("origin", 925, Current, 0, 0, 13771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(925, 0x01).id, 925, _OBJSIZ_2_0_0_2_0_0_0_1_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = RTOUCR(263,(nstcall = 1, F921_7803), (RTCW(tr2)));
	tr2 = *(EIF_REFERENCE *)(Current);
	tr4 = RTOUCR(261,(nstcall = 1, F923_7845), (RTCW(tr2)));
	(nstcall = -1, F926_7901(RTCW(tr1), tr3, tr4));
	Result = (EIF_REFERENCE) tr1;
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
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F926_7912 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(262,F926_7912_body,(Current));
}

/* {DATE_TIME}.date_duration */
EIF_REFERENCE F926_7913 (EIF_REFERENCE Current)
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
	
	RTEAA("date_duration", 925, Current, 0, 0, 13772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F921_7805(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME}.days */
EIF_INTEGER_32 F926_7914 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("days", 925, Current, 0, 0, 13773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F921_7806(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME}.time_duration */
EIF_REFERENCE F926_7915 (EIF_REFERENCE Current)
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
	
	RTEAA("time_duration", 925, Current, 0, 0, 13774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F923_7847(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME}.seconds */
EIF_INTEGER_32 F926_7916 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("seconds", 925, Current, 0, 0, 13775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F923_7848(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME}.is_less */
EIF_BOOLEAN F926_7917 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_less", 925, Current, 0, 1, 13776);
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
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tb1 = (nstcall = 1, F921_7804(RTCW(tr1), tr2));
	if (!tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb2 = (nstcall = 1, F125_1663(RTCW(tr1), tr2));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb2 = (nstcall = 1, F923_7846(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F926_7917(RTCW(arg1), Current));
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

/* {DATE_TIME}.is_equal */
EIF_BOOLEAN F926_7918 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 925, Current, 0, 1, 13777);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = (nstcall = 0, F1_10(Current, tr1, tr2));
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
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F926_7917(Current, arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F926_7917(RTCW(arg1), Current));
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

/* {DATE_TIME}.duration */
EIF_REFERENCE F926_7919 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("duration", 925, Current, 0, 0, 13778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr1 = (nstcall = 0, F926_7913(Current));
	tr2 = (nstcall = 0, F926_7915(Current));
	(nstcall = -1, F123_7632(RTCW(Result), tr1, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definite_result", EX_POST);
		tb1 = (nstcall = 1, F123_7642(RTCW(Result)));
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

/* {DATE_TIME}.set_date */
void F926_7920 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_date", 925, Current, 0, 1, 13779);
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_set", EX_POST);
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

/* {DATE_TIME}.set_time */
void F926_7921 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_time", 925, Current, 0, 1, 13780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {DATE_TIME}.copy */
void F926_7922 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 925, Current, 0, 1, 13781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_15(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr2 = (nstcall = 1, F1_14(tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, F1_14(tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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
}

/* {DATE_TIME}.plus */
EIF_REFERENCE F926_7923 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus", 925, Current, 0, 1, 13782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 1, F926_7924(RTCW(Result), arg1));
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

/* {DATE_TIME}.add */
void F926_7924 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("add", 925, Current, 0, 1, 13783);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dtd_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F123_7642(RTCW(arg1)));
	if (tb1) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F52_7525(RTCW(arg1)));
		(nstcall = 0, F926_7927(Current, ti4_1));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F52_7523(RTCW(arg1)));
		ti4_2 = (nstcall = 1, F52_7524(RTCW(arg1)));
		(nstcall = 1, F921_7828(RTCW(tr1), ti4_1, ti4_2));
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F52_7525(RTCW(arg1)));
		(nstcall = 0, F926_7927(Current, ti4_1));
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = (nstcall = 0, F926_7915(Current));
	tr2 = (nstcall = 1, F124_7679(RTCW(tr1), tr2));
	ti4_1 = (nstcall = 1, F124_7682(RTCW(tr2)));
	(nstcall = 0, F926_7927(Current, ti4_1));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(261,(nstcall = 1, F923_7845), (RTCW(tr1)));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr3 = (nstcall = 0, F926_7915(Current));
	tr3 = (nstcall = 1, F124_7679(RTCW(tr1), tr3));
	tr1 = (nstcall = 1, F124_7683(RTCW(tr3)));
	tr1 = (nstcall = 1, F923_7850(RTCW(tr2), tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.relative_duration */
EIF_REFERENCE F926_7925 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
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
	
	RTEAA("relative_duration", 925, Current, 0, 1, 13784);
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
	Result = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_3_0_0_0_0_0_0_0_);
	ti4_1 = (nstcall = 0, F926_7914(Current));
	ti4_2 = (nstcall = 1, F926_7914(RTCW(arg1)));
	ti4_3 = (nstcall = 0, F52_7526(Current));
	ti4_4 = (nstcall = 1, F52_7526(RTCW(arg1)));
	ti4_5 = (nstcall = 0, F52_7527(Current));
	ti4_6 = (nstcall = 1, F52_7527(RTCW(arg1)));
	tr8_1 = (nstcall = 0, F52_7529(Current));
	tr8_2 = (nstcall = 1, F52_7529(RTCW(arg1)));
	(nstcall = -1, F123_7631(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_INTEGER_32) (ti4_5 - ti4_6), (EIF_REAL_64) (tr8_1 - tr8_2)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F123_7652(RTCW(Result), arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1_14(arg1));
	(nstcall = 1, F123_7646(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("origin_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, arg1, tr1))) {
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

/* {DATE_TIME}.definite_duration */
EIF_REFERENCE F926_7926 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("definite_duration", 925, Current, 0, 1, 13785);
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
	Result = (nstcall = 0, F926_7925(Current, arg1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	(nstcall = 1, F122_7627(RTCW(tr1), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definite_result", EX_POST);
		tb1 = (nstcall = 1, F123_7642(RTCW(Result)));
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

/* {DATE_TIME}.day_add */
void F926_7927 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("day_add", 925, Current, 0, 1, 13786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F926_7914(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (nstcall = 0, F926_7914(Current));
	(nstcall = 1, F921_7797(RTCW(tr2), (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F926_7914(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_TIME}.hour_add */
void F926_7928 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("hour_add", 925, Current, 1, 1, 13787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F52_7526(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 24L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F46_7462(Current, loc1, ((EIF_INTEGER_32) 24L)));
		(nstcall = 1, F49_7490(RTCW(tr1), ti4_1));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F46_7463(Current, loc1, ((EIF_INTEGER_32) 24L)));
		(nstcall = 0, F926_7927(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F49_7490(RTCW(tr1), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.minute_add */
void F926_7929 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("minute_add", 925, Current, 1, 1, 13788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F52_7527(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F46_7462(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 1, F49_7491(RTCW(tr1), ti4_1));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F46_7463(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F926_7928(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F49_7491(RTCW(tr1), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.second_add */
void F926_7930 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("second_add", 925, Current, 1, 1, 13789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F52_7528(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F46_7462(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 1, F49_7492(RTCW(tr1), ti4_1));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F46_7463(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F926_7929(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F49_7492(RTCW(tr1), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.fine_second_add */
void F926_7931 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("fine_second_add", 925, Current, 1, 1, 13790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr8_1 = (nstcall = 1, F49_7486(RTCW(tr1)));
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + arg1);
	RTHOOK(2);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) eif_is_less_real_64 (loc1, tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		tb1 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc1, tr8_1);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr2 = loc1;
		ti4_1 = (nstcall = 1, F846_5977(RTCW(tr2)));
		ti4_1 = (nstcall = 0, F46_7463(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L)));
		(nstcall = 1, F49_7493(RTCW(tr1), (EIF_REAL_64) (loc1 - tr8_1)));
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (nstcall = 1, F846_5977(RTCW(tr1)));
		ti4_1 = (nstcall = 0, F46_7463(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F926_7929(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F49_7493(RTCW(tr1), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE_TIME}.debug_output */
EIF_REFERENCE F926_7932 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("debug_output", 925, Current, 0, 0, 13791);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F46_7465(Current));
	Result = (nstcall = 0, F926_7934(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {DATE_TIME}.out */
EIF_REFERENCE F926_7933 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("out", 925, Current, 0, 0, 13792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F46_7465(Current));
	Result = (nstcall = 0, F926_7934(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
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

/* {DATE_TIME}.formatted_out */
EIF_REFERENCE F926_7934 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("formatted_out", 925, Current, 0, 1, 13793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(915, 0x01).id, 915, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F916_7760(RTCW(tr1), arg1));
	tr2 = (nstcall = 1, F916_7771(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit1007 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
