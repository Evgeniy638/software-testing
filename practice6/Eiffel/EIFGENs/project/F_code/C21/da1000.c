/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da1000.h"
#include <math.h>
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

/* {DATE_TIME_CODE_STRING}.make */
void F916_7760 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,tr3);
	RTLR(8,loc7);
	RTLIU(9);
	
	RTEAA("make", 915, Current, 7, 1, 13620);
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
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,624,0xFF01,555,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F625_4026(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc4 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(5);
	tr1 = (nstcall = 1, F50_7507(RTCW(loc4)));
	tr2 = (nstcall = 1, F1_14(tr1));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
	RTHOOK(6);
	tr1 = (nstcall = 1, F50_7508(RTCW(loc4)));
	tr2 = (nstcall = 1, F1_14(tr1));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	RTHOOK(7);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) break;
		RTHOOK(9);
		loc3 = (nstcall = 0, F915_7757(Current, arg1, loc2));
		RTHOOK(10);
		loc5 = (nstcall = 0, F915_7758(Current, arg1, loc2, loc3));
		RTHOOK(11);
		ti4_2 = eif_abs_int32 (loc3);
		loc3 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		tr1 = eif_boxed_item(loc5,1);
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6) + O4892[Dtype(loc6)-905]);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[Dtype(RTCW(loc6))-907])(loc6));
			(nstcall = -1, F556_7701(RTCW(tr2), tr3));
			(nstcall = 1, F625_4071(RTCW(tr1), tr2, loc1));
			RTHOOK(15);
			loc1++;
		}
		RTHOOK(16);
		tr1 = eif_boxed_item(loc5,2);
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7) + O4892[Dtype(loc7)-905]);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
			(nstcall = -1, F556_7701(RTCW(tr2), loc7));
			(nstcall = 1, F625_4071(RTCW(tr1), tr2, loc1));
			RTHOOK(19);
			loc1++;
			RTHOOK(20);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(21);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(22);
	tr1 = RTLNS(eif_new_type(1, 0x01).id, 1, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F2_7402(RTCW(tr1)));
	ti4_2 = (nstcall = 1, F2_7406(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("value_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("base_century_set", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {DATE_TIME_CODE_STRING}.value */
EIF_REFERENCE F916_7761 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_CODE_STRING}.name */
EIF_REFERENCE F916_7762 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("name", 915, Current, 2, 0, 13622);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(Result), ((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc1));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 == NULL)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
		(nstcall = 1, F908_6875(RTCW(Result), tr1));
		RTHOOK(6);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) ' '));
		RTHOOK(7);
		loc1++;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc1));
		loc2 = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.base_century */
EIF_INTEGER_32 F916_7763 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_);
}


