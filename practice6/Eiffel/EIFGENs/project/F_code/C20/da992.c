/*
 * Code for class DATE_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da992.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_DURATION}.make */
void F122_7602 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 121, Current, 0, 3, 13458);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg3)) {
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

/* {DATE_DURATION}.make_by_days */
void F122_7603 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_days", 121, Current, 0, 1, 13459);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_duration", EX_POST);
		if ((nstcall = 0, F122_7612(Current))) {
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

/* {DATE_DURATION}.zero */
EIF_REFERENCE F122_7604 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("zero", 121, Current, 0, 0, 13460);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F122_7603(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definite", EX_POST);
		tb1 = (nstcall = 1, F122_7612(RTCW(Result)));
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

/* {DATE_DURATION}.day */
EIF_INTEGER_32 F122_7605 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
}


/* {DATE_DURATION}.month */
EIF_INTEGER_32 F122_7606 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {DATE_DURATION}.year */
EIF_INTEGER_32 F122_7607 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {DATE_DURATION}.origin_date */
EIF_REFERENCE F122_7608 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_DURATION}.days_count */
EIF_INTEGER_32 F122_7609 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("days_count", 121, Current, 1, 0, 13465);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("origin_date_set", EX_PRE);
		RTTE((nstcall = 0, F122_7615(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("origin_date_not_void", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tr1 = (nstcall = 0, F122_7626(Current, loc1));
	tr1 = (nstcall = 1, F921_7816(loc1, tr1));
	ti4_1 = (nstcall = 1, F921_7806(RTCW(tr1)));
	ti4_2 = (nstcall = 1, F921_7806(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_DURATION}.is_less */
EIF_BOOLEAN F122_7610 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("is_less", 121, Current, 0, 1, 13466);
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
	if ((nstcall = 0, F122_7612(Current))) {
		tb2 = (nstcall = 1, F122_7612(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("definite_duration", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((nstcall = 0, F122_7612(Current))) {
			tb3 = (nstcall = 1, F122_7612(RTCW(arg1)));
			tb2 = tb3;
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
			tb1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) < ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("non_definite_duration", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN) !(nstcall = 0, F122_7612(Current))) {
			tb3 = (nstcall = 1, F122_7612(RTCW(arg1)));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_DURATION}.is_equal */
EIF_BOOLEAN F122_7611 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
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
	
	RTEAA("is_equal", 121, Current, 0, 1, 13467);
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ti4_1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ti4_1);
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1);
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
		RTCT("result_definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ti4_1);
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1);
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

/* {DATE_DURATION}.definite */
EIF_BOOLEAN F122_7612 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("definite", 121, Current, 0, 0, 13468);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ((EIF_INTEGER_32) 0L))))) {
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

/* {DATE_DURATION}.canonical */
EIF_BOOLEAN F122_7613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("canonical", 121, Current, 3, 1, 13469);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("date_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F921_7816(RTCW(arg1), Current));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F125_1662(RTCW(loc1), arg1));
	if (tb1) {
		RTHOOK(4);
		loc3 = RTLNS(eif_new_type(121, 0x01).id, 121, _OBJSIZ_1_0_0_3_0_0_0_0_);
		(nstcall = -1, F122_7602(RTCW(loc3), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) + ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L)));
		RTHOOK(5);
		tr1 = (nstcall = 1, F921_7816(RTCW(arg1), loc3));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		Result = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) < ((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) >= ((EIF_INTEGER_32) 0L)))) {
			tb1 = (nstcall = 1, F921_7804(RTCW(loc1), loc2));
			Result = tb1;
		}
	} else {
		RTHOOK(7);
		loc3 = RTLNS(eif_new_type(121, 0x01).id, 121, _OBJSIZ_1_0_0_3_0_0_0_0_);
		(nstcall = -1, F122_7602(RTCW(loc3), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L)));
		RTHOOK(8);
		tr1 = (nstcall = 1, F921_7816(RTCW(arg1), loc3));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		Result = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) <= ((EIF_INTEGER_32) 0L)))) {
			tb1 = (nstcall = 1, F125_1661(RTCW(loc1), loc2));
			Result = tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_DURATION}.is_positive */
