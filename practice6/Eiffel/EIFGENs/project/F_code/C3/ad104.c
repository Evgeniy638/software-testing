/*
 * Code for class ADDRESS_APPLIED_TO_MELTED_FEATURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ad104.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ADDRESS_APPLIED_TO_MELTED_FEATURE}.code */
EIF_INTEGER_32 F103_1619 (EIF_REFERENCE Current)
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
	
	RTEAA("code", 102, Current, 0, 0, 1555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ADDRESS_APPLIED_TO_MELTED_FEATURE}.tag */
static EIF_REFERENCE F103_1620_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(202)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tag", 102, Current, 0, 0, 1556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("CECIL cannot call melted code.",30,1897917230);
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

EIF_REFERENCE F103_1620 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(202,F103_1620_body,(Current));
}

void EIF_Minit104 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
