/*
 * Code for class RT_DBG_COMMON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt54.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_COMMON}.changes_between */
EIF_REFERENCE F58_1266 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc6);
	RTLR(8,loc2);
	RTLR(9,arg2);
	RTLR(10,loc1);
	RTLIU(11);
	
	RTEAA("changes_between", 57, Current, 6, 2, 1210);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("csr1_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_8_2_);
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
		loc4 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(5);
		Result = (EIF_REFERENCE) loc4;
	} else {
		RTHOOK(6);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,573,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F632_4174(RTCW(Result), ((EIF_INTEGER_32) 30L)));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F632_4185(loc5));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			(nstcall = 1, F632_4221(RTCW(Result), loc5));
			RTHOOK(10);
			(nstcall = 1, F632_4210(loc5, loc3));
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTHOOK(12);
			tr1 = (nstcall = 1, F632_4185(loc6));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			(nstcall = 1, F632_4205(loc6));
			for (;;) {
				RTHOOK(14);
				tb1 = '\01';
				tb2 = (nstcall = 1, F517_3434(loc6));
				if (!tb2) {
					tr1 = (nstcall = 1, F395_2708(loc6));
					tb1 = (EIF_BOOLEAN)(tr1 == arg2);
				}
				if (tb1) break;
				RTHOOK(15);
				tr1 = (nstcall = 1, F395_2708(loc6));
				loc1 = (nstcall = 0, F58_1266(Current, tr1, arg2));
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(17);
					(nstcall = 1, F632_4221(RTCW(Result), loc1));
				}
				RTHOOK(18);
				(nstcall = 1, F632_4207(loc6));
			}
			RTHOOK(19);
			(nstcall = 1, F632_4210(loc6, loc2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit54 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
