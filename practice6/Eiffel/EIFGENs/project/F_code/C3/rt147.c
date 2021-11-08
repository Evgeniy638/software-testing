/*
 * Code for class RT_DBG_CALL_RECORD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt147.h"
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

/* {RT_DBG_CALL_RECORD}.make */
void F557_2348 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make", 556, Current, 0, 5, 2279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("rec_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_) = (EIF_INTEGER_32) arg3;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_INTEGER_32) arg4;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_) = (EIF_INTEGER_32) arg5;
	RTHOOK(7);
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTCCL(arg2);
	tb1 = (nstcall = 0, F139_2238(Current, tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) tb1;
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(11);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,635,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F636_4174(RTCW(tr1), ((EIF_INTEGER_32) 3L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.recorder */
EIF_REFERENCE F557_2349 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RT_DBG_CALL_RECORD}.object */
EIF_REFERENCE F557_2350 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RT_DBG_CALL_RECORD}.dynamic_class_type_id */
EIF_INTEGER_32 F557_2351 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("dynamic_class_type_id", 556, Current, 1, 0, 2282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTCCL(loc1);
		Result = (nstcall = 0, F139_2244(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.class_type_id */
EIF_INTEGER_32 F557_2352 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_);
}


/* {RT_DBG_CALL_RECORD}.feature_rout_id */
EIF_INTEGER_32 F557_2353 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_1_);
}


/* {RT_DBG_CALL_RECORD}.breakable_info */
EIF_REFERENCE F557_2354 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {RT_DBG_CALL_RECORD}.depth */
EIF_INTEGER_32 F557_2355 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_);
}


/* {RT_DBG_CALL_RECORD}.parent */
EIF_REFERENCE F557_2356 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {RT_DBG_CALL_RECORD}.steps */
EIF_REFERENCE F557_2357 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {RT_DBG_CALL_RECORD}.call_records */
EIF_REFERENCE F557_2358 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {RT_DBG_CALL_RECORD}.value_records */
EIF_REFERENCE F557_2359 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {RT_DBG_CALL_RECORD}.flat_value_records_has_local */
EIF_BOOLEAN F557_2360 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("flat_value_records_has_local", 556, Current, 2, 0, 2291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_flat", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F632_4188(loc1));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (nstcall = 1, F714_4475(loc2));
			if (tb2) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, F714_4466(loc2));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2183[Dtype(RTCW(tr1))-574])(tr1));
			tb1 = tb3;
			(nstcall = 1, F714_4481(loc2));
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.rt_information_available */
EIF_BOOLEAN F557_2361 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_);
}


/* {RT_DBG_CALL_RECORD}.last_position */
EIF_REFERENCE F557_2362 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {RT_DBG_CALL_RECORD}.same_object_type */
EIF_BOOLEAN F557_2363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("same_object_type", 556, Current, 1, 1, 2294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			tr1 = RTCCL(arg1);
			tb1 = (nstcall = 1, F1_7(loc1, tr1));
			Result = tb1;
		}
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.wipe_out_value_records */
void F557_2364 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("wipe_out_value_records", 556, Current, 2, 0, 2295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F632_4195(RTCW(loc2)));
		loc1 += ti4_1;
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTHOOK(6);
		loc1++;
		RTHOOK(7);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F140_2325(RTCW(tr1), (EIF_INTEGER_32) -loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.set_breakable_info */
void F557_2365 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_breakable_info", 556, Current, 0, 1, 2296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.register_position */
void F557_2366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("register_position", 556, Current, 0, 2, 2297);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_line_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_nested_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	
	eif_put_integer_32_item(RTCW(tr1),1,arg1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	
	eif_put_integer_32_item(RTCW(tr1),2,arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.is_expanded */
EIF_BOOLEAN F557_2367 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_);
}


/* {RT_DBG_CALL_RECORD}.is_flat */
EIF_BOOLEAN F557_2368 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_);
}


/* {RT_DBG_CALL_RECORD}.is_closed */
EIF_BOOLEAN F557_2369 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
}


