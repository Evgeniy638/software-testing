/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io188.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.is_plain_text */
EIF_BOOLEAN F789_4841 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain_text", 788, Current, 0, 0, 9738);
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

/* {IO_MEDIUM}.last_character */
EIF_CHARACTER_8 F789_4842 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O3631[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F789_4843 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.last_integer */
EIF_INTEGER_32 F789_4844 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3633[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_INTEGER_32 F789_4845 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_integer_32", 788, Current, 0, 0, 9742);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3633[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_INTEGER_64 F789_4846 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current + O3635[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_INTEGER_16 F789_4847 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current + O3636[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_INTEGER_8 F789_4848 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current + O3637[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_NATURAL_64 F789_4849 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current + O3638[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_natural */
EIF_NATURAL_32 F789_4850 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O3639[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_NATURAL_32 F789_4851 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_natural_32", 788, Current, 0, 0, 9748);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_32 *)(Current + O3639[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_NATURAL_16 F789_4852 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current + O3641[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_NATURAL_8 F789_4853 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O3642[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_real */
EIF_REAL_32 F789_4854 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current + O3643[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_real_32 */
EIF_REAL_32 F789_4855 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_32", 788, Current, 0, 0, 9752);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O3643[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_double */
EIF_REAL_64 F789_4856 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current + O3645[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.last_real_64 */
EIF_REAL_64 F789_4857 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_64", 788, Current, 0, 0, 9754);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O3645[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.bytes_read */
EIF_INTEGER_32 F789_4858 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3647[Dtype(Current)-788]);
}


/* {IO_MEDIUM}.dispose */
void F789_4870 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 788, Current, 0, 0, 9757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F790_5072(Current))) {
		RTHOOK(2);
		(nstcall = 0, F790_5100(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F789_4918 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("read_stream_thread_aware", 788, Current, 0, 1, 9756);
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
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3704[dtype-790])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.read_line_thread_aware */
void F789_4921 (EIF_REFERENCE Current)
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
	
	RTEAA("read_line_thread_aware", 788, Current, 0, 0, 9758);
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
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3707[dtype-790])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.lastchar */
EIF_CHARACTER_8 F789_4923 (EIF_REFERENCE Current)
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
	
	RTEAA("lastchar", 788, Current, 0, 0, 9759);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current + O3631[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.laststring */
EIF_REFERENCE F789_4924 (EIF_REFERENCE Current)
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
	
	RTEAA("laststring", 788, Current, 0, 0, 9760);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastint */
EIF_INTEGER_32 F789_4925 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastint", 788, Current, 0, 0, 9761);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3633[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastreal */
EIF_REAL_32 F789_4926 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastreal", 788, Current, 0, 0, 9762);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O3643[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastdouble */
EIF_REAL_64 F789_4927 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastdouble", 788, Current, 0, 0, 9763);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O3645[dtype-788]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit188 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
