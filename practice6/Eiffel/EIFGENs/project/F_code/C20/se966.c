/*
 * Code for class SET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se966.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SET}.changeable_comparison_criterion */
EIF_BOOLEAN F217_2581 (EIF_REFERENCE Current)
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
	
	RTEAA("changeable_comparison_criterion", 216, Current, 0, 0, 3403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F318_2638(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_on_empty", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F318_2638(Current)))) {
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

void EIF_Minit966 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
