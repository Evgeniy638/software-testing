/*
 * Code for class BOOLEAN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo212.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOOLEAN}.conjuncted */
EIF_BOOLEAN F845_5943 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("conjuncted", 844, Current, 0, 1, 11784);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5935(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.conjuncted_semistrict */
EIF_BOOLEAN F845_5944 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("conjuncted_semistrict", 844, Current, 0, 1, 11785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5936(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.implication */
EIF_BOOLEAN F845_5945 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("implication", 844, Current, 0, 1, 11786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5937(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.negated */
EIF_BOOLEAN F845_5946 (EIF_REFERENCE Current)
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
	
	RTEAA("negated", 844, Current, 0, 0, 11787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F843_5938(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.disjuncted */
EIF_BOOLEAN F845_5947 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("disjuncted", 844, Current, 0, 1, 11788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5939(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.disjuncted_semistrict */
EIF_BOOLEAN F845_5948 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("disjuncted_semistrict", 844, Current, 0, 1, 11789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5940(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BOOLEAN}.disjuncted_exclusive */
EIF_BOOLEAN F845_5949 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("disjuncted_exclusive", 844, Current, 0, 1, 11790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = (nstcall = 0, F843_5941(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit212 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
