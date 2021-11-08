/*
 * Code for class BOUNDED [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo655.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOUNDED}.full */
EIF_BOOLEAN F358_2652 (EIF_REFERENCE Current)
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
	
	RTEAA("full", 357, Current, 0, 0, 3537);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current));
	ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2369[dtype-470])(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOUNDED}._invariant */
void F358_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 654, Current, 0, 0);
	RTIT("valid_count", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2369[dtype-470])(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("full_definition", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2364[dtype-470])(Current)) == (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2366[dtype-470])(Current)) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2369[dtype-470])(Current))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit655 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
