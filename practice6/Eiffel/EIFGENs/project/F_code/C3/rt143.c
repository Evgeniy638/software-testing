/*
 * Code for class RT_DBG_EXECUTION_RECORDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt143.h"
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

/* {RT_DBG_EXECUTION_RECORDER}.make */
void F140_2279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("make", 139, Current, 0, 1, 2211);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F140_2280(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.update_parameters */
void F140_2280 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("update_parameters", 139, Current, 0, 1, 2212);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_3_0_0_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca1, 0+ _LNGOFF_0_3_0_0_, &(ti4_1));
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_0_0_, &(tb1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_1_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_0_1_, &(tb1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) tb1;
	RTHOOK(5);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_2_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_0_2_, &(tb1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.start_recording */
void F140_2281 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
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
	
	RTEAA("start_recording", 139, Current, 1, 5, 2213);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("top_callstack_record_is_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("bottom_callstack_record_is_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(6);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	
	RTHOOK(7);
	loc1 = RTLNSMART(eif_new_type(556, 0).id);
	tr1 = RTCCL(arg1);
	(nstcall = -1, F557_2348(RTCW(loc1), Current, tr1, arg2, arg3, arg4));
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg5;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	(nstcall = 1, F557_2365(RTCW(loc1), tr1));
	RTHOOK(9);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(10);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("bottom_callstack_record_is_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("top_callstack_record_is_bottom", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == *(EIF_REFERENCE *)(Current + _REFACS_1_))) {
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

/* {RT_DBG_EXECUTION_RECORDER}.clear_recording_data */
void F140_2282 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("clear_recording_data", 139, Current, 0, 0, 2214);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.stop_recording */
void F140_2283 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("stop_recording", 139, Current, 1, 0, 2215);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F140_2282(Current));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 1, F547_3653(loc1));
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("no_callstack_record", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL))) {
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

/* {RT_DBG_EXECUTION_RECORDER}.record_count */
EIF_INTEGER_32 F140_2284 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_);
}


/* {RT_DBG_EXECUTION_RECORDER}.maximum_record_count */
EIF_INTEGER_32 F140_2285 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_1_);
}


/* {RT_DBG_EXECUTION_RECORDER}.flatten_when_closing */
EIF_BOOLEAN F140_2286 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_);
}


/* {RT_DBG_EXECUTION_RECORDER}.keep_calls_records */
EIF_BOOLEAN F140_2287 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
}


/* {RT_DBG_EXECUTION_RECORDER}.recording_values */
EIF_BOOLEAN F140_2288 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {RT_DBG_EXECUTION_RECORDER}.top_callstack_record */
EIF_REFERENCE F140_2289 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RT_DBG_EXECUTION_RECORDER}.bottom_callstack_record */
EIF_REFERENCE F140_2290 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RT_DBG_EXECUTION_RECORDER}.callstack_record */
EIF_REFERENCE F140_2291 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("callstack_record", 139, Current, 1, 1, 2223);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) arg1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == NULL) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L)))) break;
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(6);
			loc1++;
		}
	} else {
		for (;;) {
			RTHOOK(7);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(Result == NULL)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_8_4_0_2_);
				tb1 = (EIF_BOOLEAN)(ti4_1 == arg1);
			}
			if (tb1) break;
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(9);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_8_4_0_2_);
			tb2 = (EIF_BOOLEAN)(ti4_1 != arg1);
		}
		if (tb2) {
			RTHOOK(10);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.callstack_record_by_id */
EIF_REFERENCE F140_2292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("callstack_record_by_id", 139, Current, 4, 1, 2224);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_id_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
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
	loc3 = (nstcall = 0, F140_2291(Current, loc2));
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc4 == NULL)) {
		RTHOOK(9);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
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

/* {RT_DBG_EXECUTION_RECORDER}.enter_feature */
void F140_2297 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("enter_feature", 139, Current, 3, 4, 2229);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("cid_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F140_2313(Current));
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(556, 0x01).id, 556, _OBJSIZ_8_4_0_3_0_0_0_0_);
	tr1 = RTCCL(arg1);
	(nstcall = -1, F557_2348(RTCW(loc1), Current, tr1, arg2, arg3, arg4));
	RTHOOK(6);
	(nstcall = 0, F140_2325(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(8);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_8_4_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_8_4_0_2_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_8_4_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTHOOK(9);
			(nstcall = 1, F557_2374(RTCW(loc1), loc2));
		} else {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_8_4_0_2_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_8_4_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(11);
				(nstcall = 1, F557_2381(loc2));
			}
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_8_4_0_2_);
			tr1 = (nstcall = 0, F140_2291(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				RTHOOK(13);
				(nstcall = 1, F557_2374(RTCW(loc1), loc3));
			} else {
				
			}
		}
	}
	RTHOOK(14);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	
	RTHOOK(15);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.enter_rescue */
