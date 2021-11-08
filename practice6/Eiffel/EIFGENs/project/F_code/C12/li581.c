/*
 * Code for class LINKED_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li581.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST}.make */
void F547_3617 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 546, Current, 0, 0, 6434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {LINKED_LIST}.make_from_iterable */
void F547_3618 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("make_from_iterable", 546, Current, 1, 1, 6435);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2861[dtype-546])(Current));
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2259[Dtype(RTCW(arg1))-178])(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3243[Dtype(loc1)-661])(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[Dtype(loc1)-661])(loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[dtype-470])(Current, tr2));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3244[Dtype(loc1)-661])(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.item */
EIF_REFERENCE F547_3619 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("item", 546, Current, 1, 0, 6436);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2356[dtype-546])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2388[dtype-546])(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached active as a", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc1)-126])(loc1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.first */
EIF_REFERENCE F547_3620 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("first", 546, Current, 1, 0, 6437);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("attached first_element as f", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc1)-126])(loc1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.last */
EIF_REFERENCE F547_3621 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("last", 546, Current, 1, 0, 6391);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("attached last_element as l", EX_CHECK);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc1)-126])(loc1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.index */
EIF_INTEGER_32 F547_3622 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("index", 546, Current, 2, 0, 6392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(2);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(5);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(6);
			loc2 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(9);
				Result++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.cursor */
EIF_REFERENCE F547_3623 (EIF_REFERENCE Current)
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
	
	RTEAA("cursor", 546, Current, 0, 0, 6393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,145,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2260,Y2260_gen_type,Dftype(Current),163);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 145, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN, EIF_BOOLEAN)) R2245[Dtype(RTCW(Result))-145])(Result, *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
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

/* {LINKED_LIST}.new_cursor */
EIF_REFERENCE F547_3624 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 546, Current, 0, 0, 6394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,710,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2260,Y2260_gen_type,Dftype(Current),163);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 710, _OBJSIZ_2_1_0_5_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3311[Dtype(RTCW(Result))-695])(Result, Current));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3308[Dtype(RTCW(Result))-695])(Result));
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

/* {LINKED_LIST}.first_element */
EIF_REFERENCE F547_3625 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST}.count */
EIF_INTEGER_32 F547_3626 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
}


/* {LINKED_LIST}.readable */
EIF_BOOLEAN F547_3627 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readable", 546, Current, 0, 0, 6397);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2388[dtype-546])(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.after */
EIF_BOOLEAN F547_3628 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {LINKED_LIST}.before */
EIF_BOOLEAN F547_3629 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {LINKED_LIST}.off */
EIF_BOOLEAN F547_3630 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 546, Current, 0, 0, 6400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result || tb1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.isfirst */
EIF_BOOLEAN F547_3631 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("isfirst", 546, Current, 0, 0, 6401);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) && (EIF_BOOLEAN)(tr1 == tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current));
		}
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

/* {LINKED_LIST}.islast */
EIF_BOOLEAN F547_3632 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("islast", 546, Current, 1, 0, 6402);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_))) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(3);
		Result = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
			Result = (EIF_BOOLEAN)(tr1 == NULL);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current));
		}
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

/* {LINKED_LIST}.valid_cursor */
EIF_BOOLEAN F547_3633 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("valid_cursor", 546, Current, 3, 1, 6403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = arg1;
	loc3 = RTRV(eif_final_id(Y2361,Y2361_gen_type,dftype,283),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(loc3);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		Result = '\01';
		tb1 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_1_0_);
		if (!tb1) {
			tb1 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_1_1_);
			Result = tb1;
		}
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (Result || (EIF_BOOLEAN)(loc1 == NULL))) break;
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == loc2);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
			loc1 = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.full */
EIF_BOOLEAN F547_3634 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {LINKED_LIST}.is_inserted */
EIF_BOOLEAN F547_3635 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_inserted", 546, Current, 1, 1, 6405);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		
		RTHOOK(3);
		Result = '\01';
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(RTCW(loc1))-126])(loc1));
		if (!RTCEQ(arg1, tr1)) {
			Result = RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[dtype-546])(Current)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.start */
