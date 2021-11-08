/*
 * Code for class DYNAMIC_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy293.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_LIST}.put_left */
void F532_3572 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("put_left", 531, Current, 1, 1, 6331);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2314[dtype-470])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2456[dtype-546])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
		RTHOOK(4);
		tr3 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2804[dtype-546])(Current, tr3));
	} else {
		RTHOOK(5);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[dtype-546])(Current))) {
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[dtype-546])(Current));
			RTHOOK(7);
			tr3 = RTCCL(arg1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2806[dtype-546])(Current, tr3));
			RTHOOK(8);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2776[dtype-546])(Current, ((EIF_INTEGER_32) 2L)));
		} else {
			RTHOOK(9);
			loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[dtype-546])(Current));
			RTHOOK(10);
			tr3 = RTCCL(arg1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2359[dtype-546])(Current, tr3));
			RTHOOK(11);
			tr3 = RTCCL(loc1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2806[dtype-546])(Current, tr3));
			RTHOOK(12);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[dtype-546])(Current));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_index", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DYNAMIC_LIST}.merge_left */
void F532_3574 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLIU(8);
	
	RTEAA("merge_left", 531, Current, 0, 1, 6332);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2314[dtype-470])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2456[dtype-546])(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[Dtype(RTCW(arg1))-470])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[Dtype(RTCW(arg1))-470])(arg1));
		ti4_4 = ti4_5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[Dtype(RTCW(arg1))-546])(arg1));
	for (;;) {
		RTHOOK(6);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb1) break;
		RTHOOK(7);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[Dtype(RTCW(arg1))-546])(arg1));
		tr6 = RTCCL(tr5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2805[dtype-546])(Current, tr6));
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[Dtype(RTCW(arg1))-546])(arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_index", EX_POST);
		RTCO(tr3);
		RTCO(tr4);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("other_is_empty", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb2) {
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

/* {DYNAMIC_LIST}.merge_right */
void F532_3575 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTEAA("merge_right", 531, Current, 0, 1, 6333);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2314[dtype-470])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[dtype-546])(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[Dtype(RTCW(arg1))-470])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2404[Dtype(RTCW(arg1))-546])(arg1));
	for (;;) {
		RTHOOK(6);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb1) break;
		RTHOOK(7);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[Dtype(RTCW(arg1))-546])(arg1));
		tr5 = RTCCL(tr4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2806[dtype-546])(Current, tr5));
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[Dtype(RTCW(arg1))-546])(arg1));
		RTHOOK(9);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2810[Dtype(RTCW(arg1))-546])(arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_index", EX_POST);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("other_is_empty", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb2) {
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

/* {DYNAMIC_LIST}.wipe_out */
void F532_3579 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 531, Current, 0, 0, 6334);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2851[dtype-546])(Current));
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[dtype-546])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_before", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2456[dtype-546])(Current))) {
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

void EIF_Minit293 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