/* {DATE_TIME_CODE_STRING}.is_date */
EIF_BOOLEAN F916_7764 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_date", 915, Current, 0, 1, 13624);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F916_7783(Current, arg1));
	tb1 = (nstcall = 1, F925_7879(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.is_time */
EIF_BOOLEAN F916_7765 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_time", 915, Current, 0, 1, 13625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F916_7783(Current, arg1));
	tb1 = (nstcall = 1, F925_7880(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.is_date_time */
EIF_BOOLEAN F916_7766 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_date_time", 915, Current, 0, 1, 13626);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F916_7783(Current, arg1));
	tb1 = (nstcall = 1, F925_7881(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.is_value_valid */
EIF_BOOLEAN F916_7767 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_value_valid", 915, Current, 1, 1, 13627);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F916_7783(Current, arg1));
	RTHOOK(3);
	Result = '\01';
	tb1 = '\01';
	tb2 = (nstcall = 1, F925_7879(RTCW(loc1)));
	if (!tb2) {
		tb2 = (nstcall = 1, F925_7880(RTCW(loc1)));
		tb1 = tb2;
	}
	if (!tb1) {
		tb1 = (nstcall = 1, F925_7881(RTCW(loc1)));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.separators_used */
EIF_BOOLEAN F916_7768 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_);
}


/* {DATE_TIME_CODE_STRING}.set_base_century */
void F916_7769 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_base_century", 915, Current, 0, 1, 13629);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) == arg1)) {
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

/* {DATE_TIME_CODE_STRING}.correspond */
EIF_BOOLEAN F916_7770 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLIU(8);
	
	RTEAA("correspond", 915, Current, 8, 1, 13630);
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
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
	if (tb1) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc5 = (nstcall = 0, F915_7759(Current, arg1));
	}
	RTHOOK(7);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc3));
		loc4 = (EIF_REFERENCE) tr2;
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			RTHOOK(11);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(12);
			if (loc5) {
				RTHOOK(13);
				loc2 = (nstcall = 0, F915_7757(Current, arg1, loc1));
			} else {
				RTHOOK(14);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_0_);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
			}
			RTHOOK(15);
			loc6 = (nstcall = 0, F915_7758(Current, arg1, loc1, loc2));
			RTHOOK(16);
			ti4_1 = eif_abs_int32 (loc2);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			tr1 = eif_boxed_item(loc6,1);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(18);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7) + O4892[Dtype(loc7)-905]);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				Result = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7) + O4892[Dtype(loc7)-905]);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7) + O4892[Dtype(loc7)-905]);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_1_);
					Result = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
				}
				RTHOOK(20);
				tb2 = *(EIF_BOOLEAN *)(RTCW(loc4)+ _CHROFF_2_1_);
				if (tb2) {
					RTHOOK(21);
					tb2 = '\0';
					if (Result) {
						tb3 = (nstcall = 1, F905_6684(RTCW(loc7)));
						tb2 = tb3;
					}
					Result = (EIF_BOOLEAN) tb2;
					RTHOOK(22);
					tb2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_3_);
						tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L));
					}
					if (tb2) {
						RTHOOK(23);
						tb2 = '\0';
						tb3 = '\0';
						if (Result) {
							ti4_1 = (nstcall = 1, F905_6718(RTCW(loc7)));
							ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_2_);
							tb3 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
						}
						if (tb3) {
							ti4_1 = (nstcall = 1, F905_6718(RTCW(loc7)));
							ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_2_2_0_3_);
							tb2 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
						}
						Result = (EIF_BOOLEAN) tb2;
					}
				} else {
					RTHOOK(24);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
					tb2 = (nstcall = 1, F54_7558(RTCW(loc4), tr1));
					if (tb2) {
						RTHOOK(25);
						tb2 = '\0';
						if (Result) {
							tb3 = '\01';
							tr1 = RTMS_EX_H("AM",2,16717);
							tb4 = (nstcall = 1, F906_6774(RTCW(loc7), tr1));
							if (!tb4) {
								tr1 = RTMS_EX_H("PM",2,20557);
								tb4 = (nstcall = 1, F906_6774(RTCW(loc7), tr1));
								tb3 = tb4;
							}
							tb2 = tb3;
						}
						Result = (EIF_BOOLEAN) tb2;
					} else {
						RTHOOK(26);
						tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
						tb2 = (nstcall = 1, F54_7536(RTCW(loc4), tr1));
						if (tb2) {
							RTHOOK(27);
							tb2 = '\0';
							if (Result) {
								tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
								tb3 = (nstcall = 1, F472_3296(RTCW(tr1), loc7));
								tb2 = tb3;
							}
							Result = (EIF_BOOLEAN) tb2;
						} else {
							RTHOOK(28);
							tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
							tb2 = (nstcall = 1, F54_7541(RTCW(loc4), tr1));
							if (tb2) {
								RTHOOK(29);
								tb2 = '\0';
								if (Result) {
									tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
									tb3 = (nstcall = 1, F472_3296(RTCW(tr1), loc7));
									tb2 = tb3;
								}
								Result = (EIF_BOOLEAN) tb2;
							}
						}
					}
				}
				RTHOOK(30);
				loc3++;
			}
			RTHOOK(31);
			if (loc5) {
				RTHOOK(32);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc3));
				loc4 = (EIF_REFERENCE) tr2;
				RTHOOK(33);
				loc3++;
				RTHOOK(34);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(35);
					tr1 = eif_boxed_item(loc6,2);
					loc8 = (EIF_REFERENCE) tr1;
					RTHOOK(36);
					tb2 = '\0';
					tb3 = '\0';
					if (Result) {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
						tb3 = (EIF_BOOLEAN)(loc2 != ti4_1);
					}
					if (tb3) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
						tb3 = (nstcall = 1, F906_6776(RTCW(loc8), tr1));
						tb2 = tb3;
					}
					Result = (EIF_BOOLEAN) tb2;
				}
			}
			RTHOOK(37);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_string */
