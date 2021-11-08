/*
 * Code for class NATIVE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na160.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATIVE_STRING}.make */
void F551_3840 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 550, Current, 0, 1, 6580);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = 0, F551_3841(Current, ti4_1));
	RTHOOK(3);
	(nstcall = 0, F551_3855(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.make_empty */
void F551_3841 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_empty", 550, Current, 0, 1, 6581);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_length_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(787, 1).id);
	ti4_1 = (nstcall = 0, F551_3853(Current));
	(nstcall = -1, F788_4570(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ti4_1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.make_from_pointer */
void F551_3842 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_from_pointer", 550, Current, 1, 1, 6582);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_pointer_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F550_3838(Current, arg1));
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(787, 1).id);
	ti4_1 = (nstcall = 0, F551_3853(Current));
	(nstcall = -1, F788_4572(RTCW(tr1), arg1, (EIF_INTEGER_32) (loc1 + ti4_1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F551_3853(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.make_from_raw_string */
void F551_3843 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("make_from_raw_string", 550, Current, 2, 1, 6583);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_raw_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(787, 1).id);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 0, F551_3853(Current));
	(nstcall = -1, F788_4570(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F906_6768(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F728_4475(loc2));
		if (tb1) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (nstcall = 1, F728_4466(loc2));
		(nstcall = 1, F788_4611(RTCW(tr1), tc1, loc1));
		RTHOOK(5);
		loc1++;
		RTHOOK(6);
		(nstcall = 1, F728_4481(loc2));
	}
	RTHOOK(7);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F788_4602(RTCW(tr1), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), loc1));
	} else {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F788_4601(RTCW(tr1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc1));
	}
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	ti4_2 = (nstcall = 0, F551_3853(Current));
	ti4_3 = (nstcall = 0, F551_3853(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ti4_3);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("set", EX_POST);
		tr1 = (nstcall = 0, F551_3844(Current));
		tb2 = (nstcall = 1, F906_6776(RTCW(tr1), arg1));
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

/* {NATIVE_STRING}.raw_string */
EIF_REFERENCE F551_3844 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("raw_string", 550, Current, 1, 0, 6562);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(117, 0x01).id, 117, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F118_1997(RTCW(loc1), tp1, ti4_1));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	ti4_2 = (nstcall = 0, F551_3853(Current));
	tr1 = (nstcall = 1, F118_2005(RTCW(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.string */
EIF_REFERENCE F551_3845 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	struct eif_ex_24 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(30, 0x00).id);
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("string", 550, Current, 1, 0, 6563);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F31_710(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 1, F31_685(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.substring */
EIF_REFERENCE F551_3846 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	struct eif_ex_24 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(30, 0x00).id);
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("substring", 550, Current, 1, 2, 6564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_not_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((nstcall = 0, F551_3850(Current)) / (nstcall = 0, F551_3853(Current)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F909_6992(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(6);
		(nstcall = 1, F31_713(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result));
	} else {
		RTHOOK(7);
		tr1 = (nstcall = 1, F31_685(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F31_688(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("susbstring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATIVE_STRING}.item */
EIF_POINTER F551_3847 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 550, Current, 0, 0, 6565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_not_null", EX_POST);
		if ((EIF_BOOLEAN)(Result != (nstcall = 0, F1_33(Current)))) {
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

/* {NATIVE_STRING}.managed_data */
EIF_REFERENCE F551_3848 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {NATIVE_STRING}.is_empty */
EIF_BOOLEAN F551_3849 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 550, Current, 0, 0, 6567);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.capacity */
EIF_INTEGER_32 F551_3850 (EIF_REFERENCE Current)
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
	
	RTEAA("capacity", 550, Current, 0, 0, 6568);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.bytes_count */
EIF_INTEGER_32 F551_3851 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bytes_count", 550, Current, 0, 0, 6569);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_1 = (nstcall = 0, F551_3853(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bytes_count_non_negative", EX_POST);
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

/* {NATIVE_STRING}.unit_count */
EIF_INTEGER_32 F551_3852 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {NATIVE_STRING}.unit_size */
EIF_INTEGER_32 F551_3853 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("unit_size", 550, Current, 0, 0, 6571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.is_equal */
EIF_BOOLEAN F551_3854 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_equal", 550, Current, 0, 1, 6572);
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
	tp1 = (nstcall = 0, F551_3847(Current));
	tp2 = (nstcall = 1, F551_3847(RTCW(arg1)));
	tb1 = tp1 == tp2;
	Result = (EIF_BOOLEAN) tb1;
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {NATIVE_STRING}.set_string */
void F551_3855 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_string", 550, Current, 0, 1, 6573);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
	(nstcall = 0, F551_3856(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.set_substring */
void F551_3856 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	struct eif_ex_24 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(30, 0x00).id);
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_substring", 550, Current, 1, 3, 6574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(227,(nstcall = 0, F551_3860), (Current));
		(nstcall = 1, F31_703(RTCW(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2));
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(227,(nstcall = 0, F551_3860), (Current));
		(nstcall = 1, F31_678(RTCW(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2));
	}
	RTHOOK(8);
	tr1 = RTOUCR(227,(nstcall = 0, F551_3860), (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1816[Dtype(tr1)-126]);
	ti4_2 = (nstcall = 0, F551_3853(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.set_shared_from_pointer */
void F551_3857 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("set_shared_from_pointer", 550, Current, 0, 1, 6575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F550_3838(Current, arg1));
	(nstcall = 0, F551_3858(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.set_shared_from_pointer_and_count */
void F551_3858 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("set_shared_from_pointer_and_count", 550, Current, 0, 2, 6576);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_length_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_length_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % (nstcall = 0, F551_3853(Current))) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F551_3853(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTLNSMART(eif_new_type(787, 1).id);
		ti4_1 = (nstcall = 0, F551_3853(Current));
		(nstcall = -1, F788_4573(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F551_3853(Current));
		(nstcall = 1, F788_4575(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {NATIVE_STRING}.platform */
static EIF_REFERENCE F551_3859_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(228)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("platform", 550, Current, 0, 0, 6577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(115, 0x01).id, 115, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F551_3859 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(228,F551_3859_body,(Current));
}

/* {NATIVE_STRING}.upper_cell */
static EIF_REFERENCE F551_3860_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(227)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("upper_cell", 550, Current, 0, 0, 6578);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,127,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 127, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	(nstcall = -1, F128_2035(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F551_3860 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(227,F551_3860_body,(Current));
}

/* {NATIVE_STRING}._invariant */
void F551_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 159, Current, 0, 0);
	RTIT("little_endian_windows", Current);
	tb1 = '\01';
	if ((nstcall = 0, F116_1913(Current))) {
		tr1 = RTOUCR(228,(nstcall = 0, F551_3859), (Current));
		tb2 = RTOUCB(EIF_BOOLEAN,27,(nstcall = 1, F116_1918), (RTCW(tr1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("even_count_on_windows", Current);
	tb1 = '\01';
	if ((nstcall = 0, F116_1913(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % (nstcall = 0, F551_3853(Current))) == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit160 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
