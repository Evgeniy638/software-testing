/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti1004.h"
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

/* {TIME}.make */
void F923_7836 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 922, Current, 0, 3, 13693);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_time", EX_PRE);
		tr8_1 = (EIF_REAL_64) (arg3);
		RTTE((nstcall = 0, F922_7835(Current, arg1, arg2, tr8_1, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F49_7490(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F49_7491(Current, arg2));
	RTHOOK(4);
	(nstcall = 0, F49_7492(Current, arg3));
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F49_7481(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F49_7482(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F49_7483(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("fractional_second_set", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
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

/* {TIME}.make_fine */
void F923_7837 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_fine", 922, Current, 1, 3, 13694);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_time", EX_PRE);
		RTTE((nstcall = 0, F922_7835(Current, arg1, arg2, arg3, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) arg3;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 0, F923_7836(Current, arg1, arg2, loc1));
	RTHOOK(4);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F49_7481(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F49_7482(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 ((nstcall = 0, F49_7486(Current)), arg3)) {
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

/* {TIME}.make_now */
void F923_7838 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now", 922, Current, 1, 0, 13695);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1, 0x01).id, 1, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F2_7402(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F2_7409(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7410(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7411(RTCW(loc1)));
	(nstcall = 0, F923_7836(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F2_7412(RTCW(loc1)));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_now_utc */
void F923_7839 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now_utc", 922, Current, 1, 0, 13696);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1, 0x01).id, 1, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F2_7403(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F2_7409(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F2_7410(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F2_7411(RTCW(loc1)));
	(nstcall = 0, F923_7836(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F2_7412(RTCW(loc1)));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_by_seconds */
void F923_7840 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_seconds", 922, Current, 3, 1, 13697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 86400L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 3600L));
	RTHOOK(5);
	loc3 -= (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 3600L));
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 60L));
	RTHOOK(7);
	loc3 -= (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 60L));
	RTHOOK(8);
	(nstcall = 0, F923_7836(Current, loc1, loc2, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("seconds_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F923_7848(Current)) == arg1)) {
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

/* {TIME}.make_by_fine_seconds */
void F923_7841 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_fine_seconds", 922, Current, 1, 1, 13698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_large_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_small_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 86400L));
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F923_7840(Current, loc1));
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg1 - tr8_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.make_from_string_default */
void F923_7842 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string_default", 922, Current, 0, 1, 13699);
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
		RTCT("time_valid", EX_PRE);
		tr1 = (nstcall = 0, F46_7465(Current));
		RTTE((nstcall = 0, F922_7833(Current, arg1, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F46_7465(Current));
	(nstcall = 0, F923_7843(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_from_string */
void F923_7843 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("make_from_string", 922, Current, 1, 2, 13700);
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
		RTCT("time_valid", EX_PRE);
		RTTE((nstcall = 0, F922_7833(Current, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(915, 0x01).id, 915, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F916_7760(RTCW(tr1), arg2));
	tr2 = (nstcall = 1, F916_7776(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F49_7481(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F49_7482(RTCW(loc1)));
	tr8_1 = (nstcall = 1, F49_7486(RTCW(loc1)));
	(nstcall = 0, F923_7837(Current, ti4_1, ti4_2, tr8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.make_by_compact_time */
void F923_7844 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_compact_time", 922, Current, 0, 1, 13701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_t_valid", EX_PRE);
		RTTE((nstcall = 0, F922_7834(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("compact_time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg1)) {
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

/* {TIME}.origin */
static EIF_REFERENCE F923_7845_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(261)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("origin", 922, Current, 0, 0, 13702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(922, 0x01).id, 922, _OBJSIZ_0_0_0_1_0_0_0_1_);
	(nstcall = -1, F923_7836(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
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

EIF_REFERENCE F923_7845 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(261,F923_7845_body,(Current));
}

/* {TIME}.is_less */
EIF_BOOLEAN F923_7846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 922, Current, 2, 1, 13703);
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
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	Result = '\01';
	if (!(EIF_BOOLEAN) (loc1 < loc2)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) eif_is_greater_real_64 ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)), (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F923_7846(RTCW(arg1), Current));
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME}.duration */
EIF_REFERENCE F923_7847 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("duration", 922, Current, 0, 0, 13704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(123, 0x01).id, 123, _OBJSIZ_0_0_0_2_0_0_0_1_);
	ti4_1 = (nstcall = 0, F49_7481(Current));
	ti4_2 = (nstcall = 0, F49_7482(Current));
	tr8_1 = (nstcall = 0, F49_7486(Current));
	(nstcall = -1, F124_7655(RTCW(Result), ti4_1, ti4_2, tr8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("seconds_large_enough", EX_POST);
		ti4_1 = (nstcall = 1, F124_7659(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("seconds_small_enough", EX_POST);
		ti4_1 = (nstcall = 1, F124_7659(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 86400L))) {
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

/* {TIME}.seconds */
EIF_INTEGER_32 F923_7848 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("seconds", 922, Current, 0, 0, 13705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F49_7481(Current));
	ti4_1 = (nstcall = 0, F49_7482(Current));
	ti4_2 = (nstcall = 0, F49_7483(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))) + ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		tr1 = (nstcall = 0, F923_7847(Current));
		ti4_1 = (nstcall = 1, F124_7659(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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

/* {TIME}.fine_seconds */
EIF_REAL_64 F923_7849 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fine_seconds", 922, Current, 0, 0, 13706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F49_7481(Current));
	ti4_2 = (nstcall = 0, F49_7482(Current));
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L))));
	Result = (nstcall = 0, F49_7486(Current));
	Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME}.plus */
EIF_REFERENCE F923_7850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus", 922, Current, 0, 1, 13707);
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
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	(nstcall = 1, F923_7853(RTCW(Result), tr8_1));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 1, F923_7854(RTCW(Result), ti4_1));
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_1_);
	(nstcall = 1, F923_7855(RTCW(Result), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {TIME}.relative_duration */
EIF_REFERENCE F923_7851 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	
	RTEAA("relative_duration", 922, Current, 0, 1, 13708);
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
	Result = RTLNS(eif_new_type(123, 0x01).id, 123, _OBJSIZ_0_0_0_2_0_0_0_1_);
	tr8_1 = (nstcall = 0, F923_7849(Current));
	tr8_2 = (nstcall = 1, F923_7849(RTCW(arg1)));
	(nstcall = -1, F124_7657(RTCW(Result), (EIF_REAL_64) (tr8_1 - tr8_2)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F124_7681(RTCW(Result)));
	Result = (EIF_REFERENCE) tr1;
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

/* {TIME}.second_add */
void F923_7852 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_add", 922, Current, 1, 1, 13709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F49_7483(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F46_7462(Current, loc1, ((EIF_INTEGER_32) 60L)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		(nstcall = 0, F49_7493(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F46_7463(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F923_7854(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr8_1 = (EIF_REAL_64) (loc1);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		(nstcall = 0, F49_7493(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.fine_second_add */
void F923_7853 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fine_second_add", 922, Current, 1, 1, 13710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F49_7486(Current));
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg1);
	RTHOOK(2);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) eif_is_less_real_64 (loc1, tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		tb1 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc1, tr8_1);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (nstcall = 1, F846_5977(RTCW(tr1)));
		ti4_1 = (nstcall = 0, F46_7463(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F49_7493(Current, (EIF_REAL_64) (loc1 - tr8_1)));
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (nstcall = 1, F846_5977(RTCW(tr1)));
		ti4_1 = (nstcall = 0, F46_7463(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F923_7854(Current, ti4_1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F49_7493(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.minute_add */
void F923_7854 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minute_add", 922, Current, 1, 1, 13711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F49_7482(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F46_7462(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F49_7491(Current, ti4_1));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F46_7463(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F923_7855(Current, ti4_1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F49_7491(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.hour_add */
void F923_7855 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hour_add", 922, Current, 0, 1, 13712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F49_7481(Current));
	ti4_1 = (nstcall = 0, F46_7462(Current, (EIF_INTEGER_32) (ti4_1 + arg1), ((EIF_INTEGER_32) 24L)));
	(nstcall = 0, F49_7490(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {TIME}.second_forth */
void F923_7856 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_forth", 922, Current, 0, 0, 13713);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN) eif_is_less_real_64 ((nstcall = 0, F49_7486(Current)), tr8_1)) {
		RTHOOK(2);
		tr8_1 = (nstcall = 0, F49_7486(Current));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		(nstcall = 0, F49_7493(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		(nstcall = 0, F49_7493(Current, tr8_1));
		RTHOOK(4);
		(nstcall = 0, F923_7858(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.second_back */
void F923_7857 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_back", 922, Current, 0, 0, 13714);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 ((nstcall = 0, F49_7486(Current)), tr8_1)) {
		RTHOOK(2);
		tr8_1 = (nstcall = 0, F49_7486(Current));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		(nstcall = 0, F49_7493(Current, (EIF_REAL_64) (tr8_1 - tr8_2)));
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)));
		(nstcall = 0, F49_7493(Current, tr8_1));
		RTHOOK(4);
		(nstcall = 0, F923_7859(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.minute_forth */
void F923_7858 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minute_forth", 922, Current, 0, 0, 13715);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7482(Current)) < (EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F49_7482(Current));
		(nstcall = 0, F49_7491(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F49_7491(Current, ((EIF_INTEGER_32) 0L)));
		RTHOOK(4);
		(nstcall = 0, F923_7860(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.minute_back */
void F923_7859 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minute_back", 922, Current, 0, 0, 13716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7482(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F49_7482(Current));
		(nstcall = 0, F49_7491(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F49_7491(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 0, F923_7861(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.hour_forth */
void F923_7860 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hour_forth", 922, Current, 0, 0, 13717);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7481(Current)) < (EIF_INTEGER_32) (((EIF_INTEGER_32) 24L) - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F49_7481(Current));
		(nstcall = 0, F49_7490(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F49_7490(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.hour_back */
void F923_7861 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hour_back", 922, Current, 0, 0, 13718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7481(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F49_7481(Current));
		(nstcall = 0, F49_7490(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F49_7490(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 24L) - ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.debug_output */
EIF_REFERENCE F923_7862 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 922, Current, 0, 0, 13719);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F47_7471(Current));
	Result = (nstcall = 0, F923_7864(Current, tr1));
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

/* {TIME}.out */
EIF_REFERENCE F923_7863 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 922, Current, 0, 0, 13720);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F47_7471(Current));
	Result = (nstcall = 0, F923_7864(Current, tr1));
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

/* {TIME}.formatted_out */
EIF_REFERENCE F923_7864 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("formatted_out", 922, Current, 0, 1, 13721);
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
	tr2 = (nstcall = 1, F916_7773(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME}._invariant */
void F923_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 1003, Current, 0, 0);
	RTIT("second_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7483(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("second_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7483(Current)) < ((EIF_INTEGER_32) 60L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractionals_large_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractionals_small_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("minute_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7482(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("minute_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7482(Current)) < ((EIF_INTEGER_32) 60L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("hour_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7481(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("hour_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F49_7481(Current)) < ((EIF_INTEGER_32) 24L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit1004 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