void F140_2298 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("enter_rescue", 139, Current, 1, 4, 2230);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_8_4_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg4);
		}
		if (tb1) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(7);
		(nstcall = 0, F140_2283(Current));
		RTHOOK(8);
		tr1 = RTCCL(arg1);
		(nstcall = 0, F140_2281(Current, tr1, arg2, arg3, arg4, ((EIF_INTEGER_32) 0L)));
	} else {
		
		RTHOOK(9);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(10);
		(nstcall = 1, F557_2379(RTCW(loc1)));
		RTHOOK(11);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.leave_feature */
void F140_2299 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("leave_feature", 139, Current, 2, 4, 2231);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	if ((EIF_BOOLEAN) !EIF_TEST(loc2)) {
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 == *(EIF_REFERENCE *)(Current + _REFACS_1_))) {
			
			RTHOOK(5);
			(nstcall = 0, F140_2282(Current));
		} else {
			RTHOOK(6);
			loc1 = (EIF_REFERENCE) loc2;
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_8_4_0_2_);
			if ((EIF_BOOLEAN) (ti4_1 > arg4)) {
				for (;;) {
					RTHOOK(8);
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc1 == NULL)) {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_8_4_0_2_);
						tb1 = (EIF_BOOLEAN)(ti4_1 == arg4);
					}
					if (tb1) break;
					RTHOOK(9);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
					loc1 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(11);
					(nstcall = 1, F557_2382(loc2, loc1));
					RTHOOK(12);
					(nstcall = 1, F557_2379(RTCW(loc1)));
				}
			}
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				
				RTHOOK(14);
				(nstcall = 0, F140_2282(Current));
			} else {
				
				RTHOOK(15);
				(nstcall = 1, F557_2380(RTCW(loc1)));
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.notify_rt_hook */
void F140_2300 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("notify_rt_hook", 139, Current, 1, 3, 2232);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_8_4_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTHOOK(4);
			(nstcall = 1, F557_2366(loc1, arg2, arg3));
		} else {
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.notify_rt_assign_attribute */
void F140_2301 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("notify_rt_assign_attribute", 139, Current, 2, 5, 2233);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("top_call_stack_record_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_xpm_value", EX_PRE);
		RTTE((nstcall = 0, F140_2303(Current, arg5)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		
		RTHOOK(6);
		tr1 = RTCCL(arg2);
		tr1 = (nstcall = 0, F139_2246(Current, arg3, arg4, tr1));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTHOOK(7);
			(nstcall = 1, F557_2377(loc1, loc2));
		}
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.notify_rt_assign_local */
void F140_2302 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("notify_rt_assign_local", 139, Current, 2, 4, 2234);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_replaying", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("top_call_stack_record_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_xpm_value", EX_PRE);
		RTTE((nstcall = 0, F140_2303(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		
		RTHOOK(5);
		tr1 = (nstcall = 0, F139_2247(Current, arg1, arg2, arg3));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTHOOK(6);
			(nstcall = 1, F557_2377(loc1, loc2));
		}
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.valid_xpm_value */
EIF_BOOLEAN F140_2303 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_xpm_value", 139, Current, 3, 1, 2235);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F140_2304(Current, arg1));
	RTHOOK(2);
	loc2 = (nstcall = 0, F140_2305(Current, arg1));
	RTHOOK(3);
	loc3 = (nstcall = 0, F140_2306(Current, arg1));
	RTHOOK(4);
	ti4_1 = (EIF_INTEGER_32) loc1;
	ti4_2 = (EIF_INTEGER_32) loc2;
	ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 1L));
	ti4_2 = (EIF_INTEGER_32) loc3;
	ti4_4 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 2L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_3) + ti4_4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.xpm_to_is_expanded */
EIF_BOOLEAN F140_2304 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("xpm_to_is_expanded", 139, Current, 0, 1, 2236);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	tb1 = (nstcall = 1, F858_6318(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.xpm_to_is_precompiled */
EIF_BOOLEAN F140_2305 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("xpm_to_is_precompiled", 139, Current, 0, 1, 2237);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 2L));
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_2;
	tb1 = (nstcall = 1, F858_6318(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.xpm_to_is_melted */
EIF_BOOLEAN F140_2306 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("xpm_to_is_melted", 139, Current, 0, 1, 2238);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 4L));
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 2L));
	tr1 = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_2;
	tb1 = (nstcall = 1, F858_6318(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.activate_replay */
void F140_2307 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("activate_replay", 139, Current, 0, 1, 2239);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_)) {
		} else {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
			RTHOOK(4);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_)) {
			RTHOOK(6);
			(nstcall = 0, F140_2324(Current));
			
			RTHOOK(7);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("b_set", EX_POST);
		if ((EIF_BOOLEAN) (arg1 && *(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_))) {
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

/* {RT_DBG_EXECUTION_RECORDER}.replay */
void F140_2308 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("replay", 139, Current, 0, 2, 2240);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			(nstcall = 0, F140_2319(Current));
			break;
		case 2L:
			RTHOOK(3);
			(nstcall = 0, F140_2322(Current));
			break;
		case 3L:
			RTHOOK(4);
			(nstcall = 0, F140_2320(Current));
			break;
		case 4L:
			RTHOOK(5);
			(nstcall = 0, F140_2323(Current));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_to_point */
EIF_BOOLEAN F140_2309 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTEAA("replay_to_point", 139, Current, 5, 1, 2241);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_id_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = (nstcall = 0, F140_2292(Current, arg1));
		loc4 = tr1;
		tb2 = EIF_TEST(loc4);
	}
	if (tb2) {
		tr1 = (nstcall = 1, F557_2391(loc4));
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_8_4_0_2_);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_8_4_0_2_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			for (;;) {
				RTHOOK(6);
				if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
				RTHOOK(7);
				(nstcall = 0, F140_2322(Current));
				RTHOOK(8);
				loc1++;
				
			}
			
		} else {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				for (;;) {
					RTHOOK(10);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) break;
					RTHOOK(11);
					(nstcall = 0, F140_2319(Current));
					RTHOOK(12);
					loc1--;
					
				}
				
			}
		}
		RTHOOK(13);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_query */