/* {RT_DBG_CALL_RECORD}.call_records_closed */
EIF_BOOLEAN F557_2370 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("call_records_closed", 556, Current, 2, 0, 2301);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_closed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F632_4188(loc1));
		tr2 = (nstcall = 1, F714_4471(RTCW(tr1)));
		tr1 = (nstcall = 1, F696_4438(RTCW(tr2)));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3243[Dtype(loc2)-661])(loc2));
			if (tb2) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[Dtype(loc2)-661])(loc2));
			tb3 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_8_3_);
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3244[Dtype(loc2)-661])(loc2));
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.parent_has_call_record */
EIF_BOOLEAN F557_2371 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("parent_has_call_record", 556, Current, 1, 1, 2302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F557_2373(loc1, arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.is_last_call_record */
EIF_BOOLEAN F557_2372 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_last_call_record", 556, Current, 1, 1, 2303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F316_2638(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = (nstcall = 1, F632_4183(loc1));
		Result = (EIF_BOOLEAN)(tr1 == arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.has_call_record */
EIF_BOOLEAN F557_2373 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("has_call_record", 556, Current, 1, 1, 2304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F632_4186(loc1, arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.attach_to */
void F557_2374 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("attach_to", 556, Current, 2, 1, 2305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_in_parent_records", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F557_2371(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	(nstcall = 1, F557_2375(RTCW(arg1), Current));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_7_);
	tr2 = (nstcall = 1, F1_14(tr1));
	(nstcall = 0, F557_2365(Current, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("in_parent_records", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_5_);
			loc2 = tr1;
			{
				static EIF_TYPE_INDEX typarr0[] = {631,0xFF01,556,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTRV(typres0,loc2);
			}
			tb2 = EIF_TEST(loc2);
		}
		if (tb2) {
			tb2 = (nstcall = 1, F632_4186(loc2, Current));
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
}

/* {RT_DBG_CALL_RECORD}.add_call_record */
void F557_2375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("add_call_record", 556, Current, 3, 1, 2306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("record_parented_to_current", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		RTTE((EIF_BOOLEAN)(tr1 == Current), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_ready_to_add_call_record", EX_PRE);
		RTTE((nstcall = 0, F557_2387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(6);
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(7);
		{
			static EIF_TYPE_INDEX typarr0[] = {631,0xFF01,556,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F632_4174(RTCW(loc1), ((EIF_INTEGER_32) 5L)));
		RTHOOK(8);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(9);
	(nstcall = 1, F632_4214(RTCW(loc1), arg1));
	RTHOOK(10);
	(nstcall = 1, F632_4206(RTCW(loc1)));
	RTHOOK(11);
	(nstcall = 1, F632_4204(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(12);
	(nstcall = 0, F557_2399(Current));
	RTHOOK(13);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_8_4_0_2_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("in_records", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb3 = (nstcall = 1, F632_4186(loc3, arg1));
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = (nstcall = 1, F517_3434(loc3));
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
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.remove_parent */
void F557_2376 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_parent", 556, Current, 0, 0, 2307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.add_value_record */
void F557_2377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("add_value_record", 556, Current, 2, 1, 2308);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_ready_to_add_value_record", EX_PRE);
		RTTE((nstcall = 0, F557_2386(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(6);
		{
			static EIF_TYPE_INDEX typarr0[] = {631,0xFF01,573,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F632_4174(RTCW(loc1), ((EIF_INTEGER_32) 5L)));
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = (nstcall = 1, F1_14(tr1));
	(nstcall = 1, F574_2417(RTCW(arg1), tr2));
	RTHOOK(9);
	(nstcall = 1, F632_4214(RTCW(loc1), arg1));
	RTHOOK(10);
	(nstcall = 1, F632_4206(RTCW(loc1)));
	RTHOOK(11);
	(nstcall = 1, F632_4204(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(12);
	(nstcall = 0, F557_2400(Current));
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F140_2325(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("in_records", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb3 = (nstcall = 1, F632_4186(loc2, arg1));
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = (nstcall = 1, F517_3434(loc2));
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

/* {RT_DBG_CALL_RECORD}.record_fields */
void F557_2378 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("record_fields", 556, Current, 3, 0, 2309);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			loc1 = (nstcall = 0, F139_2237(Current, tr1));
		}
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.close_call_records */
void F557_2379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("close_call_records", 556, Current, 3, 0, 2310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_closed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F632_4188(loc2));
		tr2 = (nstcall = 1, F714_4471(RTCW(tr1)));
		tr1 = (nstcall = 1, F696_4438(RTCW(tr2)));
		loc3 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3243[Dtype(loc3)-661])(loc3));
			if (tb1) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[Dtype(loc3)-661])(loc3));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(5);
			tb2 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_8_3_);
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(6);
				(nstcall = 1, F557_2381(RTCW(loc1)));
			}
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3244[Dtype(loc3)-661])(loc3));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("call_records_closed", EX_POST);
		if ((nstcall = 0, F557_2370(Current))) {
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

/* {RT_DBG_CALL_RECORD}.close */
void F557_2380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("close", 556, Current, 0, 0, 2311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_closed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("call_records_closed", EX_PRE);
		RTTE((nstcall = 0, F557_2370(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_4_0_);
	if (tb1) {
		RTHOOK(4);
		(nstcall = 0, F557_2383(Current));
		RTHOOK(5);
		(nstcall = 0, F557_2385(Current));
	}
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_closed", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_)) {
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

/* {RT_DBG_CALL_RECORD}.deep_close */
void F557_2381 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("deep_close", 556, Current, 0, 0, 2312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_closed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F557_2379(Current));
	RTHOOK(3);
	(nstcall = 0, F557_2380(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("call_records_closed", EX_POST);
		if ((nstcall = 0, F557_2370(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_closed", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_)) {
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

/* {RT_DBG_CALL_RECORD}.deep_close_until */
void F557_2382 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("deep_close_until", 556, Current, 1, 1, 2313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("r_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("r_not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_not_closed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F557_2381(Current));
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == NULL) || (EIF_BOOLEAN)(loc1 == arg1))) break;
		RTHOOK(7);
		(nstcall = 1, F557_2381(RTCW(loc1)));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.flatten_value_records */
void F557_2383 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("flatten_value_records", 556, Current, 1, 0, 2314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) == NULL)) {
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {631,0xFF01,573,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F632_4174(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(5);
		(nstcall = 0, F557_2384(Current, loc1));
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_4_1_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(7);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_flat", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("flat_value_records_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_records", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_4_1_);
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == NULL);
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

/* {RT_DBG_CALL_RECORD}.get_value_records_flattened_into */
void F557_2384 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLIU(7);
	
	RTEAA("get_value_records_flattened_into", 556, Current, 5, 1, 2315);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("vals_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("rec_not_flat_if_current", EX_PRE);
		RTTE((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != arg1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
		RTHOOK(5);
		RTCT0("value_records_not_void_if_flat", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		tr1 = (nstcall = 1, F632_4185(RTCW(loc1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		(nstcall = 1, F632_4221(RTCW(arg1), loc1));
		RTHOOK(8);
		(nstcall = 1, F632_4210(RTCW(loc1), loc3));
		RTHOOK(9);
		ti4_1 = (nstcall = 1, F632_4195(RTCW(loc1)));
		loc4 = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc1 == arg1)) {
				RTHOOK(12);
				(nstcall = 1, F632_4205(RTCW(arg1)));
				for (;;) {
					RTHOOK(13);
					tb1 = (nstcall = 1, F517_3434(RTCW(arg1)));
					if (tb1) break;
					RTHOOK(14);
					tr1 = (nstcall = 1, F632_4179(RTCW(arg1)));
					loc2 = (EIF_REFERENCE) tr1;
					RTHOOK(15);
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc2 == NULL)) {
						tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2183[Dtype(RTCW(loc2))-574])(loc2));
						tb2 = tb3;
					}
					if (tb2) {
						RTHOOK(16);
						(nstcall = 1, F632_4228(RTCW(arg1)));
						RTHOOK(17);
						loc4--;
					} else {
						RTHOOK(18);
						(nstcall = 1, F632_4207(RTCW(arg1)));
					}
				}
			} else {
				RTHOOK(19);
				tr1 = (nstcall = 1, F632_4185(RTCW(loc1)));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(20);
				(nstcall = 1, F632_4205(RTCW(loc1)));
				for (;;) {
					RTHOOK(21);
					tb2 = (nstcall = 1, F517_3434(RTCW(loc1)));
					if (tb2) break;
					RTHOOK(22);
					tr1 = (nstcall = 1, F632_4179(RTCW(loc1)));
					loc2 = (EIF_REFERENCE) tr1;
					RTHOOK(23);
					tb3 = '\0';
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2183[Dtype(RTCW(loc2))-574])(loc2));
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					if (tb3) {
						RTHOOK(24);
						(nstcall = 1, F632_4215(RTCW(arg1), loc2));
						RTHOOK(25);
						loc4++;
					}
					RTHOOK(26);
					(nstcall = 1, F632_4207(RTCW(loc1)));
				}
				RTHOOK(27);
				(nstcall = 1, F632_4210(RTCW(loc1), loc3));
			}
		}
		RTHOOK(28);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(29);
			tr1 = (nstcall = 1, F632_4185(loc5));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(30);
			(nstcall = 1, F632_4205(loc5));
			for (;;) {
				RTHOOK(31);
				tb3 = (nstcall = 1, F517_3434(loc5));
				if (tb3) break;
				RTHOOK(32);
				tr1 = (nstcall = 1, F395_2708(loc5));
				(nstcall = 1, F557_2384(RTCW(tr1), arg1));
				RTHOOK(33);
				(nstcall = 1, F632_4207(loc5));
			}
			RTHOOK(34);
			(nstcall = 1, F632_4210(loc5, loc3));
		}
	}
	RTHOOK(35);
	if ((EIF_BOOLEAN)(arg1 == *(EIF_REFERENCE *)(Current + _REFACS_6_))) {
		RTHOOK(36);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
		RTHOOK(37);
		loc4--;
	} else {
		RTHOOK(38);
		(nstcall = 0, F557_2364(Current));
	}
	RTHOOK(39);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F140_2325(RTCW(tr1), loc4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(40);
		RTCT("flat_value_records_has_no_local", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F557_2360(Current))) {
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

/* {RT_DBG_CALL_RECORD}.optimize_flat_value_records */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F557_2385 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc7 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	EIF_BOOLEAN  EIF_VOLATILE tb4;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc10);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc11);
	RTLR(7,loc5);
	RTLR(8,loc3);
	RTLR(9,saved_except);
	RTLIU(10);
	RTXSLS;
	
	RTEAA("optimize_flat_value_records", 556, Current, 11, 0, 2316);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_flat", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc10 = tr1;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc9 && EIF_TEST(loc10))) {
		RTHOOK(3);
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F632_4195(loc10));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			(nstcall = -1, F632_4174(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,471,631,0xFF01,573,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 471, _OBJSIZ_1_1_0_2_0_0_0_0_);
			}
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2369[Dtype(RTCW(loc1))-470])(loc1));
			(nstcall = -1, F472_3288(RTCW(tr1), NULL, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			(nstcall = 1, F632_4205(loc10));
			for (;;) {
				RTHOOK(8);
				tb1 = (nstcall = 1, F517_3434(loc10));
				if (tb1) break;
				RTHOOK(9);
				tr1 = (nstcall = 1, F395_2708(loc10));
				loc4 = (EIF_REFERENCE) tr1;
				
				RTHOOK(10);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2182[Dtype(RTCW(loc4))-574])(loc4));
				loc11 = RTCCL(tr1);
				if (EIF_TEST(loc11)) {
					RTHOOK(11);
					if (!RTCEQ(loc5, loc11)) {
						RTHOOK(12);
						loc5 = (EIF_REFERENCE) RTCCL(loc11);
						RTHOOK(13);
						tr1 = RTCCL(loc5);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2398[Dtype(RTCW(loc1))-546])(loc1, tr1));
						RTHOOK(14);
						tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2402[Dtype(RTCW(loc1))-546])(loc1));
						if ((EIF_BOOLEAN) !tb2) {
							RTHOOK(15);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(16);
							tr1 = (nstcall = 1, F472_3293(RTCW(loc2), loc6));
							loc3 = (EIF_REFERENCE) tr1;
						} else {
							RTHOOK(17);
							tr1 = RTCCL(loc5);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2471[Dtype(RTCW(loc1))-546])(loc1, tr1));
							RTHOOK(18);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2404[Dtype(RTCW(loc1))-546])(loc1));
							RTHOOK(19);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(20);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,573,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
							}
							(nstcall = -1, F632_4174(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
							loc3 = (EIF_REFERENCE) tr1;
							RTHOOK(21);
							(nstcall = 1, F472_3314(RTCW(loc2), loc3, loc6));
						}
					}
					RTHOOK(22);
					RTCT0("oi_positive", EX_CHECK);
					if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
						RTCK0;
					} else {
						RTCF0;
					}
					RTHOOK(23);
					RTCT0("o_attached", EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					RTHOOK(24);
					RTCT0("orcds_attached", EX_CHECK);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					RTHOOK(25);
					tb2 = (nstcall = 1, F316_2638(RTCW(loc3)));
					if (tb2) {
						RTHOOK(26);
						(nstcall = 1, F632_4214(RTCW(loc3), loc4));
					} else {
						RTHOOK(27);
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						(nstcall = 1, F632_4206(RTCW(loc3)));
						for (;;) {
							RTHOOK(29);
							tb2 = '\01';
							tb3 = (nstcall = 1, F517_3435(RTCW(loc3)));
							if (!tb3) {
								tb2 = loc7;
							}
							if (tb2) break;
							RTHOOK(30);
							tr1 = (nstcall = 1, F395_2708(RTCW(loc3)));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O2178[Dtype(tr1)-573]);
							ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc4) + O2178[Dtype(loc4)-573]);
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
							RTHOOK(31);
							(nstcall = 1, F632_4208(RTCW(loc3)));
						}
						RTHOOK(32);
						if ((EIF_BOOLEAN) !loc7) {
							RTHOOK(33);
							(nstcall = 1, F632_4214(RTCW(loc3), loc4));
						} else {
							RTHOOK(34);
							loc8++;
						}
					}
				}
				RTHOOK(35);
				(nstcall = 1, F632_4207(loc10));
			}
			RTHOOK(36);
			(nstcall = 1, F632_4233(loc10));
			RTHOOK(37);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[Dtype(RTCW(loc1))-546])(loc1));
			RTHOOK(38);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			loc6 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(39);
				tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(RTCW(loc1))-546])(loc1));
				if (tb3) break;
				RTHOOK(40);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(41);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2401[Dtype(RTCW(loc1))-546])(loc1));
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(42);
				tr1 = (nstcall = 1, F472_3293(RTCW(loc2), loc6));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(43);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(44);
					(nstcall = 1, F632_4205(RTCW(loc3)));
					for (;;) {
						RTHOOK(45);
						tb4 = (nstcall = 1, F517_3434(RTCW(loc3)));
						if (tb4) break;
						RTHOOK(46);
						tr1 = (nstcall = 1, F395_2708(RTCW(loc3)));
						(nstcall = 1, F632_4214(loc10, tr1));
						RTHOOK(47);
						(nstcall = 1, F632_4207(RTCW(loc3)));
					}
				}
				RTHOOK(48);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[Dtype(RTCW(loc1))-546])(loc1));
			}
		}
		RTHOOK(49);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F140_2325(RTCW(tr1), (EIF_INTEGER_32) -loc8));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(50);
	tr1 = (nstcall = 1, F905_6712(RTMS_EX_H("Error: optimize_flat_field_records : rescued\012",45,450970890)));
	(nstcall = 0, F55_1228(Current, tr1));
	RTHOOK(51);
	loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(52);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(53);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_CALL_RECORD}.is_ready_to_add_value_record */
