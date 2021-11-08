/*
 * Code for class REFLECTOR_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re61.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REFLECTOR_HELPER}.is_pre_ecma_mapping_disabled */
EIF_BOOLEAN F63_1343 (EIF_REFERENCE Current)
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
	
	RTEAA("is_pre_ecma_mapping_disabled", 62, Current, 0, 0, 1286);
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

/* {REFLECTOR_HELPER}.is_valid_type_string */
EIF_BOOLEAN F63_1344 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTEAA("is_valid_type_string", 62, Current, 5, 1, 1287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		loc4 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F910_7045(RTCW(loc4), arg1));
		RTHOOK(3);
		(nstcall = 1, F907_6829(RTCW(loc4)));
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
		ti4_1 = (nstcall = 1, F909_7004(RTCW(loc4), tw1, ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			tw1 = (nstcall = 1, F910_7051(RTCW(loc4), loc3));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
			if ((EIF_BOOLEAN)(tw1 != tw2)) {
				RTHOOK(8);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				tb2 = (EIF_BOOLEAN) (loc2 < loc3);
			}
			if (tb2) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
				ti4_1 = (nstcall = 1, F909_7014(RTCW(loc4), tw1));
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
				ti4_2 = (nstcall = 1, F909_7014(RTCW(loc4), tw1));
				tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb1) {
				RTHOOK(10);
				tr1 = (nstcall = 1, F910_7131(RTCW(loc4), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(11);
				(nstcall = 1, F907_6829(RTCW(loc1)));
				RTHOOK(12);
				if ((nstcall = 0, F63_1346(Current, loc1))) {
					RTHOOK(13);
					tr1 = (nstcall = 1, F910_7131(RTCW(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
					loc5 = (nstcall = 0, F63_1347(Current, tr1));
					RTHOOK(14);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTHOOK(15);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(16);
						(nstcall = 1, F632_4205(RTCW(loc5)));
						for (;;) {
							RTHOOK(17);
							tb1 = '\01';
							tb2 = (nstcall = 1, F517_3434(RTCW(loc5)));
							if (!tb2) {
								tb1 = (EIF_BOOLEAN) !Result;
							}
							if (tb1) break;
							RTHOOK(18);
							tr1 = (nstcall = 1, F632_4179(RTCW(loc5)));
							Result = (nstcall = 0, F63_1344(Current, tr1));
							RTHOOK(19);
							(nstcall = 1, F632_4207(RTCW(loc5)));
						}
					}
				}
			}
		} else {
			RTHOOK(20);
			Result = (nstcall = 0, F63_1346(Current, loc4));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTOR_HELPER}.mapped_type */
EIF_REFERENCE F63_1345 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("mapped_type", 62, Current, 1, 1, 1288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F63_1343(Current))) {
		RTHOOK(3);
		loc1 = RTOUCR(229,(nstcall = 0, F63_1348), (Current));
		RTHOOK(4);
		(nstcall = 1, F624_4067(RTCW(loc1), arg1));
		RTHOOK(5);
		tb1 = (nstcall = 1, F624_4057(RTCW(loc1)));
		if (tb1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(8);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("mapped_type_not_void", EX_POST);
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

/* {REFLECTOR_HELPER}.is_valid_identifier */
EIF_BOOLEAN F63_1346 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_valid_identifier", 62, Current, 3, 1, 1289);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, ((EIF_INTEGER_32) 1L)));
		loc3 = (EIF_CHARACTER_32) tw1;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4803[Dtype(RTCW(arg1))-907])(arg1));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_32) 33U) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_32) 63U))) {
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(7);
			tr1 = RTOUCR(230,(nstcall = 0, F63_1351), (Current));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4814[Dtype(RTCW(arg1))-907])(arg1, tr1, ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(230,(nstcall = 0, F63_1351), (Current)))+ _LNGOFF_1_1_0_2_);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(9);
				tr1 = RTOUCR(231,(nstcall = 0, F63_1352), (Current));
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4814[Dtype(RTCW(arg1))-907])(arg1, tr1, ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
					RTHOOK(10);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(231,(nstcall = 0, F63_1352), (Current)))+ _LNGOFF_1_1_0_2_);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(11);
					tr1 = RTOUCR(232,(nstcall = 0, F63_1353), (Current));
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4814[Dtype(RTCW(arg1))-907])(arg1, tr1, ((EIF_INTEGER_32) 1L)));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(12);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(232,(nstcall = 0, F63_1353), (Current)))+ _LNGOFF_1_1_0_2_);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(13);
						tr1 = RTOUCR(233,(nstcall = 0, F63_1354), (Current));
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4814[Dtype(RTCW(arg1))-907])(arg1, tr1, ((EIF_INTEGER_32) 1L)));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(14);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(233,(nstcall = 0, F63_1354), (Current)))+ _LNGOFF_1_1_0_2_);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(15);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					}
				}
			}
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			for (;;) {
				RTHOOK(17);
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == loc2)) {
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc1));
					tb2 = EIF_TEST(isspace(tw1));
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) break;
				RTHOOK(18);
				loc1++;
			}
		}
		RTHOOK(19);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc1));
		tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = tw1;
		tb2 = (nstcall = 1, F834_5771(RTCW(tr1)));
		if (tb2) {
			RTHOOK(20);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc1 == loc2)) break;
				RTHOOK(22);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc1));
				loc3 = (EIF_CHARACTER_32) tw1;
				RTHOOK(23);
				tb2 = '\01';
				tb3 = '\01';
				tr1 = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_CHARACTER_32 *)tr1 = loc3;
				tb4 = (nstcall = 1, F834_5771(RTCW(tr1)));
				if (!tb4) {
					tb4 = EIF_TEST(isdigit(loc3));
					tb3 = tb4;
				}
				if (!tb3) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
					tb2 = (EIF_BOOLEAN)(loc3 == tw1);
				}
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(24);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(25);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				}
				RTHOOK(26);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTOR_HELPER}.parameters_decomposition */
