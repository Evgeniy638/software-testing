/*
 * Code for class ROUTINE_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro100.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROUTINE_FAILURE}.routine_name */
EIF_REFERENCE F99_1609 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {ROUTINE_FAILURE}.class_name */
EIF_REFERENCE F99_1610 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ROUTINE_FAILURE}.code */
EIF_INTEGER_32 F99_1611 (EIF_REFERENCE Current)
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
	
	RTEAA("code", 98, Current, 0, 0, 1550);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE_FAILURE}.tag */
static EIF_REFERENCE F99_1612_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(199)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tag", 98, Current, 0, 0, 1545);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Routine failure.",16,1668316462);
	(nstcall = -1, F912_7138(RTCW(tr1), tr2));
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

EIF_REFERENCE F99_1612 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(199,F99_1612_body,(Current));
}

/* {ROUTINE_FAILURE}.set_routine_name */
void F99_1613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_routine_name", 98, Current, 0, 1, 1546);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("routine_name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == arg1)) {
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

/* {ROUTINE_FAILURE}.set_class_name */
void F99_1614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_class_name", 98, Current, 0, 1, 1547);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("class_name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) == arg1)) {
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

void EIF_Minit100 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
