/*
 * Code for class READABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re246.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_STRING_32}.make */
void F909_6992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 908, Current, 0, 1, 13001);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,563,835,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	(nstcall = -1, F564_3185(RTCW(tr1), tw1, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty_string", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F909_7012(Current)) >= arg1)) {
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

/* {READABLE_STRING_32}.make_filled */
void F909_6993 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("make_filled", 908, Current, 0, 2, 13002);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F909_6992(Current, arg2));
	RTHOOK(3);
	(nstcall = 0, F909_7033(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F909_7012(Current)) >= arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F909_7014(Current, arg1)) == *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]))) {
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

/* {READABLE_STRING_32}.make_from_string */
void F909_6994 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_string", 908, Current, 0, 1, 13003);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(Current != arg1)) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,563,835,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		(nstcall = 1, F564_3209(RTCW(tr1), tr2, ti4_2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_shared_implementation", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Current != arg1)) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F909_7003(Current, arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("initialized", EX_POST);
		if ((nstcall = 0, F909_7019(Current, arg1))) {
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

/* {READABLE_STRING_32}.make_from_c */
void F909_6996 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_from_c", 908, Current, 1, 1, 13004);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(8,(nstcall = 0, F905_6740), (Current));
	(nstcall = 1, F118_2000(RTCW(tr1), arg1));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(8,(nstcall = 0, F905_6740), (Current)))+ _LNGOFF_1_0_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,563,835,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	(nstcall = -1, F564_3185(RTCW(tr1), tw1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) loc1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	tr1 = RTOUCR(8,(nstcall = 0, F905_6740), (Current));
	(nstcall = 1, F118_2012(RTCW(tr1), *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.make_from_c_byte_array */
void F909_6997 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_from_c_byte_array", 908, Current, 0, 2, 13005);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_array_exists", EX_PRE);
		tb1 = !arg1;
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(8,(nstcall = 0, F905_6740), (Current));
	(nstcall = 1, F118_2001(RTCW(tr1), arg1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * arg2)));
	RTHOOK(3);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,563,835,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * arg2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	(nstcall = -1, F564_3185(RTCW(tr1), tw1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * arg2) + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	tr1 = RTOUCR(8,(nstcall = 0, F905_6740), (Current));
	(nstcall = 1, F118_2013(RTCW(tr1), *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.make_from_c_pointer */
void F909_6998 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_from_c_pointer", 908, Current, 0, 1, 13006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F909_6996(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.make_from_separate */
void F909_7000 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTEAA("make_from_separate", 908, Current, 3, 1, 13007);
	RTSA(dtype);
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
		RTCT("other_not_void", EX_PRE);
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
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (R4803[Dtype(arg1)-907], eif_scr1, 0, &(ti4_1));
	}
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 0, F909_6992(Current, loc2));
	RTHOOK(4);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			RTS_EI;
		} else {
			RTS_AC (1, arg1);
			RTS_AA ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), it_i4, SK_INT32, 1);
			RTS_CALL (R4767[Dtype(arg1)-907], eif_scr9, 0, &(tw1));
		}
		(nstcall = 1, F564_3202(RTCW(loc3), tw1, loc1));
		RTHOOK(8);
		loc1++;
	}
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.shared_with */
EIF_BOOLEAN F909_7003 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("shared_with", 908, Current, 0, 1, 13009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = (EIF_BOOLEAN)(tr1 == tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.index_of */
EIF_INTEGER_32 F909_7004 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("index_of", 908, Current, 4, 2, 13010);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 <= loc3)) {
		RTHOOK(5);
		loc4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
		RTHOOK(6);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc4);
		RTHOOK(7);
		loc3 += loc4;
		RTHOOK(8);
		loc1 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(9);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == loc3)) {
				tw1 = (nstcall = 1, F564_3187(RTCW(loc1), loc2));
				tb1 = (EIF_BOOLEAN)(tw1 == arg1);
			}
			if (tb1) break;
			RTHOOK(10);
			loc2++;
		}
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(12);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc4);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
		tb2 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
		tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("none_before", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
		tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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

/* {READABLE_STRING_32}.last_index_of */
EIF_INTEGER_32 F909_7005 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("last_index_of", 908, Current, 3, 2, 13011);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc3);
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 < loc3)) {
			tw1 = (nstcall = 1, F564_3187(RTCW(loc1), loc2));
			tb1 = (EIF_BOOLEAN)(tw1 == arg1);
		}
		if (tb1) break;
		RTHOOK(7);
		loc2--;
	}
	RTHOOK(8);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= Result) && (EIF_BOOLEAN) (Result <= arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb2 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("found_if_present", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if (tb3) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, Result)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("none_after", EX_POST);
		tb2 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), arg2));
		tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)), arg2));
			tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
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
	return Result;
}