EIF_INTEGER_32 F140_2310 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
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
	
	RTEAA("replay_query", 139, Current, 2, 1, 2242);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			loc1 = tr1;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL) && EIF_TEST(loc1))) {
				RTHOOK(3);
				ti4_1 = (nstcall = 1, F557_2392(loc1));
				Result = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case 2L:
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				RTHOOK(5);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_2_3_0_0_);
				Result = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case 3L:
			break;
		case 4L:
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.replayed_call_details */
EIF_REFERENCE F140_2311 (EIF_REFERENCE Current)
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
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("replayed_call_details", 139, Current, 1, 0, 2243);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F557_2393(loc1, ((EIF_INTEGER_32) 0L)));
		Result = (EIF_REFERENCE) tr1;
	} else {
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.callstack_record_details */
EIF_REFERENCE F140_2312 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("callstack_record_details", 139, Current, 1, 2, 2244);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_id_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F140_2292(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F557_2393(loc1, arg2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.monitor_record_count */
void F140_2313 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("monitor_record_count", 139, Current, 5, 0, 2245);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_);
		RTHOOK(4);
		tr8_1 = (EIF_REAL_64) (loc3);
		tr8_2 = (EIF_REAL_64) (loc4);
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) 1.1 * tr8_2))) {
			RTHOOK(5);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(6);
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != loc1)) {
				RTHOOK(7);
				loc2 = *(EIF_REFERENCE *)(Current);
				for (;;) {
					RTHOOK(8);
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc2 == NULL)) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
						tb1 = (EIF_BOOLEAN)(tr1 == loc1);
					}
					if (tb1) break;
					RTHOOK(9);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
					loc2 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(10);
				RTCT0("p_not_void_and_last_of_parent", EX_CHECK);
				tb2 = '\0';
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
					tb3 = (nstcall = 1, F557_2372(RTCW(loc1), loc2));
					tb2 = tb3;
				}
				if (tb2) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTHOOK(11);
				ti4_1 = (nstcall = 1, F557_2388(RTCW(loc1), loc2));
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(12);
				(nstcall = 1, F557_2376(RTCW(loc2)));
				RTHOOK(13);
				RTAR(Current, loc2);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc2;
				RTHOOK(14);
				loc1 = (EIF_REFERENCE) loc2;
				RTHOOK(15);
				loc3 -= loc5;
				RTHOOK(16);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_) = (EIF_INTEGER_32) loc3;
				
				RTHOOK(17);
				tr8_1 = (EIF_REAL_64) (loc3);
				tr8_2 = (EIF_REAL_64) (loc4);
				if ((EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) 0.9 * tr8_2))) {
					RTHOOK(18);
					(nstcall = 0, F140_2313(Current));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.is_replaying */
EIF_BOOLEAN F140_2314 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_);
}


