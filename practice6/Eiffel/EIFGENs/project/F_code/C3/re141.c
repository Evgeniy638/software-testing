/*
 * Code for class REFLECTED_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re141.h"
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

/* {REFLECTED_OBJECT}.class_name */
EIF_REFERENCE F138_2170 (EIF_REFERENCE Current)
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
	
	RTEAA("class_name", 137, Current, 0, 0, 2105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_553(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.type_name */
EIF_REFERENCE F138_2171 (EIF_REFERENCE Current)
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
	
	RTEAA("type_name", 137, Current, 0, 0, 2106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_556(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.dynamic_type */
EIF_INTEGER_32 F138_2172 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {REFLECTED_OBJECT}.generic_count */
EIF_INTEGER_32 F138_2173 (EIF_REFERENCE Current)
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
	
	RTEAA("generic_count", 137, Current, 0, 0, 2108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_657(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.generic_dynamic_type */
EIF_INTEGER_32 F138_2174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_dynamic_type", 137, Current, 0, 1, 2109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_generic", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F138_2173(Current)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F138_2173(Current)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_658(Current, ti4_1, arg1));
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
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field */
EIF_REFERENCE F138_2175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field", 137, Current, 0, 1, 2110);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch ((nstcall = 0, F138_2191(Current, arg1))) {
		case 9L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F138_2203(Current, arg1));
			break;
		case 10L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F138_2204(Current, arg1));
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F138_2205(Current, arg1));
			break;
		case 11L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F138_2206(Current, arg1));
			break;
		case 13L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F138_2199(Current, arg1));
			break;
		case 14L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F138_2200(Current, arg1));
			break;
		case 15L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F138_2201(Current, arg1));
			break;
		case 16L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F138_2202(Current, arg1));
			break;
		case 5L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F138_2207(Current, arg1));
			break;
		case 6L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F138_2209(Current, arg1));
			break;
		case 2L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F138_2196(Current, arg1));
			break;
		case 12L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F138_2197(Current, arg1));
			break;
		case 3L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F138_2198(Current, arg1));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F138_2208(Current, arg1));
			break;
		case 1L:
		case 7L:
			RTHOOK(19);
			Result = (nstcall = 0, F138_2176(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.reference_field */
EIF_REFERENCE F138_2176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_field", 137, Current, 0, 1, 2111);
	RTSA(dtype);
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
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 1L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 7L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_588(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_instance_of */
EIF_BOOLEAN F138_2177 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_instance_of", 137, Current, 0, 1, 2112);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1949[dtype-140])(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_560(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special */
EIF_BOOLEAN F138_2178 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special", 137, Current, 0, 0, 2113);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_619(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_expanded */
EIF_BOOLEAN F138_2179 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_expanded", 137, Current, 0, 0, 2114);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_620(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_reference */
EIF_BOOLEAN F138_2180 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference", 137, Current, 0, 0, 2115);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_621(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_expanded */
EIF_BOOLEAN F138_2181 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_expanded", 137, Current, 0, 0, 2116);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_622(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_tuple */
EIF_BOOLEAN F138_2182 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple", 137, Current, 0, 0, 2117);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_623(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_transient */
EIF_BOOLEAN F138_2183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_transient", 137, Current, 0, 1, 2118);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_572(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_expanded */
EIF_BOOLEAN F138_2184 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_statically_expanded", 137, Current, 0, 1, 2119);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_573(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_copy_semantics_field */
EIF_BOOLEAN F138_2185 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_copy_semantics_field", 137, Current, 0, 1, 2120);
	RTSA(dtype);
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
		RTCT("is_reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_580(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_copy_semantics_item */
EIF_BOOLEAN F138_2186 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("is_special_copy_semantics_item", 137, Current, 1, 1, 2121);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_of_reference", EX_PRE);
		RTTE((nstcall = 0, F138_2180(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1949[dtype-140])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(557, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2177[Dtype(loc1)-558])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_581(Current, arg1, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_attached */
EIF_BOOLEAN F138_2187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_statically_attached", 137, Current, 0, 1, 2122);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F138_2192(Current, arg1));
	Result = (nstcall = 0, F29_569(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_conforms_to */
EIF_BOOLEAN F138_2188 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("field_conforms_to", 137, Current, 0, 2, 2123);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_source_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_field_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F29_570(Current, arg2));
	Result = (nstcall = 0, F29_560(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_name */
EIF_REFERENCE F138_2189 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("field_name", 137, Current, 0, 1, 2124);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(907, 0x01).id, 907, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	tp1 = (nstcall = 0, F29_585(Current, arg1, ti4_1));
	(nstcall = -1, F906_6751(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {REFLECTED_OBJECT}.field_offset */
EIF_INTEGER_32 F138_2190 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field_offset", 137, Current, 0, 1, 2125);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_583(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_type */
EIF_INTEGER_32 F138_2191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field_type", 137, Current, 0, 1, 2126);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_586(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {REFLECTED_OBJECT}.field_static_type */
EIF_INTEGER_32 F138_2192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field_static_type", 137, Current, 0, 1, 2127);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_587(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {REFLECTED_OBJECT}.special_copy_semantics_item */
EIF_REFERENCE F138_2194 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
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
	
	RTEAA("special_copy_semantics_item", 137, Current, 1, 1, 2128);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F138_2178(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_reference", EX_PRE);
		RTTE((nstcall = 0, F138_2180(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1949[dtype-140])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(557, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2177[Dtype(loc1)-558])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(140, 0x01).id, 140, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = (nstcall = 0, F1_14(Current));
	(nstcall = -1, F141_2328(RTCW(Result), tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_8_field */
EIF_CHARACTER_8 F138_2196 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_field", 137, Current, 0, 1, 2129);
	RTSA(dtype);
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
		RTCT("character_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_589(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_32_field */
EIF_CHARACTER_32 F138_2197 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_field", 137, Current, 0, 1, 2130);
	RTSA(dtype);
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
		RTCT("character_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_590(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.boolean_field */
EIF_BOOLEAN F138_2198 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_field", 137, Current, 0, 1, 2131);
	RTSA(dtype);
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
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_591(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_8_field */
EIF_NATURAL_8 F138_2199 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_field", 137, Current, 0, 1, 2132);
	RTSA(dtype);
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
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_592(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_16_field */
EIF_NATURAL_16 F138_2200 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_field", 137, Current, 0, 1, 2133);
	RTSA(dtype);
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
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_593(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_32_field */
EIF_NATURAL_32 F138_2201 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_field", 137, Current, 0, 1, 2134);
	RTSA(dtype);
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
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_594(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_64_field */
EIF_NATURAL_64 F138_2202 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_field", 137, Current, 0, 1, 2135);
	RTSA(dtype);
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
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_595(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_8_field */
EIF_INTEGER_8 F138_2203 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_field", 137, Current, 0, 1, 2136);
	RTSA(dtype);
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
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_596(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_16_field */
EIF_INTEGER_16 F138_2204 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_field", 137, Current, 0, 1, 2137);
	RTSA(dtype);
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
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_597(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_32_field */
EIF_INTEGER_32 F138_2205 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_field", 137, Current, 0, 1, 2138);
	RTSA(dtype);
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
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_598(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_64_field */
EIF_INTEGER_64 F138_2206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_field", 137, Current, 0, 1, 2139);
	RTSA(dtype);
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
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_599(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_32_field */
EIF_REAL_32 F138_2207 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_field", 137, Current, 0, 1, 2140);
	RTSA(dtype);
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
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_600(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.pointer_field */
EIF_POINTER F138_2208 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_field", 137, Current, 0, 1, 2141);
	RTSA(dtype);
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
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_601(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_64_field */
EIF_REAL_64 F138_2209 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_field", 137, Current, 0, 1, 2142);
	RTSA(dtype);
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
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_602(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.set_reference_field */
void F138_2210 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_reference_field", 137, Current, 0, 2, 2143);
	RTSA(dtype);
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
		RTCT("reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F138_2187(Current, arg1))) {
			tb1 = (EIF_BOOLEAN)(arg2 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (nstcall = 1, F1_5(arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3991[Dtype(RTCW(tr1))-794])(tr1));
			ti4_2 = (nstcall = 0, F138_2192(Current, arg1));
			tb1 = (nstcall = 0, F138_2188(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	tr1 = RTCCL(arg2);
	(nstcall = 0, F29_627(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_64_field */
void F138_2211 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_64_field", 137, Current, 0, 2, 2144);
	RTSA(dtype);
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
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_628(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_double_field */
void F138_2212 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_double_field", 137, Current, 0, 2, 2145);
	RTSA(dtype);
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
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_628(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_8_field */
void F138_2213 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_8_field", 137, Current, 0, 2, 2146);
	RTSA(dtype);
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
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_629(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_field */
void F138_2214 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_field", 137, Current, 0, 2, 2147);
	RTSA(dtype);
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
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_629(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_32_field */
void F138_2215 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_32_field", 137, Current, 0, 2, 2148);
	RTSA(dtype);
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
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_630(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_boolean_field */
void F138_2216 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_boolean_field", 137, Current, 0, 2, 2149);
	RTSA(dtype);
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
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_631(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_8_field */
void F138_2217 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_8_field", 137, Current, 0, 2, 2150);
	RTSA(dtype);
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
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_632(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_16_field */
void F138_2218 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_16_field", 137, Current, 0, 2, 2151);
	RTSA(dtype);
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
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_633(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_32_field */
void F138_2219 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_32_field", 137, Current, 0, 2, 2152);
	RTSA(dtype);
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
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_634(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_64_field */
void F138_2220 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_64_field", 137, Current, 0, 2, 2153);
	RTSA(dtype);
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
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_635(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_8_field */
void F138_2221 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_8_field", 137, Current, 0, 2, 2154);
	RTSA(dtype);
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
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_636(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_16_field */
void F138_2222 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_16_field", 137, Current, 0, 2, 2155);
	RTSA(dtype);
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
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_637(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_field */
void F138_2223 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_field", 137, Current, 0, 2, 2156);
	RTSA(dtype);
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
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_638(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_32_field */
void F138_2224 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_32_field", 137, Current, 0, 2, 2157);
	RTSA(dtype);
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
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_638(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_64_field */
void F138_2225 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_64_field", 137, Current, 0, 2, 2158);
	RTSA(dtype);
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
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_639(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_32_field */
void F138_2226 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_32_field", 137, Current, 0, 2, 2159);
	RTSA(dtype);
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
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_640(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_field */
void F138_2227 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_field", 137, Current, 0, 2, 2160);
	RTSA(dtype);
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
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_640(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_pointer_field */
void F138_2228 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pointer_field", 137, Current, 0, 2, 2161);
	RTSA(dtype);
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
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F138_2191(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	(nstcall = 0, F29_641(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.field_count */
EIF_INTEGER_32 F138_2229 (EIF_REFERENCE Current)
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
	
	RTEAA("field_count", 137, Current, 0, 0, 2162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_582(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.persistent_field_count */
EIF_INTEGER_32 F138_2230 (EIF_REFERENCE Current)
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
	
	RTEAA("persistent_field_count", 137, Current, 0, 0, 2163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F29_574(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_positive", EX_POST);
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

/* {REFLECTED_OBJECT}.physical_size */
EIF_INTEGER_32 F138_2231 (EIF_REFERENCE Current)
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size", 137, Current, 1, 0, 2164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F138_2233(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size */
EIF_INTEGER_32 F138_2232 (EIF_REFERENCE Current)
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("deep_physical_size", 137, Current, 1, 0, 2165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F138_2234(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.physical_size_64 */
EIF_NATURAL_64 F138_2233 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size_64", 137, Current, 0, 0, 2166);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R2015[dtype-140])(Current));
	Result = (nstcall = 0, F29_584(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size_64 */
EIF_NATURAL_64 F138_2234 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 137, Current, 3, 0, 2167);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(2);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1949[dtype-140])(Current));
	tr2 = RTCCL(tr1);
	(nstcall = 1, F59_1289(RTCW(loc1), tr2));
	RTHOOK(3);
	(nstcall = 1, F59_1293(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(4);
	(nstcall = 1, F59_1297(RTCW(loc1)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2389[Dtype(loc3)-546])(loc3));
		for (;;) {
			RTHOOK(7);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(loc3)-546])(loc3));
			if (tb1) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2355[Dtype(loc3)-546])(loc3));
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			Result += (nstcall = 0, F29_584(Current, loc2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2405[Dtype(loc3)-546])(loc3));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit141 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