EIF_BOOLEAN F122_7614 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_positive", 121, Current, 0, 0, 13470);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_DURATION}.has_origin_date */
EIF_BOOLEAN F122_7615 (EIF_REFERENCE Current)
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
	
	RTEAA("has_origin_date", 121, Current, 0, 0, 13471);
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

/* {DATE_DURATION}.set_origin_date */
void F122_7616 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_origin_date", 121, Current, 0, 1, 13472);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("origin_date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {DATE_DURATION}.set_day */
void F122_7617 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_day", 121, Current, 0, 1, 13473);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F51_7520(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg1)) {
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

/* {DATE_DURATION}.set_month */
void F122_7618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_month", 121, Current, 0, 1, 13474);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("d_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) <= (nstcall = 0, F50_7505(Current, arg1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg1)) {
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

/* {DATE_DURATION}.set_year */
void F122_7619 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_year", 121, Current, 0, 1, 13475);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("can_not_cut_29th_feb", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) <= (nstcall = 0, F50_7505(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_), arg1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == arg1)) {
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

/* {DATE_DURATION}.set_date */
void F122_7620 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_date", 121, Current, 0, 3, 13476);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("m_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("d_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (nstcall = 0, F50_7505(Current, arg2, arg1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == arg1)) {
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

/* {DATE_DURATION}.day_add */
void F122_7621 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("day_add", 121, Current, 0, 1, 13477);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_DURATION}.month_add */
void F122_7622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("month_add", 121, Current, 0, 1, 13478);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_DURATION}.year_add */
void F122_7623 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("year_add", 121, Current, 0, 1, 13479);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_DURATION}.plus */
EIF_REFERENCE F122_7624 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
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
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("plus", 121, Current, 1, 1, 13480);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
	ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_6 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
	(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2), (EIF_INTEGER_32) (ti4_3 + ti4_4), (EIF_INTEGER_32) (ti4_5 + ti4_6)));
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F122_7616(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		(nstcall = 1, F122_7616(RTCW(Result), NULL));
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
		tr1 = (nstcall = 1, F122_7624(RTCW(arg1), Current));
		tb1 = (nstcall = 1, F122_7611(RTCW(Result), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("origin_equal", EX_POST);
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

/* {DATE_DURATION}.opposite */
EIF_REFERENCE F122_7625 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("opposite", 121, Current, 1, 0, 13481);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F122_7616(RTCW(Result), tr1));
	} else {
		RTHOOK(5);
		(nstcall = 1, F122_7616(RTCW(Result), NULL));
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
		tr1 = (nstcall = 1, F122_7624(RTCW(Result), Current));
		tr2 = (nstcall = 0, F122_7604(Current));
		tb1 = (nstcall = 1, F122_7611(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_equal", EX_POST);
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

/* {DATE_DURATION}.to_canonical */
EIF_REFERENCE F122_7626 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("to_canonical", 121, Current, 3, 1, 13482);
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
	if ((nstcall = 0, F122_7613(Current, arg1))) {
		RTHOOK(3);
		Result = (nstcall = 0, F1_20(Current));
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F921_7816(RTCW(arg1), Current));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F623_7740(RTCW(loc2)));
		ti4_2 = (nstcall = 1, F623_7740(RTCW(arg1)));
		ti4_3 = (nstcall = 1, F623_7739(RTCW(loc2)));
		ti4_4 = (nstcall = 1, F623_7739(RTCW(arg1)));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) * ((EIF_INTEGER_32) 12L)) + ti4_3) - ti4_4);
		RTHOOK(6);
		tr1 = (nstcall = 1, F1_14(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		(nstcall = 1, F921_7824(RTCW(loc1), loc3));
		RTHOOK(8);
		tb1 = (nstcall = 1, F125_1662(RTCW(loc2), arg1));
		if (tb1) {
			RTHOOK(9);
			tb1 = (nstcall = 1, F125_1660(RTCW(loc1), loc2));
			if (tb1) {
				RTHOOK(10);
				Result = RTLNSMART(dftype);
				ti4_1 = (nstcall = 1, F623_7738(RTCW(loc2)));
				ti4_2 = (nstcall = 1, F623_7738(RTCW(loc1)));
				(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			} else {
				RTHOOK(11);
				loc3--;
				RTHOOK(12);
				(nstcall = 1, F921_7823(RTCW(loc1)));
				RTHOOK(13);
				ti4_1 = (nstcall = 1, F623_7739(RTCW(loc1)));
				ti4_2 = (nstcall = 1, F623_7740(RTCW(loc1)));
				ti4_1 = (nstcall = 1, F50_7505(RTCW(arg1), ti4_1, ti4_2));
				ti4_2 = (nstcall = 1, F623_7738(RTCW(arg1)));
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					RTHOOK(14);
					Result = RTLNSMART(dftype);
					ti4_1 = (nstcall = 1, F623_7738(RTCW(loc2)));
					(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), ti4_1));
				} else {
					RTHOOK(15);
					Result = RTLNSMART(dftype);
					ti4_1 = (nstcall = 1, F623_7738(RTCW(loc2)));
					ti4_2 = (nstcall = 1, F623_7739(RTCW(loc1)));
					ti4_3 = (nstcall = 1, F623_7740(RTCW(loc1)));
					ti4_2 = (nstcall = 1, F50_7505(RTCW(arg1), ti4_2, ti4_3));
					ti4_3 = (nstcall = 1, F623_7738(RTCW(arg1)));
					(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3)));
				}
			}
		} else {
			RTHOOK(16);
			tb1 = (nstcall = 1, F125_1662(RTCW(loc1), loc2));
			if (tb1) {
				RTHOOK(17);
				Result = RTLNSMART(dftype);
				ti4_1 = (nstcall = 1, F623_7738(RTCW(loc2)));
				ti4_2 = (nstcall = 1, F623_7738(RTCW(loc1)));
				(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			} else {
				RTHOOK(18);
				loc3++;
				RTHOOK(19);
				(nstcall = 1, F921_7822(RTCW(loc1)));
				RTHOOK(20);
				Result = RTLNSMART(dftype);
				ti4_1 = (nstcall = 1, F623_7738(RTCW(loc2)));
				ti4_2 = (nstcall = 1, F623_7739(RTCW(loc2)));
				ti4_3 = (nstcall = 1, F623_7740(RTCW(loc2)));
				ti4_2 = (nstcall = 1, F50_7505(RTCW(arg1), ti4_2, ti4_3));
				ti4_3 = (nstcall = 1, F623_7738(RTCW(loc1)));
				(nstcall = -1, F122_7602(RTCW(Result), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("canonical_result", EX_POST);
		tb1 = (nstcall = 1, F122_7613(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("duration_not_changed", EX_POST);
		tr1 = (nstcall = 1, F921_7816(RTCW(arg1), Current));
		tr2 = (nstcall = 1, F921_7816(RTCW(arg1), Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_DURATION}.to_definite */
void F122_7627 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_definite", 121, Current, 0, 1, 13483);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F921_7816(RTCW(arg1), Current));
	ti4_1 = (nstcall = 1, F921_7806(RTCW(tr1)));
	ti4_2 = (nstcall = 1, F921_7806(RTCW(arg1)));
	(nstcall = 0, F122_7603(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definite_result", EX_POST);
		if ((nstcall = 0, F122_7612(Current))) {
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

/* {DATE_DURATION}.to_date_time */
EIF_REFERENCE F122_7628 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("to_date_time", 121, Current, 0, 0, 13484);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F123_7629(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = (nstcall = 1, F52_7523(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = (nstcall = 1, F52_7524(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = (nstcall = 1, F52_7525(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
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

/* {DATE_DURATION}._invariant */
void F122_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTEAINV(l_feature_name, 991, Current, 1, 0);
	RTIT("equal_signs", Current);
	tb1 = '\01';
	tb2 = '\0';
	tb3 = '\0';
	if ((nstcall = 0, F122_7615(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		tb3 = EIF_TEST(loc1);
	}
	if (tb3) {
		tb2 = (nstcall = 0, F122_7613(Current, loc1));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) <= ((EIF_INTEGER_32) 0L))));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