EIF_BOOLEAN F557_2386 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_ready_to_add_value_record", 556, Current, 1, 0, 2317);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F517_3434(loc1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.is_ready_to_add_call_record */
EIF_BOOLEAN F557_2387 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_ready_to_add_call_record", 556, Current, 1, 0, 2318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F517_3434(loc1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.record_count_but */
EIF_INTEGER_32 F557_2388 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,arg1);
	RTLIU(8);
	
	RTEAA("record_count_but", 556, Current, 5, 1, 2319);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(3);
			ti4_1 = (nstcall = 1, F632_4195(loc3));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(5);
			ti4_1 = (nstcall = 1, F632_4195(loc4));
			Result = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F632_4185(loc5));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			(nstcall = 1, F632_4205(loc5));
			for (;;) {
				RTHOOK(9);
				tb1 = (nstcall = 1, F517_3434(loc5));
				if (tb1) break;
				RTHOOK(10);
				tr1 = (nstcall = 1, F395_2708(loc5));
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(11);
				if ((EIF_BOOLEAN)(loc1 != arg1)) {
					RTHOOK(12);
					ti4_1 = (nstcall = 1, F557_2388(RTCW(loc1), NULL));
					Result += ti4_1;
				}
				RTHOOK(13);
				(nstcall = 1, F632_4207(loc5));
			}
			RTHOOK(14);
			(nstcall = 1, F632_4210(loc5, loc2));
		}
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTHOOK(16);
		Result++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.bottom */
