/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl132.h"
#include <string.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLATFORM}.is_thread_capable */
EIF_BOOLEAN F116_1910 (EIF_REFERENCE Current)
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
	
	RTEAA("is_thread_capable", 115, Current, 0, 0, 1886);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_scoop_capable */
EIF_BOOLEAN F116_1911 (EIF_REFERENCE Current)
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
	
	RTEAA("is_scoop_capable", 115, Current, 0, 0, 1887);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_scoop_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_dotnet */
EIF_BOOLEAN F116_1912 (EIF_REFERENCE Current)
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
	
	RTEAA("is_dotnet", 115, Current, 0, 0, 1888);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_windows */
EIF_BOOLEAN F116_1913 (EIF_REFERENCE Current)
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
	
	RTEAA("is_windows", 115, Current, 0, 0, 1889);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_unix */
EIF_BOOLEAN F116_1914 (EIF_REFERENCE Current)
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
	
	RTEAA("is_unix", 115, Current, 0, 0, 1890);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_unix__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_vms */
EIF_BOOLEAN F116_1915 (EIF_REFERENCE Current)
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
	
	RTEAA("is_vms", 115, Current, 0, 0, 1891);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vms__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_mac */
EIF_BOOLEAN F116_1916 (EIF_REFERENCE Current)
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
	
	RTEAA("is_mac", 115, Current, 0, 0, 1892);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_mac__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_vxworks */
EIF_BOOLEAN F116_1917 (EIF_REFERENCE Current)
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
	
	RTEAA("is_vxworks", 115, Current, 0, 0, 1842);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vxworks__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_little_endian */
static EIF_BOOLEAN F116_1918_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 27)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_little_endian", 115, Current, 3, 0, 1843);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_NATURAL_16) (EIF_NATURAL_16) ((EIF_INTEGER_32) 17185L);
	RTHOOK(2);
	loc2 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_8 *) &(loc3), (const void *) (EIF_NATURAL_16 *) &(loc1), (size_t) ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F116_1918 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,27,F116_1918_body,(Current));
}

/* {PLATFORM}.is_64_bits */
EIF_BOOLEAN F116_1919 (EIF_REFERENCE Current)
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
	
	RTEAA("is_64_bits", 115, Current, 0, 0, 1844);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_64_bits__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.boolean_bytes */
EIF_INTEGER_32 F116_1920 (EIF_REFERENCE Current)
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
	
	RTEAA("boolean_bytes", 115, Current, 0, 0, 1845);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_boolean_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.pointer_bytes */
EIF_INTEGER_32 F116_1933 (EIF_REFERENCE Current)
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
	
	RTEAA("pointer_bytes", 115, Current, 0, 0, 1858);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.boolean_bits */
EIF_INTEGER_32 F116_1934 (EIF_REFERENCE Current)
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
	
	RTEAA("boolean_bits", 115, Current, 0, 0, 1859);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F116_1920(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.pointer_bits */
EIF_INTEGER_32 F116_1947 (EIF_REFERENCE Current)
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
	
	RTEAA("pointer_bits", 115, Current, 0, 0, 1872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F116_1933(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.character_bytes */
EIF_INTEGER_32 F116_1948 (EIF_REFERENCE Current)
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
	
	RTEAA("character_bytes", 115, Current, 0, 0, 1873);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.wide_character_bytes */
EIF_INTEGER_32 F116_1949 (EIF_REFERENCE Current)
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
	
	RTEAA("wide_character_bytes", 115, Current, 0, 0, 1874);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_wide_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.integer_bytes */
EIF_INTEGER_32 F116_1950 (EIF_REFERENCE Current)
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
	
	RTEAA("integer_bytes", 115, Current, 0, 0, 1875);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_integer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.real_bytes */
EIF_INTEGER_32 F116_1951 (EIF_REFERENCE Current)
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
	
	RTEAA("real_bytes", 115, Current, 0, 0, 1876);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_real_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.double_bytes */
EIF_INTEGER_32 F116_1952 (EIF_REFERENCE Current)
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
	
	RTEAA("double_bytes", 115, Current, 0, 0, 1877);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_double_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.character_bits */
EIF_INTEGER_32 F116_1953 (EIF_REFERENCE Current)
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
	
	RTEAA("character_bits", 115, Current, 0, 0, 1878);
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

/* {PLATFORM}.integer_bits */
EIF_INTEGER_32 F116_1954 (EIF_REFERENCE Current)
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
	
	RTEAA("integer_bits", 115, Current, 0, 0, 1879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.real_bits */
EIF_INTEGER_32 F116_1955 (EIF_REFERENCE Current)
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
	
	RTEAA("real_bits", 115, Current, 0, 0, 1880);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.double_bits */
EIF_INTEGER_32 F116_1956 (EIF_REFERENCE Current)
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
	
	RTEAA("double_bits", 115, Current, 0, 0, 1881);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.maximum_character_code */
EIF_INTEGER_32 F116_1957 (EIF_REFERENCE Current)
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
	
	RTEAA("maximum_character_code", 115, Current, 0, 0, 1882);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 127L))) {
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

/* {PLATFORM}.maximum_integer */
EIF_INTEGER_32 F116_1958 (EIF_REFERENCE Current)
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
	
	RTEAA("maximum_integer", 115, Current, 0, 0, 1883);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {PLATFORM}.minimum_character_code */
EIF_INTEGER_32 F116_1959 (EIF_REFERENCE Current)
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
	
	RTEAA("minimum_character_code", 115, Current, 0, 0, 1884);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

/* {PLATFORM}.minimum_integer */
EIF_INTEGER_32 F116_1960 (EIF_REFERENCE Current)
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
	
	RTEAA("minimum_integer", 115, Current, 0, 0, 1885);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

void EIF_Minit132 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