/* {RT_DBG_EXECUTION_RECORDER}.last_replay_operation_failed */
EIF_BOOLEAN F140_2315 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_);
}


/* {RT_DBG_EXECUTION_RECORDER}.replayed_call */
EIF_REFERENCE F140_2316 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {RT_DBG_EXECUTION_RECORDER}.replay_stack_not_empty */
EIF_BOOLEAN F140_2317 (EIF_REFERENCE Current)
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
	
	RTEAA("replay_stack_not_empty", 139, Current, 1, 0, 2249);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F316_2638(loc1));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_stack */
EIF_REFERENCE F140_2318 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {RT_DBG_EXECUTION_RECORDER}.replay_back */
void F140_2319 (EIF_REFERENCE Current)
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
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLIU(12);
	
	RTEAA("replay_back", 139, Current, 9, 0, 2251);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replayed_call_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(loc5 + _REFACS_3_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			loc7 = tr1;
			if (EIF_TEST(loc7)) {
				RTHOOK(7);
				loc1 = (EIF_REFERENCE) loc7;
				
				RTHOOK(8);
				tr1 = (nstcall = 1, F547_3621(RTCW(loc1)));
				tr2 = eif_boxed_item(tr1,1);
				loc2 = (EIF_REFERENCE) tr2;
			} else {
				RTHOOK(9);
				{
					static EIF_TYPE_INDEX typarr0[] = {546,0xFF01,0xFFF9,2,826,0xFF01,556,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc1 = RTLNSMART(typres0.id);
				}
				(nstcall = -1, F547_3617(RTCW(loc1)));
				RTHOOK(10);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
				RTHOOK(11);
				loc2 = (EIF_REFERENCE) NULL;
			}
			RTHOOK(12);
			loc3 = (nstcall = 0, F58_1266(Current, loc5, loc2));
			RTHOOK(13);
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_)) {
				RTHOOK(14);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc4 = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				ti4_1 = (nstcall = 1, F632_4195(RTCW(loc3)));
				(nstcall = -1, F632_4174(RTCW(loc4), ti4_1));
				RTHOOK(15);
				(nstcall = 1, F632_4206(RTCW(loc3)));
				for (;;) {
					RTHOOK(16);
					tb1 = (nstcall = 1, F517_3435(RTCW(loc3)));
					if (tb1) break;
					RTHOOK(17);
					tr1 = (nstcall = 1, F395_2708(RTCW(loc3)));
					loc8 = tr1;
					if ((EIF_TRUE)) {
						RTHOOK(18);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2181[Dtype(loc8)-574])(loc8));
						loc9 = tr1;
						if (EIF_TEST(loc9)) {
							RTHOOK(19);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNTS(typres0.id, 3, 0);
							}
							((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
							RTAR(tr1,loc8);
							((EIF_TYPED_VALUE *)tr1+2)->it_r = loc9;
							RTAR(tr1,loc9);
							(nstcall = 1, F632_4215(RTCW(loc4), tr1));
							RTHOOK(20);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2188[Dtype(loc8)-574])(loc8, loc9));
						} else {
							
						}
					}
					RTHOOK(21);
					(nstcall = 1, F632_4208(RTCW(loc3)));
				}
				RTHOOK(22);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,0xFF01,556,0xFF01,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 0);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_r = loc5;
				RTAR(tr1,loc5);
				((EIF_TYPED_VALUE *)tr1+2)->it_r = loc4;
				RTAR(tr1,loc4);
				(nstcall = 1, F547_3644(RTCW(loc1), tr1));
				RTHOOK(23);
				RTAR(Current, loc6);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc6;
			}
		} else {
			RTHOOK(24);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(25);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("replayed_call_attached", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_left */
void F140_2320 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,loc5);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc9);
	RTLR(8,loc10);
	RTLR(9,loc1);
	RTLIU(10);
	
	RTEAA("replay_left", 139, Current, 10, 0, 2252);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replayed_call_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F557_2396(loc6));
		ti4_1 = eif_integer_32_item(RTCW(tr1),1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			RTHOOK(6);
			loc5 = (EIF_REFERENCE) loc7;
		} else {
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {546,0xFF01,0xFFF9,2,826,0xFF01,556,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = RTLNSMART(typres0.id);
			}
			(nstcall = -1, F547_3617(RTCW(loc5)));
			RTHOOK(8);
			RTAR(Current, loc5);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc5;
		}
		for (;;) {
			RTHOOK(9);
			if (loc4) break;
			RTHOOK(10);
			tr1 = (nstcall = 1, F557_2397(loc6));
			loc8 = tr1;
			if (EIF_TEST(loc8)) {
				RTHOOK(11);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(12);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc2 = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				ti4_1 = (nstcall = 1, F632_4195(loc8));
				(nstcall = -1, F632_4174(RTCW(loc2), ti4_1));
				RTHOOK(13);
				(nstcall = 1, F632_4206(loc8));
				for (;;) {
					RTHOOK(14);
					tb1 = (nstcall = 1, F517_3435(loc8));
					if (tb1) break;
					RTHOOK(15);
					tr1 = (nstcall = 1, F395_2708(loc8));
					loc9 = tr1;
					if ((EIF_TRUE)) {
						RTHOOK(16);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2181[Dtype(loc9)-574])(loc9));
						loc10 = tr1;
						if (EIF_TEST(loc10)) {
							RTHOOK(17);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNTS(typres0.id, 3, 0);
							}
							((EIF_TYPED_VALUE *)tr1+1)->it_r = loc9;
							RTAR(tr1,loc9);
							((EIF_TYPED_VALUE *)tr1+2)->it_r = loc10;
							RTAR(tr1,loc10);
							(nstcall = 1, F632_4215(RTCW(loc2), tr1));
							RTHOOK(18);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2188[Dtype(loc9)-574])(loc9, loc10));
						} else {
							
						}
					}
					RTHOOK(19);
					(nstcall = 1, F632_4208(loc8));
				}
				RTHOOK(20);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,826,0xFF01,556,0xFF01,631,0xFF01,0xFFF9,2,826,0xFF01,573,0xFF01,573,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 0);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_r = loc6;
				RTAR(tr1,loc6);
				((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
				RTAR(tr1,loc2);
				(nstcall = 1, F547_3644(RTCW(loc5), tr1));
			} else {
				RTHOOK(21);
				tr1 = *(EIF_REFERENCE *)(loc6 + _REFACS_3_);
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					RTHOOK(22);
					(nstcall = 1, F557_2398(loc6));
				} else {
					RTHOOK(23);
					(nstcall = 0, F140_2319(Current));
				}
				RTHOOK(24);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(25);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			
			RTHOOK(26);
			if ((EIF_BOOLEAN) !loc4) {
				RTHOOK(27);
				loc4 = '\01';
				if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != loc6) || (EIF_BOOLEAN)(loc1 == NULL))) {
					tr1 = (nstcall = 1, F557_2396(RTCW(loc1)));
					ti4_1 = eif_integer_32_item(RTCW(tr1),1);
					loc4 = (EIF_BOOLEAN)(ti4_1 != loc3);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("replayed_call_attached", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_left_to_first */
void F140_2321 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTEAA("replay_left_to_first", 139, Current, 2, 0, 2253);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tb3 = (nstcall = 1, F557_2395(RTCW(loc1)));
			tb2 = tb3;
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc2 == loc1);
		}
		if (tb1) break;
		RTHOOK(3);
		loc2 = (EIF_REFERENCE) loc1;
		RTHOOK(4);
		(nstcall = 0, F140_2320(Current));
		RTHOOK(5);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_forth */