void F547_3636 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("start", 546, Current, 0, 0, 6406);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("at_first", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2778[dtype-546])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
		}
		if (tb1) {
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

/* {LINKED_LIST}.finish */
void F547_3637 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("finish", 546, Current, 1, 0, 6407);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("at_last", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2779[dtype-546])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if (tb1) {
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

/* {LINKED_LIST}.forth */
void F547_3638 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("forth", 546, Current, 1, 0, 6408);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(4);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(6);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(7);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
			tb1 = (EIF_BOOLEAN)(tr2 != NULL);
		}
		if (tb1) {
			RTHOOK(8);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(9);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("moved_forth", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {LINKED_LIST}.back */
void F547_3639 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("back", 546, Current, 0, 0, 6409);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTHOOK(6);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2778[dtype-546])(Current))) {
				RTHOOK(8);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(9);
				tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.move */
void F547_3640 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(8,tr8);
	RTLR(9,loc3);
	RTLR(10,tr9);
	RTLIU(11);
	
	RTEAA("move", 546, Current, 3, 1, 6410);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
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
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_6 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		ti4_7 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		RTE_OT
		ti4_8 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(3);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(4);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTHOOK(7);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
			RTHOOK(8);
			tr9 = *(EIF_REFERENCE *)(RTCW(loc3) + O1820[Dtype(loc3)-131]);
			loc3 = (EIF_REFERENCE) tr9;
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(11);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
		}
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			RTHOOK(15);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(16);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(17);
			tr9 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr9);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr9;
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2776[dtype-546])(Current, loc2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("too_far_right", EX_POST);
		tb1 = '\01';
		RTCO(tr6);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_6 + arg1) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2402[dtype-546])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("too_far_left", EX_POST);
		tb1 = '\01';
		RTCO(tr7);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_7 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2402[dtype-546])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("expected_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2402[dtype-546])(Current))) {
			RTCO(tr8);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_8 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("moved_if_inbounds", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) >= ((EIF_INTEGER_32) 0L))) {
			RTCO(tr2);
			tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + arg1) <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCO(tr3);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_3 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("before_set", EX_POST);
		tb1 = '\01';
		RTCO(tr4);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_4 + arg1) <= ((EIF_INTEGER_32) 0L))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("after_set", EX_POST);
		tb1 = '\01';
		RTCO(tr5);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_5 + arg1) >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
		}
		if (tb1) {
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

/* {LINKED_LIST}.go_i_th */
void F547_3641 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("go_i_th", 546, Current, 0, 1, 6411);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_cursor_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2780[dtype-546])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(7);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(9);
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(10);
			ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2776[dtype-546])(Current, (EIF_INTEGER_32) (arg1 - ti4_1)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("position_expected", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == arg1)) {
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

/* {LINKED_LIST}.go_to */
void F547_3642 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("go_to", 546, Current, 1, 1, 6412);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("cursor_position_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2362[dtype-546])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_final_id(Y2361,Y2361_gen_type,dftype,283),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_1_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTHOOK(8);
				tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(loc1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.put_front */
void F547_3643 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("put_front", 546, Current, 1, 1, 6413);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2314[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2864[dtype-546])(Current, tr1));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc1))-131])(loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	RTHOOK(5);
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current));
	}
	if (tb1) {
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(7);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2774[dtype-546])(Current)), arg1)) {
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

/* {LINKED_LIST}.extend */
void F547_3644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("extend", 546, Current, 2, 1, 6414);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2314[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2864[dtype-546])(Current, tr1));
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(6);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current));
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(8);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc2))-131])(loc2, loc1));
			RTHOOK(9);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTHOOK(10);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
	}
	RTHOOK(11);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2316[dtype-470])(Current, tr1))) {
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

/* {LINKED_LIST}.put_left */
void F547_3645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("put_left", 546, Current, 3, 1, 6415);
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
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(5);
		tr2 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2804[dtype-546])(Current, tr2));
	} else {
		RTHOOK(6);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTHOOK(7);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[dtype-546])(Current));
			RTHOOK(8);
			tr2 = RTCCL(arg1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2806[dtype-546])(Current, tr2));
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2776[dtype-546])(Current, ((EIF_INTEGER_32) 2L)));
		} else {
			RTHOOK(10);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(RTCW(loc2))-126])(loc2));
			tr3 = RTCCL(tr2);
			loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2864[dtype-546])(Current, tr3));
			RTHOOK(11);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc1))-131])(loc1, tr2));
			RTHOOK(12);
			tr2 = RTCCL(arg1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1817[Dtype(RTCW(loc2))-126])(loc2, tr2));
			RTHOOK(13);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc2))-131])(loc2, loc1));
			RTHOOK(14);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			RTHOOK(15);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("new_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("previous_exists", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current)) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("item_inserted", EX_POST);
		tb1 = '\0';
		tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current));
		loc3 = tr2;
		if (EIF_TEST(loc3)) {
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc3)-126])(loc3));
			tb1 = RTCEQ(tr2, arg1);
		}
		if (tb1) {
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
}

