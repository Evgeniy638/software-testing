/*
 * Generated by ISE 20.11.10.5048 - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F906_6748();
extern void F906_6752();
extern void F909_6992();
extern void F909_6997();
extern void F472_3289();
extern void F900_6630();
extern void F62_1329();
extern EIF_REFERENCE F62_1316();
extern EIF_BOOLEAN F62_1328();
extern EIF_BOOLEAN F62_1336();
extern void F62_1338();
extern void F62_1339();
extern void F62_1340();
extern void egc_routine_tables_init (void);

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;
extern char *(*R2[])();
extern char *(*R6[])();
extern char *(*R3[])();

extern char *(*R4[])();

extern char *(*R5[])();



extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_REFERENCE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_INTEGER)) F906_6748;
	egc_immstr8make_from_c_byte_array = (void (*)(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER)) F906_6752;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_INTEGER)) F909_6992;
	egc_immstr32make_from_c_byte_array = (void (*)(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER)) F909_6997;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_INTEGER, EIF_INTEGER)) F472_3289;
	egc_str_count_offset = + _LNGOFF_1_1_0_2_;
	egc_str_hash_offset = + _LNGOFF_1_1_0_0_;
	egc_str32_count_offset = + _LNGOFF_1_1_0_2_;
	egc_str32_hash_offset = + _LNGOFF_1_1_0_0_;
	egc_routdisp_fl = (void (*)(EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_REFERENCE, EIF_BOOLEAN, EIF_INTEGER)) F900_6630;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_INTEGER, EIF_BOOLEAN, EIF_INTEGER, EIF_INTEGER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER, EIF_BOOLEAN)) F62_1329;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_REFERENCE)) F62_1328;
	egc_last_exception = (EIF_REFERENCE (*)(EIF_REFERENCE)) F62_1316;
	egc_is_code_ignored = (EIF_BOOLEAN (*)(EIF_REFERENCE, EIF_INTEGER)) F62_1336;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_REFERENCE)) F62_1338;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F62_1339;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F62_1340;

	egc_str_dtype = 907;

	egc_immstr8_dtype = 912;

	egc_str32_dtype = 909;

	egc_immstr32_dtype = 911;
	egc_arr_dtype = 471;
	egc_tup_dtype = 826;
	egc_disp_rout_id = 3343;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x023C;
	egc_sp_wchar = 0x0233;
	egc_sp_bool = 0x0232;
	egc_sp_uint8 = 0x0236;
	egc_sp_uint16 = 0x0234;
	egc_sp_uint32 = 0x0230;
	egc_sp_uint64 = 0x0238;
	egc_sp_int8 = 0x023A;
	egc_sp_int16 = 0x023B;
	egc_sp_int32 = 0x022F;
	egc_sp_int64 = 0x0239;
	egc_sp_real32 = 0x0237;
	egc_sp_real64 = 0x0231;
	egc_sp_pointer = 0x0235;
	egc_sp_ref = 0x022E;

	egc_uint8_dtype = 850;
	egc_uint16_dtype = 856;
	egc_uint32_dtype = 853;
	egc_uint64_dtype = 865;
	egc_int8_dtype = 829;
	egc_int16_dtype = 862;
	egc_int32_dtype = 859;
	egc_int64_dtype = 841;
	egc_bool_dtype = 844;
	egc_real32_dtype = 832;
	egc_char_dtype = 838;
	egc_wchar_dtype = 835;
	egc_real64_dtype = 847;
	egc_point_dtype = 898;

	egc_exception_dtype = 71;
	egc_except_emnger_dtype = 61;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	exception_stack_managed = (EIF_BOOLEAN) 1;
	egc_ecreate = (void (**)(EIF_REFERENCE, EIF_REFERENCE)) R2;
	egc_exp_create = (void (**)(EIF_REFERENCE)) R6;
	egc_edispose = (void (**)(void)) R3;
	egc_copy = (void (**)(EIF_REFERENCE, EIF_REFERENCE)) R4;
	egc_is_equal = (EIF_BOOLEAN (**)(EIF_REFERENCE, EIF_REFERENCE)) R5;
	egc_ce_rname = egc_ce_rname_init;
	egc_fnbref = egc_fnbref_init;
	egc_fsize = egc_fsize_init;

	egc_system_name = "project";
	egc_system_location = "C:\\Users\\Nikita\\Desktop\\Eiffel\\2\\EIFGENs\\project\\F_code";
	egc_compiler_tag = 39;
	egc_project_version = 1636320325;
	egc_has_old_special_semantic = 0;
	scount = 926;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_routine_tables_init();
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 185; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
