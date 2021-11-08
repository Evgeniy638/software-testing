/*
 * Code for class RT_DBG_ATTRIBUTE_RECORD [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt956.h"
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

/* {RT_DBG_ATTRIBUTE_RECORD}.make */
void F614_2453 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REAL_32 arg5)
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
	
	RTEAA("make", 613, Current, 0, 5, 2983);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTHOOK(5);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_NATURAL_32) arg4;
	RTHOOK(6);
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_) = (EIF_REAL_32) arg5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.object */
EIF_REFERENCE F614_2454 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RT_DBG_ATTRIBUTE_RECORD}.value */
EIF_REAL_32 F614_2455 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_);
}


/* {RT_DBG_ATTRIBUTE_RECORD}.rt_type */
EIF_NATURAL_32 F614_2456 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_0_0_0_);
}


/* {RT_DBG_ATTRIBUTE_RECORD}.current_value_record */
EIF_REFERENCE F614_2457 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA("current_value_record", 613, Current, 0, 0, 2987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(tr1);
	Result = (nstcall = 0, F139_2246(Current, ti4_1, tu4_1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.associated_object */
EIF_REFERENCE F614_2458 (EIF_REFERENCE Current)
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
	
	RTEAA("associated_object", 613, Current, 0, 0, 2988);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.is_local_record */
EIF_BOOLEAN F614_2459 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.is_same_as */
EIF_BOOLEAN F614_2460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_same_as", 613, Current, 1, 1, 2990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_attached", EX_PRE);
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
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(dftype, 1),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_2_0_0_1_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) == ti4_1);
	}
	if (tb1) {
		tr4_1 = *(EIF_REAL_32 *)(loc1+ _R32OFF_2_0_0_3_0_);
		Result = (EIF_BOOLEAN) eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_), tr4_1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_type", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2179[Dtype(arg1)-573]);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_) == ti4_1);
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

/* {RT_DBG_ATTRIBUTE_RECORD}.debug_output */
EIF_REFERENCE F614_2461 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 613, Current, 0, 0, 2991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F574_2412(Current));
	tr2 = (nstcall = 1, F905_6712(RTMS_EX_H(" (object=",9,1677333821)));
	tr2 = (nstcall = 1, F910_7103(RTCW(tr1), tr2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1_5(tr1));
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3988[Dtype(RTCW(tr3))-794])(tr3));
	tr1 = (nstcall = 1, F910_7103(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, F905_6712(RTMS_EX_H(")",1,41)));
	tr2 = (nstcall = 1, F910_7103(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr2;
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

/* {RT_DBG_ATTRIBUTE_RECORD}.to_string */
EIF_REFERENCE F614_2462 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
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
	
	RTEAA("to_string", 613, Current, 1, 0, 2992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_);
	RTHOOK(2);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_)) {
		case 1L:
			RTHOOK(3);
			if (EIF_TRUE) {
				RTHOOK(4);
				tr1 = eif_out__p_s1((EIF_REAL_32 *) &(loc1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(5);
				Result = RTMS_EX_H("Void",4,1450142052);
			}
			break;
		case 7L:
			
			RTHOOK(6);
			if (EIF_TRUE) {
				RTHOOK(7);
				tr1 = eif_out__p_s1((EIF_REAL_32 *) &(loc1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(8);
				Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F905_6653(RTCW(Result)));
			}
			break;
		default:
			RTHOOK(9);
			if (EIF_TRUE) {
				RTHOOK(10);
				Result = (nstcall = 0, F614_2467(Current, loc1));
			} else {
				
				RTHOOK(11);
				Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F905_6653(RTCW(Result)));
			}
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {RT_DBG_ATTRIBUTE_RECORD}.get_value */
void F614_2463 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("get_value", 613, Current, 1, 0, 2993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_);
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = RTCCL(tr2);
	tr2 = (nstcall = 0, F139_2241(Current, ti4_1, tu4_1, tr3));
	tr1 = RTCCL(tr2);
	RTOB(*(EIF_REAL_32 *), eif_gen_param(Dftype(Current), 1), tr1, loc1, tb1);
	if (tb1) {
		RTHOOK(2);
		*(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_) = (EIF_REAL_32) loc1;
	} else {
		RTHOOK(3);
		tr4_1 = (nstcall = 0, F614_2468(Current));
		*(EIF_REAL_32 *)(Current+ _R32OFF_2_0_0_3_0_) = (EIF_REAL_32) tr4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.restore */
void F614_2464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	
	RTEAA("restore", 613, Current, 1, 1, 2994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("val_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F614_2460(Current, arg1))) {
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTCCL(tr1);
		(nstcall = 0, F614_2466(Current, tr2, Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.revert */
void F614_2465 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("revert", 613, Current, 0, 1, 2995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("bak_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(tr1);
	(nstcall = 0, F614_2466(Current, tr2, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.set_attribute_from_record */
void F614_2466 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("set_attribute_from_record", 613, Current, 1, 2, 2996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("r_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = arg2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,613,0xFF02,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_);
		tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_0_0_0_);
		tr4_1 = *(EIF_REAL_32 *)(loc1+ _R32OFF_2_0_0_3_0_);
		tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = tr4_1;
		tr2 = RTCCL(arg1);
		(nstcall = 0, F139_2252(Current, ti4_1, tu4_1, tr1, tr2));
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_DBG_ATTRIBUTE_RECORD}.out_value */
EIF_REFERENCE F614_2467 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("out_value", 613, Current, 0, 1, 2997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_attached", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__r4_s1(arg1);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
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

/* {RT_DBG_ATTRIBUTE_RECORD}.default_value */
EIF_REAL_32 F614_2468 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_value", 613, Current, 0, 0, 2998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REAL_32) 0;
}

void EIF_Minit956 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
