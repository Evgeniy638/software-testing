/*
 * Code for class INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in139.h"
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

/* {INTERNAL}.is_instance_of */
EIF_BOOLEAN F137_2106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_instance_of", 136, Current, 0, 2, 2091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2074(Current, ti4_1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_of */
EIF_REFERENCE F137_2107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("type_of", 136, Current, 0, 1, 2092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1_5(arg1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNTY2(eif_new_type(65534, 0x00), 0x00);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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

/* {INTERNAL}.is_special */
EIF_BOOLEAN F137_2108 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_special", 136, Current, 0, 1, 2093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2083(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_tuple */
EIF_BOOLEAN F137_2109 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_tuple", 136, Current, 1, 1, 2094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,826,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_transient */
EIF_BOOLEAN F137_2110 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_transient", 136, Current, 0, 2, 2095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2086(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_expanded */
EIF_BOOLEAN F137_2111 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_expanded", 136, Current, 0, 2, 2096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2087(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.class_name */
EIF_REFERENCE F137_2112 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("class_name", 136, Current, 0, 1, 2097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_4(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name */
EIF_REFERENCE F137_2113 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("type_name", 136, Current, 0, 1, 2098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr2 = RTCCL(arg1);
	tr2 = (nstcall = 0, F137_2114(Current, tr2));
	tr1 = RTLNS(eif_new_type(30, 0x00).id, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F31_673(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name_32 */
EIF_REFERENCE F137_2114 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("type_name_32", 136, Current, 0, 1, 2099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_5(arg1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3988[Dtype(RTCW(tr1))-794])(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.dynamic_type */
EIF_INTEGER_32 F137_2115 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dynamic_type", 136, Current, 0, 1, 2100);
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
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(198,(nstcall = 0, F137_2167), (Current)))+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_count */
EIF_INTEGER_32 F137_2116 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_count", 136, Current, 0, 1, 2101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2173(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_dynamic_type */
EIF_INTEGER_32 F137_2117 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_dynamic_type", 136, Current, 0, 2, 2102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("obj_generic", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F137_2116(Current, tr1)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) (arg2 <= (nstcall = 0, F137_2116(Current, tr1)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2174(RTCW(tr1), arg2));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.field */
EIF_REFERENCE F137_2118 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field", 136, Current, 0, 2, 2103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F137_2108(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = (nstcall = 1, F138_2175(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reference_field */
EIF_REFERENCE F137_2119 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("reference_field", 136, Current, 0, 2, 2042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F137_2108(Current, tr1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_type", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(7);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = (nstcall = 1, F138_2176(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_name */
EIF_REFERENCE F137_2120 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("field_name", 136, Current, 0, 2, 2043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F137_2108(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2097(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.field_offset */
EIF_INTEGER_32 F137_2121 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_offset", 136, Current, 0, 2, 2044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F137_2108(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2190(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_type */
EIF_INTEGER_32 F137_2122 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("field_type", 136, Current, 0, 2, 2045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2099(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("field_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.expanded_field_type */
EIF_REFERENCE F137_2123 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("expanded_field_type", 136, Current, 0, 2, 2046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_expanded", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	ti4_1 = (nstcall = 0, F136_2100(Current, arg1, ti4_1));
	Result = (nstcall = 0, F136_2088(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.character_8_field */
EIF_CHARACTER_8 F137_2124 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_8_field", 136, Current, 0, 2, 2047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tc1 = (nstcall = 1, F138_2196(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_field */
EIF_CHARACTER_8 F137_2125 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_field", 136, Current, 0, 2, 2048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tc1 = (nstcall = 1, F138_2196(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_32_field */
EIF_CHARACTER_32 F137_2126 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_32_field", 136, Current, 0, 2, 2049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tw1 = (nstcall = 1, F138_2197(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.boolean_field */
EIF_BOOLEAN F137_2127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("boolean_field", 136, Current, 0, 2, 2050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tb1 = (nstcall = 1, F138_2198(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_8_field */
EIF_NATURAL_8 F137_2128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_8_field", 136, Current, 0, 2, 2051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tu1_1 = (nstcall = 1, F138_2199(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_16_field */
EIF_NATURAL_16 F137_2129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_16_field", 136, Current, 0, 2, 2052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tu2_1 = (nstcall = 1, F138_2200(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_32_field */
EIF_NATURAL_32 F137_2130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_32_field", 136, Current, 0, 2, 2053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tu4_1 = (nstcall = 1, F138_2201(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_64_field */
EIF_NATURAL_64 F137_2131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_64_field", 136, Current, 0, 2, 2054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tu8_1 = (nstcall = 1, F138_2202(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_8_field */
EIF_INTEGER_8 F137_2132 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_8_field", 136, Current, 0, 2, 2055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti1_1 = (nstcall = 1, F138_2203(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_16_field */
EIF_INTEGER_16 F137_2133 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_16_field", 136, Current, 0, 2, 2056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti2_1 = (nstcall = 1, F138_2204(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_field */
EIF_INTEGER_32 F137_2134 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_field", 136, Current, 0, 2, 2057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2205(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_32_field */
EIF_INTEGER_32 F137_2135 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_32_field", 136, Current, 0, 2, 2058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2205(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_64_field */
EIF_INTEGER_64 F137_2136 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_64_field", 136, Current, 0, 2, 2059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti8_1 = (nstcall = 1, F138_2206(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_32_field */
EIF_REAL_32 F137_2137 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_32_field", 136, Current, 0, 2, 2060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr4_1 = (nstcall = 1, F138_2207(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_field */
EIF_REAL_32 F137_2138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_field", 136, Current, 0, 2, 2061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr4_1 = (nstcall = 1, F138_2207(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.pointer_field */
EIF_POINTER F137_2139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("pointer_field", 136, Current, 0, 2, 2062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tp1 = (nstcall = 1, F138_2208(RTCW(tr1), arg1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_64_field */
EIF_REAL_64 F137_2140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_64_field", 136, Current, 0, 2, 2063);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr8_1 = (nstcall = 1, F138_2209(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.double_field */
EIF_REAL_64 F137_2141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("double_field", 136, Current, 0, 2, 2064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr8_1 = (nstcall = 1, F138_2209(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.set_reference_field */
void F137_2142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
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
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_reference_field", 136, Current, 0, 3, 2065);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		tr1 = RTCCL(arg2);
		ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
		ti4_1 = (nstcall = 0, F136_2100(Current, arg1, ti4_1));
		if ((nstcall = 0, F136_2085(Current, ti4_1))) {
			tb1 = (EIF_BOOLEAN)(arg3 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
			tr1 = RTCCL(arg2);
			ti4_2 = (nstcall = 0, F137_2115(Current, tr1));
			ti4_2 = (nstcall = 0, F136_2100(Current, arg1, ti4_2));
			tb1 = (nstcall = 0, F136_2075(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(8);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg3);
	(nstcall = 1, F138_2210(RTCW(tr1), arg1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_64_field */
void F137_2143 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_64_field", 136, Current, 0, 3, 2066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2211(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_double_field */
void F137_2144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_double_field", 136, Current, 0, 3, 2067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2211(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_8_field */
void F137_2145 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_8_field", 136, Current, 0, 3, 2068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2213(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_field */
void F137_2146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_field", 136, Current, 0, 3, 2069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2213(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_32_field */
void F137_2147 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_32_field", 136, Current, 0, 3, 2070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2215(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_boolean_field */
void F137_2148 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_boolean_field", 136, Current, 0, 3, 2071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2216(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_8_field */
void F137_2149 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_8_field", 136, Current, 0, 3, 2072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2217(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_16_field */
void F137_2150 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_16_field", 136, Current, 0, 3, 2073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2218(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_32_field */
void F137_2151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_32_field", 136, Current, 0, 3, 2074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2219(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_64_field */
void F137_2152 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_64_field", 136, Current, 0, 3, 2075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2220(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_8_field */
void F137_2153 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_8_field", 136, Current, 0, 3, 2076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2221(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_16_field */
void F137_2154 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_16_field", 136, Current, 0, 3, 2077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2222(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_field */
void F137_2155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_field", 136, Current, 0, 3, 2078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2224(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_32_field */
void F137_2156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_32_field", 136, Current, 0, 3, 2079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2224(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_64_field */
void F137_2157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_64_field", 136, Current, 0, 3, 2080);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2225(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_32_field */
void F137_2158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_32_field", 136, Current, 0, 3, 2081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2226(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_field */
void F137_2159 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_field", 136, Current, 0, 3, 2082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2226(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_pointer_field */
void F137_2160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_pointer_field", 136, Current, 0, 3, 2083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F137_2161(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F137_2122(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	(nstcall = 1, F138_2228(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.field_count */
EIF_INTEGER_32 F137_2161 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_count", 136, Current, 0, 1, 2084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F142_2346(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(198,(nstcall = 0, F137_2167), (Current));
	ti4_1 = (nstcall = 1, F138_2229(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.persistent_field_count */
EIF_INTEGER_32 F137_2162 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("persistent_field_count", 136, Current, 0, 1, 2085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F137_2115(Current, tr1));
	Result = (nstcall = 0, F136_2103(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_positive", EX_POST);
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

/* {INTERNAL}.physical_size */
EIF_INTEGER_32 F137_2163 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size", 136, Current, 1, 1, 2086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F29_584(Current, arg1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size */
EIF_INTEGER_32 F137_2164 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("deep_physical_size", 136, Current, 1, 1, 2087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, F137_2166(Current, tr1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.physical_size_64 */
EIF_NATURAL_64 F137_2165 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("physical_size_64", 136, Current, 0, 1, 2088);
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
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F29_584(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size_64 */
EIF_NATURAL_64 F137_2166 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 136, Current, 2, 1, 2089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F59_1289(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F59_1293(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	(nstcall = 1, F59_1297(RTCW(loc1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[Dtype(loc2)-546])(loc2));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(loc2)-546])(loc2));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[Dtype(loc2)-546])(loc2));
			tr2 = RTCCL(tr1);
			Result += (nstcall = 0, F137_2165(Current, tr2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[Dtype(loc2)-546])(loc2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reflected_object */
static EIF_REFERENCE F137_2167_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(198)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reflected_object", 136, Current, 0, 0, 2090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(141, 0x01).id, 141, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	(nstcall = -1, F142_2337(RTCW(tr1), tr2));
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

EIF_REFERENCE F137_2167 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(198,F137_2167_body,(Current));
}

void EIF_Minit139 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
