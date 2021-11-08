/*
 * Code for class ARRAYED_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar492.h"
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

/* {ARRAYED_QUEUE}.make */
void F622_3992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make", 621, Current, 0, 1, 6715);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,558,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2260,Y2260_gen_type,Dftype(Current),163);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNSP2(typres0.id,EO_REF,arg1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("capacity_expected", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F622_3998(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_empty", EX_POST);
		if ((nstcall = 0, F622_4001(Current))) {
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

/* {ARRAYED_QUEUE}.item */
EIF_REFERENCE F622_3993 (EIF_REFERENCE Current)
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
	
	RTEAA("item", 621, Current, 0, 0, 6716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		RTTE((nstcall = 0, F331_2639(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.has */
EIF_BOOLEAN F622_3994 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("has", 621, Current, 3, 1, 6717);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		for (;;) {
			RTHOOK(5);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
				tb1 = RTEQ(arg1, tr2);
			}
			if (tb1) break;
			RTHOOK(6);
			loc1++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc1 == loc3)) {
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(9);
			loc2--;
		}
	} else {
		for (;;) {
			RTHOOK(10);
			tb2 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
				tb2 = RTCEQ(arg1, tr2);
			}
			if (tb2) break;
			RTHOOK(11);
			loc1++;
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == loc3)) {
				RTHOOK(13);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(14);
			loc2--;
		}
	}
	RTHOOK(15);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("not_found_in_empty", EX_POST);
		tb3 = '\01';
		if (Result) {
			tb3 = (EIF_BOOLEAN) !(nstcall = 0, F622_4001(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.new_cursor */
EIF_REFERENCE F622_3995 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 621, Current, 0, 0, 6718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,664,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2260,Y2260_gen_type,Dftype(Current),163);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 664, _OBJSIZ_3_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F665_4385(RTCW(Result), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {ARRAYED_QUEUE}.is_equal */
EIF_BOOLEAN F622_3996 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("is_equal", 621, Current, 5, 1, 6719);
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
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
	}
	if (tb1) {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(11);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc2));
				Result = (EIF_BOOLEAN) RTEQ(tr2, tr3);
				RTHOOK(12);
				loc2++;
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc2 > loc4)) {
					RTHOOK(14);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(15);
				loc1++;
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc1 == loc3)) {
					RTHOOK(17);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(18);
				loc5--;
			}
		} else {
			for (;;) {
				RTHOOK(19);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(20);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc2));
				Result = (EIF_BOOLEAN) RTCEQ(tr2, tr3);
				RTHOOK(21);
				loc2++;
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc2 > loc4)) {
					RTHOOK(23);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(24);
				loc1++;
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc1 == loc3)) {
					RTHOOK(26);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(27);
				loc5--;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
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
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.count */
EIF_INTEGER_32 F622_3997 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {ARRAYED_QUEUE}.capacity */
EIF_INTEGER_32 F622_3998 (EIF_REFERENCE Current)
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
	
	RTEAA("capacity", 621, Current, 0, 0, 6721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {ARRAYED_QUEUE}.occurrences */
EIF_INTEGER_32 F622_3999 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("occurrences", 621, Current, 3, 1, 6722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
			if (RTEQ(tr2, arg1)) {
				RTHOOK(7);
				Result++;
			}
			RTHOOK(8);
			loc1++;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc1 == loc3)) {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(11);
			loc2--;
		}
	} else {
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
			if (RTCEQ(tr2, arg1)) {
				RTHOOK(14);
				Result++;
			}
			RTHOOK(15);
			loc1++;
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc1 == loc3)) {
				RTHOOK(17);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(18);
			loc2--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.index_set */
EIF_REFERENCE F622_4000 (EIF_REFERENCE Current)
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
	
	RTEAA("index_set", 621, Current, 0, 0, 6723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(470, 0x01).id, 470, _OBJSIZ_0_1_0_2_0_0_0_0_);
	(nstcall = -1, F471_3239(RTCW(Result), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_definition", EX_POST);
		ti4_1 = (nstcall = 1, F471_3251(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
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

/* {ARRAYED_QUEUE}.is_empty */
EIF_BOOLEAN F622_4001 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_empty", 621, Current, 0, 0, 6724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.off */
EIF_BOOLEAN F622_4002 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 621, Current, 0, 0, 6725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.extendible */
EIF_BOOLEAN F622_4003 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 621, Current, 0, 0, 6726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.prunable */
EIF_BOOLEAN F622_4004 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 621, Current, 0, 0, 6727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.extend */
void F622_4005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("extend", 621, Current, 2, 1, 6728);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F622_4003(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F622_3998(Current));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 >= loc1)) {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F365_2657(Current));
		(nstcall = 0, F622_4020(Current, (EIF_INTEGER_32) (loc1 + ti4_1)));
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F622_4019(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2671[Dtype(RTCW(tr1))-558])(tr1, tr2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F202_2570(Current, tr1))) {
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

/* {ARRAYED_QUEUE}.put */
void F622_4006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("put", 621, Current, 2, 1, 6729);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F622_4003(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F622_3998(Current));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 >= loc1)) {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F365_2657(Current));
		(nstcall = 0, F622_4020(Current, (EIF_INTEGER_32) (loc1 + ti4_1)));
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F622_4019(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2671[Dtype(RTCW(tr1))-558])(tr1, tr2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F202_2570(Current, tr1))) {
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

/* {ARRAYED_QUEUE}.force */
void F622_4007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("force", 621, Current, 2, 1, 6730);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F622_4003(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F622_3998(Current));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 >= loc1)) {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F365_2657(Current));
		(nstcall = 0, F622_4020(Current, (EIF_INTEGER_32) (loc1 + ti4_1)));
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F622_4019(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2671[Dtype(RTCW(tr1))-558])(tr1, tr2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F202_2570(Current, tr1))) {
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

/* {ARRAYED_QUEUE}.replace */
void F622_4008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("replace", 621, Current, 0, 1, 6731);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F331_2640(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, F269_2627(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2670[Dtype(RTCW(tr1))-558])(tr1, tr2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("item_replaced", EX_POST);
		if (RTCEQ((nstcall = 0, F622_3993(Current)), arg1)) {
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

/* {ARRAYED_QUEUE}.copy */
void F622_4009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("copy", 621, Current, 0, 1, 6732);
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
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F1_14(tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {ARRAYED_QUEUE}.remove */
void F622_4010 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("remove", 621, Current, 1, 0, 6733);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F622_4004(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F331_2640(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(3);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F331_2640(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	RTHOOK(5);
	ti4_1 = (nstcall = 0, F622_3998(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ti4_1) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))--;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		(nstcall = 0, F622_4013(Current));
	} else {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F622_4023(Current));
		tr3 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2670[Dtype(RTCW(tr1))-558])(tr1, tr3, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {ARRAYED_QUEUE}.prune */
void F622_4011 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 621, Current, 0, 1, 6734);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F622_4004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ARRAYED_QUEUE}.prune_all */
void F622_4012 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("prune_all", 621, Current, 0, 1, 6735);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F622_4004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("no_more_occurrences", EX_POST);
		tr1 = RTCCL(arg1);
		if ((EIF_BOOLEAN) !(nstcall = 0, F622_3994(Current, tr1))) {
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

/* {ARRAYED_QUEUE}.wipe_out */
void F622_4013 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 621, Current, 0, 0, 6736);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F622_4004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2690[Dtype(RTCW(tr1))-558])(tr1));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F622_4001(Current))) {
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

/* {ARRAYED_QUEUE}.trim */
void F622_4014 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("trim", 621, Current, 4, 0, 6737);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, F622_4015(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(2);
	loc4 = (nstcall = 0, F622_3998(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc3 < loc4)) {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		loc2 = (nstcall = 0, F622_4019(Current));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			RTHOOK(7);
			tr3 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2678[Dtype(RTCW(tr3))-558])(tr3, loc1, ((EIF_INTEGER_32) 0L), loc3));
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(10);
				tr3 = *(EIF_REFERENCE *)(Current);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2678[Dtype(RTCW(tr3))-558])(tr3, loc1, loc2, (EIF_INTEGER_32) (loc4 - loc1)));
				RTHOOK(11);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			}
		}
		RTHOOK(12);
		tr3 = *(EIF_REFERENCE *)(Current);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2687[Dtype(RTCW(tr3))-558])(tr3, loc3));
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr4;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("minimal_capacity", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F622_3998(Current)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("same_items", EX_POST);
		tr3 = (nstcall = 0, F622_4015(Current));
		RTCO(tr2);
		if (RTEQ(tr3, tr1)) {
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

/* {ARRAYED_QUEUE}.linear_representation */
EIF_REFERENCE F622_4015 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("linear_representation", 621, Current, 3, 0, 6738);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2260,Y2260_gen_type,Dftype(Current),163);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3178[Dtype(RTCW(Result))-631])(Result, loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, loc1));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[Dtype(RTCW(Result))-470])(Result, tr1));
		RTHOOK(7);
		loc1++;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 == loc3)) {
			RTHOOK(9);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(10);
		loc2--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.correct_mismatch */
void F622_4016 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 621, Current, 4, 0, 6739);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = RTOUCR(3,(nstcall = 0, F621_3959), (Current));
	tr2 = RTMS_EX_H("count",5,1870727284);
	tb5 = (nstcall = 1, F624_4033(RTCW(tr1), tr2));
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = RTOUCR(3,(nstcall = 0, F621_3959), (Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr2 = (nstcall = 1, F624_4031(RTCW(tr1), tr2));
		loc1 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,558,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2260,Y2260_gen_type,dftype,163);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc1 = RTRV(typres0,loc1);
		}
		tb4 = EIF_TEST(loc1);
	}
	if (tb4) {
		tr2 = RTOUCR(3,(nstcall = 0, F621_3959), (Current));
		tr3 = RTMS_EX_H("in_index",8,1594187128);
		tr3 = (nstcall = 1, F624_4031(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(859, 0x00), tr1, loc2, tb4);
		tb3 = tb4;
	}
	if (tb3) {
		tr2 = RTOUCR(3,(nstcall = 0, F621_3959), (Current));
		tr3 = RTMS_EX_H("out_index",9,426498168);
		tr3 = (nstcall = 1, F624_4031(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(859, 0x00), tr1, loc3, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		tr2 = RTOUCR(3,(nstcall = 0, F621_3959), (Current));
		tr3 = RTMS_EX_H("object_comparison",17,2049833582);
		tr3 = (nstcall = 1, F624_4031(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_BOOLEAN *), eif_new_type(844, 0x00), tr1, loc4, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc3;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(loc1)-558])(loc1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(loc1)-558])(loc1));
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(loc1)-558])(loc1));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc3) + ti4_1) % ti4_2);
		}
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) loc4;
	} else {
		RTHOOK(8);
		(nstcall = 0, F621_3958(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ARRAYED_QUEUE}.area */
EIF_REFERENCE F622_4017 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ARRAYED_QUEUE}.out_index */
EIF_INTEGER_32 F622_4018 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAYED_QUEUE}.in_index */
EIF_INTEGER_32 F622_4019 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("in_index", 621, Current, 1, 0, 6742);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F622_3998(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) + ti4_1) % loc1) + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(4);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.grow */
void F622_4020 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("grow", 621, Current, 3, 1, 6743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, F365_2658(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2176[Dtype(RTCW(tr1))-558])(tr1));
	ti4_2 = eif_max_int32 (ti4_1,arg1);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) ((nstcall = 0, F622_4019(Current)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2687[Dtype(RTCW(tr1))-558])(tr1, loc2));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2175[Dtype(RTCW(tr1))-558])(tr1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F622_4023(Current));
		tr3 = RTCCL(tr2);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2688[Dtype(RTCW(tr1))-558])(tr1, tr3, loc2));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
		RTHOOK(7);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc3) + ((EIF_INTEGER_32) 1L));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2678[Dtype(RTCW(tr1))-558])(tr1, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc2 - loc3), loc3));
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc3) + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F622_3998(Current)) >= arg1)) {
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

/* {ARRAYED_QUEUE}.upper */
EIF_INTEGER_32 F622_4022 (EIF_REFERENCE Current)
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
	
	RTEAA("upper", 621, Current, 0, 0, 6745);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2175[Dtype(RTCW(tr1))-558])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_QUEUE}.newest_item */
EIF_REFERENCE F622_4023 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("newest_item", 621, Current, 1, 0, 6746);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F622_4019(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2656[Dtype(RTCW(tr2))-470])(tr2));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, ti4_1));
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2654[Dtype(RTCW(tr1))-470])(tr1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit492 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