/* {LINKED_LIST}.put_right */
void F547_3646 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTEAA("put_right", 546, Current, 4, 1, 6416);
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
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = RTCCL(arg1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2864[dtype-546])(Current, tr2));
	
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(5);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc1))-131])(loc1, *(EIF_REFERENCE *)(Current)));
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(8);
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc1))-131])(loc1, tr2));
			RTHOOK(11);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc2))-131])(loc2, loc1));
		}
	}
	RTHOOK(12);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("same_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("next_exists", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2866[dtype-546])(Current)) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("item_inserted", EX_POST);
		tb3 = '\01';
		if ((EIF_BOOLEAN) !tb1) {
			tb4 = '\0';
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2866[dtype-546])(Current));
			loc3 = tr2;
			if (EIF_TEST(loc3)) {
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc3)-126])(loc3));
				tb4 = RTCEQ(tr2, arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("item_inserted_before", EX_POST);
		tb3 = '\01';
		if (tb2) {
			tb4 = '\0';
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc4 = tr2;
			if (EIF_TEST(loc4)) {
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1816[Dtype(loc4)-126])(loc4));
				tb4 = RTCEQ(tr2, arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.replace */
void F547_3647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("replace", 546, Current, 1, 1, 6417);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2357[dtype-546])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2358[dtype-546])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1817[Dtype(RTCW(loc1))-126])(loc1, tr1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_replaced", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[dtype-546])(Current)), arg1)) {
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

/* {LINKED_LIST}.merge_left */
void F547_3648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc4);
	RTLR(6,tr4);
	RTLR(7,loc1);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("merge_left", 546, Current, 4, 1, 6418);
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
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_4 = ti4_5;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[Dtype(RTCW(arg1))-546])(arg1));
	loc4 = tr4;
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr4 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr4;
		RTHOOK(7);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_5;
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2322[Dtype(RTCW(arg1))-470])(arg1));
		
		RTHOOK(9);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			RTHOOK(10);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			RTHOOK(11);
			tr4 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr4);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr4;
		} else {
			RTHOOK(12);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2778[dtype-546])(Current))) {
				RTHOOK(13);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(loc4)-131])(loc4, *(EIF_REFERENCE *)(Current)));
				RTHOOK(14);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			} else {
				RTHOOK(15);
				loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current));
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(17);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc3))-131])(loc3, loc1));
				}
				RTHOOK(18);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(loc4)-131])(loc4, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			}
		}
		RTHOOK(19);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)) += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_index", EX_POST);
		RTCO(tr2);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb1) {
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
}

/* {LINKED_LIST}.merge_right */
void F547_3649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("merge_right", 546, Current, 4, 1, 6419);
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
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[Dtype(RTCW(arg1))-546])(arg1));
	loc4 = tr3;
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr3;
		RTHOOK(7);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2322[Dtype(RTCW(arg1))-470])(arg1));
		
		RTHOOK(9);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(11);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			RTHOOK(12);
			tr3 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr3;
		} else {
			RTHOOK(13);
			if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2779[dtype-546])(Current))) {
				RTHOOK(14);
				tr3 = *(EIF_REFERENCE *)(RTCW(loc3) + O1820[Dtype(loc3)-131]);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(loc4)-131])(loc4, tr3));
			}
			RTHOOK(15);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc3))-131])(loc3, loc1));
		}
		RTHOOK(16);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)) += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("same_index", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if (tb1) {
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
}

/* {LINKED_LIST}.remove */
void F547_3650 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTEAA("remove", 546, Current, 4, 0, 6420);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2357[dtype-546])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2778[dtype-546])(Current))) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1822[Dtype(RTCW(loc2))-131])(loc2));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == ((EIF_INTEGER_32) 1L))) {
				
				RTHOOK(10);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(11);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2779[dtype-546])(Current))) {
				RTHOOK(12);
				tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
				RTHOOK(13);
				loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				RTHOOK(14);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(15);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1822[Dtype(RTCW(loc3))-131])(loc3));
				}
				RTHOOK(16);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(17);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(18);
				loc4 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2865[dtype-546])(Current));
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(20);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc4))-131])(loc4, loc1));
				}
				RTHOOK(21);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1822[Dtype(RTCW(loc2))-131])(loc2));
				RTHOOK(22);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
		RTHOOK(23);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
		RTHOOK(24);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2869[dtype-546])(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("after_when_empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
		}
		if (tb1) {
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

/* {LINKED_LIST}.remove_left */
void F547_3651 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_left", 546, Current, 0, 0, 6421);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2776[dtype-546])(Current, ((EIF_INTEGER_32) -2L)));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2810[dtype-546])(Current));
	RTHOOK(4);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[dtype-546])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)))) {
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

/* {LINKED_LIST}.remove_right */
void F547_3652 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("remove_right", 546, Current, 4, 0, 6422);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(3);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(5);
			loc1 = (EIF_REFERENCE) loc2;
			RTHOOK(6);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2) + O1820[Dtype(loc2)-131]);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
			RTHOOK(7);
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1822[Dtype(RTCW(loc3))-131])(loc3));
			}
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		}
	} else {
		RTHOOK(11);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(13);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + O1820[Dtype(loc3)-131]);
			loc4 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(15);
				loc1 = (EIF_REFERENCE) loc4;
				RTHOOK(16);
				tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + O1820[Dtype(loc4)-131]);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1821[Dtype(RTCW(loc3))-131])(loc3, tr2));
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1822[Dtype(RTCW(loc4))-131])(loc4));
			}
		}
	}
	RTHOOK(18);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
	RTHOOK(19);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2869[dtype-546])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2399[dtype-546])(Current)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.wipe_out */
