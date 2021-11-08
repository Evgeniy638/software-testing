/*
 * Code for class LINKED_LIST_ITERATION_CURSOR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li920.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_ITERATION_CURSOR}.item */
EIF_BOOLEAN F713_4454 (EIF_REFERENCE Current)
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
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("item", 712, Current, 1, 0, 8871);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F713_4455(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		Result = (nstcall = 0, F686_4426(Current));
	} else {
		RTHOOK(4);
		RTCT0("active_attached", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_0_);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.after */
EIF_BOOLEAN F713_4455 (EIF_REFERENCE Current)
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
	
	RTEAA("after", 712, Current, 0, 0, 8872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(2);
		Result = (nstcall = 0, F701_4444(Current));
	} else {
		RTHOOK(3);
		Result = '\01';
		if (!(EIF_BOOLEAN) !(nstcall = 0, F701_4446(Current))) {
			Result = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.start */
void F713_4456 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("start", 712, Current, 0, 0, 8873);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F701_4451(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("cursor_index_set_to_one", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F701_4433(Current)) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("target_index_set_to_first", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_4_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_3_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_first", EX_POST);
		if ((nstcall = 0, F701_4447(Current))) {
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

/* {LINKED_LIST_ITERATION_CURSOR}.forth */
void F713_4457 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("forth", 712, Current, 2, 0, 8874);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F713_4455(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F701_4433(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, F701_4433(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F701_4452(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = tr3;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_)) || (EIF_BOOLEAN) !EIF_TEST(loc2))) break;
			RTHOOK(6);
			tr3 = *(EIF_REFERENCE *)(loc2);
			RTAR(Current, tr3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr3;
			RTHOOK(7);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F701_4433(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, F701_4433(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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

/* {LINKED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F713_4458 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST_ITERATION_CURSOR}.active */
EIF_REFERENCE F713_4459 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit920 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