EIF_REFERENCE F916_7771 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc7);
	RTLR(6,Current);
	RTLR(7,tr2);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTEAA("create_string", 915, Current, 7, 1, 13631);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(Result), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc4));
	loc7 = (EIF_REFERENCE) tr2;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc7 == NULL)) break;
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_4_);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		switch (loc5) {
			case 1L:
				RTHOOK(10);
				ti4_1 = (nstcall = 1, F623_7738(RTCW(loc1)));
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 2L:
				RTHOOK(11);
				ti4_1 = (nstcall = 1, F623_7738(RTCW(loc1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(13);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(14);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 3L:
				RTHOOK(15);
				ti4_1 = (nstcall = 1, F921_7812(RTCW(loc1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = (nstcall = 1, F472_3293(RTCW(tr1), loc3));
				(nstcall = 1, F908_6875(RTCW(Result), tr2));
				break;
			case 4L:
				RTHOOK(17);
				ti4_1 = (nstcall = 1, F623_7740(RTCW(loc1)));
				tr1 = eif_out__i4_s1(ti4_1);
				loc6 = (EIF_REFERENCE) tr1;
				RTHOOK(18);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					RTHOOK(19);
					(nstcall = 1, F908_6875(RTCW(Result), loc6));
				} else {
					RTHOOK(20);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(21);
						tr1 = RTMS_EX_H("000",3,3158064);
						(nstcall = 1, F908_6875(RTCW(Result), tr1));
						RTHOOK(22);
						(nstcall = 1, F908_6875(RTCW(Result), loc6));
					} else {
						RTHOOK(23);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							RTHOOK(24);
							tr1 = RTMS_EX_H("00",2,12336);
							(nstcall = 1, F908_6875(RTCW(Result), tr1));
							RTHOOK(25);
							(nstcall = 1, F908_6875(RTCW(Result), loc6));
						} else {
							RTHOOK(26);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								RTHOOK(27);
								tr1 = RTMS_EX_H("0",1,48);
								(nstcall = 1, F908_6875(RTCW(Result), tr1));
								RTHOOK(28);
								(nstcall = 1, F908_6875(RTCW(Result), loc6));
							}
						}
					}
				}
				break;
			case 5L:
				RTHOOK(29);
				ti4_1 = (nstcall = 1, F623_7740(RTCW(loc1)));
				tr1 = eif_out__i4_s1(ti4_1);
				loc6 = (EIF_REFERENCE) tr1;
				RTHOOK(30);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					RTHOOK(31);
					(nstcall = 1, F908_6858(RTCW(loc6), ((EIF_INTEGER_32) 2L)));
				} else {
					RTHOOK(32);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(33);
						(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '0'));
					}
				}
				RTHOOK(34);
				(nstcall = 1, F908_6875(RTCW(Result), loc6));
				break;
			case 6L:
				RTHOOK(35);
				ti4_1 = (nstcall = 1, F623_7739(RTCW(loc1)));
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 7L:
				RTHOOK(36);
				ti4_1 = (nstcall = 1, F623_7739(RTCW(loc1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(37);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(38);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(39);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 8L:
				RTHOOK(40);
				ti4_1 = (nstcall = 1, F623_7739(RTCW(loc1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(41);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr2 = (nstcall = 1, F472_3293(RTCW(tr1), loc3));
				(nstcall = 1, F908_6875(RTCW(Result), tr2));
				break;
			case 9L:
				RTHOOK(42);
				ti4_1 = (nstcall = 1, F49_7481(RTCW(loc2)));
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 10L:
				RTHOOK(43);
				ti4_1 = (nstcall = 1, F49_7481(RTCW(loc2)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(44);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(45);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(46);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 11L:
			case 12L:
				RTHOOK(47);
				ti4_1 = (nstcall = 1, F49_7481(RTCW(loc2)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(48);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					RTHOOK(49);
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(50);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					RTHOOK(51);
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						RTHOOK(52);
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				RTHOOK(53);
				tb1 = '\0';
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					RTHOOK(54);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(55);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 13L:
				RTHOOK(56);
				ti4_1 = (nstcall = 1, F49_7482(RTCW(loc2)));
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 14L:
				RTHOOK(57);
				ti4_1 = (nstcall = 1, F49_7482(RTCW(loc2)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(59);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(60);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 15L:
				RTHOOK(61);
				ti4_1 = (nstcall = 1, F49_7483(RTCW(loc2)));
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 16L:
				RTHOOK(62);
				ti4_1 = (nstcall = 1, F49_7483(RTCW(loc2)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(63);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(64);
					tr1 = RTMS_EX_H("0",1,48);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(65);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
			case 17L:
				RTHOOK(66);
				tr8_1 = *(EIF_REAL_64 *)(RTCW(loc2)+ _R64OFF_0_0_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr1 = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
				ti4_1 = (nstcall = 1, F846_5978(RTCW(tr1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(67);
				tr1 = eif_out__i4_s1(loc3);
				loc6 = (EIF_REFERENCE) tr1;
				RTHOOK(68);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					RTHOOK(69);
					tr1 = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					(nstcall = -1, F906_6749(RTCW(tr1), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (ti4_1 - ti4_2)));
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				RTHOOK(70);
				(nstcall = 1, F908_6875(RTCW(Result), loc6));
				break;
			case 24L:
				RTHOOK(71);
				ti4_1 = (nstcall = 1, F49_7481(RTCW(loc2)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(72);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					RTHOOK(73);
					tr1 = RTMS_EX_H("AM",2,16717);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				} else {
					RTHOOK(74);
					tr1 = RTMS_EX_H("PM",2,20557);
					(nstcall = 1, F908_6875(RTCW(Result), tr1));
				}
				break;
			default:
				RTHOOK(75);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc7));
				(nstcall = 1, F908_6875(RTCW(Result), tr1));
				break;
		}
		RTHOOK(76);
		loc4++;
		RTHOOK(77);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc4));
		loc7 = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(78);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(79);
		RTCT("string_correspond", EX_POST);
		if ((nstcall = 0, F916_7770(Current, Result))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(80);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_REFERENCE F916_7772 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("create_date_string", 915, Current, 0, 1, 13632);
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
	tr1 = RTLNS(eif_new_type(925, 0x01).id, 925, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F926_7902(RTCW(tr1), arg1));
	Result = (nstcall = 0, F916_7771(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_correspond", EX_POST);
		if ((nstcall = 0, F916_7770(Current, Result))) {
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

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_REFERENCE F916_7773 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("create_time_string", 915, Current, 1, 1, 13633);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("time_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(925, 0x01).id, 925, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = (nstcall = 1, F49_7481(RTCW(arg1)));
	ti4_2 = (nstcall = 1, F49_7482(RTCW(arg1)));
	tr8_1 = (nstcall = 1, F49_7486(RTCW(arg1)));
	(nstcall = -1, F926_7900(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ti4_1, ti4_2, tr8_1));
	RTHOOK(3);
	Result = (nstcall = 0, F916_7771(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("string_correspond", EX_POST);
		if ((nstcall = 0, F916_7770(Current, Result))) {
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

/* {DATE_TIME_CODE_STRING}.create_date_time */
EIF_REFERENCE F916_7774 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("create_date_time", 915, Current, 2, 1, 13634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		RTTE((nstcall = 0, F916_7777(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		RTTE((nstcall = 0, F916_7770(Current, arg1)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid", EX_PRE);
		RTTE((nstcall = 0, F916_7767(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	loc1 = (nstcall = 0, F916_7783(Current, arg1));
	RTHOOK(7);
	Result = RTLNS(eif_new_type(925, 0x01).id, 925, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = (nstcall = 1, F925_7870(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F925_7871(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F925_7872(RTCW(loc1)));
	ti4_4 = (nstcall = 1, F925_7873(RTCW(loc1)));
	ti4_5 = (nstcall = 1, F925_7874(RTCW(loc1)));
	tr8_1 = (nstcall = 1, F925_7875(RTCW(loc1)));
	(nstcall = -1, F926_7900(RTCW(Result), ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, tr8_1));
	RTHOOK(8);
	tr1 = (nstcall = 1, F925_7876(RTCW(loc1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		ti4_1 = (nstcall = 1, F921_7812(RTCW(tr2)));
		tr2 = (nstcall = 1, F472_3293(RTCW(tr1), ti4_1));
		tb1 = (nstcall = 1, F906_6776(RTCW(loc2), tr2));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("date_time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("day_text_equal_day", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_)) {
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

/* {DATE_TIME_CODE_STRING}.create_date */
EIF_REFERENCE F916_7775 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("create_date", 915, Current, 3, 1, 13635);
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
		RTCT("is_precise", EX_PRE);
		RTTE((nstcall = 0, F916_7778(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		RTTE((nstcall = 0, F916_7770(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1_14(tr1));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_6_3_0_7_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((nstcall = 0, F915_7759(Current, arg1))) {
		RTHOOK(7);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H(" ",1,32);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, loc3));
		RTHOOK(9);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("hh",2,26728);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(11);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H(":",1,58);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
		RTHOOK(13);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("mi",2,28009);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L))));
		RTHOOK(15);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H(":",1,58);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L))));
		RTHOOK(17);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("ss",2,29555);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L))));
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 0:0:0",6,1039522352);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4882[Dtype(RTCW(arg1))-907])(arg1, tr1));
		tr1 = (nstcall = 0, F916_7774(Current, tr1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		Result = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(20);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("[0]hh",5,812126824);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, loc3));
		RTHOOK(22);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("[0]mi",5,812128105);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(24);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("[0]ss",5,812129651);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
		RTHOOK(26);
		tr1 = RTMS_EX_H("000000",6,903204912);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4882[Dtype(RTCW(arg1))-907])(arg1, tr1));
		tr1 = (nstcall = 0, F916_7774(Current, tr1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		Result = (EIF_REFERENCE) tr2;
	}
	RTHOOK(27);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("day_text_equal_day", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_)) {
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
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_time */
EIF_REFERENCE F916_7776 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("create_time", 915, Current, 3, 1, 13636);
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
		RTCT("is_precise", EX_PRE);
		RTTE((nstcall = 0, F916_7779(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		RTTE((nstcall = 0, F916_7770(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1_14(tr1));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_6_3_0_7_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((nstcall = 0, F915_7759(Current, arg1))) {
		RTHOOK(7);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H(" ",1,32);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, loc3));
		RTHOOK(9);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("dd",2,25700);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(11);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("/",1,47);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
		RTHOOK(13);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("mm",2,28013);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L))));
		RTHOOK(15);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("/",1,47);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L))));
		RTHOOK(17);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("yy",2,31097);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L))));
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 1/1/01",7,1995643697);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4882[Dtype(RTCW(arg1))-907])(arg1, tr1));
		tr1 = (nstcall = 0, F916_7774(Current, tr1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		Result = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(20);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("[0]dd",5,812125796);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, loc3));
		RTHOOK(22);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("[0]mm",5,812128109);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(24);
		loc1 = RTLNS(eif_new_type(555, 0x01).id, 555, _OBJSIZ_2_2_0_5_0_0_0_0_);
		tr1 = RTMS_EX_H("yy",2,31097);
		(nstcall = -1, F556_7701(RTCW(loc1), tr1));
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F625_4071(RTCW(tr1), loc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L))));
		RTHOOK(26);
		tr1 = RTMS_EX_H("010101",6,903278129);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4882[Dtype(RTCW(arg1))-907])(arg1, tr1));
		tr1 = (nstcall = 0, F916_7774(Current, tr1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTHOOK(27);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("time_correspond", EX_POST);
		tr1 = (nstcall = 0, F916_7773(Current, Result));
		tb1 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
		if (tb1) {
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
	return Result;
}

/* {DATE_TIME_CODE_STRING}.precise */
EIF_BOOLEAN F916_7777 (EIF_REFERENCE Current)
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
	
	RTEAA("precise", 915, Current, 0, 0, 13637);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	if ((nstcall = 0, F916_7778(Current))) {
		Result = (nstcall = 0, F916_7779(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.precise_date */
EIF_BOOLEAN F916_7778 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("precise_date", 915, Current, 6, 0, 13638);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc1));
		loc6 = tr2;
		if ((EIF_BOOLEAN) !EIF_TEST(loc6)) break;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_2_2_0_4_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			RTHOOK(6);
			switch (loc2) {
				case 1L:
				case 2L:
					RTHOOK(7);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(8);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 6L:
				case 7L:
				case 8L:
					RTHOOK(9);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		} else {
			RTHOOK(10);
			switch (loc2) {
				case 2L:
					RTHOOK(11);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(12);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 7L:
					RTHOOK(13);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		}
		RTHOOK(14);
		loc1++;
	}
	RTHOOK(15);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 && loc4) && loc5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.precise_time */
EIF_BOOLEAN F916_7779 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("precise_time", 915, Current, 7, 0, 13639);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F625_4031(RTCW(tr1), loc1));
		loc7 = tr2;
		if ((EIF_BOOLEAN) !EIF_TEST(loc7)) break;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_2_2_0_4_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			RTHOOK(6);
			switch (loc2) {
				case 9L:
				case 10L:
					RTHOOK(7);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 13L:
				case 14L:
					RTHOOK(8);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 15L:
				case 16L:
					RTHOOK(9);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 11L:
				case 12L:
					RTHOOK(10);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		} else {
			RTHOOK(11);
			switch (loc2) {
				case 10L:
					RTHOOK(12);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 14L:
					RTHOOK(13);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 16L:
					RTHOOK(14);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 12L:
					RTHOOK(15);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		}
		RTHOOK(16);
		loc1++;
	}
	RTHOOK(17);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 || loc3) && loc5) && loc6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.days */
EIF_REFERENCE F916_7780 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_CODE_STRING}.months */
EIF_REFERENCE F916_7781 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_CODE_STRING}.right_day_text */
EIF_BOOLEAN F916_7782 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
}


/* {DATE_TIME_CODE_STRING}.parser */
EIF_REFERENCE F916_7783 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("parser", 915, Current, 0, 1, 13618);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(3);
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F1_10(Current, tr1, arg1));
	}
	if (tb1) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(924, 0x01).id, 924, _OBJSIZ_5_1_0_8_0_0_0_2_);
		(nstcall = -1, F925_7868(RTCW(Result), *(EIF_REFERENCE *)(Current)));
		RTHOOK(5);
		(nstcall = 1, F925_7884(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
		RTHOOK(6);
		(nstcall = 1, F925_7885(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_2_)));
		RTHOOK(7);
		(nstcall = 1, F925_7886(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_)));
		RTHOOK(8);
		(nstcall = 1, F925_7883(RTCW(Result), arg1));
		RTHOOK(9);
		(nstcall = 1, F925_7887(RTCW(Result)));
		RTHOOK(10);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("parser_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {DATE_TIME_CODE_STRING}.internal_parser */
EIF_REFERENCE F916_7784 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit1000 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
