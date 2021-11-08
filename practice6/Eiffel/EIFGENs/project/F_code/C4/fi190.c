/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi190.h"
#include "eif_store.h"
#include "eif_file.h"
#include "eif_retrieve.h"
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

/* {FILE}.make */
void F790_5012 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 789, Current, 0, 1, 9943);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F325_2638(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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

/* {FILE}.make_with_name */
void F790_5013 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_with_name", 789, Current, 0, 1, 9944);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("fn_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(6);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	(nstcall = -1, F905_6653(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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
}

/* {FILE}.make_with_path */
void F790_5014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_with_path", 789, Current, 0, 1, 9945);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F794_5370(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5177(Current, arg1));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(6);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	(nstcall = -1, F905_6653(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F790_5023(Current));
		tb1 = (nstcall = 1, F794_5393(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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
}

/* {FILE}.make_open_read */
void F790_5015 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_read", 789, Current, 0, 1, 9946);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5083(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
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

/* {FILE}.make_open_write */
void F790_5016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_write", 789, Current, 0, 1, 9947);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5084(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.make_open_append */
void F790_5017 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_append", 789, Current, 0, 1, 9948);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5085(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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

/* {FILE}.make_open_read_write */
void F790_5018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_read_write", 789, Current, 0, 1, 9949);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5086(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.make_create_read_write */
void F790_5019 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_create_read_write", 789, Current, 0, 1, 9950);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5087(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.make_open_read_append */
void F790_5020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_read_append", 789, Current, 0, 1, 9951);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, arg1));
	RTHOOK(4);
	(nstcall = 0, F790_5088(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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
}

/* {FILE}.make_open_temporary */
void F790_5021 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_temporary", 789, Current, 0, 0, 9952);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("eiftmp",6,1918286704);
	(nstcall = 0, F790_5022(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.make_open_temporary_with_prefix */
void F790_5022 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("make_open_temporary_with_prefix", 789, Current, 1, 1, 9953);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F905_6712(RTCW(arg1)));
	tr2 = RTMS32_EX_H("X\000\000\000X\000\000\000X\000\000\000X\000\000\000X\000\000\000X\000\000\000",6,1655875672);
	tr2 = (nstcall = 1, F910_7103(RTCW(tr1), tr2));
	(nstcall = 0, F790_5176(Current, tr2));
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3630[dtype-790])(Current));
	loc1 = (nstcall = 0, F790_5227(Current, tp1, tb1));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tr2 = (nstcall = 1, F553_3917(RTCW(tr1), tp1));
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3734[dtype-790])(Current, tr2));
	RTHOOK(4);
	(nstcall = 0, F790_5092(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.path */
EIF_REFERENCE F790_5023 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("path", 789, Current, 0, 0, 9954);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(793, 0x01).id, 793, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = -1, F794_5366(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("entry_not_empty", EX_POST);
		tb1 = (nstcall = 1, F794_5370(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {FILE}.name */
EIF_REFERENCE F790_5024 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("name", 789, Current, 0, 0, 9955);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F905_6709(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_empty", EX_POST);
		tb1 = (nstcall = 1, F325_2638(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {FILE}.item */
EIF_CHARACTER_8 F790_5025 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item", 789, Current, 0, 0, 9956);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5046(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3691[dtype-790])(Current));
	RTHOOK(4);
	Result = *(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]);
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[dtype-546])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.position */
EIF_INTEGER_32 F790_5026 (EIF_REFERENCE Current)
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
	
	RTEAA("position", 789, Current, 0, 0, 9957);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current))) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		Result = (nstcall = 0, F790_5201(Current, tp1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.descriptor */
EIF_INTEGER_32 F790_5027 (EIF_REFERENCE Current)
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
	
	RTEAA("descriptor", 789, Current, 0, 0, 9958);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_handle", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O3895[dtype-789]), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("file_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	Result = (nstcall = 0, F790_5190(Current, tp1));
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + O3895[dtype-789]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F790_5028 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3895[Dtype(Current)-789]);
}


/* {FILE}.separator */
EIF_CHARACTER_8 F790_5029 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O3746[Dtype(Current)-789]);
}


/* {FILE}.file_pointer */
EIF_POINTER F790_5030 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O3747[Dtype(Current)-789]);
}


