/*
 * Code for class RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra170.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM}.make */
void F662_4338 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 661, Current, 0, 0, 8456);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,236,(nstcall = 0, F662_4340), (Current));
	(nstcall = 0, F662_4339(Current, ti4_1));
	RTHOOK(2);
	(nstcall = 0, F440_2866(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("seed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) == RTOUCB(EIF_INTEGER_32,236,(nstcall = 0, F662_4340), (Current)))) {
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

/* {RANDOM}.set_seed */
void F662_4339 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_seed", 661, Current, 0, 1, 8457);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("seed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) == arg1)) {
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

/* {RANDOM}.default_seed */
static EIF_INTEGER_32 F662_4340_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 236)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_seed", 661, Current, 0, 0, 8435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123457L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F662_4340 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,236,F662_4340_body,(Current));
}

/* {RANDOM}.modulus */
static EIF_INTEGER_32 F662_4341_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 237)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("modulus", 661, Current, 0, 0, 8436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F662_4341 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,237,F662_4341_body,(Current));
}

/* {RANDOM}.multiplier */
static EIF_INTEGER_32 F662_4342_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 238)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("multiplier", 661, Current, 0, 0, 8437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16807L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F662_4342 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,238,F662_4342_body,(Current));
}

/* {RANDOM}.increment */
static EIF_INTEGER_32 F662_4343_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 239)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("increment", 661, Current, 0, 0, 8438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F662_4343 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,239,F662_4343_body,(Current));
}

/* {RANDOM}.seed */
EIF_INTEGER_32 F662_4344 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
}


/* {RANDOM}.next_random */
EIF_INTEGER_32 F662_4345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("next_random", 661, Current, 0, 1, 8440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_range", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 < RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)))) {
			tb1 = (EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F662_4353(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("in_range", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (Result < RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)))) {
			tb1 = (EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L));
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

/* {RANDOM}.has */
EIF_BOOLEAN F662_4346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("has", 661, Current, 0, 1, 8441);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 < RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)))) {
		Result = (EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F314_2634(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("only_", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 < RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)))) {
			tb1 = (EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L));
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

/* {RANDOM}.i_th */
EIF_INTEGER_32 F662_4347 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("i_th", 661, Current, 1, 1, 8442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_))) {
		RTHOOK(3);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
	} else {
		RTHOOK(5);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	}
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F662_4353(Current, Result));
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc1++;
	}
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) Result;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("in_range", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (Result < RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)))) {
			tb1 = (EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
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

/* {RANDOM}.real_item */
EIF_REAL_32 F662_4348 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_item", 661, Current, 0, 0, 8443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F440_2858(Current));
	tr4_1 = (EIF_REAL_32) (ti4_1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current));
	tr4_2 = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) (tr4_1) /  (EIF_REAL_64) (tr4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.double_item */
EIF_REAL_64 F662_4349 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_item", 661, Current, 0, 0, 8444);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F440_2858(Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = RTOUCB(EIF_REAL_64,240,(nstcall = 0, F662_4357), (Current));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (Result));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.real_i_th */
EIF_REAL_32 F662_4350 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_i_th", 661, Current, 0, 1, 8445);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F662_4347(Current, arg1));
	tr4_1 = (EIF_REAL_32) (ti4_1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current));
	tr4_2 = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) (tr4_1) /  (EIF_REAL_64) (tr4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.double_i_th */
EIF_REAL_64 F662_4351 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_i_th", 661, Current, 0, 1, 8446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F662_4347(Current, arg1));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = RTOUCB(EIF_REAL_64,240,(nstcall = 0, F662_4357), (Current));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (Result));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.new_cursor */
EIF_REFERENCE F662_4352 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 661, Current, 0, 0, 8447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(661, 0x01).id, 661, _OBJSIZ_0_1_0_4_0_0_0_0_);
	(nstcall = -1, F662_4339(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_)));
	RTHOOK(2);
	(nstcall = 1, F440_2866(RTCW(Result)));
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

/* {RANDOM}.randomize */
EIF_INTEGER_32 F662_4353 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("randomize", 661, Current, 0, 1, 8448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = RTOUCB(EIF_REAL_64,241,(nstcall = 0, F662_4358), (Current));
	tr8_2 = (EIF_REAL_64) (arg1);
	tr8_3 = RTOUCB(EIF_REAL_64,242,(nstcall = 0, F662_4359), (Current));
	tr8_4 = RTOUCB(EIF_REAL_64,240,(nstcall = 0, F662_4357), (Current));
	tr8_1 = (nstcall = 0, F662_4354(Current, (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3), tr8_4));
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.double_mod */
EIF_REAL_64 F662_4354 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_mod", 661, Current, 0, 2, 8449);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F115_1820(Current, (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2))));
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 - (EIF_REAL_64) (Result * arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RANDOM}.last_item */
EIF_INTEGER_32 F662_4355 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
}


/* {RANDOM}.last_result */
EIF_INTEGER_32 F662_4356 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
}


/* {RANDOM}.dmod */
static EIF_REAL_64 F662_4357_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 240)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dmod", 661, Current, 0, 0, 8452);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F662_4357 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,240,F662_4357_body,(Current));
}

/* {RANDOM}.dmul */
static EIF_REAL_64 F662_4358_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 241)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dmul", 661, Current, 0, 0, 8453);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,238,(nstcall = 0, F662_4342), (Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F662_4358 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,241,F662_4358_body,(Current));
}

/* {RANDOM}.dinc */
static EIF_REAL_64 F662_4359_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 242)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dinc", 661, Current, 0, 0, 8454);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,239,(nstcall = 0, F662_4343), (Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F662_4359 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,242,F662_4359_body,(Current));
}

/* {RANDOM}._invariant */
void F662_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 169, Current, 0, 0);
	RTIT("non_negative_seed", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_negative_increment", Current);
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,239,(nstcall = 0, F662_4343), (Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_multiplier", Current);
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,238,(nstcall = 0, F662_4342), (Current)) > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("modulus_constraint", Current);
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,237,(nstcall = 0, F662_4341), (Current)) > ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit170 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
