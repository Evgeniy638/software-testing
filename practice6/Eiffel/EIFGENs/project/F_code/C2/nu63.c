/*
 * Code for class NUMERIC_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "nu63.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NUMERIC_INFORMATION}.max_integer_type */
EIF_INTEGER_64 F64_1356 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("max_integer_type", 63, Current, 0, 0, 1314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_INTEGER_64) 0;
}

/* {NUMERIC_INFORMATION}.max_natural_type */
EIF_NATURAL_64 F64_1357 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("max_natural_type", 63, Current, 0, 0, 1315);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_NATURAL_64) 0;
}

/* {NUMERIC_INFORMATION}.integer_type_valid */
EIF_BOOLEAN F64_1373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_type_valid", 63, Current, 0, 1, 1308);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NUMERIC_INFORMATION}.natural_type_valid */
EIF_BOOLEAN F64_1374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("natural_type_valid", 63, Current, 0, 1, 1309);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 11L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 12L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 14L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NUMERIC_INFORMATION}.integer_natural_type_valid */
EIF_BOOLEAN F64_1375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_natural_type_valid", 63, Current, 0, 1, 1310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 11L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 12L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 14L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NUMERIC_INFORMATION}.real_double_type_valid */
EIF_BOOLEAN F64_1376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("real_double_type_valid", 63, Current, 0, 1, 1311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 100L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 101L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NUMERIC_INFORMATION}.real_type_valid */
EIF_BOOLEAN F64_1377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("real_type_valid", 63, Current, 0, 1, 1312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 100L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NUMERIC_INFORMATION}.double_type_valid */
EIF_BOOLEAN F64_1378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("double_type_valid", 63, Current, 0, 1, 1313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 101L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit63 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