/* {FILE}.file_info */
EIF_REFERENCE F790_5031 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("file_info", 789, Current, 0, 0, 9962);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(2);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = (nstcall = 1, F1_14(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.inode */
EIF_INTEGER_32 F790_5032 (EIF_REFERENCE Current)
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
	
	RTEAA("inode", 789, Current, 0, 0, 9963);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3902(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.links */
EIF_INTEGER_32 F790_5033 (EIF_REFERENCE Current)
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
	
	RTEAA("links", 789, Current, 0, 0, 9964);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3911(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.user_id */
EIF_INTEGER_32 F790_5034 (EIF_REFERENCE Current)
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
	
	RTEAA("user_id", 789, Current, 0, 0, 9965);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3904(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.group_id */
EIF_INTEGER_32 F790_5035 (EIF_REFERENCE Current)
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
	
	RTEAA("group_id", 789, Current, 0, 0, 9966);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3905(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.protection */
EIF_INTEGER_32 F790_5036 (EIF_REFERENCE Current)
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
	
	RTEAA("protection", 789, Current, 0, 0, 9967);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3900(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.owner_name */
EIF_REFERENCE F790_5037 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("owner_name", 789, Current, 0, 0, 9968);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = (nstcall = 1, F553_3912(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.date */
EIF_INTEGER_32 F790_5038 (EIF_REFERENCE Current)
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
	
	RTEAA("date", 789, Current, 0, 0, 9969);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F790_5225(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.access_date */
EIF_INTEGER_32 F790_5039 (EIF_REFERENCE Current)
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
	
	RTEAA("access_date", 789, Current, 0, 0, 9970);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F790_5226(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.retrieved */
EIF_REFERENCE F790_5040 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("retrieved", 789, Current, 0, 0, 9971);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3657[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(620, 0x01).id, 620, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(3,(nstcall = 1, F621_3959), (RTCW(tr1)));
	(nstcall = 1, F1_31(RTCW(tr2)));
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F790_5027(Current));
	Result = (nstcall = 0, F790_5221(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.null_path */
EIF_REFERENCE F790_5041 (EIF_REFERENCE Current)
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
	
	RTEAA("null_path", 789, Current, 0, 0, 9972);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(793, 0x01).id, 793, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tr1 = (nstcall = 0, F790_5042(Current));
	(nstcall = -1, F794_5362(RTCW(Result), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.null_name */
EIF_REFERENCE F790_5042 (EIF_REFERENCE Current)
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
	
	RTEAA("null_name", 789, Current, 0, 0, 9973);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F116_1913(Current))) {
		RTHOOK(2);
		Result = RTMS_EX_H("nul",3,7239020);
	} else {
		RTHOOK(3);
		if ((nstcall = 0, F116_1915(Current))) {
			RTHOOK(4);
			Result = RTMS_EX_H("NL:",3,5131322);
		} else {
			RTHOOK(5);
			if ((nstcall = 0, F116_1917(Current))) {
				RTHOOK(6);
				Result = RTMS_EX_H("/null",5,1853550188);
			} else {
				RTHOOK(7);
				Result = RTMS_EX_H("/dev/null",9,2028729708);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.count */
EIF_INTEGER_32 F790_5043 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA("count", 789, Current, 0, 0, 9974);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) !(nstcall = 0, F790_5074(Current))) {
			RTHOOK(3);
			(nstcall = 0, F790_5184(Current));
			RTHOOK(4);
			tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
			ti4_1 = (nstcall = 1, F553_3903(RTCW(tr1)));
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
			Result = (nstcall = 0, F790_5199(Current, tp1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("count_non_negative", EX_POST);
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

/* {FILE}.after */
EIF_BOOLEAN F790_5044 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 789, Current, 0, 0, 9975);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current))) {
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3759[dtype-790])(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F790_5045 (EIF_REFERENCE Current)
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
	
	RTEAA("before", 789, Current, 0, 0, 9976);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F790_5072(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.off */
EIF_BOOLEAN F790_5046 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 789, Current, 0, 0, 9977);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (nstcall = 0, F790_5072(Current));
	}
	if (!tb1) {
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3759[dtype-790])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F790_5047 (EIF_REFERENCE Current)
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
	
	RTEAA("end_of_file", 789, Current, 0, 0, 9978);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	Result = (nstcall = 0, F790_5216(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.exists */
EIF_BOOLEAN F790_5048 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exists", 789, Current, 0, 0, 9979);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((nstcall = 0, F790_5072(Current))) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
		Result = (nstcall = 0, F790_5217(Current, tp1));
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("unchanged_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) == ti4_1)) {
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

/* {FILE}.access_exists */
EIF_BOOLEAN F790_5049 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("access_exists", 789, Current, 0, 0, 9980);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F790_5072(Current))) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
		Result = (nstcall = 0, F790_5219(Current, tp1, ((EIF_INTEGER_32) 0L)));
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

/* {FILE}.path_exists */
EIF_BOOLEAN F790_5050 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("path_exists", 789, Current, 0, 0, 9981);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
		in_assertion = 0;
	}
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F790_5218(Current, tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("unchanged_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) == ti4_1)) {
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

/* {FILE}.is_readable */
EIF_BOOLEAN F790_5051 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_readable", 789, Current, 0, 0, 9982);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3930(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_writable */
EIF_BOOLEAN F790_5052 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_writable", 789, Current, 0, 0, 9983);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3931(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_executable */
EIF_BOOLEAN F790_5053 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_executable", 789, Current, 0, 0, 9984);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3932(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_creatable */
EIF_BOOLEAN F790_5054 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_creatable", 789, Current, 0, 0, 9985);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV((nstcall = 0, F790_5174(Current)))+ _LNGOFF_0_1_0_0_);
	Result = (nstcall = 0, F790_5220(Current, tp1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_plain */
EIF_BOOLEAN F790_5055 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_plain", 789, Current, 0, 0, 9986);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3922(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_device */
EIF_BOOLEAN F790_5056 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_device", 789, Current, 0, 0, 9987);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3923(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_directory */
EIF_BOOLEAN F790_5057 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_directory", 789, Current, 0, 0, 9988);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3924(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_symlink */
EIF_BOOLEAN F790_5058 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_symlink", 789, Current, 2, 0, 9989);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, F790_5050(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_1_);
	loc2 = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	(nstcall = 1, F553_3945(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 0, F790_5174(Current));
	(nstcall = 1, F553_3946(RTCW(loc1), tr1, tr2));
	RTHOOK(6);
	tb1 = (nstcall = 1, F553_3925(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(7);
	(nstcall = 1, F553_3945(RTCW(loc1), loc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_fifo */
EIF_BOOLEAN F790_5059 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_fifo", 789, Current, 0, 0, 9990);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3926(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_socket */
EIF_BOOLEAN F790_5060 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_socket", 789, Current, 0, 0, 9991);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3927(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_block */
EIF_BOOLEAN F790_5061 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_block", 789, Current, 0, 0, 9992);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3928(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_character */
EIF_BOOLEAN F790_5062 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_character", 789, Current, 0, 0, 9993);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3929(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_setuid */
EIF_BOOLEAN F790_5063 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_setuid", 789, Current, 0, 0, 9994);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3933(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_setgid */
EIF_BOOLEAN F790_5064 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_setgid", 789, Current, 0, 0, 9995);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3934(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_sticky */
EIF_BOOLEAN F790_5065 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_sticky", 789, Current, 0, 0, 9996);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3935(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_owner */
EIF_BOOLEAN F790_5066 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_owner", 789, Current, 0, 0, 9997);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3936(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_access_readable */
EIF_BOOLEAN F790_5067 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_access_readable", 789, Current, 0, 0, 9998);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3938(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_access_writable */
EIF_BOOLEAN F790_5068 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_access_writable", 789, Current, 0, 0, 9999);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3939(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_access_executable */
EIF_BOOLEAN F790_5069 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_access_executable", 789, Current, 0, 0, 10000);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3940(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_access_owner */
EIF_BOOLEAN F790_5070 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_access_owner", 789, Current, 0, 0, 10001);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tb1 = (nstcall = 1, F553_3937(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_readable */
EIF_BOOLEAN F790_5071 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_readable", 789, Current, 0, 0, 10002);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) >= ((EIF_INTEGER_32) 4L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) == ((EIF_INTEGER_32) 1L)))) {
		Result = (nstcall = 0, F439_2850(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F790_5072 (EIF_REFERENCE Current)
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
	
	RTEAA("is_closed", 789, Current, 0, 0, 10003);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_open_read */
EIF_BOOLEAN F790_5073 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_open_read", 789, Current, 0, 0, 10004);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F790_5074 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_open_write", 789, Current, 0, 0, 10005);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 3L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.is_open_append */
EIF_BOOLEAN F790_5075 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_open_append", 789, Current, 0, 0, 10006);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_writable */
EIF_BOOLEAN F790_5076 (EIF_REFERENCE Current)
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
	
	RTEAA("file_writable", 789, Current, 0, 0, 10007);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.extendible */
EIF_BOOLEAN F790_5077 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 789, Current, 0, 0, 10008);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3886[dtype-789]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.replaceable */
EIF_BOOLEAN F790_5078 (EIF_REFERENCE Current)
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
	
	RTEAA("replaceable", 789, Current, 0, 0, 10009);
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

/* {FILE}.file_prunable */
EIF_BOOLEAN F790_5079 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_prunable", 789, Current, 0, 0, 10010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {FILE}.full */
EIF_BOOLEAN F790_5080 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {FILE}.prunable */
EIF_BOOLEAN F790_5081 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prunable", 789, Current, 0, 0, 10012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {FILE}.same_file */
EIF_BOOLEAN F790_5082 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_file", 789, Current, 0, 1, 10013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("fn_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F790_5023(Current));
	tr2 = RTLNS(eif_new_type(793, 0x01).id, 793, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F794_5362(RTCW(tr2), arg1));
	tb1 = (nstcall = 1, F794_5374(RTCW(tr1), tr2));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.open_read */
void F790_5083 (EIF_REFERENCE Current)
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
	
	RTEAA("open_read", 789, Current, 0, 0, 10014);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
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

/* {FILE}.open_write */
void F790_5084 (EIF_REFERENCE Current)
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
	
	RTEAA("open_write", 789, Current, 0, 0, 10015);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 1L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.open_append */
void F790_5085 (EIF_REFERENCE Current)
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
	
	RTEAA("open_append", 789, Current, 0, 0, 10016);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 2L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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

/* {FILE}.open_read_write */
void F790_5086 (EIF_REFERENCE Current)
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
	
	RTEAA("open_read_write", 789, Current, 0, 0, 10017);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 3L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.create_read_write */
void F790_5087 (EIF_REFERENCE Current)
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
	
	RTEAA("create_read_write", 789, Current, 0, 0, 10018);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 4L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.open_read_append */
void F790_5088 (EIF_REFERENCE Current)
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
	
	RTEAA("open_read_append", 789, Current, 0, 0, 10019);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3828[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 5L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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

/* {FILE}.fd_open_read */
void F790_5089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("fd_open_read", 789, Current, 0, 1, 10020);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3844[dtype-790])(Current, arg1, ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
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
}

/* {FILE}.fd_open_write */
void F790_5090 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("fd_open_write", 789, Current, 0, 1, 10021);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3844[dtype-790])(Current, arg1, ((EIF_INTEGER_32) 1L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.fd_open_append */
void F790_5091 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("fd_open_append", 789, Current, 0, 1, 10022);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3844[dtype-790])(Current, arg1, ((EIF_INTEGER_32) 2L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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
}

/* {FILE}.fd_open_read_write */
void F790_5092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("fd_open_read_write", 789, Current, 0, 1, 10023);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3844[dtype-790])(Current, arg1, ((EIF_INTEGER_32) 3L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.fd_open_read_append */
void F790_5093 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("fd_open_read_append", 789, Current, 0, 1, 10024);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3844[dtype-790])(Current, arg1, ((EIF_INTEGER_32) 5L)));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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

/* {FILE}.reopen_read */
void F790_5094 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("reopen_read", 789, Current, 0, 1, 10025);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 0L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
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

/* {FILE}.reopen_write */
void F790_5095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("reopen_write", 789, Current, 0, 1, 10026);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 1L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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

/* {FILE}.reopen_append */
void F790_5096 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("reopen_append", 789, Current, 0, 1, 10027);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 2L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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

/* {FILE}.reopen_read_write */
void F790_5097 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("reopen_read_write", 789, Current, 0, 1, 10028);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 3L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.recreate_read_write */
void F790_5098 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("recreate_read_write", 789, Current, 0, 1, 10029);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 4L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_write", EX_POST);
		if ((nstcall = 0, F790_5074(Current))) {
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
}

/* {FILE}.reopen_read_append */
void F790_5099 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("reopen_read_append", 789, Current, 0, 1, 10030);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) R3845[dtype-790])(Current, tp1, ((EIF_INTEGER_32) 5L), tp2));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("exists", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("open_read", EX_POST);
		if ((nstcall = 0, F790_5073(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_append", EX_POST);
		if ((nstcall = 0, F790_5075(Current))) {
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
}

/* {FILE}.close */
void F790_5100 (EIF_REFERENCE Current)
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
	
	RTEAA("close", 789, Current, 0, 0, 10031);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("medium_is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R3829[dtype-790])(Current, *(EIF_POINTER *)(Current + O3747[dtype-789])));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current + O3747[dtype-789]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current + O3895[dtype-789]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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

/* {FILE}.start */
void F790_5101 (EIF_REFERENCE Current)
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
	
	RTEAA("start", 789, Current, 0, 0, 10032);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
body:;
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5213(Current, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FILE}.finish */
void F790_5102 (EIF_REFERENCE Current)
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
	
	RTEAA("finish", 789, Current, 0, 0, 10033);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
body:;
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5214(Current, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FILE}.forth */
void F790_5103 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("forth", 789, Current, 0, 0, 10034);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5044(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("file_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5215(Current, tp1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5191(Current, tp1));
	eif_do_nothing_value.it_c1 = tc1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3759[dtype-790])(Current))) {
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2457[dtype-546])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE}.back */
void F790_5104 (EIF_REFERENCE Current)
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
	
	RTEAA("back", 789, Current, 0, 0, 10035);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5045(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5215(Current, tp1, ((EIF_INTEGER_32) -1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.move */
void F790_5105 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("move", 789, Current, 0, 1, 10036);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5215(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.go */
void F790_5106 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("go", 789, Current, 0, 1, 10037);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5213(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE}.recede */
void F790_5107 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("recede", 789, Current, 0, 1, 10038);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5214(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE}.next_line */
void F790_5108 (EIF_REFERENCE Current)
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
	
	RTEAA("next_line", 789, Current, 0, 0, 10039);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5200(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.new_cursor */
EIF_REFERENCE F790_5109 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 789, Current, 0, 0, 10040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(786, 0x01).id, 786, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr1 = (nstcall = 0, F790_5174(Current));
	(nstcall = -1, F787_4546(RTCW(Result), tr1));
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

/* {FILE}.extend */
void F790_5110 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("extend", 789, Current, 0, 1, 10041);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3663[dtype-790])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F211_2570(Current, arg1))) {
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

/* {FILE}.flush */
void F790_5111 (EIF_REFERENCE Current)
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
	
	RTEAA("flush", 789, Current, 0, 0, 10042);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5189(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.link */
void F790_5112 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("link", 789, Current, 1, 1, 10043);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = (nstcall = 1, F553_3916(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5185(Current, tp1, tp2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE}.append */
void F790_5113 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("append", 789, Current, 0, 1, 10044);
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
		RTCK;
		RTHOOK(2);
		RTCT("target_is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_2);
		RTCK;
		RTHOOK(3);
		RTCT("source_is_closed", EX_PRE);
		tb1 = (nstcall = 1, F790_5072(RTCW(arg1)));
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	(nstcall = 0, F790_5085(Current));
	RTHOOK(5);
	(nstcall = 1, F790_5083(RTCW(arg1)));
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O3747[Dtype(arg1)-789]);
	ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[Dtype(RTCW(arg1))-470])(arg1));
	(nstcall = 0, F790_5210(Current, tp1, tp2, ti4_3));
	RTHOOK(7);
	(nstcall = 0, F790_5100(Current));
	RTHOOK(8);
	(nstcall = 1, F790_5100(RTCW(arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[Dtype(RTCW(arg1))-470])(arg1));
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("files_closed", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F790_5072(RTCW(arg1)));
		if (tb2) {
			tb1 = (nstcall = 0, F790_5072(Current));
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
}

/* {FILE}.put_string */
void F790_5122 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("put_string", 789, Current, 2, 1, 10045);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		(nstcall = 0, F790_5211(Current, tp1, loc2, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE}.putstring */
void F790_5123 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("putstring", 789, Current, 2, 1, 10046);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4892[Dtype(arg1)-905]);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		(nstcall = 0, F790_5211(Current, tp1, loc2, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE}.put_managed_pointer */
void F790_5124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("put_managed_pointer", 789, Current, 0, 3, 10047);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_bytes_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	(nstcall = 0, F790_5211(Current, tp1, tp3, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {FILE}.put_character */
void F790_5125 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("put_character", 789, Current, 0, 1, 10048);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5212(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.putchar */
void F790_5126 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("putchar", 789, Current, 0, 1, 10049);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5212(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.put_new_line */
void F790_5127 (EIF_REFERENCE Current)
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
	
	RTEAA("put_new_line", 789, Current, 0, 0, 10050);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5209(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.new_line */
void F790_5128 (EIF_REFERENCE Current)
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
	
	RTEAA("new_line", 789, Current, 0, 0, 10051);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	(nstcall = 0, F790_5209(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.stamp */
void F790_5129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("stamp", 789, Current, 0, 1, 10052);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5208(Current, tp1, arg1, ((EIF_INTEGER_32) 2L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_updated", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5038(Current)) == arg1)) {
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

/* {FILE}.set_access */
void F790_5130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("set_access", 789, Current, 0, 1, 10053);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F790_5038(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5208(Current, tp1, arg1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("acess_date_updated", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5039(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("date_unchanged", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5038(Current)) == ti4_1)) {
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
}

/* {FILE}.set_date */
void F790_5131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("set_date", 789, Current, 0, 1, 10054);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F790_5039(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5208(Current, tp1, arg1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("access_date_unchanged", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5039(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("date_updated", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5038(Current)) == arg1)) {
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
}

/* {FILE}.change_name */
void F790_5132 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("change_name", 789, Current, 0, 1, 10055);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F325_2638(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F790_5133(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("name_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {FILE}.rename_file */
void F790_5133 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("rename_file", 789, Current, 1, 1, 10056);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(arg1))-907])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = (nstcall = 1, F553_3916(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5203(Current, tp1, tp2));
	RTHOOK(6);
	(nstcall = 0, F790_5176(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {FILE}.rename_path */
void F790_5134 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("rename_path", 789, Current, 1, 1, 10057);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F794_5370(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F794_5403(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5203(Current, tp1, tp2));
	RTHOOK(6);
	(nstcall = 0, F790_5177(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_changed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F794_5401(RTCW(arg1)));
		tb1 = (nstcall = 1, F905_6698(RTCW(tr1), tr2));
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
}

/* {FILE}.add_permission */
void F790_5135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("add_permission", 789, Current, 2, 2, 10058);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("who_is_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("what_is_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_descriptor_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F908_6919(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = (nstcall = 1, F908_6919(RTCW(arg2)));
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5204(Current, tp1, loc1, loc2, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE}.remove_permission */
void F790_5136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("remove_permission", 789, Current, 2, 2, 10059);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("who_is_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("what_is_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_descriptor_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F908_6919(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = (nstcall = 1, F908_6919(RTCW(arg2)));
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5204(Current, tp1, loc1, loc2, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE}.change_mode */
void F790_5137 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("change_mode", 789, Current, 0, 1, 10060);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5205(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.change_owner */
void F790_5138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("change_owner", 789, Current, 0, 1, 9848);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5206(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.change_group */
void F790_5139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("change_group", 789, Current, 0, 1, 9849);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5207(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.change_date */
EIF_INTEGER_32 F790_5140 (EIF_REFERENCE Current)
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
	
	RTEAA("change_date", 789, Current, 0, 0, 9850);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5184(Current));
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	ti4_1 = (nstcall = 1, F553_3908(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.touch */
void F790_5141 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("touch", 789, Current, 0, 0, 9851);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F790_5038(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5202(Current, tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_changed", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5038(Current)) != ti4_1)) {
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

/* {FILE}.basic_store */
void F790_5142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("basic_store", 789, Current, 0, 1, 9852);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3657[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F790_5027(Current));
	(nstcall = 0, F790_5222(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {FILE}.general_store */
void F790_5143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("general_store", 789, Current, 0, 1, 9853);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3657[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F790_5027(Current));
	(nstcall = 0, F790_5223(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {FILE}.independent_store */
void F790_5144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("independent_store", 789, Current, 0, 1, 9854);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F790_5077(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3657[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F790_5027(Current));
	(nstcall = 0, F790_5224(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {FILE}.wipe_out */
void F790_5145 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 789, Current, 0, 0, 9855);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F790_5081(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		RTTE((nstcall = 0, F790_5072(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F790_5084(Current));
	RTHOOK(4);
	(nstcall = 0, F790_5100(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-470])(Current))) {
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

/* {FILE}.delete */
void F790_5146 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete", 789, Current, 0, 0, 9856);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE((nstcall = 0, F790_5050(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F790_5174(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F790_5186(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.reset */
void F790_5147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("reset", 789, Current, 0, 1, 9857);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_file_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5176(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(nstcall = 0, F790_5100(Current));
	}
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3633[dtype-788]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	*(EIF_REAL_32 *)(Current + O3643[dtype-788]) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	RTHOOK(7);
	*(EIF_REAL_64 *)(Current + O3645[dtype-788]) = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	RTHOOK(8);
	*(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F908_6904(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("file_renamed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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

/* {FILE}.reset_path */
void F790_5148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("reset_path", 789, Current, 0, 1, 9858);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_file_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F790_5177(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(nstcall = 0, F790_5100(Current));
	}
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O3633[dtype-788]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	*(EIF_REAL_32 *)(Current + O3643[dtype-788]) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	RTHOOK(7);
	*(EIF_REAL_64 *)(Current + O3645[dtype-788]) = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	RTHOOK(8);
	*(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F908_6904(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F790_5072(Current))) {
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
}

/* {FILE}.read_character */
void F790_5155 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_character", 789, Current, 0, 0, 9859);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5191(Current, tp1));
	*(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]) = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE}.readchar */
void F790_5156 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readchar", 789, Current, 0, 0, 9860);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5191(Current, tp1));
	*(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]) = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE}.read_line */
void F790_5159 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("read_line", 789, Current, 5, 0, 9861);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc5 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F906_6769(RTCW(loc5)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if (loc4) break;
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		loc2 += (nstcall = 0, F790_5192(Current, tp1, loc3, loc1, loc2));
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(9);
			(nstcall = 1, F908_6924(RTCW(loc5), loc1));
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				RTHOOK(11);
				(nstcall = 1, F908_6908(RTCW(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1024L))));
			} else {
				RTHOOK(12);
				(nstcall = 1, F379_2659(RTCW(loc5)));
			}
			RTHOOK(13);
			ti4_1 = (nstcall = 1, F906_6769(RTCW(loc5)));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			loc2--;
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(16);
			(nstcall = 1, F908_6924(RTCW(loc5), loc2));
			RTHOOK(17);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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
}

/* {FILE}.readline */
void F790_5160 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("readline", 789, Current, 5, 0, 9862);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc5 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F906_6769(RTCW(loc5)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if (loc4) break;
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		loc2 += (nstcall = 0, F790_5192(Current, tp1, loc3, loc1, loc2));
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(9);
			(nstcall = 1, F908_6924(RTCW(loc5), loc1));
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				RTHOOK(11);
				(nstcall = 1, F908_6908(RTCW(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1024L))));
			} else {
				RTHOOK(12);
				(nstcall = 1, F379_2659(RTCW(loc5)));
			}
			RTHOOK(13);
			ti4_1 = (nstcall = 1, F906_6769(RTCW(loc5)));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			loc2--;
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(16);
			(nstcall = 1, F908_6924(RTCW(loc5), loc2));
			RTHOOK(17);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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
}

/* {FILE}.read_line_thread_aware */
void F790_5161 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc7);
	RTLIU(3);
	
	RTEAA("read_line_thread_aware", 789, Current, 7, 0, 9863);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc7 = RTOUCR(31,(nstcall = 0, F790_5183), (Current));
	RTHOOK(5);
	(nstcall = 1, F908_6904(RTCW(loc4)));
	RTHOOK(6);
	ti4_1 = (nstcall = 1, F118_2016(RTCW(loc7)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if (loc3) break;
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		tp2 = (nstcall = 1, F118_2014(RTCW(loc7)));
		loc2 = (nstcall = 0, F790_5195(Current, tp1, tp2, loc1, ((EIF_INTEGER_32) 0L)));
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		ti4_1 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ti4_1);
		RTHOOK(11);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		RTHOOK(12);
		(nstcall = 1, F908_6908(RTCW(loc4), loc6));
		RTHOOK(13);
		(nstcall = 1, F908_6924(RTCW(loc4), loc6));
		RTHOOK(14);
		ti4_1 = eif_min_int32 (loc2,loc1);
		(nstcall = 1, F118_2008(RTCW(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {FILE}.read_stream */
void F790_5162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("read_stream", 789, Current, 2, 1, 9864);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F908_6908(RTCW(loc2), arg1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	ti4_1 = (nstcall = 0, F790_5193(Current, tp1, loc1, arg1));
	(nstcall = 1, F908_6924(RTCW(loc2), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {FILE}.readstream */
void F790_5163 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("readstream", 789, Current, 2, 1, 9865);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F908_6908(RTCW(loc2), arg1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	ti4_1 = (nstcall = 0, F790_5193(Current, tp1, loc1, arg1));
	(nstcall = 1, F908_6924(RTCW(loc2), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {FILE}.read_stream_thread_aware */
void F790_5164 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTEAA("read_stream_thread_aware", 789, Current, 3, 1, 9866);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc2 = RTOUCR(31,(nstcall = 0, F790_5183), (Current));
	RTHOOK(5);
	(nstcall = 1, F118_2022(RTCW(loc2), arg1));
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp2 = (nstcall = 1, F118_2014(RTCW(loc2)));
	loc1 = (nstcall = 0, F790_5196(Current, tp1, tp2, arg1));
	RTHOOK(7);
	(nstcall = 1, F118_2022(RTCW(loc2), loc1));
	RTHOOK(8);
	(nstcall = 1, F908_6908(RTCW(loc3), loc1));
	RTHOOK(9);
	(nstcall = 1, F908_6924(RTCW(loc3), loc1));
	RTHOOK(10);
	(nstcall = 1, F118_2010(RTCW(loc2), loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {FILE}.read_to_managed_pointer */
void F790_5165 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_to_managed_pointer", 789, Current, 0, 3, 9867);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_bytes_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F439_2850(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(5);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_2);
		RTCK;
		RTHOOK(6);
		RTCT("p_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_2);
		RTCK;
		RTHOOK(7);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	ti4_1 = (nstcall = 0, F790_5193(Current, tp1, tp3, arg3));
	*(EIF_INTEGER_32 *)(Current + O3647[dtype-788]) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("bytes_read_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3647[dtype-788]) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("bytes_read_not_too_big", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3647[dtype-788]) <= arg3)) {
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
}

/* {FILE}.read_word */
void F790_5167 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("read_word", 789, Current, 4, 0, 9868);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F906_6769(RTCW(loc4)));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 > loc2)) break;
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		loc3 += (nstcall = 0, F790_5194(Current, tp1, loc1, loc2, loc3));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > loc2)) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 2048L))) {
				RTHOOK(9);
				(nstcall = 1, F908_6908(RTCW(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1024L))));
			} else {
				RTHOOK(10);
				(nstcall = 1, F379_2659(RTCW(loc4)));
			}
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			ti4_1 = (nstcall = 1, F906_6769(RTCW(loc4)));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			loc3--;
		} else {
			RTHOOK(14);
			(nstcall = 1, F908_6924(RTCW(loc4), loc3));
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTHOOK(16);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5198(Current, tp1));
	*(EIF_CHARACTER_8 *)(Current + O3746[dtype-789]) = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {FILE}.readword */
void F790_5168 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("readword", 789, Current, 4, 0, 9869);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F906_6769(RTCW(loc4)));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 > loc2)) break;
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		loc3 += (nstcall = 0, F790_5194(Current, tp1, loc1, loc2, loc3));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > loc2)) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 2048L))) {
				RTHOOK(9);
				(nstcall = 1, F908_6908(RTCW(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1024L))));
			} else {
				RTHOOK(10);
				(nstcall = 1, F379_2659(RTCW(loc4)));
			}
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			ti4_1 = (nstcall = 1, F906_6769(RTCW(loc4)));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			loc3--;
		} else {
			RTHOOK(14);
			(nstcall = 1, F908_6924(RTCW(loc4), loc3));
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTHOOK(16);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5198(Current, tp1));
	*(EIF_CHARACTER_8 *)(Current + O3746[dtype-789]) = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {FILE}.read_word_thread_aware */
void F790_5169 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc7);
	RTLIU(3);
	
	RTEAA("read_word_thread_aware", 789, Current, 7, 0, 9870);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F790_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	loc7 = RTOUCR(31,(nstcall = 0, F790_5183), (Current));
	RTHOOK(4);
	(nstcall = 1, F908_6904(RTCW(loc4)));
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F118_2016(RTCW(loc7)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if (loc3) break;
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
		tp2 = (nstcall = 1, F118_2014(RTCW(loc7)));
		loc2 = (nstcall = 0, F790_5197(Current, tp1, tp2, loc1, ((EIF_INTEGER_32) 0L)));
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		ti4_1 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ti4_1);
		RTHOOK(10);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		RTHOOK(11);
		(nstcall = 1, F908_6908(RTCW(loc4), loc6));
		RTHOOK(12);
		(nstcall = 1, F908_6924(RTCW(loc4), loc6));
		RTHOOK(13);
		ti4_1 = eif_min_int32 (loc2,loc1);
		(nstcall = 1, F118_2008(RTCW(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1));
	}
	RTHOOK(14);
	tp1 = *(EIF_POINTER *)(Current + O3747[dtype-789]);
	tc1 = (nstcall = 0, F790_5198(Current, tp1));
	*(EIF_CHARACTER_8 *)(Current + O3746[dtype-789]) = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {FILE}.copy_to */
void F790_5170 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("copy_to", 789, Current, 5, 1, 9871);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("file_is_open_write", EX_PRE);
		tb1 = (nstcall = 1, F790_5074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("current_is_open_read", EX_PRE);
		RTTE((nstcall = 0, F790_5073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51200L);
	RTHOOK(7);
	loc5 = *(EIF_REFERENCE *)(Current);
	RTHOOK(8);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	(nstcall = -1, F906_6748(RTCW(tr1), loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	loc4 = (nstcall = 0, F790_5026(Current));
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(11);
		(nstcall = 0, F790_5106(Current, ((EIF_INTEGER_32) 0L)));
	}
	for (;;) {
		RTHOOK(12);
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		RTHOOK(13);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3704[dtype-790])(Current, loc1));
		RTHOOK(14);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3661[Dtype(RTCW(arg1))-790])(arg1, *(EIF_REFERENCE *)(Current)));
		RTHOOK(15);
		loc2 += loc1;
	}
	RTHOOK(16);
	if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		(nstcall = 0, F790_5106(Current, loc4));
	}
	RTHOOK(18);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {FILE}.file_open */
EIF_POINTER F790_5171 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_open", 789, Current, 0, 2, 9872);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_close */
void F790_5172 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_close", 789, Current, 0, 1, 9873);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_close((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.internal_name */
EIF_REFERENCE F790_5173 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE}.internal_name_pointer */
EIF_REFERENCE F790_5174 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("internal_name_pointer", 789, Current, 1, 0, 9875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.internal_detachable_name_pointer */
static EIF_REFERENCE F790_5175_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("internal_detachable_name_pointer", 789, Current, 0, 0, 9876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F790_5175 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(787, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F790_5175_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {FILE}.set_name */
void F790_5176 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_name", 789, Current, 0, 1, 9877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = (nstcall = 1, F553_3916(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
}

/* {FILE}.set_path */
void F790_5177 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_path", 789, Current, 0, 1, 9878);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F794_5401(RTCW(arg1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F794_5403(RTCW(arg1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F790_5023(Current));
		tb1 = (nstcall = 1, F794_5393(RTCW(tr1), arg1));
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
}

/* {FILE}.create_last_string */
void F790_5178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("create_last_string", 789, Current, 1, 1, 9879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_string_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_min_size_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	ti4_1 = eif_max_int32 (((EIF_INTEGER_32) 256L),arg1);
	(nstcall = -1, F906_6748(RTCW(tr1), ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_string_attached", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("capacity_set", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if ((EIF_TRUE)) {
			ti4_1 = (nstcall = 1, F906_6769(loc1));
			tb1 = (EIF_BOOLEAN) (ti4_1 >= arg1);
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
}

/* {FILE}.true_string */
static EIF_REFERENCE F790_5180_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(32)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("true_string", 789, Current, 0, 0, 9881);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("True",4,1416787301);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F790_5180 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(32,F790_5180_body,(Current));
}

/* {FILE}.false_string */
static EIF_REFERENCE F790_5181_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(33)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("false_string", 789, Current, 0, 0, 9882);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("False",5,1635034981);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F790_5181 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(33,F790_5181_body,(Current));
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F790_5182_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(30)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("buffered_file_info", 789, Current, 0, 0, 9883);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(552, 0x01).id, 552, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F553_3899(RTCW(tr1)));
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

EIF_REFERENCE F790_5182 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(30,F790_5182_body,(Current));
}

/* {FILE}.read_data_buffer */
static EIF_REFERENCE F790_5183_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(31)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_data_buffer", 789, Current, 0, 0, 9884);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(117, 0x01).id, 117, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F118_1993(RTCW(tr1), ((EIF_INTEGER_32) 256L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("read_data_buffer_not_void", EX_POST);
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

EIF_REFERENCE F790_5183 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(31,F790_5183_body,(Current));
}

/* {FILE}.set_buffer */
void F790_5184 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("set_buffer", 789, Current, 0, 0, 9885);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3648[dtype-790])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(30,(nstcall = 0, F790_5182), (Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 0, F790_5174(Current));
	(nstcall = 1, F553_3946(RTCW(tr1), tr2, tr3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.file_link */
void F790_5185 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_link", 789, Current, 0, 2, 9886);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_link((EIF_FILENAME) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_unlink */
void F790_5186 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_unlink", 789, Current, 0, 1, 9887);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_unlink((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_dopen */
EIF_POINTER F790_5187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_dopen", 789, Current, 0, 2, 9888);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_file_dopen((int) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_reopen */
EIF_POINTER F790_5188 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_reopen", 789, Current, 0, 3, 9889);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_file_reopen((EIF_FILENAME) arg1, (int) arg2, (FILE*) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_flush */
void F790_5189 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_flush", 789, Current, 0, 1, 9890);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_flush((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_fd */
EIF_INTEGER_32 F790_5190 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_fd", 789, Current, 0, 1, 9891);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_fd((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F790_5191 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_gc", 789, Current, 0, 1, 9892);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gs */
EIF_INTEGER_32 F790_5192 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("file_gs", 789, Current, 0, 4, 9893);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gss */
EIF_INTEGER_32 F790_5193 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("file_gss", 789, Current, 0, 3, 9894);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gw */
EIF_INTEGER_32 F790_5194 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("file_gw", 789, Current, 0, 4, 9895);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gw((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gs_ta */
EIF_INTEGER_32 F790_5195 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("file_gs_ta", 789, Current, 0, 4, 9896);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gss_ta */
EIF_INTEGER_32 F790_5196 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("file_gss_ta", 789, Current, 0, 3, 9897);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_gw_ta */
EIF_INTEGER_32 F790_5197 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("file_gw_ta", 789, Current, 0, 4, 9898);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gw((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_lh */
EIF_CHARACTER_8 F790_5198 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_lh", 789, Current, 0, 1, 9899);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_CHARACTER_8) eif_file_lh((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F790_5199 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_size", 789, Current, 0, 1, 9900);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_tnil */
void F790_5200 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_tnil", 789, Current, 0, 1, 9901);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_tnil((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_tell */
EIF_INTEGER_32 F790_5201 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_tell", 789, Current, 0, 1, 9902);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_tell((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_touch */
void F790_5202 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_touch", 789, Current, 0, 1, 9903);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_touch((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_rename */
void F790_5203 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_rename", 789, Current, 0, 2, 9904);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_rename((EIF_FILENAME) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_perm */
void F790_5204 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_perm", 789, Current, 0, 4, 9905);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_perm((EIF_FILENAME) arg1, (char*) arg2, (char*) arg3, (int) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_chmod */
void F790_5205 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_chmod", 789, Current, 0, 2, 9906);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_chmod((EIF_FILENAME) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_chown */
void F790_5206 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_chown", 789, Current, 0, 2, 9907);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_chown((EIF_FILENAME) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_chgrp */
void F790_5207 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_chgrp", 789, Current, 0, 2, 9908);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_chgrp((EIF_FILENAME) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_utime */
void F790_5208 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_utime", 789, Current, 0, 3, 9909);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_utime((EIF_FILENAME) arg1, (int) arg2, (int) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_tnwl */
void F790_5209 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_tnwl", 789, Current, 0, 1, 9910);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_file_tnwl((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_append */
void F790_5210 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_append", 789, Current, 0, 3, 9911);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_file_append((FILE*) arg1, (FILE*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_ps */
void F790_5211 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_ps", 789, Current, 0, 3, 9912);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_pc */
void F790_5212 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pc", 789, Current, 0, 2, 9913);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_go */
void F790_5213 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_go", 789, Current, 0, 2, 9914);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_recede */
void F790_5214 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_recede", 789, Current, 0, 2, 9915);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_recede((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_move */
void F790_5215 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_move", 789, Current, 0, 2, 9916);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.file_feof */
EIF_BOOLEAN F790_5216 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_feof", 789, Current, 0, 1, 9917);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F790_5217 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_exists", 789, Current, 0, 1, 9918);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_path_exists */
EIF_BOOLEAN F790_5218 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_path_exists", 789, Current, 0, 1, 9919);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_path_exists((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_access */
EIF_BOOLEAN F790_5219 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("file_access", 789, Current, 0, 2, 9920);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_access((EIF_FILENAME) arg1, (EIF_INTEGER) arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.file_creatable */
EIF_BOOLEAN F790_5220 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("file_creatable", 789, Current, 0, 2, 9921);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_creatable((EIF_FILENAME) arg1, (EIF_INTEGER) arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.c_retrieved */
EIF_REFERENCE F790_5221 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_retrieved", 789, Current, 0, 1, 9922);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eretrieve(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.c_basic_store */
void F790_5222 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_basic_store", 789, Current, 0, 2, 9923);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);estore((EIF_INTEGER) arg1, (EIF_REFERENCE) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.c_general_store */
void F790_5223 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_general_store", 789, Current, 0, 2, 9924);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eestore((EIF_INTEGER) arg1, (EIF_REFERENCE) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.c_independent_store */
void F790_5224 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_independent_store", 789, Current, 0, 2, 9925);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);sstore((EIF_INTEGER) arg1, (EIF_REFERENCE) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.eif_file_date */
EIF_INTEGER_32 F790_5225 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_file_date", 789, Current, 0, 1, 9926);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_date((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.eif_file_access_date */
EIF_INTEGER_32 F790_5226 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_file_access_date", 789, Current, 0, 1, 9927);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_access_date((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.eif_temp_file */
EIF_INTEGER_32 F790_5227 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("eif_temp_file", 789, Current, 0, 2, 9928);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_mkstemp((EIF_FILENAME) arg1, (EIF_BOOLEAN) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE}.go_to */
void F790_5228 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("go_to", 789, Current, 0, 1, 9929);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {FILE}.replace */
void F790_5229 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("replace", 789, Current, 0, 1, 9930);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F439_2851(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, F790_5078(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_replaced", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F790_5025(Current)) == arg1)) {
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

/* {FILE}.remove */
void F790_5230 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove", 789, Current, 0, 0, 9931);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F790_5081(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F439_2851(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE}.prune */
void F790_5231 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("prune", 789, Current, 0, 1, 9932);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F790_5081(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count <= old count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) <= ti4_1)) {
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

/* {FILE}.mode */
EIF_INTEGER_32 F790_5232 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3886[Dtype(Current)-789]);
}


/* {FILE}.set_read_mode */
void F790_5239 (EIF_REFERENCE Current)
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
	
	RTEAA("set_read_mode", 789, Current, 0, 0, 9940);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FILE}.set_write_mode */
void F790_5240 (EIF_REFERENCE Current)
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
	
	RTEAA("set_write_mode", 789, Current, 0, 0, 9941);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FILE}._invariant */
void F790_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 189, Current, 0, 0);
	RTIT("valid_mode", Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current + O3886[dtype-789])) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3886[dtype-789]) <= ((EIF_INTEGER_32) 5L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4781[Dtype(RTCW(tr1))-907])(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit190 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