void F140_2322 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTEAA("replay_forth", 139, Current, 7, 0, 2254);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replayed_call_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("replay_stack_not_empty", EX_PRE);
		RTTE((nstcall = 0, F140_2317(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(5);
		RTCT0("attached replayed_call as r", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTCK0;
		} else {
			RTCF0;
		}
		for (;;) {
			RTHOOK(6);
			if (loc3) break;
			
			RTHOOK(7);
			(nstcall = 1, F547_3637(loc4));
			RTHOOK(8);
			tr1 = (nstcall = 1, F395_2708(loc4));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			(nstcall = 1, F547_3650(loc4));
			RTHOOK(10);
			tb1 = (nstcall = 1, F316_2638(loc4));
			if (tb1) {
				RTHOOK(11);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
			}
			RTHOOK(12);
			tr1 = eif_boxed_item(loc2,1);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			tr1 = eif_boxed_item(loc2,2);
			loc6 = tr1;
			if (EIF_TEST(loc6)) {
				RTHOOK(14);
				(nstcall = 1, F632_4206(loc6));
				for (;;) {
					RTHOOK(15);
					tb1 = (nstcall = 1, F517_3435(loc6));
					if (tb1) break;
					RTHOOK(16);
					tr1 = (nstcall = 1, F395_2708(loc6));
					loc7 = tr1;
					if ((EIF_TRUE)) {
						RTHOOK(17);
						tr1 = eif_boxed_item(loc7,1);
						tr2 = eif_boxed_item(loc7,2);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2189[Dtype(RTCW(tr1))-574])(tr1, tr2));
					}
					RTHOOK(18);
					(nstcall = 1, F632_4208(loc6));
				}
			}
			RTHOOK(19);
			if ((EIF_BOOLEAN)(loc1 == loc5)) {
				RTHOOK(20);
				(nstcall = 1, F557_2398(loc5));
				RTHOOK(21);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
			} else {
				
				RTHOOK(22);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
				RTHOOK(23);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	} else {
		RTHOOK(24);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("replayed_call_attached", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.replay_right */
void F140_2323 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc2);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLR(7,tr2);
	RTLR(8,loc1);
	RTLIU(9);
	
	RTEAA("replay_right", 139, Current, 8, 0, 2255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replayed_call_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("replay_stack_not_empty", EX_PRE);
		RTTE((nstcall = 0, F140_2317(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTHOOK(5);
		RTCT0("attached replayed_call as r", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		tr1 = (nstcall = 1, F557_2396(loc6));
		ti4_1 = eif_integer_32_item(RTCW(tr1),1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(7);
			if (loc4) break;
			
			RTHOOK(8);
			(nstcall = 1, F547_3637(loc5));
			RTHOOK(9);
			tr1 = (nstcall = 1, F395_2708(loc5));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			(nstcall = 1, F547_3650(loc5));
			RTHOOK(11);
			tb1 = (nstcall = 1, F316_2638(loc5));
			if (tb1) {
				RTHOOK(12);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
			}
			RTHOOK(13);
			tr1 = eif_boxed_item(loc2,2);
			loc7 = tr1;
			if (EIF_TEST(loc7)) {
				RTHOOK(14);
				(nstcall = 1, F632_4206(loc7));
				for (;;) {
					RTHOOK(15);
					tb1 = (nstcall = 1, F517_3435(loc7));
					if (tb1) break;
					RTHOOK(16);
					tr1 = (nstcall = 1, F395_2708(loc7));
					loc8 = tr1;
					if ((EIF_TRUE)) {
						RTHOOK(17);
						tr1 = eif_boxed_item(loc8,1);
						tr2 = eif_boxed_item(loc8,2);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2189[Dtype(RTCW(tr1))-574])(tr1, tr2));
					}
					RTHOOK(18);
					(nstcall = 1, F632_4208(loc7));
				}
			}
			RTHOOK(19);
			tr1 = eif_boxed_item(loc2,1);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(20);
			if ((EIF_BOOLEAN)(loc1 == loc6)) {
				RTHOOK(21);
				(nstcall = 1, F557_2398(RTCW(loc1)));
				RTHOOK(22);
				tr1 = (nstcall = 1, F557_2396(RTCW(loc1)));
				ti4_1 = eif_integer_32_item(RTCW(tr1),1);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != loc3);
			} else {
				
				RTHOOK(23);
				tr1 = (nstcall = 1, F557_2396(RTCW(loc1)));
				ti4_1 = eif_integer_32_item(RTCW(tr1),1);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(24);
					(nstcall = 1, F557_2398(RTCW(loc1)));
				}
				RTHOOK(25);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
				RTHOOK(26);
				(nstcall = 0, F140_2321(Current));
				RTHOOK(27);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
				RTHOOK(28);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	} else {
		RTHOOK(29);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("replayed_call_attached", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.revert_replay_stack */
void F140_2324 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTEAA("revert_replay_stack", 139, Current, 6, 0, 2256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_replaying", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		for (;;) {
			RTHOOK(4);
			tb1 = (nstcall = 1, F316_2638(loc4));
			if (tb1) break;
			RTHOOK(5);
			(nstcall = 1, F547_3637(loc4));
			RTHOOK(6);
			tr1 = (nstcall = 1, F395_2708(loc4));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			(nstcall = 1, F547_3650(loc4));
			RTHOOK(8);
			tr1 = eif_boxed_item(loc3,1);
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = eif_boxed_item(loc3,2);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				RTHOOK(10);
				(nstcall = 1, F632_4206(loc5));
				for (;;) {
					RTHOOK(11);
					tb2 = (nstcall = 1, F517_3435(loc5));
					if (tb2) break;
					RTHOOK(12);
					tr1 = (nstcall = 1, F395_2708(loc5));
					loc6 = tr1;
					if ((EIF_TRUE)) {
						RTHOOK(13);
						tr1 = eif_boxed_item(loc6,1);
						tr2 = eif_boxed_item(loc6,2);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2189[Dtype(RTCW(tr1))-574])(tr1, tr2));
					}
					RTHOOK(14);
					(nstcall = 1, F632_4208(loc5));
				}
			}
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc2 == loc1)) {
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(17);
					(nstcall = 1, F557_2398(RTCW(loc1)));
				}
			} else {
				
				RTHOOK(18);
				RTAR(Current, loc2);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
			}
		}
		
	}
	RTHOOK(19);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_RECORDER}.increment_records_count */
void F140_2325 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("increment_records_count", 139, Current, 0, 1, 2257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("record_count_positive", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_5_0_0_) >= ((EIF_INTEGER_32) 0L))) {
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

/* {RT_DBG_EXECUTION_RECORDER}.is_call_at_depth */
EIF_BOOLEAN F140_2326 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_call_at_depth", 139, Current, 0, 2, 2258);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_8_4_0_2_);
		Result = (EIF_BOOLEAN)(ti4_1 == arg2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit143 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
