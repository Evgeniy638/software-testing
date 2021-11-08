/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is60.h"
#include "eif_except.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F62_1316 (EIF_REFERENCE Current)
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
	
	RTEAA("last_exception", 61, Current, 0, 0, 1259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(14,(nstcall = 0, F62_1334), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F62_1317 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("raise", 61, Current, 3, 1, 1260);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_exception_is_raisable", EX_PRE);
		tb1 = (nstcall = 1, F72_1531(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 1, F72_1532(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		if ((nstcall = 0, F62_1342(Current))) {
			RTHOOK(5);
			tr1 = (nstcall = 0, F62_1316(Current));
			(nstcall = 1, F72_1536(RTCW(arg1), tr1));
		}
		RTHOOK(6);
		(nstcall = 0, F62_1328(Current, arg1));
		RTHOOK(7);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(9);
			tp1 = (nstcall = 1, F118_2014(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(10);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(11);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1408[Dtype(RTCW(arg1))-71])(arg1));
		(nstcall = 0, F62_1341(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignore */
void F62_1318 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("ignore", 61, Current, 1, 1, 1261);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_ignorable", EX_PRE);
		RTTE((nstcall = 0, F62_1321(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTOUCR(15,(nstcall = 0, F62_1330), (Current));
	(nstcall = 1, F627_4072(RTCW(tr1), loc1, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_caught", EX_POST);
		if ((nstcall = 0, F62_1323(Current, arg1))) {
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

/* {ISE_EXCEPTION_MANAGER}.catch */
void F62_1319 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("catch", 61, Current, 0, 1, 1262);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(15,(nstcall = 0, F62_1330), (Current));
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	(nstcall = 1, F627_4077(RTCW(tr1), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_ignored", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F62_1323(Current, arg1))) {
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

/* {ISE_EXCEPTION_MANAGER}.set_is_ignored */
void F62_1320 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("set_is_ignored", 61, Current, 0, 2, 1263);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ignored_implies_is_ignorable", EX_PRE);
		tb1 = '\01';
		if (arg2) {
			tb1 = (nstcall = 0, F62_1321(Current, arg1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		(nstcall = 0, F62_1318(Current, arg1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F62_1319(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_ignored_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F62_1323(Current, arg1)) == arg2)) {
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

/* {ISE_EXCEPTION_MANAGER}.is_ignorable */
EIF_BOOLEAN F62_1321 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignorable", 61, Current, 0, 1, 1264);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(16,(nstcall = 0, F62_1331), (Current));
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	tb1 = (nstcall = 1, F627_4033(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_raisable */
EIF_BOOLEAN F62_1322 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_raisable", 61, Current, 0, 1, 1265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(17,(nstcall = 0, F62_1332), (Current));
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	tb1 = (nstcall = 1, F627_4033(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F62_1323 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignored", 61, Current, 0, 1, 1266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(15,(nstcall = 0, F62_1330), (Current));
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	tb1 = (nstcall = 1, F627_4033(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_caught", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F62_1324(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.is_caught */
EIF_BOOLEAN F62_1324 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_caught", 61, Current, 0, 1, 1267);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(15,(nstcall = 0, F62_1330), (Current));
	ti4_1 = (nstcall = 1, F795_5425(arg1));
	tb1 = (nstcall = 1, F627_4033(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_ignored", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F62_1323(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F62_1325 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("type_of_code", 61, Current, 0, 1, 1268);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			tr1 = RTLNTY2(eif_new_type(96, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			RTHOOK(3);
			tr1 = RTLNTY2(eif_new_type(90, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			RTHOOK(4);
			tr1 = RTLNTY2(eif_new_type(105, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			RTHOOK(5);
			tr1 = RTLNTY2(eif_new_type(106, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			RTHOOK(6);
			tr1 = RTLNTY2(eif_new_type(75, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			RTHOOK(7);
			tr1 = RTLNTY2(eif_new_type(109, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			RTHOOK(8);
			tr1 = RTLNTY2(eif_new_type(108, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			RTHOOK(9);
			tr1 = RTLNTY2(eif_new_type(98, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			RTHOOK(10);
			tr1 = RTLNTY2(eif_new_type(99, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			RTHOOK(11);
			tr1 = RTLNTY2(eif_new_type(107, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			RTHOOK(12);
			tr1 = RTLNTY2(eif_new_type(104, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			RTHOOK(13);
			tr1 = RTLNTY2(eif_new_type(79, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			RTHOOK(14);
			tr1 = RTLNTY2(eif_new_type(85, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			RTHOOK(15);
			tr1 = RTLNTY2(eif_new_type(82, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			RTHOOK(16);
			tr1 = RTLNTY2(eif_new_type(90, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			RTHOOK(17);
			tr1 = RTLNTY2(eif_new_type(81, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(18);
			tr1 = RTLNTY2(eif_new_type(101, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(19);
			tr1 = RTLNTY2(eif_new_type(89, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(20);
			tr1 = RTLNTY2(eif_new_type(97, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(21);
			tr1 = RTLNTY2(eif_new_type(83, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			RTHOOK(22);
			tr1 = RTLNTY2(eif_new_type(94, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			RTHOOK(23);
			tr1 = RTLNTY2(eif_new_type(78, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			RTHOOK(24);
			tr1 = RTLNTY2(eif_new_type(93, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			RTHOOK(25);
			tr1 = RTLNTY2(eif_new_type(72, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			RTHOOK(26);
			tr1 = RTLNTY2(eif_new_type(85, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			RTHOOK(27);
			tr1 = RTLNTY2(eif_new_type(102, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			RTHOOK(28);
			tr1 = RTLNTY2(eif_new_type(94, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			RTHOOK(29);
			tr1 = RTLNTY2(eif_new_type(77, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			RTHOOK(30);
			tr1 = RTLNTY2(eif_new_type(108, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			RTHOOK(31);
			tr1 = RTLNTY2(eif_new_type(86, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			RTHOOK(32);
			tr1 = RTLNTY2(eif_new_type(92, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(33);
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F62_1326 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Result);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("exception_from_code", 61, Current, 3, 1, 1269);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(96, 0x01).id, 96, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 2L:
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(18,(nstcall = 0, F62_1335), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(4);
			(nstcall = 1, F91_1593(RTCW(loc3), ((EIF_INTEGER_32) 2L)));
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(105, 0x01).id, 105, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(106, 0x01).id, 106, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 5L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(75, 0x01).id, 75, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 6L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(109, 0x01).id, 109, _OBJSIZ_5_2_0_1_0_0_0_0_);
			break;
		case 7L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 8L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(98, 0x01).id, 98, _OBJSIZ_7_1_0_1_0_0_0_0_);
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(99, 0x01).id, 99, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(107, 0x01).id, 107, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 11L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(104, 0x01).id, 104, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 12L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(79, 0x01).id, 79, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 13L:
			RTHOOK(16);
			loc1 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(17);
			(nstcall = 1, F86_1585(RTCW(loc1), ((EIF_INTEGER_32) 13L)));
			RTHOOK(18);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			RTHOOK(19);
			Result = RTLNS(eif_new_type(82, 0x01).id, 82, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 15L:
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(18,(nstcall = 0, F62_1335), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			(nstcall = 1, F91_1593(RTCW(loc3), ((EIF_INTEGER_32) 15L)));
			RTHOOK(22);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			RTHOOK(23);
			Result = RTLNS(eif_new_type(81, 0x01).id, 81, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 17L:
			RTHOOK(24);
			Result = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 18L:
			RTHOOK(25);
			Result = RTLNS(eif_new_type(89, 0x01).id, 89, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 19L:
			RTHOOK(26);
			Result = RTLNS(eif_new_type(97, 0x01).id, 97, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 20L:
			RTHOOK(27);
			Result = RTLNS(eif_new_type(83, 0x01).id, 83, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 21L:
			RTHOOK(28);
			loc2 = RTLNS(eif_new_type(94, 0x01).id, 94, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(29);
			(nstcall = 1, F95_1603(RTCW(loc2), ((EIF_INTEGER_32) 21L)));
			RTHOOK(30);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			RTHOOK(31);
			Result = RTLNS(eif_new_type(78, 0x01).id, 78, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 23L:
			RTHOOK(32);
			Result = RTLNS(eif_new_type(93, 0x01).id, 93, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 24L:
			RTHOOK(33);
			Result = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 25L:
			RTHOOK(34);
			loc1 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(35);
			(nstcall = 1, F86_1585(RTCW(loc1), ((EIF_INTEGER_32) 25L)));
			RTHOOK(36);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			RTHOOK(37);
			Result = RTLNS(eif_new_type(102, 0x01).id, 102, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 27L:
			RTHOOK(38);
			loc2 = RTLNS(eif_new_type(94, 0x01).id, 94, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(39);
			(nstcall = 1, F95_1603(RTCW(loc2), ((EIF_INTEGER_32) 27L)));
			RTHOOK(40);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			RTHOOK(41);
			Result = RTLNS(eif_new_type(77, 0x01).id, 77, _OBJSIZ_6_1_0_3_0_0_0_0_);
			break;
		case 29L:
			RTHOOK(42);
			Result = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 30L:
			RTHOOK(43);
			Result = RTLNS(eif_new_type(86, 0x01).id, 86, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 31L:
			RTHOOK(44);
			Result = RTLNS(eif_new_type(92, 0x01).id, 92, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F62_1327 (EIF_REFERENCE Current)
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
	
	RTEAA("exception_data", 61, Current, 0, 0, 1270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(19,(nstcall = 0, F62_1333), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F62_1328 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("set_last_exception", 61, Current, 0, 1, 1271);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(14,(nstcall = 0, F62_1334), (Current));
	(nstcall = 1, F127_2035(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("last_exception_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(14,(nstcall = 0, F62_1334), (Current))));
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F62_1329 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLIU(11);
	
	RTEAA("set_exception_data", 61, Current, 2, 12, 1272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(19,(nstcall = 0, F62_1333), (Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,11,826,859,859,859,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,859,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	(nstcall = 1, F127_2035(RTCW(tr1), tr2));
	RTHOOK(2);
	if (arg2) {
		RTHOOK(3);
		tr1 = (nstcall = 0, F62_1337(Current));
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			(nstcall = 0, F62_1328(Current, loc1));
		}
	} else {
		RTHOOK(5);
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = (nstcall = 0, F62_1316(Current));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		(nstcall = 1, F72_1543(loc2, arg10));
		RTHOOK(7);
		(nstcall = 1, F72_1537(loc2, arg6));
		RTHOOK(8);
		(nstcall = 1, F72_1541(loc2, arg7));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F62_1330_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(15)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("ignored_exceptions", 61, Current, 0, 0, 1273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,626,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 626, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F627_4026(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
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

EIF_REFERENCE F62_1330 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(15,F62_1330_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F62_1331_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(16)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unignorable_exceptions", 61, Current, 1, 0, 1274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,626,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 626, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F627_4026(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(96, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F795_5425(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F627_4072(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F62_1331 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(16,F62_1331_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F62_1332_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(17)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unraisable_exceptions", 61, Current, 1, 0, 1275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,626,859,859,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 626, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F627_4026(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(98, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F795_5425(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F627_4072(RTCW(Result), loc1, loc1));
	RTHOOK(4);
	tr1 = RTLNTY2(eif_new_type(86, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F795_5425(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(nstcall = 1, F627_4072(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F62_1332 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(17,F62_1332_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F62_1333_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(19)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("exception_data_cell", 61, Current, 0, 0, 1276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,126,0xFFF9,11,826,859,859,859,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,0xFF01,907,859,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 126, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F127_2035(RTCW(tr1), NULL));
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

EIF_REFERENCE F62_1333 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(19,F62_1333_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F62_1334_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(14)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("last_exception_cell", 61, Current, 0, 0, 1277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,126,71,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 126, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F127_2035(RTCW(tr1), NULL));
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

EIF_REFERENCE F62_1334 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(14,F62_1334_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F62_1335_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(18)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("no_memory_exception_object_cell", 61, Current, 1, 0, 1278);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(90, 0x01).id, 90, _OBJSIZ_5_1_0_2_0_0_0_0_);
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F906_6748(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	(nstcall = 1, F72_1543(RTCW(loc1), tr1));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,126,0xFF01,90,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 126, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F127_2035(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F62_1335 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(18,F62_1335_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F62_1336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_code_ignored", 61, Current, 1, 1, 1279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F62_1325(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (nstcall = 0, F62_1323(Current, loc1));
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F62_1337 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,Result);
	RTLIU(13);
	
	RTEAA("exception_from_data", 61, Current, 10, 0, 1280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = (nstcall = 0, F62_1327(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(loc2,1);
		tr1 = (nstcall = 0, F62_1326(Current, ti4_1));
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(2);
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(98, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(3);
			loc1 = (nstcall = 0, F62_1316(Current));
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(5);
				(nstcall = 1, F72_1536(loc3, loc1));
			}
			RTHOOK(6);
			tr1 = eif_boxed_item(loc2,7);
			(nstcall = 1, F99_1613(loc4, tr1));
			RTHOOK(7);
			tr1 = eif_boxed_item(loc2,8);
			(nstcall = 1, F99_1614(loc4, tr1));
		} else {
			RTHOOK(8);
			loc5 = loc3;
			loc5 = RTRV(eif_new_type(86, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				RTHOOK(9);
				loc1 = (nstcall = 0, F62_1316(Current));
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(11);
					(nstcall = 1, F72_1536(loc3, loc1));
				}
			} else {
				RTHOOK(12);
				loc6 = loc3;
				loc6 = RTRV(eif_new_type(109, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(13);
					tb1 = eif_boolean_item(loc2,11);
					(nstcall = 1, F110_1632(loc6, tb1));
				} else {
					RTHOOK(14);
					loc7 = loc3;
					loc7 = RTRV(eif_new_type(79, 0x01),loc7);
					if (EIF_TEST(loc7)) {
						RTHOOK(15);
						ti4_1 = eif_integer_32_item(loc2,2);
						(nstcall = 1, F80_1576(loc7, ti4_1));
					} else {
						RTHOOK(16);
						loc8 = loc3;
						loc8 = RTRV(eif_new_type(94, 0x01),loc8);
						if (EIF_TEST(loc8)) {
							RTHOOK(17);
							ti4_1 = eif_integer_32_item(loc2,3);
							(nstcall = 1, F95_1602(loc8, ti4_1));
						} else {
							RTHOOK(18);
							loc9 = loc3;
							loc9 = RTRV(eif_new_type(78, 0x01),loc9);
							if (EIF_TEST(loc9)) {
								RTHOOK(19);
								ti4_1 = eif_integer_32_item(loc2,3);
								(nstcall = 1, F79_1572(loc9, ti4_1));
							} else {
								RTHOOK(20);
								loc10 = loc3;
								loc10 = RTRV(eif_new_type(77, 0x01),loc10);
								if (EIF_TEST(loc10)) {
									RTHOOK(21);
									ti4_1 = eif_integer_32_item(loc2,2);
									(nstcall = 1, F78_1554(loc10, ti4_1));
									RTHOOK(22);
									tr1 = eif_boxed_item(loc2,4);
									(nstcall = 1, F78_1559(loc10, tr1));
								}
							}
						}
					}
				}
				RTHOOK(23);
				if ((nstcall = 0, F62_1342(Current))) {
					RTHOOK(24);
					loc1 = (nstcall = 0, F62_1316(Current));
				}
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					RTHOOK(26);
					loc1 = (EIF_REFERENCE) loc3;
				}
				RTHOOK(27);
				(nstcall = 1, F72_1536(loc3, loc1));
			}
		}
		RTHOOK(28);
		tr1 = eif_boxed_item(loc2,9);
		(nstcall = 1, F72_1543(loc3, tr1));
		RTHOOK(29);
		tr1 = eif_boxed_item(loc2,4);
		(nstcall = 1, F72_1529(loc3, tr1));
		RTHOOK(30);
		tr1 = eif_boxed_item(loc2,5);
		(nstcall = 1, F72_1537(loc3, tr1));
		RTHOOK(31);
		tr1 = eif_boxed_item(loc2,6);
		(nstcall = 1, F72_1541(loc3, tr1));
		RTHOOK(32);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F62_1338 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("once_raise", 61, Current, 3, 1, 1281);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F72_1532(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		if ((nstcall = 0, F62_1342(Current))) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F72_1522(RTCW(arg1)));
			tr2 = (nstcall = 0, F62_1316(Current));
			(nstcall = 1, F72_1536(RTCW(tr1), tr2));
		}
		RTHOOK(5);
		(nstcall = 0, F62_1328(Current, arg1));
		RTHOOK(6);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tp1 = (nstcall = 1, F118_2014(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(9);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(10);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1408[Dtype(RTCW(arg1))-71])(arg1));
		(nstcall = 0, F62_1341(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F62_1339 (EIF_REFERENCE Current)
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
	
	RTEAA("init_exception_manager", 61, Current, 0, 0, 1282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(15,(nstcall = 0, F62_1330), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(2);
	tr1 = RTOUCR(16,(nstcall = 0, F62_1331), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(3);
	tr1 = RTOUCR(17,(nstcall = 0, F62_1332), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(4);
	tr1 = RTOUCR(19,(nstcall = 0, F62_1333), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(5);
	tr1 = RTOUCR(14,(nstcall = 0, F62_1334), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(6);
	tr1 = RTOUCR(18,(nstcall = 0, F62_1335), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F62_1340 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("free_preallocated_trace", 61, Current, 1, 0, 1283);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(18,(nstcall = 0, F62_1335), (Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		(nstcall = 1, F72_1529(RTCW(loc1), NULL));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F62_1341 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("developer_raise", 61, Current, 0, 3, 1284);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise__i4_p_p_ (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F62_1342 (EIF_REFERENCE Current)
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
	
	RTEAA("in_rescue", 61, Current, 0, 0, 1285);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit60 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