/* {READABLE_STRING_32}.substring_index_in_bounds */
EIF_INTEGER_32 F909_7006 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("substring_index_in_bounds", 908, Current, 0, 3, 13012);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_nonvoid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_notempty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_pos_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= arg2), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("end_pos_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOUCR(10,(nstcall = 0, F909_7037), (Current));
	ti4_1 = (nstcall = 1, F111_1639(RTCW(tr1), Current, arg1, arg2, arg3));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("correct_place", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, Result, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.string */
EIF_REFERENCE F909_7007 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("string", 908, Current, 0, 0, 13013);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F909_6994(RTCW(Result), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("string_type", EX_POST);
		tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F905_6653(RTCW(tr1)));
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("first_item", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F910_7051(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F910_7131(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			tr3 = (nstcall = 1, F909_7007(RTCW(tr2)));
			tb1 = RTEQ(tr1, tr3);
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

/* {READABLE_STRING_32}.string_representation */
EIF_REFERENCE F909_7008 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("string_representation", 908, Current, 1, 0, 13014);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F905_6653(RTCW(tr1)));
	if ((nstcall = 0, F1_7(Current, tr1))) {
		loc1 = Current;
		loc1 = RTRV(eif_new_type(909, 0x01),loc1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, F909_7007(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("correct_type", EX_POST);
		tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F905_6653(RTCW(tr1)));
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("first_item", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F910_7051(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F910_7131(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			tr3 = (nstcall = 1, F909_7007(RTCW(tr2)));
			tb1 = RTEQ(tr1, tr3);
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
	return Result;
}

/* {READABLE_STRING_32}.substring_index */
EIF_INTEGER_32 F909_7009 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("substring_index", 908, Current, 0, 2, 13015);
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
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(10,(nstcall = 0, F909_7037), (Current));
	ti4_1 = (nstcall = 1, F111_1639(RTCW(tr1), Current, arg1, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) - ti4_1) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
		tb1 = (nstcall = 1, F905_6697(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, Result, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F905_6698(RTCW(arg1), tr1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L))));
			tb2 = (nstcall = 1, F905_6697(RTCW(tr1), arg1));
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
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.fuzzy_index */
EIF_INTEGER_32 F909_7010 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("fuzzy_index", 908, Current, 0, 3, 13016);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("acceptable_fuzzy", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOUCR(10,(nstcall = 0, F909_7037), (Current));
	ti4_1 = (nstcall = 1, F113_1654(RTCW(tr1), Current, arg1, arg2, *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]), arg3));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.new_cursor */
EIF_REFERENCE F909_7011 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 908, Current, 0, 0, 13017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(743, 0x01).id, 743, _OBJSIZ_2_0_0_3_0_0_0_0_);
	(nstcall = -1, F744_4492(RTCW(Result), Current));
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

/* {READABLE_STRING_32}.capacity */
EIF_INTEGER_32 F909_7012 (EIF_REFERENCE Current)
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
	
	RTEAA("capacity", 908, Current, 0, 0, 13018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F564_3197(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
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

/* {READABLE_STRING_32}.count */
EIF_INTEGER_32 F909_7013 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O5036[Dtype(Current)-908]);
}


/* {READABLE_STRING_32}.occurrences */
EIF_INTEGER_32 F909_7014 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("occurrences", 908, Current, 3, 1, 13020);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, F564_3187(RTCW(loc3), loc1));
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			RTHOOK(6);
			Result++;
		}
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("zero_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			ti4_1 = (nstcall = 1, F909_7014(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			ti4_1 = (nstcall = 1, F909_7014(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("zero_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			ti4_1 = (nstcall = 1, F909_7014(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			ti4_1 = (nstcall = 1, F909_7014(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
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
	return Result;
}

/* {READABLE_STRING_32}.lower */
EIF_INTEGER_32 F909_7015 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {READABLE_STRING_32}.is_equal */
EIF_BOOLEAN F909_7016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 908, Current, 3, 1, 13022);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(6);
			loc2 = *(EIF_INTEGER_32 *)(Current + O4856[dtype-904]);
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4856[Dtype(arg1)-904]);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(loc2 == loc3))) {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
				ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
				tb1 = (nstcall = 1, F564_3200(RTCW(tr1), tr2, ti4_1, ti4_2, loc1));
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
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
		RTHOOK(12);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F909_7021(Current, arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F909_7021(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {READABLE_STRING_32}.is_case_insensitive_equal */
EIF_BOOLEAN F909_7017 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("is_case_insensitive_equal", 908, Current, 2, 1, 13023);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(6);
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = (nstcall = 0, F909_7018(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("symmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F909_7017(RTCW(arg1), Current));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(Dftype(Current), 1),loc2);
		if (EIF_TEST(loc2)) {
			tb2 = '\01';
			if ((nstcall = 0, F1_9(Current, loc2))) {
				tb2 = Result;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[Dtype(RTCW(arg1))-907])(arg1));
		tb2 = (nstcall = 1, F909_7019(RTCW(tr1), tr2));
		if (tb2) {
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
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.same_caseless_characters */
EIF_BOOLEAN F909_7018 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc8 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("same_caseless_characters", 908, Current, 8, 4, 13024);
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
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F905_6665(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(8);
		loc4 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(12);
		loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
		RTHOOK(13);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg2) - ((EIF_INTEGER_32) 1L));
		RTHOOK(14);
		loc3 += loc1;
		for (;;) {
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(16);
			tw1 = (nstcall = 1, F564_3187(RTCW(loc5), loc1));
			loc7 = (EIF_CHARACTER_32) tw1;
			RTHOOK(17);
			tw1 = (nstcall = 1, F564_3187(RTCW(loc6), loc2));
			loc8 = (EIF_CHARACTER_32) tw1;
			RTHOOK(18);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != loc8)) {
				tw1 = (nstcall = 1, F28_249(RTCW(loc4), loc7));
				tw2 = (nstcall = 1, F28_249(RTCW(loc4), loc8));
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				RTHOOK(19);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(20);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(21);
			loc1++;
			RTHOOK(22);
			loc2++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("same_characters", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
		tb1 = (nstcall = 1, F909_7017(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {READABLE_STRING_32}.same_string */
EIF_BOOLEAN F909_7019 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_string", 908, Current, 1, 1, 13025);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(6);
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = (nstcall = 0, F909_7020(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F909_7007(Current));
		tr2 = (nstcall = 1, F909_7007(RTCW(arg1)));
		if ((EIF_BOOLEAN)(Result == RTEQ(tr1, tr2))) {
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
	return Result;
}

/* {READABLE_STRING_32}.same_characters */
EIF_BOOLEAN F909_7020 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_characters", 908, Current, 1, 4, 13026);
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
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F905_6665(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F905_6665(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
		tb1 = (nstcall = 1, F564_3200(RTCW(tr1), tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg2) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg4) - ((EIF_INTEGER_32) 1L)), loc1));
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("same_characters", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, arg4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, arg2, arg3));
		tb1 = (nstcall = 1, F909_7019(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {READABLE_STRING_32}.is_less */
EIF_BOOLEAN F909_7021 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_less", 908, Current, 2, 1, 13027);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
			ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
			ti4_1 = (nstcall = 0, F909_7038(Current, tr1, tr2, ti4_1, ti4_2, loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
				ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
				ti4_1 = (nstcall = 0, F909_7038(Current, tr1, tr2, ti4_1, ti4_2, loc2));
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			} else {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
				ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
				ti4_1 = (nstcall = 0, F909_7038(Current, tr1, tr2, ti4_1, ti4_2, loc1));
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F909_7021(RTCW(arg1), Current));
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
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.is_string_8 */
EIF_BOOLEAN F909_7022 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {READABLE_STRING_32}.is_string_32 */
EIF_BOOLEAN F909_7023 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {READABLE_STRING_32}.is_valid_as_string_8 */
EIF_BOOLEAN F909_7024 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("is_valid_as_string_8", 908, Current, 3, 0, 13030);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
	RTHOOK(4);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(6);
		tw1 = (nstcall = 1, F564_3187(RTCW(loc3), loc1));
		ti4_1 = (EIF_INTEGER_32) (tw1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 255L));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.is_substring_whitespace */
EIF_BOOLEAN F909_7025 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTEAA("is_substring_whitespace", 908, Current, 4, 2, 13031);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_index_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("consistent_indexes", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) <= arg2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(5);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	loc3 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
	for (;;) {
		RTHOOK(8);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			tw1 = (nstcall = 1, F564_3187(RTCW(loc4), loc1));
			tb2 = (nstcall = 1, F28_245(RTCW(loc3), tw1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(9);
		loc1++;
	}
	RTHOOK(10);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.has */
EIF_BOOLEAN F909_7026 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has", 908, Current, 3, 1, 13032);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
		RTHOOK(4);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		loc2 += loc1;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 == loc2)) {
				tw1 = (nstcall = 1, F564_3187(RTCW(loc3), loc1));
				tb1 = (EIF_BOOLEAN)(tw1 == arg1);
			}
			if (tb1) break;
			RTHOOK(7);
			loc1++;
		}
		RTHOOK(8);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("false_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("true_if_first", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("recurse", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) > ((EIF_INTEGER_32) 0L))) {
			tb3 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[dtype-907])(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb3) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			tb3 = (nstcall = 1, F909_7026(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN)(Result == tb3);
		}
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
	return Result;
}

/* {READABLE_STRING_32}.starts_with */
EIF_BOOLEAN F909_7027 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("starts_with", 908, Current, 5, 1, 13033);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]))) {
			RTHOOK(6);
			loc4 = *(EIF_REFERENCE *)(Current);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F909_7044(RTCW(arg1)));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(10);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(11);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				RTHOOK(13);
				loc1--;
				RTHOOK(14);
				loc2--;
				RTHOOK(15);
				tw1 = (nstcall = 1, F564_3187(RTCW(loc4), loc2));
				tw2 = (nstcall = 1, F564_3187(RTCW(loc5), loc1));
				if ((EIF_BOOLEAN)(tw1 != tw2)) {
					RTHOOK(16);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(17);
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, ((EIF_INTEGER_32) 1L), ti4_1));
		tb1 = (nstcall = 1, F909_7019(RTCW(arg1), tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.ends_with */
EIF_BOOLEAN F909_7028 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("ends_with", 908, Current, 5, 1, 13034);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		loc2 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(7);
			loc4 = *(EIF_REFERENCE *)(Current);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			loc2 = (nstcall = 0, F909_7044(Current));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			RTHOOK(10);
			ti4_1 = (nstcall = 1, F909_7044(RTCW(arg1)));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[Dtype(RTCW(arg1))-909])(arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				RTHOOK(14);
				loc1--;
				RTHOOK(15);
				loc2--;
				RTHOOK(16);
				tw1 = (nstcall = 1, F564_3187(RTCW(loc4), loc2));
				tw2 = (nstcall = 1, F564_3187(RTCW(loc5), loc1));
				if ((EIF_BOOLEAN)(tw1 != tw2)) {
					RTHOOK(17);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(18);
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[dtype-907])(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), ti4_3));
		tb1 = (nstcall = 1, F909_7019(RTCW(arg1), tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {READABLE_STRING_32}.valid_code */
EIF_BOOLEAN F909_7029 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("valid_code", 908, Current, 0, 1, 12988);
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

/* {READABLE_STRING_32}.is_boolean */
EIF_BOOLEAN F909_7030 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("is_boolean", 908, Current, 1, 0, 12989);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) {
		RTHOOK(3);
		tr1 = RTOUCR(193,(nstcall = 0, F905_6661), (Current));
		Result = (nstcall = 0, F905_6695(Current, tr1));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 5L))) {
			RTHOOK(5);
			tr1 = RTOUCR(194,(nstcall = 0, F905_6660), (Current));
			Result = (nstcall = 0, F905_6695(Current, tr1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_boolean", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(193,(nstcall = 0, F905_6661), (Current));
		tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
		tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
		if (!tb2) {
			tr1 = RTOUCR(194,(nstcall = 0, F905_6660), (Current));
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4825[dtype-907])(Current));
			tb2 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {READABLE_STRING_32}.copy */
void F909_7031 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("copy", 908, Current, 1, 1, 12990);
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
		loc1 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(6);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb2 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		if (!tb2) {
			ti4_1 = (nstcall = 1, F564_3197(loc1));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]));
		}
		if (tb1) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, F564_3217(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) + ((EIF_INTEGER_32) 1L))));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(8);
			(nstcall = 1, F564_3209(RTCW(loc1), *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current + O5036[dtype-908])));
			RTHOOK(9);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		}
		RTHOOK(10);
		*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == ti4_1)) {
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

/* {READABLE_STRING_32}.fill_character */
void F909_7033 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("fill_character", 908, Current, 1, 1, 12991);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F909_7012(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = (nstcall = 0, F909_7012(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F564_3206(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) = (EIF_INTEGER_32) loc1;
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current + O4856[dtype-904]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O5036[dtype-908]) == (nstcall = 0, F909_7012(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_size", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F909_7012(Current)) == ti4_1)) {
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

/* {READABLE_STRING_32}.out */
EIF_REFERENCE F909_7036 (EIF_REFERENCE Current)
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
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("out", 908, Current, 0, 0, 12992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F31_673(RTCW(tr1), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
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

/* {READABLE_STRING_32}.string_searcher */
static EIF_REFERENCE F909_7037_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(10)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("string_searcher", 908, Current, 0, 0, 12993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(112, 0x01).id, 112, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F111_1635(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_searcher_not_void", EX_POST);
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

EIF_REFERENCE F909_7037 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(10,F909_7037_body,(Current));
}

/* {READABLE_STRING_32}.str_strict_cmp */
EIF_INTEGER_32 F909_7038 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("str_strict_cmp", 908, Current, 5, 5, 12994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("this_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n_valid", EX_PRE);
		tb1 = '\0';
		ti4_1 = (nstcall = 1, F564_3196(RTCW(arg1)));
		if ((EIF_BOOLEAN) (arg5 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg3) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = (nstcall = 1, F564_3196(RTCW(arg2)));
			tb1 = (EIF_BOOLEAN) (arg5 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg4) + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg3;
	RTHOOK(6);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg5);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) arg4;
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		RTHOOK(9);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg1), loc1));
		ti4_1 = (EIF_INTEGER_32) (tw1);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg2), loc2));
		ti4_1 = (EIF_INTEGER_32) (tw1);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc4 != loc5)) {
			RTHOOK(12);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc5);
			RTHOOK(13);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(14);
		loc1++;
		RTHOOK(15);
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_STRING_32}.to_lower_area */
void F909_7039 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("to_lower_area", 908, Current, 4, 3, 12995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_index_not_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F564_3197(arg1));
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	loc4 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		RTHOOK(8);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg1), loc1));
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(9);
		tw1 = (nstcall = 1, F28_249(RTCW(loc4), loc2));
		loc3 = (EIF_CHARACTER_32) tw1;
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			RTHOOK(11);
			(nstcall = 1, F564_3202(RTCW(arg1), loc3, loc1));
		}
		RTHOOK(12);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.to_upper_area */
