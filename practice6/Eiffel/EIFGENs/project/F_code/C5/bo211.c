/*
 * Code for class BOOLEAN_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo211.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOOLEAN_REF}.item */
EIF_BOOLEAN F843_5929 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}


/* {BOOLEAN_REF}.hash_code */
EIF_INTEGER_32 F843_5930 (EIF_REFERENCE Current)
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
	
	RTEAA("hash_code", 842, Current, 0, 0, 11770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {BOOLEAN_REF}.make_from_reference */
void F843_5931 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 842, Current, 0, 1, 11771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	(nstcall = 0, F843_5934(Current, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) == tb1)) {
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

/* {BOOLEAN_REF}.to_reference */
EIF_REFERENCE F843_5932 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_reference", 842, Current, 0, 0, 11772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(842, 0x01).id, 842, _OBJSIZ_0_1_0_0_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F843_5934(RTCW(Result), *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_item", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(tb1 == *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_))) {
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

/* {BOOLEAN_REF}.to_integer */
EIF_INTEGER_32 F843_5933 (EIF_REFERENCE Current)
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
	
	RTEAA("to_integer", 842, Current, 0, 0, 11773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_item_implies_zero", EX_POST);
		if ((!((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("item_implies_one", EX_POST);
		if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L))))) {
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

/* {BOOLEAN_REF}.set_item */
void F843_5934 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 842, Current, 0, 1, 11774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {BOOLEAN_REF}.conjuncted */
EIF_BOOLEAN F843_5935 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("conjuncted", 842, Current, 0, 1, 11775);
	RTSA(Dtype(Current));
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
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("de_morgan", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
		if (!tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(RTCW(arg1))-842])(arg1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("commutative", EX_POST);
		tr1 = RTCCL(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4357[Dtype(RTCW(arg1))-842])(arg1, tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent_with_semi_strict", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4358[Dtype(Current)-842])(Current, tr1));
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

/* {BOOLEAN_REF}.conjuncted_semistrict */
EIF_BOOLEAN F843_5936 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("conjuncted_semistrict", 842, Current, 0, 1, 11776);
	RTSA(Dtype(Current));
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
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("de_morgan", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
		if (!tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(RTCW(arg1))-842])(arg1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {BOOLEAN_REF}.implication */
EIF_BOOLEAN F843_5937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("implication", 842, Current, 0, 1, 11777);
	RTSA(Dtype(Current));
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
	Result = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
		if (!tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN_REF}.negated */
EIF_BOOLEAN F843_5938 (EIF_REFERENCE Current)
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
	
	RTEAA("negated", 842, Current, 0, 0, 11778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN_REF}.disjuncted */
EIF_BOOLEAN F843_5939 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("disjuncted", 842, Current, 0, 1, 11779);
	RTSA(Dtype(Current));
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
	Result = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("de_morgan", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
		if (tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(RTCW(arg1))-842])(arg1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("commutative", EX_POST);
		tr1 = RTCCL(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4361[Dtype(RTCW(arg1))-842])(arg1, tr1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent_with_semi_strict", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4362[Dtype(Current)-842])(Current, tr1));
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

/* {BOOLEAN_REF}.disjuncted_semistrict */
EIF_BOOLEAN F843_5940 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("disjuncted_semistrict", 842, Current, 0, 1, 11780);
	RTSA(Dtype(Current));
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
	Result = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("de_morgan", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
		if (tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(RTCW(arg1))-842])(arg1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {BOOLEAN_REF}.disjuncted_exclusive */
EIF_BOOLEAN F843_5941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("disjuncted_exclusive", 842, Current, 0, 1, 11781);
	RTSA(Dtype(Current));
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
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) ((Result) != (tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4361[Dtype(Current)-842])(Current, tr1));
		if (tb2) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4357[Dtype(Current)-842])(Current, tr1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN_REF}.out */
EIF_REFERENCE F843_5942 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("out", 842, Current, 0, 0, 11782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("True",4,1416787301);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("False",5,1635034981);
	}
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
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

/* {BOOLEAN_REF}._invariant */
void F843_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 210, Current, 0, 0);
	RTIT("involutive_negation", Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
	tb2 = (EIF_BOOLEAN) !tb1;
	if ((EIF_BOOLEAN)(tb2 == *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_contradiction", Current);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("completeness", Current);
	tb1 = '\01';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4360[Dtype(Current)-842])(Current));
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit211 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
