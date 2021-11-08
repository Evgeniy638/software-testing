/*
 * Code for class DISPENSER [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di927.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DISPENSER}.readable */
EIF_BOOLEAN F332_2639 (EIF_REFERENCE Current)
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
	
	RTEAA("readable", 331, Current, 0, 0, 3507);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (RTNA((Current)), ((EIF_BOOLEAN) 0));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DISPENSER}.writable */
EIF_BOOLEAN F332_2640 (EIF_REFERENCE Current)
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
	
	RTEAA("writable", 331, Current, 0, 0, 3508);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (RTNA((Current)), ((EIF_BOOLEAN) 0));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DISPENSER}.append */
void F332_2641 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append", 331, Current, 0, 1, 3509);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((RTNA((Current)), ((EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(RTNA((Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DISPENSER}._invariant */
void F332_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 926, Current, 0, 0);
	RTIT("readable_definition", Current);
	if ((EIF_BOOLEAN)((RTNA((Current)), ((EIF_BOOLEAN) 0)) == (EIF_BOOLEAN) !(RTNA((Current)), ((EIF_BOOLEAN) 0)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("writable_definition", Current);
	if ((EIF_BOOLEAN)((RTNA((Current)), ((EIF_BOOLEAN) 0)) == (EIF_BOOLEAN) !(RTNA((Current)), ((EIF_BOOLEAN) 0)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
