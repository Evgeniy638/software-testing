#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A147_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F557_7329)(closed [1].it_r, open [1].it_r);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void __A147_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F557_7329)(closed [1].it_r, op_2);
}

	/* MISMATCH_INFORMATION wipe_out */
void A167_97 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F624_4079)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A167_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F631_4152)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A167_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F631_4153)(Current, arg1, arg2);
}


#ifdef __cplusplus
}
#endif
