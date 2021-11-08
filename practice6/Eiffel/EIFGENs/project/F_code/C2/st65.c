/*
 * Code for class STRING_TO_NUMERIC_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st65.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_NUMERIC_CONVERTOR}.trailing_separators_acceptable */
EIF_BOOLEAN F66_1385 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1296[Dtype(Current)-65]);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.leading_separators_acceptable */
EIF_BOOLEAN F66_1386 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1297[Dtype(Current)-65]);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.leading_separators */
EIF_REFERENCE F66_1387 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.trailing_separators */
EIF_REFERENCE F66_1388 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.conversion_type */
EIF_INTEGER_32 F66_1394 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1305[Dtype(Current)-65]);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.set_trailing_separators_acceptable */
void F66_1396 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("set_trailing_separators_acceptable", 65, Current, 0, 1, 1329);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + O1296[dtype-65]) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("trailing_separators_acceptable_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1296[dtype-65]) == arg1)) {
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

/* {STRING_TO_NUMERIC_CONVERTOR}.set_leading_separators_acceptable */
void F66_1397 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("set_leading_separators_acceptable", 65, Current, 0, 1, 1330);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + O1297[dtype-65]) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("leading_separators_acceptable_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1297[dtype-65]) == arg1)) {
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

/* {STRING_TO_NUMERIC_CONVERTOR}.set_leading_separators */
void F66_1398 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_leading_separators", 65, Current, 0, 1, 1331);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("separators_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1300[dtype-66])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	(nstcall = -1, F906_6750(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("leading_separators_set", EX_POST);
		if (RTEQ(*(EIF_REFERENCE *)(Current), arg1)) {
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

/* {STRING_TO_NUMERIC_CONVERTOR}.set_trailing_separators */
void F66_1399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_trailing_separators", 65, Current, 0, 1, 1332);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("separators_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1300[dtype-66])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(907, 1).id);
	(nstcall = -1, F906_6750(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("trailing_separators_set", EX_POST);
		if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), arg1)) {
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

/* {STRING_TO_NUMERIC_CONVERTOR}.last_state */
EIF_INTEGER_32 F66_1402 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1313[Dtype(Current)-65]);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.sign */
EIF_INTEGER_32 F66_1403 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1314[Dtype(Current)-65]);
}


/* {STRING_TO_NUMERIC_CONVERTOR}._invariant */
void F66_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 64, Current, 0, 0);
	RTIT("leading_separators_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("trailing_separators_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
