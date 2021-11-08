/*
 * Code for class REFLECTED_REFERENCE_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re145.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REFLECTED_REFERENCE_OBJECT}.make */
void F142_2337 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 141, Current, 0, 1, 2269);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F29_562(Current, tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("enclosing_object_set", EX_POST);
		if (RTCEQ(*(EIF_REFERENCE *)(Current), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_physical_offset", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ((EIF_INTEGER_32) 0L))) {
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

/* {REFLECTED_REFERENCE_OBJECT}.make_for_expanded_field */
void F142_2338 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_for_expanded_field", 141, Current, 0, 2, 2270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_th_field_is_expanded", EX_PRE);
		tb1 = (nstcall = 1, F138_2184(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
	ti4_2 = (nstcall = 1, F138_2190(RTCW(arg1), arg2));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_1 = (nstcall = 0, F29_579(Current, *(EIF_REFERENCE *)(Current), ti4_1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("enclosing_object_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if (RTCEQ(tr1, tr2)) {
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

/* {REFLECTED_REFERENCE_OBJECT}.make_for_expanded_field_at */
void F142_2339 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_for_expanded_field_at", 141, Current, 0, 2, 2271);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_dotnet", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F116_1912(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F29_579(Current, arg1, arg2));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("enclosing_object_set", EX_POST);
		if (RTCEQ(*(EIF_REFERENCE *)(Current), arg1)) {
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

/* {REFLECTED_REFERENCE_OBJECT}.object */
EIF_REFERENCE F142_2340 (EIF_REFERENCE Current)
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
	
	RTEAA("object", 141, Current, 0, 0, 2272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (nstcall = 0, F29_577(Current, *(EIF_REFERENCE *)(Current), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_REFERENCE_OBJECT}.object_address */
EIF_POINTER F142_2341 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("object_address", 141, Current, 0, 0, 2273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (nstcall = 0, F29_578(Current, *(EIF_REFERENCE *)(Current), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_REFERENCE_OBJECT}.enclosing_object */
EIF_REFERENCE F142_2342 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {REFLECTED_REFERENCE_OBJECT}.physical_offset */
EIF_INTEGER_32 F142_2343 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {REFLECTED_REFERENCE_OBJECT}.copy_semantics_field */
EIF_REFERENCE F142_2344 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("copy_semantics_field", 141, Current, 0, 1, 2276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F138_2229(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 1L))) {
			tb1 = (nstcall = 0, F138_2185(Current, arg1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = RTLNS(eif_new_type(140, 0x01).id, 140, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = (nstcall = 0, F1_14(Current));
	(nstcall = -1, F141_2327(RTCW(Result), tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_REFERENCE_OBJECT}.expanded_field */
EIF_REFERENCE F142_2345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("expanded_field", 141, Current, 0, 1, 2277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F138_2229(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("expanded_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = RTLNS(eif_new_type(141, 0x01).id, 141, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F142_2338(RTCW(Result), Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_REFERENCE_OBJECT}.set_object */
void F142_2346 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_object", 141, Current, 0, 1, 2278);
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
		RTCT("physical_offset_not_set", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F29_562(Current, tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("enclosing_object_set", EX_POST);
		if (RTCEQ(*(EIF_REFERENCE *)(Current), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_physical_offset", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

void EIF_Minit145 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