EIF_REFERENCE F557_2389 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("bottom", 556, Current, 1, 0, 2320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REFERENCE) Current;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F557_2389(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_attached", EX_POST);
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

/* {RT_DBG_CALL_RECORD}.call_by_id */
EIF_REFERENCE F557_2390 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,Current);
	RTLR(5,loc3);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("call_by_id", 556, Current, 5, 1, 2321);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_id_not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F906_6761(RTCW(arg1), (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F908_6922(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F908_6922(RTCW(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		ti4_1 = (nstcall = 1, F905_6719(RTCW(tr1)));
		loc2 = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F905_6719(RTCW(arg1)));
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(7);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tb2 = (nstcall = 1, F632_4201(loc5, loc2));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = (nstcall = 1, F632_4180(loc5, loc2));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			RTHOOK(10);
			Result = (EIF_REFERENCE) loc3;
		} else {
			RTHOOK(11);
			tr1 = (nstcall = 1, F557_2390(RTCW(loc3), loc4));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.associated_replayable_call */
EIF_REFERENCE F557_2391 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("associated_replayable_call", 556, Current, 1, 0, 2322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) Current;
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F557_2391(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_8_0_);
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
	return Result;
}

/* {RT_DBG_CALL_RECORD}.available_calls_to_bottom */
EIF_INTEGER_32 F557_2392 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("available_calls_to_bottom", 556, Current, 1, 0, 2323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, F557_2392(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(3);
	Result++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.to_string */
EIF_REFERENCE F557_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,loc11);
	RTLR(3,tr1);
	RTLR(4,loc12);
	RTLR(5,loc10);
	RTLR(6,loc9);
	RTLR(7,loc3);
	RTLR(8,loc13);
	RTLR(9,loc2);
	RTLR(10,loc1);
	RTLR(11,loc5);
	RTLR(12,loc6);
	RTLR(13,tr2);
	RTLIU(14);
	
	RTEAA("to_string", 556, Current, 13, 1, 2324);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(Result), ((EIF_INTEGER_32) 5L)));
	RTHOOK(2);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '['));
	RTHOOK(3);
	(nstcall = 1, F908_6878(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_)));
	RTHOOK(4);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(5);
	ti4_1 = (nstcall = 0, F557_2351(Current));
	(nstcall = 1, F908_6878(RTCW(Result), ti4_1));
	RTHOOK(6);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(7);
	(nstcall = 1, F908_6878(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_)));
	RTHOOK(8);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(9);
	(nstcall = 1, F908_6878(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_1_)));
	RTHOOK(10);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		RTHOOK(12);
		ti4_1 = eif_integer_32_item(loc11,1);
		(nstcall = 1, F908_6878(RTCW(Result), ti4_1));
		RTHOOK(13);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
		RTHOOK(14);
		ti4_1 = eif_integer_32_item(loc11,2);
		(nstcall = 1, F908_6878(RTCW(Result), ti4_1));
	} else {
		RTHOOK(15);
		(nstcall = 1, F908_6878(RTCW(Result), ((EIF_INTEGER_32) 0L)));
		RTHOOK(16);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
		RTHOOK(17);
		(nstcall = 1, F908_6878(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	}
	RTHOOK(18);
	tb1 = '\0';
	if ((nstcall = 0, F557_2394(Current))) {
		tr1 = (nstcall = 0, F557_2396(Current));
		loc12 = tr1;
		tb1 = (EIF_TRUE);
	}
	if (tb1) {
		RTHOOK(19);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
		RTHOOK(20);
		ti4_1 = eif_integer_32_item(loc12,1);
		(nstcall = 1, F908_6878(RTCW(Result), ti4_1));
		RTHOOK(21);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '.'));
		RTHOOK(22);
		ti4_1 = eif_integer_32_item(loc12,2);
		(nstcall = 1, F908_6878(RTCW(Result), ti4_1));
	}
	RTHOOK(23);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '\011'));
	RTHOOK(24);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
		RTHOOK(25);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '#'));
	}
	RTHOOK(26);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
		RTHOOK(27);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '\?'));
	}
	RTHOOK(28);
	loc10 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(29);
	loc9 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	RTHOOK(30);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(31);
	loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(32);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(33);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTHOOK(34);
			ti4_1 = (nstcall = 1, F632_4195(RTCW(loc9)));
			loc7 = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(35);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		RTHOOK(36);
		tb1 = '\0';
		ti4_1 = (nstcall = 1, F636_4195(RTCW(loc3)));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tr1 = (nstcall = 1, F636_4185(RTCW(loc3)));
			loc13 = tr1;
			tb1 = (EIF_TRUE);
		}
		if (tb1) {
			RTHOOK(37);
			loc2 = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F905_6653(RTCW(loc2)));
			RTHOOK(38);
			loc1 = (EIF_REFERENCE) loc2;
			RTHOOK(39);
			if ((EIF_BOOLEAN)(loc10 != NULL)) {
				RTHOOK(40);
				tr1 = (nstcall = 1, F632_4185(RTCW(loc10)));
				loc5 = (EIF_REFERENCE) tr1;
				RTHOOK(41);
				(nstcall = 1, F632_4205(RTCW(loc10)));
			}
			RTHOOK(42);
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				RTHOOK(43);
				tr1 = (nstcall = 1, F632_4185(RTCW(loc9)));
				loc6 = (EIF_REFERENCE) tr1;
				RTHOOK(44);
				(nstcall = 1, F632_4205(RTCW(loc9)));
			}
			RTHOOK(45);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(46);
			(nstcall = 1, F636_4205(RTCW(loc3)));
			for (;;) {
				RTHOOK(47);
				tb1 = (nstcall = 1, F521_3434(RTCW(loc3)));
				if (tb1) break;
				RTHOOK(48);
				tb2 = (nstcall = 1, F636_4179(RTCW(loc3)));
				if (tb2) {
					RTHOOK(49);
					loc8++;
				} else {
					RTHOOK(50);
					if ((EIF_BOOLEAN)(loc9 == NULL)) {
					} else {
						RTHOOK(51);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
						if ((EIF_BOOLEAN)(ti4_1 == loc4)) {
							RTHOOK(52);
							(nstcall = 1, F908_6888(RTCW(loc2), (EIF_CHARACTER_8) '!'));
						}
						RTHOOK(53);
						tr1 = (nstcall = 1, F632_4179(RTCW(loc9)));
						tr2 = (nstcall = 1, F557_2393(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
						(nstcall = 1, F908_6877(RTCW(loc2), tr2));
						RTHOOK(54);
						(nstcall = 1, F632_4204(RTCW(loc9), ((EIF_INTEGER_32) 1L)));
					}
					RTHOOK(55);
					loc7++;
				}
				RTHOOK(56);
				(nstcall = 1, F636_4207(RTCW(loc3)));
			}
			RTHOOK(57);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) && (EIF_BOOLEAN)(loc5 != NULL))) {
				RTHOOK(58);
				(nstcall = 1, F632_4210(RTCW(loc10), loc5));
				
			}
			RTHOOK(59);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 != NULL) && (EIF_BOOLEAN)(loc6 != NULL))) {
				RTHOOK(60);
				(nstcall = 1, F632_4210(RTCW(loc9), loc6));
				
			}
			RTHOOK(61);
			(nstcall = 1, F636_4210(RTCW(loc3), loc13));
		}
	}
	RTHOOK(62);
	if ((EIF_BOOLEAN) (loc7 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(63);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '+'));
		RTHOOK(64);
		(nstcall = 1, F908_6878(RTCW(Result), loc7));
		RTHOOK(65);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) '('));
		RTHOOK(66);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(67);
			(nstcall = 1, F908_6877(RTCW(Result), loc1));
		}
		RTHOOK(68);
		(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) ')'));
	}
	RTHOOK(69);
	(nstcall = 1, F908_6888(RTCW(Result), (EIF_CHARACTER_8) ']'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(70);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.is_replaying */
EIF_BOOLEAN F557_2394 (EIF_REFERENCE Current)
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
	
	RTEAA("is_replaying", 556, Current, 0, 0, 2325);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_4_3_);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.replayed_position_is_first */
EIF_BOOLEAN F557_2395 (EIF_REFERENCE Current)
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
	
	RTEAA("replayed_position_is_first", 556, Current, 0, 0, 2326);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE((nstcall = 0, F557_2394(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (nstcall = 1, F491_3370(RTCW(tr1)));
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F521_3435(RTCW(tr1)));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.replayed_position */
EIF_REFERENCE F557_2396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("replayed_position", 556, Current, 5, 0, 2327);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE((nstcall = 0, F557_2394(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(3);
	tb1 = (nstcall = 1, F521_3434(RTCW(loc1)));
	if (tb1) {
		RTHOOK(4);
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	} else {
		RTHOOK(5);
		tb1 = (nstcall = 1, F521_3435(RTCW(loc1)));
		if (tb1) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,859,859,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
			loc2 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			tb1 = (nstcall = 1, F636_4179(RTCW(loc1)));
			if (tb1) {
				
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
				loc3 = tr1;
				if (EIF_TEST(loc3)) {
					RTHOOK(9);
					tr1 = (nstcall = 1, F632_4179(loc3));
					tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
					loc2 = (EIF_REFERENCE) tr2;
				}
			} else {
				
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				loc4 = tr1;
				if (EIF_TEST(loc4)) {
					RTHOOK(11);
					tr1 = (nstcall = 1, F632_4179(loc4));
					tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
					loc2 = (EIF_REFERENCE) tr2;
				}
			}
		}
	}
	RTHOOK(12);
	loc5 = loc2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTRV(typres0,loc5);
	}
	if (EIF_TEST(loc5)) {
		RTHOOK(13);
		Result = (EIF_REFERENCE) loc5;
	} else {
		RTHOOK(14);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,859,859,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.left_step */
EIF_REFERENCE F557_2397 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLIU(10);
	
	RTEAA("left_step", 556, Current, 7, 0, 2328);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE((nstcall = 0, F557_2394(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(3);
	(nstcall = 1, F636_4204(RTCW(loc1), ((EIF_INTEGER_32) -1L)));
	RTHOOK(4);
	tb1 = (nstcall = 1, F521_3435(RTCW(loc1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		tb1 = (nstcall = 1, F636_4179(RTCW(loc1)));
		if (tb1) {
			
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				RTHOOK(7);
				(nstcall = 1, F632_4204(loc2, ((EIF_INTEGER_32) -1L)));
				RTHOOK(8);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					Result = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				(nstcall = -1, F632_4174(RTCW(Result), ((EIF_INTEGER_32) 1L)));
				
				RTHOOK(9);
				tr1 = (nstcall = 1, F632_4179(loc2));
				(nstcall = 1, F632_4214(RTCW(Result), tr1));
			}
		} else {
			
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				RTHOOK(11);
				(nstcall = 1, F632_4204(loc3, ((EIF_INTEGER_32) -1L)));
				
				RTHOOK(12);
				tr1 = (nstcall = 1, F632_4179(loc3));
				Result = (nstcall = 0, F58_1266(Current, tr1, NULL));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("value_records_cursor_valid", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tb2 = (nstcall = 1, F517_3435(loc4));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("call_records_cursor_valid", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			tb2 = (nstcall = 1, F517_3435(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("steps_before_implies_record_first", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb2 = (nstcall = 1, F521_3435(RTCW(tr1)));
		if (tb2) {
			tb2 = '\0';
			tb3 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			loc6 = tr1;
			if (!((EIF_BOOLEAN) !EIF_TEST(loc6))) {
				tb4 = (nstcall = 1, F487_3370(loc6));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				loc7 = tr1;
				if (!((EIF_BOOLEAN) !EIF_TEST(loc7))) {
					tb4 = (nstcall = 1, F487_3370(loc7));
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_CALL_RECORD}.revert_left_step */
void F557_2398 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLIU(7);
	
	RTEAA("revert_left_step", 556, Current, 5, 0, 2329);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE((nstcall = 0, F557_2394(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("steps_not_after", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F521_3434(RTCW(tr1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(4);
	tb1 = (nstcall = 1, F521_3435(RTCW(loc1)));
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F636_4204(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	} else {
		RTHOOK(6);
		tb1 = (nstcall = 1, F521_3434(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			tb1 = (nstcall = 1, F636_4179(RTCW(loc1)));
			if (tb1) {
				
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
				loc2 = tr1;
				if (EIF_TEST(loc2)) {
					
					RTHOOK(9);
					(nstcall = 1, F632_4204(loc2, ((EIF_INTEGER_32) 1L)));
				}
			} else {
				
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				loc3 = tr1;
				if (EIF_TEST(loc3)) {
					
					RTHOOK(11);
					(nstcall = 1, F632_4204(loc3, ((EIF_INTEGER_32) 1L)));
				}
			}
		}
		RTHOOK(12);
		(nstcall = 1, F636_4204(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("steps.after implies (attached call_records as crecs2 implies crecs2.after) and (attached value_records as vrecs2 implies vrecs2.after)", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb2 = (nstcall = 1, F521_3434(RTCW(tr1)));
		if (tb2) {
			tb2 = '\0';
			tb3 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tb4 = (nstcall = 1, F517_3434(loc4));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
				loc5 = tr1;
				if (EIF_TEST(loc5)) {
					tb4 = (nstcall = 1, F517_3434(loc5));
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.register_call_step */
void F557_2399 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("register_call_step", 556, Current, 0, 0, 2330);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F557_2401(Current, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("steps_is_after", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F521_3434(RTCW(tr1)));
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

/* {RT_DBG_CALL_RECORD}.register_value_step */
void F557_2400 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("register_value_step", 556, Current, 0, 0, 2331);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F557_2401(Current, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("steps_is_after", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F521_3434(RTCW(tr1)));
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

/* {RT_DBG_CALL_RECORD}.register_step */
void F557_2401 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("register_step", 556, Current, 1, 1, 2332);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_flat", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(3);
	(nstcall = 1, F636_4214(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 1, F636_4206(RTCW(loc1)));
	RTHOOK(5);
	(nstcall = 1, F636_4204(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("steps_is_after", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F521_3434(RTCW(tr1)));
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

/* {RT_DBG_CALL_RECORD}.debug_display_steps */
void F557_2402 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTEAA("debug_display_steps", 556, Current, 9, 0, 2333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(2);
	loc7 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(3);
	loc8 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	RTHOOK(4);
	tr1 = (nstcall = 1, F636_4185(RTCW(loc1)));
	loc9 = tr1;
	if ((EIF_TRUE)) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(7);
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(8);
		(nstcall = 1, F636_4205(RTCW(loc1)));
		RTHOOK(9);
		tr1 = RTMS_EX_H("steps: ",7,2014881056);
		tr2 = eif_out__i4_s1(loc2);
		tr2 = (nstcall = 1, F908_6894(tr1, tr2));
		tr1 = RTMS_EX_H(" out of ",8,816120864);
		tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
		ti4_1 = (nstcall = 1, F636_4195(RTCW(loc1)));
		tr2 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F908_6894(RTCW(tr1), tr2));
		tr1 = RTMS_EX_H("\012",1,10);
		tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F632_4185(RTCW(loc7)));
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tr1 = RTMS_EX_H("\011values: ",9,1902977312);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_0_);
			tr2 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F908_6894(tr1, tr2));
			tr1 = RTMS_EX_H(" out of ",8,816120864);
			tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
			ti4_1 = (nstcall = 1, F632_4195(RTCW(loc7)));
			tr2 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F908_6894(RTCW(tr1), tr2));
			tr1 = RTMS_EX_H("\012",1,10);
			tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(13);
			(nstcall = 1, F632_4205(RTCW(loc7)));
		} else {
			RTHOOK(14);
			tr1 = RTMS_EX_H("\011values: None \012",15,2070761738);
			(nstcall = 0, F1_27(Current, tr1));
		}
		RTHOOK(15);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTHOOK(16);
			tr1 = (nstcall = 1, F632_4185(RTCW(loc8)));
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(17);
			tr1 = RTMS_EX_H("\011calls: ",8,301919776);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc8)+ _LNGOFF_1_1_0_0_);
			tr2 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F908_6894(tr1, tr2));
			tr1 = RTMS_EX_H(" out of ",8,816120864);
			tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
			ti4_1 = (nstcall = 1, F632_4195(RTCW(loc8)));
			tr2 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F908_6894(RTCW(tr1), tr2));
			tr1 = RTMS_EX_H("\012",1,10);
			tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(18);
			(nstcall = 1, F632_4205(RTCW(loc8)));
		} else {
			RTHOOK(19);
			tr1 = RTMS_EX_H("\011calls: None \012",14,2077930506);
			(nstcall = 0, F1_27(Current, tr1));
		}
		for (;;) {
			RTHOOK(20);
			tb1 = (nstcall = 1, F521_3434(RTCW(loc1)));
			if (tb1) break;
			RTHOOK(21);
			tr1 = RTMS_EX_H("\011",1,9);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			tr2 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F908_6894(tr1, tr2));
			tr1 = RTMS_EX_H("=",1,61);
			tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(22);
			tb2 = (nstcall = 1, F636_4179(RTCW(loc1)));
			if (tb2) {
				RTHOOK(23);
				loc3++;
				RTHOOK(24);
				tr1 = RTMS_EX_H("VALUE#",6,1450238755);
				tr2 = eif_out__i4_s1(loc3);
				tr2 = (nstcall = 1, F908_6894(tr1, tr2));
				tr1 = RTMS_EX_H(": ",2,14880);
				tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
				(nstcall = 0, F1_27(Current, tr1));
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc7 == NULL)) {
					RTHOOK(26);
					tr1 = RTMS_EX_H("None",4,1315925605);
					(nstcall = 0, F1_27(Current, tr1));
				} else {
					RTHOOK(27);
					tr1 = (nstcall = 1, F632_4179(RTCW(loc7)));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2185[Dtype(RTCW(tr1))-574])(tr1));
					(nstcall = 0, F1_27(Current, tr2));
					RTHOOK(28);
					(nstcall = 1, F632_4204(RTCW(loc7), ((EIF_INTEGER_32) 1L)));
				}
			} else {
				RTHOOK(29);
				loc4++;
				RTHOOK(30);
				tr1 = RTMS_EX_H("CALL#",5,1096033827);
				tr2 = eif_out__i4_s1(loc4);
				tr2 = (nstcall = 1, F908_6894(tr1, tr2));
				tr1 = RTMS_EX_H(": ",2,14880);
				tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
				(nstcall = 0, F1_27(Current, tr1));
				RTHOOK(31);
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					RTHOOK(32);
					tr1 = RTMS_EX_H("None",4,1315925605);
					(nstcall = 0, F1_27(Current, tr1));
				} else {
					RTHOOK(33);
					tr1 = (nstcall = 1, F632_4179(RTCW(loc8)));
					tr2 = (nstcall = 1, F557_2393(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
					(nstcall = 0, F1_27(Current, tr2));
					RTHOOK(34);
					(nstcall = 1, F632_4204(RTCW(loc8), ((EIF_INTEGER_32) 1L)));
				}
			}
			RTHOOK(35);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				RTHOOK(36);
				tr1 = RTMS_EX_H(" <- ",4,540814624);
				(nstcall = 0, F1_27(Current, tr1));
			}
			RTHOOK(37);
			tr1 = RTMS_EX_H("\012",1,10);
			(nstcall = 0, F1_27(Current, tr1));
			RTHOOK(38);
			(nstcall = 1, F636_4207(RTCW(loc1)));
		}
		RTHOOK(39);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 != NULL) && (EIF_BOOLEAN)(loc5 != NULL))) {
			RTHOOK(40);
			(nstcall = 1, F632_4210(RTCW(loc7), loc5));
		}
		RTHOOK(41);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 != NULL) && (EIF_BOOLEAN)(loc6 != NULL))) {
			RTHOOK(42);
			(nstcall = 1, F632_4210(RTCW(loc8), loc6));
		}
		RTHOOK(43);
		(nstcall = 1, F636_4210(RTCW(loc1), loc9));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}.debug_output */
EIF_REFERENCE F557_2403 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Result);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,tr3);
	RTLIU(10);
	
	RTEAA("debug_output", 556, Current, 5, 0, 2334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(211,(nstcall = 0, F139_2278), (Current));
	tr2 = (nstcall = 1, F136_2090(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_)));
	tr1 = (nstcall = 1, F905_6712(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		tr1 = (nstcall = 1, F1_5(loc2));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3988[Dtype(RTCW(tr1))-794])(tr1));
		loc3 = tr2;
		tb1 = (EIF_TRUE);
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			RTHOOK(4);
			loc1 = (EIF_REFERENCE) loc3;
		} else {
			RTHOOK(5);
			if (!RTEQ(loc3, loc1)) {
				RTHOOK(6);
				tr1 = (nstcall = 1, F905_6712(RTMS_EX_H(" from ",6,1983602976)));
				tr1 = (nstcall = 1, F912_7147(loc3, tr1));
				tr2 = (nstcall = 1, F912_7147(RTCW(tr1), loc1));
				loc1 = (EIF_REFERENCE) tr2;
			}
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(8);
		tr1 = (nstcall = 1, F905_6712(RTMS_EX_H("_",1,95)));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(9);
	tr1 = RTMS32_EX_H("{\000\000\000",1,123);
	tr2 = (nstcall = 1, F910_7103(tr1, loc1));
	tr1 = (nstcall = 1, F905_6712(RTMS_EX_H("}.",2,32046)));
	tr1 = (nstcall = 1, F910_7103(RTCW(tr2), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_1_);
	tr1 = eif_out__i4_s1(ti4_1);
	tr2 = RTMS_EX_H(" <",2,8252);
	tr2 = (nstcall = 1, F908_6894(RTCW(tr1), tr2));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_2_);
	tr1 = eif_out__i4_s1(ti4_1);
	tr1 = (nstcall = 1, F908_6894(RTCW(tr2), tr1));
	tr2 = RTMS_EX_H(">",1,62);
	tr2 = (nstcall = 1, F908_6894(RTCW(tr1), tr2));
	tr1 = (nstcall = 1, F905_6712(RTCW(tr2)));
	(nstcall = 1, F910_7084(RTCW(Result), tr1));
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(12);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
		RTHOOK(13);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '(';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
		RTHOOK(14);
		ti4_1 = eif_integer_32_item(loc4,1);
		(nstcall = 1, F910_7087(RTCW(Result), ti4_1));
		RTHOOK(15);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
		RTHOOK(16);
		ti4_1 = eif_integer_32_item(loc4,2);
		(nstcall = 1, F910_7087(RTCW(Result), ti4_1));
		RTHOOK(17);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ')';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
		RTHOOK(18);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
	}
	RTHOOK(19);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
		RTHOOK(20);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		(nstcall = 1, F910_7097(RTCW(Result), tw1));
	}
	RTHOOK(21);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc5 = RTCCL(tr1);
	if (EIF_TEST(loc5)) {
		tr1 = RTCCL(loc5);
		tb1 = (EIF_BOOLEAN)((nstcall = 0, F139_2244(Current, tr1)) != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_));
	}
	if (tb1) {
		RTHOOK(22);
		tr1 = RTMS32_EX_H(" \000\000\000-\000\000\000>\000\000\000 \000\000\000E\000\000\000R\000\000\000R\000\000\000O\000\000\000R\000\000\000 \000\000\000D\000\000\000t\000\000\000y\000\000\000p\000\000\000e\000\000\000(\000\000\000o\000\000\000b\000\000\000j\000\000\000)\000\000\000:\000\000\000",21,1415040314);
		tr2 = RTCCL(loc5);
		ti4_1 = (nstcall = 0, F139_2244(Current, tr2));
		tr2 = eif_out__i4_s1(ti4_1);
		tr3 = (nstcall = 1, F905_6712(RTCW(tr2)));
		tr2 = (nstcall = 1, F910_7103(tr1, tr3));
		tr1 = (nstcall = 1, F905_6712(RTMS_EX_H(" /= ",4,539966752)));
		tr1 = (nstcall = 1, F910_7103(RTCW(tr2), tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_0_);
		tr2 = eif_out__i4_s1(ti4_1);
		tr3 = (nstcall = 1, F905_6712(RTCW(tr2)));
		tr2 = (nstcall = 1, F910_7103(RTCW(tr1), tr3));
		(nstcall = 1, F910_7086(RTCW(Result), tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {RT_DBG_CALL_RECORD}.inline-agent#1 of record_fields */
void F557_7329 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("inline-agent#1 of record_fields", 556, Current, 0, 1, 2335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("r_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS32_EX_H(" \000\000\000-\000\000\000>\000\000\000 \000\000\000",4,539835936);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2178[Dtype(arg1)-573]);
	tr2 = eif_out__i4_s1(ti4_1);
	tr3 = (nstcall = 1, F905_6712(RTCW(tr2)));
	tr2 = (nstcall = 1, F910_7103(tr1, tr3));
	tr1 = (nstcall = 1, F905_6712(RTMS_EX_H(") ",2,10528)));
	tr1 = (nstcall = 1, F910_7103(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2185[Dtype(RTCW(arg1))-574])(arg1));
	tr3 = (nstcall = 1, F905_6712(RTCW(tr2)));
	tr2 = (nstcall = 1, F910_7103(RTCW(tr1), tr3));
	tr1 = (nstcall = 1, F905_6712(RTMS_EX_H("\012",1,10)));
	tr1 = (nstcall = 1, F910_7103(RTCW(tr2), tr1));
	(nstcall = 0, F55_1228(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {RT_DBG_CALL_RECORD}._invariant */
void F557_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTEAINV(l_feature_name, 146, Current, 1, 0);
	RTIT("recorder_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("steps_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("last_position_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_empty_call_records", Current);
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F316_2638(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("value_records_not_void_if_flat", Current);
	if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit147 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