void F909_7040 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("to_upper_area", 908, Current, 4, 3, 12996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_index_not_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F564_3197(arg1));
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	loc4 = RTOUCR(11,(nstcall = 0, F905_6744), (Current));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		RTHOOK(8);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg1), loc1));
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(9);
		tw1 = (nstcall = 1, F28_250(RTCW(loc4), loc2));
		loc3 = (EIF_CHARACTER_32) tw1;
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			RTHOOK(11);
			(nstcall = 1, F564_3202(RTCW(arg1), loc3, loc1));
		}
		RTHOOK(12);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.mirror_area */
void F909_7041 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("mirror_area", 908, Current, 3, 3, 12997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_index_not_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F564_3197(arg1));
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 <= loc3)) break;
		RTHOOK(7);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg1), loc2));
		loc1 = (EIF_CHARACTER_32) tw1;
		RTHOOK(8);
		tw1 = (nstcall = 1, F564_3187(RTCW(arg1), loc3));
		(nstcall = 1, F564_3202(RTCW(arg1), tw1, loc2));
		RTHOOK(9);
		(nstcall = 1, F564_3202(RTCW(arg1), loc1, loc3));
		RTHOOK(10);
		loc2--;
		RTHOOK(11);
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {READABLE_STRING_32}.area */
EIF_REFERENCE F909_7042 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {READABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F909_7043 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("area_lower", 908, Current, 0, 0, 12999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("area_lower_non_negative", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) 0 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(2);
		RTCT("area_lower_valid", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F564_3196(RTCW(tr1)));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) 0 <= ti4_1)) {
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
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_32}.area_upper */
EIF_INTEGER_32 F909_7044 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("area_upper", 908, Current, 0, 0, 13000);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O5036[dtype-908]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("area_upper_valid", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F564_3196(RTCW(tr1)));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("area_upper_in_bound", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5034[dtype-909])(Current)) <= (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)))) {
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

/* {READABLE_STRING_32}._invariant */
void F909_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 245, Current, 0, 0);
	RTIT("area_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit246 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
