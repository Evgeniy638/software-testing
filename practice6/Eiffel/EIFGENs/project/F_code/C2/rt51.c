/*
 * Code for class RT_EXTENSION_COMMON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt51.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_EXTENSION_COMMON}.dtrace_indent */
void F55_1227 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("dtrace_indent", 54, Current, 0, 1, 1170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(206,(nstcall = 1, F24_126), (RTCW(tr1)));
	tr1 = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	(nstcall = -1, F909_6993(RTCW(tr1), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg1)));
	(nstcall = 1, F792_5317(RTCW(tr2), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION_COMMON}.dtrace */
void F55_1228 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("dtrace", 54, Current, 0, 1, 1171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(206,(nstcall = 1, F24_126), (RTCW(tr1)));
	(nstcall = 1, F792_5317(RTCW(tr2), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

void EIF_Minit51 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