EIF_REFERENCE F63_1347 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("parameters_decomposition", 62, Current, 5, 1, 1290);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,908,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F632_4174(RTCW(Result), ((EIF_INTEGER_32) 5L)));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5036[Dtype(arg1)-908]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		RTHOOK(7);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4767[Dtype(RTCW(arg1))-907])(arg1, loc1));
		switch (tw1) {
			case (EIF_CHARACTER_8) ',':
				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(9);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
					(nstcall = 1, F632_4215(RTCW(Result), tr1));
					RTHOOK(10);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				}
				break;
			case (EIF_CHARACTER_8) '[':
				RTHOOK(11);
				loc5++;
				break;
			case (EIF_CHARACTER_8) ']':
				RTHOOK(12);
				loc5--;
				RTHOOK(13);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L));
				break;
		}
		RTHOOK(14);
		loc1++;
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc3 && (EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(16);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4844[Dtype(RTCW(arg1))-907])(arg1, loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		(nstcall = 1, F632_4215(RTCW(Result), tr1));
	} else {
		RTHOOK(17);
		Result = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTOR_HELPER}.pre_ecma_type_mapping */
static EIF_REFERENCE F63_1348_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(229)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("pre_ecma_type_mapping", 62, Current, 0, 0, 1291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,628,0xFF01,907,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 628, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	(nstcall = -1, F624_4026(RTCW(tr1), ((EIF_INTEGER_32) 12L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("STRING_8",8,823190840);
	tr2 = RTMS_EX_H("STRING",6,1544365639);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(3);
	tr1 = RTMS_EX_H("INTEGER_32",10,674743602);
	tr2 = RTMS_EX_H("INTEGER",7,1551244370);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(4);
	tr1 = RTMS_EX_H("INTEGER_32_REF",14,1761313862);
	tr2 = RTMS_EX_H("INTEGER_REF",11,938014022);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(5);
	tr1 = RTMS_EX_H("CHARACTER_8",11,211000120);
	tr2 = RTMS_EX_H("CHARACTER",9,1468138066);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(6);
	tr1 = RTMS_EX_H("CHARACTER_8_REF",15,732893766);
	tr2 = RTMS_EX_H("CHARACTER_REF",13,483102278);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(7);
	tr1 = RTMS_EX_H("CHARACTER_32",12,329034290);
	tr2 = RTMS_EX_H("WIDE_CHARACTER",14,1657403218);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(8);
	tr1 = RTMS_EX_H("CHARACTER_32_REF",16,998840390);
	tr2 = RTMS_EX_H("WIDE_CHARACTER_REF",18,195639622);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(9);
	tr1 = RTMS_EX_H("REAL_32",7,1887301170);
	tr2 = RTMS_EX_H("REAL",4,1380270412);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(10);
	tr1 = RTMS_EX_H("REAL_32_REF",11,583508806);
	tr2 = RTMS_EX_H("REAL_REF",8,2115659078);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(11);
	tr1 = RTMS_EX_H("REAL_64",7,1887301940);
	tr2 = RTMS_EX_H("DOUBLE",6,1564708421);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	RTHOOK(12);
	tr1 = RTMS_EX_H("REAL_64_REF",11,589422406);
	tr2 = RTMS_EX_H("DOUBLE_REF",10,1262894918);
	(nstcall = 1, F624_4071(RTCW(Result), tr1, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("pre_ecma_type_mapping_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F63_1348 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(229,F63_1348_body,(Current));
}

/* {REFLECTOR_HELPER}.attached_keyword */

EIF_REFERENCE F63_1351 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (230,RTMS_EX_H("attached",8,174222180));
}

/* {REFLECTOR_HELPER}.detachable_keyword */

EIF_REFERENCE F63_1352 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (231,RTMS_EX_H("detachable",10,1071588197));
}

/* {REFLECTOR_HELPER}.expanded_keyword */

EIF_REFERENCE F63_1353 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (232,RTMS_EX_H("expanded",8,217352804));
}

/* {REFLECTOR_HELPER}.separate_keyword */

EIF_REFERENCE F63_1354 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (233,RTMS_EX_H("separate",8,1461880421));
}

/* {REFLECTOR_HELPER}.type_keyword */

EIF_REFERENCE F63_1355 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (234,RTMS_EX_H("TYPE",4,1415139397));
}

void EIF_Minit61 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