void F547_3653 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 546, Current, 0, 0, 6423);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2870[dtype-546])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {LINKED_LIST}.copy */
void F547_3654 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("copy", 546, Current, 1, 1, 6424);
	RTSA(dtype);
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
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-470])(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2870[dtype-546])(Current));
			RTHOOK(7);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2361[Dtype(RTCW(arg1))-546])(arg1));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[Dtype(RTCW(arg1))-546])(arg1));
			for (;;) {
				RTHOOK(9);
				tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2388[Dtype(RTCW(arg1))-546])(arg1));
				if (tb1) break;
				RTHOOK(10);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[Dtype(RTCW(arg1))-546])(arg1));
				tr2 = RTCCL(tr1);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[dtype-470])(Current, tr2));
				RTHOOK(11);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2404[dtype-546])(Current));
				RTHOOK(12);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[Dtype(RTCW(arg1))-546])(arg1));
			}
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(14);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2363[Dtype(RTCW(arg1))-546])(arg1, loc1));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {LINKED_LIST}.new_chain */
EIF_REFERENCE F547_3655 (EIF_REFERENCE Current)
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
	
	RTEAA("new_chain", 546, Current, 0, 0, 6425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2861[Dtype(RTCW(Result))-546])(Result));
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.new_cell */
EIF_REFERENCE F547_3656 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("new_cell", 546, Current, 0, 1, 6426);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,131,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2355,Y2355_gen_type,Dftype(Current),268);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 131, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	tr1 = RTCCL(arg1);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1817[Dtype(RTCW(Result))-126])(Result, tr1));
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.previous */
EIF_REFERENCE F547_3657 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("previous", 546, Current, 1, 0, 6427);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(2);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	} else {
		RTHOOK(3);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2778[dtype-546])(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			loc1 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				RTHOOK(5);
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
					tb1 = (EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + _REFACS_1_));
				}
				if (tb1) break;
				RTHOOK(6);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
				loc1 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(7);
			Result = (EIF_REFERENCE) loc1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.next */
EIF_REFERENCE F547_3658 (EIF_REFERENCE Current)
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
	
	RTEAA("next", 546, Current, 1, 0, 6428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(2);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	} else {
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.active */
EIF_REFERENCE F547_3659 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {LINKED_LIST}.last_element */
EIF_REFERENCE F547_3660 (EIF_REFERENCE Current)
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
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("last_element", 546, Current, 1, 0, 6430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O1820[Dtype(loc1)-131]);
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.cleanup_after_remove */
void F547_3661 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("cleanup_after_remove", 546, Current, 0, 1, 6431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_cell", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
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

/* {LINKED_LIST}.internal_wipe_out */
void F547_3662 (EIF_REFERENCE Current)
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
	
	RTEAA("internal_wipe_out", 546, Current, 0, 0, 6432);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {LINKED_LIST}._invariant */
void F547_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 580, Current, 0, 0);
	RTIT("prunable", Current);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2315[dtype-470])(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
		tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("not_void_unless_empty", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == *(EIF_REFERENCE *)(Current))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after_constraint", Current);
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (EIF_BOOLEAN)(tr1 == (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2868[dtype-546])(Current)));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit581 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
