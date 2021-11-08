#include "epoly4.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2457[368])();
void R2457_init () {
	R2457[0] = (char *(*)()) F547_3639;
	R2457[1] = (char *(*)()) F548_3639;
	R2457[2] = (char *(*)()) F549_3639;
	R2457[85] = (char *(*)()) F632_4208;
	R2457[86] = (char *(*)()) F633_4208;
	R2457[87] = (char *(*)()) F634_4208;
	R2457[88] = (char *(*)()) F635_4208;
	R2457[89] = (char *(*)()) F636_4208;
	R2457[90] = (char *(*)()) F637_4208;
	R2457[91] = (char *(*)()) F638_4208;
	R2457[92] = (char *(*)()) F639_4208;
	R2457[93] = (char *(*)()) F640_4208;
	R2457[94] = (char *(*)()) F641_4208;
	R2457[95] = (char *(*)()) F642_4208;
	R2457[96] = (char *(*)()) F643_4208;
	R2457[97] = (char *(*)()) F644_4208;
	R2457[98] = (char *(*)()) F645_4208;
	R2457[99] = (char *(*)()) F646_4208;
	{long i; for (i = 244; i < 246; i++) R2457[i] = (char *(*)()) F790_5104;}
	R2457[367] = (char *(*)()) F914_7189;
}

char *(*R2471[368])();
void R2471_init () {
	R2471[0] = (char *(*)()) F425_2852;
	R2471[1] = (char *(*)()) F426_2852_2471_4;
	R2471[2] = (char *(*)()) F429_2852_2471_4;
	R2471[85] = (char *(*)()) F632_4214;
	R2471[86] = (char *(*)()) F633_4214_2471_4;
	R2471[87] = (char *(*)()) F634_4214_2471_4;
	R2471[88] = (char *(*)()) F635_4214_2471_4;
	R2471[89] = (char *(*)()) F636_4214_2471_4;
	R2471[90] = (char *(*)()) F637_4214_2471_4;
	R2471[91] = (char *(*)()) F638_4214_2471_4;
	R2471[92] = (char *(*)()) F639_4214_2471_4;
	R2471[93] = (char *(*)()) F640_4214_2471_4;
	R2471[94] = (char *(*)()) F641_4214_2471_4;
	R2471[95] = (char *(*)()) F642_4214_2471_4;
	R2471[96] = (char *(*)()) F643_4214_2471_4;
	R2471[97] = (char *(*)()) F644_4214_2471_4;
	R2471[98] = (char *(*)()) F645_4214_2471_4;
	R2471[99] = (char *(*)()) F646_4214_2471_4;
	{long i; for (i = 244; i < 246; i++) R2471[i] = (char *(*)()) F439_2852_2471_4;}
	R2471[367] = (char *(*)()) F439_2852_2471_4;
}
static void F426_2852_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F426_2852(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F429_2852_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F429_2852(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4214(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4214(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4214(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4214(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4214(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4214(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4214(Current, *(EIF_POINTER *)arg1);
}
static void F640_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4214(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4214(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4214(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4214(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4214(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4214(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4214_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4214(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F439_2852_2471_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F439_2852(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2654[443])();
void R2654_init () {
	R2654[0] = (char *(*)()) F471_3245_2654_51;
	R2654[1] = (char *(*)()) F472_3293;
	R2654[2] = (char *(*)()) F473_3293_2654_51;
	R2654[3] = (char *(*)()) F474_3293_2654_51;
	R2654[4] = (char *(*)()) F475_3293_2654_51;
	R2654[5] = (char *(*)()) F476_3293_2654_51;
	R2654[6] = (char *(*)()) F477_3293_2654_51;
	R2654[7] = (char *(*)()) F478_3293_2654_51;
	R2654[8] = (char *(*)()) F479_3293_2654_51;
	R2654[9] = (char *(*)()) F480_3293_2654_51;
	R2654[10] = (char *(*)()) F481_3293_2654_51;
	R2654[11] = (char *(*)()) F482_3293_2654_51;
	R2654[12] = (char *(*)()) F483_3293_2654_51;
	R2654[13] = (char *(*)()) F484_3293_2654_51;
	R2654[14] = (char *(*)()) F485_3293_2654_51;
	R2654[15] = (char *(*)()) F486_3293_2654_51;
	R2654[76] = (char *(*)()) F487_3361;
	R2654[77] = (char *(*)()) F488_3361_2654_51;
	R2654[78] = (char *(*)()) F491_3361_2654_51;
	R2654[88] = (char *(*)()) F559_3187;
	R2654[89] = (char *(*)()) F560_3187_2654_51;
	R2654[90] = (char *(*)()) F561_3187_2654_51;
	R2654[91] = (char *(*)()) F562_3187_2654_51;
	R2654[92] = (char *(*)()) F563_3187_2654_51;
	R2654[93] = (char *(*)()) F564_3187_2654_51;
	R2654[94] = (char *(*)()) F565_3187_2654_51;
	R2654[95] = (char *(*)()) F566_3187_2654_51;
	R2654[96] = (char *(*)()) F567_3187_2654_51;
	R2654[97] = (char *(*)()) F568_3187_2654_51;
	R2654[98] = (char *(*)()) F569_3187_2654_51;
	R2654[99] = (char *(*)()) F570_3187_2654_51;
	R2654[100] = (char *(*)()) F571_3187_2654_51;
	R2654[101] = (char *(*)()) F572_3187_2654_51;
	R2654[102] = (char *(*)()) F573_3187_2654_51;
	R2654[153] = (char *(*)()) F624_4041;
	R2654[154] = (char *(*)()) F625_4041;
	R2654[155] = (char *(*)()) F626_4041_2654_51;
	R2654[156] = (char *(*)()) F627_4041_2654_51;
	R2654[157] = (char *(*)()) F628_4041_2654_51;
	R2654[158] = (char *(*)()) F624_4041;
	R2654[159] = (char *(*)()) F626_4041_2654_51;
	R2654[160] = (char *(*)()) F624_4041;
	R2654[161] = (char *(*)()) F632_4180;
	R2654[162] = (char *(*)()) F633_4180_2654_51;
	R2654[163] = (char *(*)()) F634_4180_2654_51;
	R2654[164] = (char *(*)()) F635_4180_2654_51;
	R2654[165] = (char *(*)()) F636_4180_2654_51;
	R2654[166] = (char *(*)()) F637_4180_2654_51;
	R2654[167] = (char *(*)()) F638_4180_2654_51;
	R2654[168] = (char *(*)()) F639_4180_2654_51;
	R2654[169] = (char *(*)()) F640_4180_2654_51;
	R2654[170] = (char *(*)()) F641_4180_2654_51;
	R2654[171] = (char *(*)()) F642_4180_2654_51;
	R2654[172] = (char *(*)()) F643_4180_2654_51;
	R2654[173] = (char *(*)()) F644_4180_2654_51;
	R2654[174] = (char *(*)()) F645_4180_2654_51;
	R2654[175] = (char *(*)()) F646_4180_2654_51;
	R2654[356] = (char *(*)()) F827_5452;
	R2654[437] = (char *(*)()) F908_6841_2654_51;
	R2654[439] = (char *(*)()) F910_7051_2654_51;
	R2654[441] = (char *(*)()) F912_7143_2654_51;
	R2654[442] = (char *(*)()) F913_7163_2654_51;
}
static EIF_REFERENCE F471_3245_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F471_3245(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F473_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F473_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F474_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F474_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F475_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F475_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F476_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F476_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F477_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F477_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F478_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F478_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F479_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F479_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F480_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F480_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F481_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F481_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F482_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F482_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F483_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F483_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F484_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F484_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F485_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F485_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F486_3293_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F486_3293(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F488_3361_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F488_3361(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F491_3361_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F491_3361(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F560_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F560_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F561_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F561_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F562_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F562_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F563_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F563_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F564_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F564_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F565_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F565_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F566_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F566_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F567_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F567_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F568_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F568_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F569_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F569_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F570_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F570_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F571_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F571_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F572_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F572_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F573_3187_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F573_3187(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F626_4041_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4041(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4041_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4041(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4041_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4041(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F633_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F633_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F634_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F634_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F635_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F635_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F636_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F636_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F637_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F638_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F639_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F640_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F641_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F642_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F643_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F644_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F644_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F645_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F645_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F646_4180_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F646_4180(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F908_6841_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F908_6841(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F910_7051_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F910_7051(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F912_7143_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F912_7143(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F913_7163_2654_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F913_7163(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R2655[443])();
void R2655_init () {
	R2655[0] = (char *(*)()) F471_3242;
	R2655[1] = (char *(*)()) F472_3298;
	R2655[2] = (char *(*)()) F473_3298;
	R2655[3] = (char *(*)()) F474_3298;
	R2655[4] = (char *(*)()) F475_3298;
	R2655[5] = (char *(*)()) F476_3298;
	R2655[6] = (char *(*)()) F477_3298;
	R2655[7] = (char *(*)()) F478_3298;
	R2655[8] = (char *(*)()) F479_3298;
	R2655[9] = (char *(*)()) F480_3298;
	R2655[10] = (char *(*)()) F481_3298;
	R2655[11] = (char *(*)()) F482_3298;
	R2655[12] = (char *(*)()) F483_3298;
	R2655[13] = (char *(*)()) F484_3298;
	R2655[14] = (char *(*)()) F485_3298;
	R2655[15] = (char *(*)()) F486_3298;
	R2655[76] = (char *(*)()) F487_3364;
	R2655[77] = (char *(*)()) F488_3364;
	R2655[78] = (char *(*)()) F491_3364;
	R2655[88] = (char *(*)()) F559_3195;
	R2655[89] = (char *(*)()) F560_3195;
	R2655[90] = (char *(*)()) F561_3195;
	R2655[91] = (char *(*)()) F562_3195;
	R2655[92] = (char *(*)()) F563_3195;
	R2655[93] = (char *(*)()) F564_3195;
	R2655[94] = (char *(*)()) F565_3195;
	R2655[95] = (char *(*)()) F566_3195;
	R2655[96] = (char *(*)()) F567_3195;
	R2655[97] = (char *(*)()) F568_3195;
	R2655[98] = (char *(*)()) F569_3195;
	R2655[99] = (char *(*)()) F570_3195;
	R2655[100] = (char *(*)()) F571_3195;
	R2655[101] = (char *(*)()) F572_3195;
	R2655[102] = (char *(*)()) F573_3195;
	R2655[153] = (char *(*)()) F624_4046;
	R2655[154] = (char *(*)()) F625_4046;
	R2655[155] = (char *(*)()) F626_4046;
	R2655[156] = (char *(*)()) F627_4046;
	R2655[157] = (char *(*)()) F628_4046;
	R2655[158] = (char *(*)()) F624_4046;
	R2655[159] = (char *(*)()) F626_4046;
	R2655[160] = (char *(*)()) F624_4046;
	R2655[161] = (char *(*)()) F487_3364;
	R2655[162] = (char *(*)()) F488_3364;
	R2655[163] = (char *(*)()) F489_3364;
	R2655[164] = (char *(*)()) F490_3364;
	R2655[165] = (char *(*)()) F491_3364;
	R2655[166] = (char *(*)()) F492_3364;
	R2655[167] = (char *(*)()) F493_3364;
	R2655[168] = (char *(*)()) F494_3364;
	R2655[169] = (char *(*)()) F495_3364;
	R2655[170] = (char *(*)()) F496_3364;
	R2655[171] = (char *(*)()) F497_3364;
	R2655[172] = (char *(*)()) F498_3364;
	R2655[173] = (char *(*)()) F499_3364;
	R2655[174] = (char *(*)()) F500_3364;
	R2655[175] = (char *(*)()) F501_3364;
	R2655[356] = (char *(*)()) F827_5482;
	R2655[437] = (char *(*)()) F906_6772;
	R2655[439] = (char *(*)()) F909_7015;
	R2655[441] = (char *(*)()) F909_7015;
	R2655[442] = (char *(*)()) F906_6772;
}

EIF_TYPE_INDEX *Y2655_gen_type [473];
EIF_TYPE_INDEX Y2655 [473];
void Y2655_init (void)
{
	egc_routines_types [2655] = Y2655;
	egc_routines_gen_types [2655] = Y2655_gen_type;
	egc_routines_offset [2655] = 440;
	{long i; for (i = 0; i < 109; i++) Y2655[i] = 859;};
	{long i; for (i = 118; i < 133; i++) Y2655[i] = 859;};
	{long i; for (i = 183; i < 206; i++) Y2655[i] = 859;};
	Y2655[386] = 859;
	Y2655[465] = 859;
	{long i; for (i = 467; i < 470; i++) Y2655[i] = 859;};
	{long i; for (i = 471; i < 473; i++) Y2655[i] = 859;};
}

char *(*R2656[443])();
void R2656_init () {
	R2656[0] = (char *(*)()) F471_3244;
	R2656[1] = (char *(*)()) F472_3299;
	R2656[2] = (char *(*)()) F473_3299;
	R2656[3] = (char *(*)()) F474_3299;
	R2656[4] = (char *(*)()) F475_3299;
	R2656[5] = (char *(*)()) F476_3299;
	R2656[6] = (char *(*)()) F477_3299;
	R2656[7] = (char *(*)()) F478_3299;
	R2656[8] = (char *(*)()) F479_3299;
	R2656[9] = (char *(*)()) F480_3299;
	R2656[10] = (char *(*)()) F481_3299;
	R2656[11] = (char *(*)()) F482_3299;
	R2656[12] = (char *(*)()) F483_3299;
	R2656[13] = (char *(*)()) F484_3299;
	R2656[14] = (char *(*)()) F485_3299;
	R2656[15] = (char *(*)()) F486_3299;
	R2656[76] = (char *(*)()) F547_3626;
	R2656[77] = (char *(*)()) F548_3626;
	R2656[78] = (char *(*)()) F549_3626;
	R2656[88] = (char *(*)()) F559_3196;
	R2656[89] = (char *(*)()) F560_3196;
	R2656[90] = (char *(*)()) F561_3196;
	R2656[91] = (char *(*)()) F562_3196;
	R2656[92] = (char *(*)()) F563_3196;
	R2656[93] = (char *(*)()) F564_3196;
	R2656[94] = (char *(*)()) F565_3196;
	R2656[95] = (char *(*)()) F566_3196;
	R2656[96] = (char *(*)()) F567_3196;
	R2656[97] = (char *(*)()) F568_3196;
	R2656[98] = (char *(*)()) F569_3196;
	R2656[99] = (char *(*)()) F570_3196;
	R2656[100] = (char *(*)()) F571_3196;
	R2656[101] = (char *(*)()) F572_3196;
	R2656[102] = (char *(*)()) F573_3196;
	R2656[153] = (char *(*)()) F624_4047;
	R2656[154] = (char *(*)()) F625_4047;
	R2656[155] = (char *(*)()) F626_4047;
	R2656[156] = (char *(*)()) F627_4047;
	R2656[157] = (char *(*)()) F628_4047;
	R2656[158] = (char *(*)()) F624_4047;
	R2656[159] = (char *(*)()) F626_4047;
	R2656[160] = (char *(*)()) F624_4047;
	R2656[161] = (char *(*)()) F632_4195;
	R2656[162] = (char *(*)()) F633_4195;
	R2656[163] = (char *(*)()) F634_4195;
	R2656[164] = (char *(*)()) F635_4195;
	R2656[165] = (char *(*)()) F636_4195;
	R2656[166] = (char *(*)()) F637_4195;
	R2656[167] = (char *(*)()) F638_4195;
	R2656[168] = (char *(*)()) F639_4195;
	R2656[169] = (char *(*)()) F640_4195;
	R2656[170] = (char *(*)()) F641_4195;
	R2656[171] = (char *(*)()) F642_4195;
	R2656[172] = (char *(*)()) F643_4195;
	R2656[173] = (char *(*)()) F644_4195;
	R2656[174] = (char *(*)()) F645_4195;
	R2656[175] = (char *(*)()) F646_4195;
	R2656[356] = (char *(*)()) F827_5481;
	R2656[437] = (char *(*)()) F906_6770;
	R2656[439] = (char *(*)()) F909_7013;
	R2656[441] = (char *(*)()) F909_7013;
	R2656[442] = (char *(*)()) F906_6770;
}

char *(*R2658[443])();
void R2658_init () {
	R2658[0] = (char *(*)()) F471_3248;
	R2658[1] = (char *(*)()) F472_3308;
	R2658[2] = (char *(*)()) F473_3308;
	R2658[3] = (char *(*)()) F474_3308;
	R2658[4] = (char *(*)()) F475_3308;
	R2658[5] = (char *(*)()) F476_3308;
	R2658[6] = (char *(*)()) F477_3308;
	R2658[7] = (char *(*)()) F478_3308;
	R2658[8] = (char *(*)()) F479_3308;
	R2658[9] = (char *(*)()) F480_3308;
	R2658[10] = (char *(*)()) F481_3308;
	R2658[11] = (char *(*)()) F482_3308;
	R2658[12] = (char *(*)()) F483_3308;
	R2658[13] = (char *(*)()) F484_3308;
	R2658[14] = (char *(*)()) F485_3308;
	R2658[15] = (char *(*)()) F486_3308;
	R2658[76] = (char *(*)()) F487_3369;
	R2658[77] = (char *(*)()) F488_3369;
	R2658[78] = (char *(*)()) F491_3369;
	R2658[88] = (char *(*)()) F559_3201;
	R2658[89] = (char *(*)()) F560_3201;
	R2658[90] = (char *(*)()) F561_3201;
	R2658[91] = (char *(*)()) F562_3201;
	R2658[92] = (char *(*)()) F563_3201;
	R2658[93] = (char *(*)()) F564_3201;
	R2658[94] = (char *(*)()) F565_3201;
	R2658[95] = (char *(*)()) F566_3201;
	R2658[96] = (char *(*)()) F567_3201;
	R2658[97] = (char *(*)()) F568_3201;
	R2658[98] = (char *(*)()) F569_3201;
	R2658[99] = (char *(*)()) F570_3201;
	R2658[100] = (char *(*)()) F571_3201;
	R2658[101] = (char *(*)()) F572_3201;
	R2658[102] = (char *(*)()) F573_3201;
	R2658[153] = (char *(*)()) F624_4063;
	R2658[154] = (char *(*)()) F625_4063;
	R2658[155] = (char *(*)()) F626_4063;
	R2658[156] = (char *(*)()) F627_4063;
	R2658[157] = (char *(*)()) F628_4063;
	R2658[158] = (char *(*)()) F624_4063;
	R2658[159] = (char *(*)()) F626_4063;
	R2658[160] = (char *(*)()) F624_4063;
	R2658[161] = (char *(*)()) F632_4201;
	R2658[162] = (char *(*)()) F633_4201;
	R2658[163] = (char *(*)()) F634_4201;
	R2658[164] = (char *(*)()) F635_4201;
	R2658[165] = (char *(*)()) F636_4201;
	R2658[166] = (char *(*)()) F637_4201;
	R2658[167] = (char *(*)()) F638_4201;
	R2658[168] = (char *(*)()) F639_4201;
	R2658[169] = (char *(*)()) F640_4201;
	R2658[170] = (char *(*)()) F641_4201;
	R2658[171] = (char *(*)()) F642_4201;
	R2658[172] = (char *(*)()) F643_4201;
	R2658[173] = (char *(*)()) F644_4201;
	R2658[174] = (char *(*)()) F645_4201;
	R2658[175] = (char *(*)()) F646_4201;
	R2658[356] = (char *(*)()) F827_5479;
	R2658[437] = (char *(*)()) F905_6665;
	R2658[439] = (char *(*)()) F905_6665;
	{long i; for (i = 441; i < 443; i++) R2658[i] = (char *(*)()) F905_6665;}
}

char *(*R2659[15])();
void R2659_init () {
	R2659[0] = (char *(*)()) F559_3184;
	R2659[1] = (char *(*)()) F560_3184;
	R2659[2] = (char *(*)()) F561_3184;
	R2659[3] = (char *(*)()) F562_3184;
	R2659[4] = (char *(*)()) F563_3184;
	R2659[5] = (char *(*)()) F564_3184;
	R2659[6] = (char *(*)()) F565_3184;
	R2659[7] = (char *(*)()) F566_3184;
	R2659[8] = (char *(*)()) F567_3184;
	R2659[9] = (char *(*)()) F568_3184;
	R2659[10] = (char *(*)()) F569_3184;
	R2659[11] = (char *(*)()) F570_3184;
	R2659[12] = (char *(*)()) F571_3184;
	R2659[13] = (char *(*)()) F572_3184;
	R2659[14] = (char *(*)()) F573_3184;
}

char *(*R2660[15])();
void R2660_init () {
	R2660[0] = (char *(*)()) F559_3185;
	R2660[1] = (char *(*)()) F560_3185_2660_126;
	R2660[2] = (char *(*)()) F561_3185_2660_126;
	R2660[3] = (char *(*)()) F562_3185_2660_126;
	R2660[4] = (char *(*)()) F563_3185_2660_126;
	R2660[5] = (char *(*)()) F564_3185_2660_126;
	R2660[6] = (char *(*)()) F565_3185_2660_126;
	R2660[7] = (char *(*)()) F566_3185_2660_126;
	R2660[8] = (char *(*)()) F567_3185_2660_126;
	R2660[9] = (char *(*)()) F568_3185_2660_126;
	R2660[10] = (char *(*)()) F569_3185_2660_126;
	R2660[11] = (char *(*)()) F570_3185_2660_126;
	R2660[12] = (char *(*)()) F571_3185_2660_126;
	R2660[13] = (char *(*)()) F572_3185_2660_126;
	R2660[14] = (char *(*)()) F573_3185_2660_126;
}
static void F560_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F560_3185(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F561_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F561_3185(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F562_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F562_3185(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F563_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F563_3185(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F564_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F564_3185(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F565_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F565_3185(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F566_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F566_3185(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F567_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F567_3185(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F568_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F568_3185(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F569_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F569_3185(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F570_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F570_3185(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F571_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F571_3185(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F572_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F572_3185(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F573_3185_2660_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F573_3185(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R2661[15])();
void R2661_init () {
	R2661[0] = (char *(*)()) F559_3186;
	R2661[1] = (char *(*)()) F560_3186;
	R2661[2] = (char *(*)()) F561_3186;
	R2661[3] = (char *(*)()) F562_3186;
	R2661[4] = (char *(*)()) F563_3186;
	R2661[5] = (char *(*)()) F564_3186;
	R2661[6] = (char *(*)()) F565_3186;
	R2661[7] = (char *(*)()) F566_3186;
	R2661[8] = (char *(*)()) F567_3186;
	R2661[9] = (char *(*)()) F568_3186;
	R2661[10] = (char *(*)()) F569_3186;
	R2661[11] = (char *(*)()) F570_3186;
	R2661[12] = (char *(*)()) F571_3186;
	R2661[13] = (char *(*)()) F572_3186;
	R2661[14] = (char *(*)()) F573_3186;
}

char *(*R2666[15])();
void R2666_init () {
	R2666[0] = (char *(*)()) F559_3192;
	R2666[1] = (char *(*)()) F560_3192;
	R2666[2] = (char *(*)()) F561_3192;
	R2666[3] = (char *(*)()) F562_3192;
	R2666[4] = (char *(*)()) F563_3192;
	R2666[5] = (char *(*)()) F564_3192;
	R2666[6] = (char *(*)()) F565_3192;
	R2666[7] = (char *(*)()) F566_3192;
	R2666[8] = (char *(*)()) F567_3192;
	R2666[9] = (char *(*)()) F568_3192;
	R2666[10] = (char *(*)()) F569_3192;
	R2666[11] = (char *(*)()) F570_3192;
	R2666[12] = (char *(*)()) F571_3192;
	R2666[13] = (char *(*)()) F572_3192;
	R2666[14] = (char *(*)()) F573_3192;
}

char *(*R2668[15])();
void R2668_init () {
	R2668[0] = (char *(*)()) F559_3199;
	R2668[1] = (char *(*)()) F560_3199_2668_325;
	R2668[2] = (char *(*)()) F561_3199_2668_325;
	R2668[3] = (char *(*)()) F562_3199_2668_325;
	R2668[4] = (char *(*)()) F563_3199_2668_325;
	R2668[5] = (char *(*)()) F564_3199_2668_325;
	R2668[6] = (char *(*)()) F565_3199_2668_325;
	R2668[7] = (char *(*)()) F566_3199_2668_325;
	R2668[8] = (char *(*)()) F567_3199_2668_325;
	R2668[9] = (char *(*)()) F568_3199_2668_325;
	R2668[10] = (char *(*)()) F569_3199_2668_325;
	R2668[11] = (char *(*)()) F570_3199_2668_325;
	R2668[12] = (char *(*)()) F571_3199_2668_325;
	R2668[13] = (char *(*)()) F572_3199_2668_325;
	R2668[14] = (char *(*)()) F573_3199_2668_325;
}
static EIF_BOOLEAN F560_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F560_3199(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F561_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F561_3199(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F562_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F562_3199(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F563_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F563_3199(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F564_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F564_3199(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F565_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F565_3199(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F566_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F566_3199(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F567_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F567_3199(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F568_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F568_3199(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F569_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F569_3199(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F570_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F570_3199(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F571_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F571_3199(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F572_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F572_3199(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F573_3199_2668_325 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F573_3199(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}

char *(*R2669[15])();
void R2669_init () {
	R2669[0] = (char *(*)()) F559_3200;
	R2669[1] = (char *(*)()) F560_3200;
	R2669[2] = (char *(*)()) F561_3200;
	R2669[3] = (char *(*)()) F562_3200;
	R2669[4] = (char *(*)()) F563_3200;
	R2669[5] = (char *(*)()) F564_3200;
	R2669[6] = (char *(*)()) F565_3200;
	R2669[7] = (char *(*)()) F566_3200;
	R2669[8] = (char *(*)()) F567_3200;
	R2669[9] = (char *(*)()) F568_3200;
	R2669[10] = (char *(*)()) F569_3200;
	R2669[11] = (char *(*)()) F570_3200;
	R2669[12] = (char *(*)()) F571_3200;
	R2669[13] = (char *(*)()) F572_3200;
	R2669[14] = (char *(*)()) F573_3200;
}

char *(*R2670[15])();
void R2670_init () {
	R2670[0] = (char *(*)()) F559_3202;
	R2670[1] = (char *(*)()) F560_3202_2670_126;
	R2670[2] = (char *(*)()) F561_3202_2670_126;
	R2670[3] = (char *(*)()) F562_3202_2670_126;
	R2670[4] = (char *(*)()) F563_3202_2670_126;
	R2670[5] = (char *(*)()) F564_3202_2670_126;
	R2670[6] = (char *(*)()) F565_3202_2670_126;
	R2670[7] = (char *(*)()) F566_3202_2670_126;
	R2670[8] = (char *(*)()) F567_3202_2670_126;
	R2670[9] = (char *(*)()) F568_3202_2670_126;
	R2670[10] = (char *(*)()) F569_3202_2670_126;
	R2670[11] = (char *(*)()) F570_3202_2670_126;
	R2670[12] = (char *(*)()) F571_3202_2670_126;
	R2670[13] = (char *(*)()) F572_3202_2670_126;
	R2670[14] = (char *(*)()) F573_3202_2670_126;
}
static void F560_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F560_3202(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F561_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F561_3202(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F562_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F562_3202(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F563_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F563_3202(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F564_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F564_3202(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F565_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F565_3202(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F566_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F566_3202(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F567_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F567_3202(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F568_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F568_3202(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F569_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F569_3202(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F570_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F570_3202(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F571_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F571_3202(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F572_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F572_3202(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F573_3202_2670_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F573_3202(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R2671[15])();
void R2671_init () {
	R2671[0] = (char *(*)()) F559_3203;
	R2671[1] = (char *(*)()) F560_3203_2671_126;
	R2671[2] = (char *(*)()) F561_3203_2671_126;
	R2671[3] = (char *(*)()) F562_3203_2671_126;
	R2671[4] = (char *(*)()) F563_3203_2671_126;
	R2671[5] = (char *(*)()) F564_3203_2671_126;
	R2671[6] = (char *(*)()) F565_3203_2671_126;
	R2671[7] = (char *(*)()) F566_3203_2671_126;
	R2671[8] = (char *(*)()) F567_3203_2671_126;
	R2671[9] = (char *(*)()) F568_3203_2671_126;
	R2671[10] = (char *(*)()) F569_3203_2671_126;
	R2671[11] = (char *(*)()) F570_3203_2671_126;
	R2671[12] = (char *(*)()) F571_3203_2671_126;
	R2671[13] = (char *(*)()) F572_3203_2671_126;
	R2671[14] = (char *(*)()) F573_3203_2671_126;
}
static void F560_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F560_3203(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F561_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F561_3203(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F562_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F562_3203(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F563_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F563_3203(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F564_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F564_3203(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F565_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F565_3203(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F566_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F566_3203(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F567_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F567_3203(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F568_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F568_3203(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F569_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F569_3203(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F570_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F570_3203(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F571_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F571_3203(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F572_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F572_3203(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F573_3203_2671_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F573_3203(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R2672[15])();
void R2672_init () {
	R2672[0] = (char *(*)()) F559_3204;
	R2672[1] = (char *(*)()) F560_3204_2672_4;
	R2672[2] = (char *(*)()) F561_3204_2672_4;
	R2672[3] = (char *(*)()) F562_3204_2672_4;
	R2672[4] = (char *(*)()) F563_3204_2672_4;
	R2672[5] = (char *(*)()) F564_3204_2672_4;
	R2672[6] = (char *(*)()) F565_3204_2672_4;
	R2672[7] = (char *(*)()) F566_3204_2672_4;
	R2672[8] = (char *(*)()) F567_3204_2672_4;
	R2672[9] = (char *(*)()) F568_3204_2672_4;
	R2672[10] = (char *(*)()) F569_3204_2672_4;
	R2672[11] = (char *(*)()) F570_3204_2672_4;
	R2672[12] = (char *(*)()) F571_3204_2672_4;
	R2672[13] = (char *(*)()) F572_3204_2672_4;
	R2672[14] = (char *(*)()) F573_3204_2672_4;
}
static void F560_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F560_3204(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F561_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F561_3204(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F562_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F562_3204(Current, *(EIF_REAL_64 *)arg1);
}
static void F563_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_3204(Current, *(EIF_BOOLEAN *)arg1);
}
static void F564_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_3204(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F565_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_3204(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F566_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_3204(Current, *(EIF_POINTER *)arg1);
}
static void F567_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_3204(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F568_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_3204(Current, *(EIF_REAL_32 *)arg1);
}
static void F569_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_3204(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F570_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_3204(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F571_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_3204(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F572_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_3204(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F573_3204_2672_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_3204(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2674[15])();
void R2674_init () {
	R2674[0] = (char *(*)()) F559_3206;
	R2674[1] = (char *(*)()) F560_3206_2674_137;
	R2674[2] = (char *(*)()) F561_3206_2674_137;
	R2674[3] = (char *(*)()) F562_3206_2674_137;
	R2674[4] = (char *(*)()) F563_3206_2674_137;
	R2674[5] = (char *(*)()) F564_3206_2674_137;
	R2674[6] = (char *(*)()) F565_3206_2674_137;
	R2674[7] = (char *(*)()) F566_3206_2674_137;
	R2674[8] = (char *(*)()) F567_3206_2674_137;
	R2674[9] = (char *(*)()) F568_3206_2674_137;
	R2674[10] = (char *(*)()) F569_3206_2674_137;
	R2674[11] = (char *(*)()) F570_3206_2674_137;
	R2674[12] = (char *(*)()) F571_3206_2674_137;
	R2674[13] = (char *(*)()) F572_3206_2674_137;
	R2674[14] = (char *(*)()) F573_3206_2674_137;
}
static void F560_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F560_3206(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F561_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F561_3206(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F562_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F562_3206(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F563_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F563_3206(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F564_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F564_3206(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F565_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F565_3206(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F566_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F566_3206(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F567_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F567_3206(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F568_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F568_3206(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F569_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F569_3206(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F570_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F570_3206(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F571_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F571_3206(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F572_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F572_3206(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F573_3206_2674_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F573_3206(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}

char *(*R2676[15])();
void R2676_init () {
	R2676[0] = (char *(*)()) F559_3208;
	R2676[1] = (char *(*)()) F560_3208;
	R2676[2] = (char *(*)()) F561_3208;
	R2676[3] = (char *(*)()) F562_3208;
	R2676[4] = (char *(*)()) F563_3208;
	R2676[5] = (char *(*)()) F564_3208;
	R2676[6] = (char *(*)()) F565_3208;
	R2676[7] = (char *(*)()) F566_3208;
	R2676[8] = (char *(*)()) F567_3208;
	R2676[9] = (char *(*)()) F568_3208;
	R2676[10] = (char *(*)()) F569_3208;
	R2676[11] = (char *(*)()) F570_3208;
	R2676[12] = (char *(*)()) F571_3208;
	R2676[13] = (char *(*)()) F572_3208;
	R2676[14] = (char *(*)()) F573_3208;
}

char *(*R2677[15])();
void R2677_init () {
	R2677[0] = (char *(*)()) F559_3209;
	R2677[1] = (char *(*)()) F560_3209;
	R2677[2] = (char *(*)()) F561_3209;
	R2677[3] = (char *(*)()) F562_3209;
	R2677[4] = (char *(*)()) F563_3209;
	R2677[5] = (char *(*)()) F564_3209;
	R2677[6] = (char *(*)()) F565_3209;
	R2677[7] = (char *(*)()) F566_3209;
	R2677[8] = (char *(*)()) F567_3209;
	R2677[9] = (char *(*)()) F568_3209;
	R2677[10] = (char *(*)()) F569_3209;
	R2677[11] = (char *(*)()) F570_3209;
	R2677[12] = (char *(*)()) F571_3209;
	R2677[13] = (char *(*)()) F572_3209;
	R2677[14] = (char *(*)()) F573_3209;
}

char *(*R2678[15])();
void R2678_init () {
	R2678[0] = (char *(*)()) F559_3210;
	R2678[1] = (char *(*)()) F560_3210;
	R2678[2] = (char *(*)()) F561_3210;
	R2678[3] = (char *(*)()) F562_3210;
	R2678[4] = (char *(*)()) F563_3210;
	R2678[5] = (char *(*)()) F564_3210;
	R2678[6] = (char *(*)()) F565_3210;
	R2678[7] = (char *(*)()) F566_3210;
	R2678[8] = (char *(*)()) F567_3210;
	R2678[9] = (char *(*)()) F568_3210;
	R2678[10] = (char *(*)()) F569_3210;
	R2678[11] = (char *(*)()) F570_3210;
	R2678[12] = (char *(*)()) F571_3210;
	R2678[13] = (char *(*)()) F572_3210;
	R2678[14] = (char *(*)()) F573_3210;
}

char *(*R2679[15])();
void R2679_init () {
	R2679[0] = (char *(*)()) F559_3211;
	R2679[1] = (char *(*)()) F560_3211;
	R2679[2] = (char *(*)()) F561_3211;
	R2679[3] = (char *(*)()) F562_3211;
	R2679[4] = (char *(*)()) F563_3211;
	R2679[5] = (char *(*)()) F564_3211;
	R2679[6] = (char *(*)()) F565_3211;
	R2679[7] = (char *(*)()) F566_3211;
	R2679[8] = (char *(*)()) F567_3211;
	R2679[9] = (char *(*)()) F568_3211;
	R2679[10] = (char *(*)()) F569_3211;
	R2679[11] = (char *(*)()) F570_3211;
	R2679[12] = (char *(*)()) F571_3211;
	R2679[13] = (char *(*)()) F572_3211;
	R2679[14] = (char *(*)()) F573_3211;
}

char *(*R2680[15])();
void R2680_init () {
	R2680[0] = (char *(*)()) F559_3212;
	R2680[1] = (char *(*)()) F560_3212;
	R2680[2] = (char *(*)()) F561_3212;
	R2680[3] = (char *(*)()) F562_3212;
	R2680[4] = (char *(*)()) F563_3212;
	R2680[5] = (char *(*)()) F564_3212;
	R2680[6] = (char *(*)()) F565_3212;
	R2680[7] = (char *(*)()) F566_3212;
	R2680[8] = (char *(*)()) F567_3212;
	R2680[9] = (char *(*)()) F568_3212;
	R2680[10] = (char *(*)()) F569_3212;
	R2680[11] = (char *(*)()) F570_3212;
	R2680[12] = (char *(*)()) F571_3212;
	R2680[13] = (char *(*)()) F572_3212;
	R2680[14] = (char *(*)()) F573_3212;
}

char *(*R2681[15])();
void R2681_init () {
	R2681[0] = (char *(*)()) F559_3213;
	R2681[1] = (char *(*)()) F560_3213;
	R2681[2] = (char *(*)()) F561_3213;
	R2681[3] = (char *(*)()) F562_3213;
	R2681[4] = (char *(*)()) F563_3213;
	R2681[5] = (char *(*)()) F564_3213;
	R2681[6] = (char *(*)()) F565_3213;
	R2681[7] = (char *(*)()) F566_3213;
	R2681[8] = (char *(*)()) F567_3213;
	R2681[9] = (char *(*)()) F568_3213;
	R2681[10] = (char *(*)()) F569_3213;
	R2681[11] = (char *(*)()) F570_3213;
	R2681[12] = (char *(*)()) F571_3213;
	R2681[13] = (char *(*)()) F572_3213;
	R2681[14] = (char *(*)()) F573_3213;
}

char *(*R2682[15])();
void R2682_init () {
	R2682[0] = (char *(*)()) F559_3214;
	R2682[1] = (char *(*)()) F560_3214;
	R2682[2] = (char *(*)()) F561_3214;
	R2682[3] = (char *(*)()) F562_3214;
	R2682[4] = (char *(*)()) F563_3214;
	R2682[5] = (char *(*)()) F564_3214;
	R2682[6] = (char *(*)()) F565_3214;
	R2682[7] = (char *(*)()) F566_3214;
	R2682[8] = (char *(*)()) F567_3214;
	R2682[9] = (char *(*)()) F568_3214;
	R2682[10] = (char *(*)()) F569_3214;
	R2682[11] = (char *(*)()) F570_3214;
	R2682[12] = (char *(*)()) F571_3214;
	R2682[13] = (char *(*)()) F572_3214;
	R2682[14] = (char *(*)()) F573_3214;
}

char *(*R2684[15])();
void R2684_init () {
	R2684[0] = (char *(*)()) F559_3216;
	R2684[1] = (char *(*)()) F560_3216;
	R2684[2] = (char *(*)()) F561_3216;
	R2684[3] = (char *(*)()) F562_3216;
	R2684[4] = (char *(*)()) F563_3216;
	R2684[5] = (char *(*)()) F564_3216;
	R2684[6] = (char *(*)()) F565_3216;
	R2684[7] = (char *(*)()) F566_3216;
	R2684[8] = (char *(*)()) F567_3216;
	R2684[9] = (char *(*)()) F568_3216;
	R2684[10] = (char *(*)()) F569_3216;
	R2684[11] = (char *(*)()) F570_3216;
	R2684[12] = (char *(*)()) F571_3216;
	R2684[13] = (char *(*)()) F572_3216;
	R2684[14] = (char *(*)()) F573_3216;
}

char *(*R2687[15])();
void R2687_init () {
	R2687[0] = (char *(*)()) F559_3219;
	R2687[1] = (char *(*)()) F560_3219;
	R2687[2] = (char *(*)()) F561_3219;
	R2687[3] = (char *(*)()) F562_3219;
	R2687[4] = (char *(*)()) F563_3219;
	R2687[5] = (char *(*)()) F564_3219;
	R2687[6] = (char *(*)()) F565_3219;
	R2687[7] = (char *(*)()) F566_3219;
	R2687[8] = (char *(*)()) F567_3219;
	R2687[9] = (char *(*)()) F568_3219;
	R2687[10] = (char *(*)()) F569_3219;
	R2687[11] = (char *(*)()) F570_3219;
	R2687[12] = (char *(*)()) F571_3219;
	R2687[13] = (char *(*)()) F572_3219;
	R2687[14] = (char *(*)()) F573_3219;
}

char *(*R2688[15])();
void R2688_init () {
	R2688[0] = (char *(*)()) F559_3220;
	R2688[1] = (char *(*)()) F560_3220_2688_107;
	R2688[2] = (char *(*)()) F561_3220_2688_107;
	R2688[3] = (char *(*)()) F562_3220_2688_107;
	R2688[4] = (char *(*)()) F563_3220_2688_107;
	R2688[5] = (char *(*)()) F564_3220_2688_107;
	R2688[6] = (char *(*)()) F565_3220_2688_107;
	R2688[7] = (char *(*)()) F566_3220_2688_107;
	R2688[8] = (char *(*)()) F567_3220_2688_107;
	R2688[9] = (char *(*)()) F568_3220_2688_107;
	R2688[10] = (char *(*)()) F569_3220_2688_107;
	R2688[11] = (char *(*)()) F570_3220_2688_107;
	R2688[12] = (char *(*)()) F571_3220_2688_107;
	R2688[13] = (char *(*)()) F572_3220_2688_107;
	R2688[14] = (char *(*)()) F573_3220_2688_107;
}
static EIF_REFERENCE F560_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F560_3220(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F561_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F561_3220(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F562_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F562_3220(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F563_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F563_3220(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F564_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F564_3220(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_REFERENCE F565_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F565_3220(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F566_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F566_3220(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F567_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F567_3220(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F568_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F568_3220(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F569_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F569_3220(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F570_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F570_3220(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F571_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F571_3220(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F572_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F572_3220(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_REFERENCE F573_3220_2688_107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F573_3220(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R2690[15])();
void R2690_init () {
	R2690[0] = (char *(*)()) F559_3222;
	R2690[1] = (char *(*)()) F560_3222;
	R2690[2] = (char *(*)()) F561_3222;
	R2690[3] = (char *(*)()) F562_3222;
	R2690[4] = (char *(*)()) F563_3222;
	R2690[5] = (char *(*)()) F564_3222;
	R2690[6] = (char *(*)()) F565_3222;
	R2690[7] = (char *(*)()) F566_3222;
	R2690[8] = (char *(*)()) F567_3222;
	R2690[9] = (char *(*)()) F568_3222;
	R2690[10] = (char *(*)()) F569_3222;
	R2690[11] = (char *(*)()) F570_3222;
	R2690[12] = (char *(*)()) F571_3222;
	R2690[13] = (char *(*)()) F572_3222;
	R2690[14] = (char *(*)()) F573_3222;
}

char *(*R2692[15])();
void R2692_init () {
	R2692[0] = (char *(*)()) F559_3224;
	R2692[1] = (char *(*)()) F560_3224;
	R2692[2] = (char *(*)()) F561_3224;
	R2692[3] = (char *(*)()) F562_3224;
	R2692[4] = (char *(*)()) F563_3224;
	R2692[5] = (char *(*)()) F564_3224;
	R2692[6] = (char *(*)()) F565_3224;
	R2692[7] = (char *(*)()) F566_3224;
	R2692[8] = (char *(*)()) F567_3224;
	R2692[9] = (char *(*)()) F568_3224;
	R2692[10] = (char *(*)()) F569_3224;
	R2692[11] = (char *(*)()) F570_3224;
	R2692[12] = (char *(*)()) F571_3224;
	R2692[13] = (char *(*)()) F572_3224;
	R2692[14] = (char *(*)()) F573_3224;
}

char *(*R2693[15])();
void R2693_init () {
	R2693[0] = (char *(*)()) F559_3225;
	R2693[1] = (char *(*)()) F560_3225;
	R2693[2] = (char *(*)()) F561_3225;
	R2693[3] = (char *(*)()) F562_3225;
	R2693[4] = (char *(*)()) F563_3225;
	R2693[5] = (char *(*)()) F564_3225;
	R2693[6] = (char *(*)()) F565_3225;
	R2693[7] = (char *(*)()) F566_3225;
	R2693[8] = (char *(*)()) F567_3225;
	R2693[9] = (char *(*)()) F568_3225;
	R2693[10] = (char *(*)()) F569_3225;
	R2693[11] = (char *(*)()) F570_3225;
	R2693[12] = (char *(*)()) F571_3225;
	R2693[13] = (char *(*)()) F572_3225;
	R2693[14] = (char *(*)()) F573_3225;
}

char *(*R2694[15])();
void R2694_init () {
	R2694[0] = (char *(*)()) F559_3226;
	R2694[1] = (char *(*)()) F560_3226;
	R2694[2] = (char *(*)()) F561_3226;
	R2694[3] = (char *(*)()) F562_3226;
	R2694[4] = (char *(*)()) F563_3226;
	R2694[5] = (char *(*)()) F564_3226;
	R2694[6] = (char *(*)()) F565_3226;
	R2694[7] = (char *(*)()) F566_3226;
	R2694[8] = (char *(*)()) F567_3226;
	R2694[9] = (char *(*)()) F568_3226;
	R2694[10] = (char *(*)()) F569_3226;
	R2694[11] = (char *(*)()) F570_3226;
	R2694[12] = (char *(*)()) F571_3226;
	R2694[13] = (char *(*)()) F572_3226;
	R2694[14] = (char *(*)()) F573_3226;
}

char *(*R2695[15])();
void R2695_init () {
	R2695[0] = (char *(*)()) F559_3227;
	R2695[1] = (char *(*)()) F560_3227;
	R2695[2] = (char *(*)()) F561_3227;
	R2695[3] = (char *(*)()) F562_3227;
	R2695[4] = (char *(*)()) F563_3227;
	R2695[5] = (char *(*)()) F564_3227;
	R2695[6] = (char *(*)()) F565_3227;
	R2695[7] = (char *(*)()) F566_3227;
	R2695[8] = (char *(*)()) F567_3227;
	R2695[9] = (char *(*)()) F568_3227;
	R2695[10] = (char *(*)()) F569_3227;
	R2695[11] = (char *(*)()) F570_3227;
	R2695[12] = (char *(*)()) F571_3227;
	R2695[13] = (char *(*)()) F572_3227;
	R2695[14] = (char *(*)()) F573_3227;
}

char *(*R2699[15])();
void R2699_init () {
	R2699[0] = (char *(*)()) F559_3232;
	R2699[1] = (char *(*)()) F560_3232;
	R2699[2] = (char *(*)()) F561_3232;
	R2699[3] = (char *(*)()) F562_3232;
	R2699[4] = (char *(*)()) F563_3232;
	R2699[5] = (char *(*)()) F564_3232;
	R2699[6] = (char *(*)()) F565_3232;
	R2699[7] = (char *(*)()) F566_3232;
	R2699[8] = (char *(*)()) F567_3232;
	R2699[9] = (char *(*)()) F568_3232;
	R2699[10] = (char *(*)()) F569_3232;
	R2699[11] = (char *(*)()) F570_3232;
	R2699[12] = (char *(*)()) F571_3232;
	R2699[13] = (char *(*)()) F572_3232;
	R2699[14] = (char *(*)()) F573_3232;
}

char *(*R2725[15])();
void R2725_init () {
	R2725[0] = (char *(*)()) F472_3287;
	R2725[1] = (char *(*)()) F473_3287;
	R2725[2] = (char *(*)()) F474_3287;
	R2725[3] = (char *(*)()) F475_3287;
	R2725[4] = (char *(*)()) F476_3287;
	R2725[5] = (char *(*)()) F477_3287;
	R2725[6] = (char *(*)()) F478_3287;
	R2725[7] = (char *(*)()) F479_3287;
	R2725[8] = (char *(*)()) F480_3287;
	R2725[9] = (char *(*)()) F481_3287;
	R2725[10] = (char *(*)()) F482_3287;
	R2725[11] = (char *(*)()) F483_3287;
	R2725[12] = (char *(*)()) F484_3287;
	R2725[13] = (char *(*)()) F485_3287;
	R2725[14] = (char *(*)()) F486_3287;
}

char *(*R2726[15])();
void R2726_init () {
	R2726[0] = (char *(*)()) F472_3288;
	R2726[1] = (char *(*)()) F473_3288_2726_137;
	R2726[2] = (char *(*)()) F474_3288_2726_137;
	R2726[3] = (char *(*)()) F475_3288_2726_137;
	R2726[4] = (char *(*)()) F476_3288_2726_137;
	R2726[5] = (char *(*)()) F477_3288_2726_137;
	R2726[6] = (char *(*)()) F478_3288_2726_137;
	R2726[7] = (char *(*)()) F479_3288_2726_137;
	R2726[8] = (char *(*)()) F480_3288_2726_137;
	R2726[9] = (char *(*)()) F481_3288_2726_137;
	R2726[10] = (char *(*)()) F482_3288_2726_137;
	R2726[11] = (char *(*)()) F483_3288_2726_137;
	R2726[12] = (char *(*)()) F484_3288_2726_137;
	R2726[13] = (char *(*)()) F485_3288_2726_137;
	R2726[14] = (char *(*)()) F486_3288_2726_137;
}
static void F473_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F473_3288(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F474_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F474_3288(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F475_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F475_3288(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F476_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F476_3288(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F477_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F477_3288(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F478_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F478_3288(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F479_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F479_3288(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F480_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F480_3288(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F481_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F481_3288(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F482_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F482_3288(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F483_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F483_3288(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F484_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F484_3288(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F485_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F485_3288(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F486_3288_2726_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F486_3288(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}

char *(*R2729[15])();
void R2729_init () {
	R2729[0] = (char *(*)()) F472_3291;
	R2729[1] = (char *(*)()) F473_3291;
	R2729[2] = (char *(*)()) F474_3291;
	R2729[3] = (char *(*)()) F475_3291;
	R2729[4] = (char *(*)()) F476_3291;
	R2729[5] = (char *(*)()) F477_3291;
	R2729[6] = (char *(*)()) F478_3291;
	R2729[7] = (char *(*)()) F479_3291;
	R2729[8] = (char *(*)()) F480_3291;
	R2729[9] = (char *(*)()) F481_3291;
	R2729[10] = (char *(*)()) F482_3291;
	R2729[11] = (char *(*)()) F483_3291;
	R2729[12] = (char *(*)()) F484_3291;
	R2729[13] = (char *(*)()) F485_3291;
	R2729[14] = (char *(*)()) F486_3291;
}

char *(*R2732[15])();
void R2732_init () {
	R2732[0] = (char *(*)()) F472_3304;
	R2732[1] = (char *(*)()) F473_3304;
	R2732[2] = (char *(*)()) F474_3304;
	R2732[3] = (char *(*)()) F475_3304;
	R2732[4] = (char *(*)()) F476_3304;
	R2732[5] = (char *(*)()) F477_3304;
	R2732[6] = (char *(*)()) F478_3304;
	R2732[7] = (char *(*)()) F479_3304;
	R2732[8] = (char *(*)()) F480_3304;
	R2732[9] = (char *(*)()) F481_3304;
	R2732[10] = (char *(*)()) F482_3304;
	R2732[11] = (char *(*)()) F483_3304;
	R2732[12] = (char *(*)()) F484_3304;
	R2732[13] = (char *(*)()) F485_3304;
	R2732[14] = (char *(*)()) F486_3304;
}

char *(*R2733[15])();
void R2733_init () {
	R2733[0] = (char *(*)()) F472_3305;
	R2733[1] = (char *(*)()) F473_3305_2733_2;
	R2733[2] = (char *(*)()) F474_3305_2733_2;
	R2733[3] = (char *(*)()) F475_3305_2733_2;
	R2733[4] = (char *(*)()) F476_3305_2733_2;
	R2733[5] = (char *(*)()) F477_3305_2733_2;
	R2733[6] = (char *(*)()) F478_3305_2733_2;
	R2733[7] = (char *(*)()) F479_3305_2733_2;
	R2733[8] = (char *(*)()) F480_3305_2733_2;
	R2733[9] = (char *(*)()) F481_3305_2733_2;
	R2733[10] = (char *(*)()) F482_3305_2733_2;
	R2733[11] = (char *(*)()) F483_3305_2733_2;
	R2733[12] = (char *(*)()) F484_3305_2733_2;
	R2733[13] = (char *(*)()) F485_3305_2733_2;
	R2733[14] = (char *(*)()) F486_3305_2733_2;
}
static EIF_BOOLEAN F473_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F473_3305(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F474_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F474_3305(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F475_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F475_3305(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F476_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F476_3305(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F477_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F477_3305(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F478_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F478_3305(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F479_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F479_3305(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F480_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F480_3305(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F481_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F481_3305(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F482_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F482_3305(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F483_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F483_3305(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F484_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F484_3305(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F485_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F485_3305(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F486_3305_2733_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F486_3305(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2734[15])();
void R2734_init () {
	R2734[0] = (char *(*)()) F472_3307;
	R2734[1] = (char *(*)()) F473_3307;
	R2734[2] = (char *(*)()) F474_3307;
	R2734[3] = (char *(*)()) F475_3307;
	R2734[4] = (char *(*)()) F476_3307;
	R2734[5] = (char *(*)()) F477_3307;
	R2734[6] = (char *(*)()) F478_3307;
	R2734[7] = (char *(*)()) F479_3307;
	R2734[8] = (char *(*)()) F480_3307;
	R2734[9] = (char *(*)()) F481_3307;
	R2734[10] = (char *(*)()) F482_3307;
	R2734[11] = (char *(*)()) F483_3307;
	R2734[12] = (char *(*)()) F484_3307;
	R2734[13] = (char *(*)()) F485_3307;
	R2734[14] = (char *(*)()) F486_3307;
}

char *(*R2739[15])();
void R2739_init () {
	R2739[0] = (char *(*)()) F472_3317;
	R2739[1] = (char *(*)()) F473_3317;
	R2739[2] = (char *(*)()) F474_3317;
	R2739[3] = (char *(*)()) F475_3317;
	R2739[4] = (char *(*)()) F476_3317;
	R2739[5] = (char *(*)()) F477_3317;
	R2739[6] = (char *(*)()) F478_3317;
	R2739[7] = (char *(*)()) F479_3317;
	R2739[8] = (char *(*)()) F480_3317;
	R2739[9] = (char *(*)()) F481_3317;
	R2739[10] = (char *(*)()) F482_3317;
	R2739[11] = (char *(*)()) F483_3317;
	R2739[12] = (char *(*)()) F484_3317;
	R2739[13] = (char *(*)()) F485_3317;
	R2739[14] = (char *(*)()) F486_3317;
}

char *(*R2746[15])();
void R2746_init () {
	R2746[0] = (char *(*)()) F472_3325;
	R2746[1] = (char *(*)()) F473_3325;
	R2746[2] = (char *(*)()) F474_3325;
	R2746[3] = (char *(*)()) F475_3325;
	R2746[4] = (char *(*)()) F476_3325;
	R2746[5] = (char *(*)()) F477_3325;
	R2746[6] = (char *(*)()) F478_3325;
	R2746[7] = (char *(*)()) F479_3325;
	R2746[8] = (char *(*)()) F480_3325;
	R2746[9] = (char *(*)()) F481_3325;
	R2746[10] = (char *(*)()) F482_3325;
	R2746[11] = (char *(*)()) F483_3325;
	R2746[12] = (char *(*)()) F484_3325;
	R2746[13] = (char *(*)()) F485_3325;
	R2746[14] = (char *(*)()) F486_3325;
}

char *(*R2748[15])();
void R2748_init () {
	R2748[0] = (char *(*)()) F472_3327;
	R2748[1] = (char *(*)()) F473_3327;
	R2748[2] = (char *(*)()) F474_3327;
	R2748[3] = (char *(*)()) F475_3327;
	R2748[4] = (char *(*)()) F476_3327;
	R2748[5] = (char *(*)()) F477_3327;
	R2748[6] = (char *(*)()) F478_3327;
	R2748[7] = (char *(*)()) F479_3327;
	R2748[8] = (char *(*)()) F480_3327;
	R2748[9] = (char *(*)()) F481_3327;
	R2748[10] = (char *(*)()) F482_3327;
	R2748[11] = (char *(*)()) F483_3327;
	R2748[12] = (char *(*)()) F484_3327;
	R2748[13] = (char *(*)()) F485_3327;
	R2748[14] = (char *(*)()) F486_3327;
}

char *(*R2749[15])();
void R2749_init () {
	R2749[0] = (char *(*)()) F472_3328;
	R2749[1] = (char *(*)()) F473_3328;
	R2749[2] = (char *(*)()) F474_3328;
	R2749[3] = (char *(*)()) F475_3328;
	R2749[4] = (char *(*)()) F476_3328;
	R2749[5] = (char *(*)()) F477_3328;
	R2749[6] = (char *(*)()) F478_3328;
	R2749[7] = (char *(*)()) F479_3328;
	R2749[8] = (char *(*)()) F480_3328;
	R2749[9] = (char *(*)()) F481_3328;
	R2749[10] = (char *(*)()) F482_3328;
	R2749[11] = (char *(*)()) F483_3328;
	R2749[12] = (char *(*)()) F484_3328;
	R2749[13] = (char *(*)()) F485_3328;
	R2749[14] = (char *(*)()) F486_3328;
}

char *(*R2753[15])();
void R2753_init () {
	R2753[0] = (char *(*)()) F472_3333;
	R2753[1] = (char *(*)()) F473_3333_2753_137;
	R2753[2] = (char *(*)()) F474_3333_2753_137;
	R2753[3] = (char *(*)()) F475_3333_2753_137;
	R2753[4] = (char *(*)()) F476_3333_2753_137;
	R2753[5] = (char *(*)()) F477_3333_2753_137;
	R2753[6] = (char *(*)()) F478_3333_2753_137;
	R2753[7] = (char *(*)()) F479_3333_2753_137;
	R2753[8] = (char *(*)()) F480_3333_2753_137;
	R2753[9] = (char *(*)()) F481_3333_2753_137;
	R2753[10] = (char *(*)()) F482_3333_2753_137;
	R2753[11] = (char *(*)()) F483_3333_2753_137;
	R2753[12] = (char *(*)()) F484_3333_2753_137;
	R2753[13] = (char *(*)()) F485_3333_2753_137;
	R2753[14] = (char *(*)()) F486_3333_2753_137;
}
static void F473_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F473_3333(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F474_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F474_3333(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F475_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F475_3333(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F476_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F476_3333(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F477_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F477_3333(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F478_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F478_3333(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F479_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F479_3333(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F480_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F480_3333(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F481_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F481_3333(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F482_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F482_3333(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F483_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F483_3333(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F484_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F484_3333(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F485_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F485_3333(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F486_3333_2753_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F486_3333(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}

char *(*R2755[15])();
void R2755_init () {
	R2755[0] = (char *(*)()) F472_3336;
	R2755[1] = (char *(*)()) F473_3336;
	R2755[2] = (char *(*)()) F474_3336;
	R2755[3] = (char *(*)()) F475_3336;
	R2755[4] = (char *(*)()) F476_3336;
	R2755[5] = (char *(*)()) F477_3336;
	R2755[6] = (char *(*)()) F478_3336;
	R2755[7] = (char *(*)()) F479_3336;
	R2755[8] = (char *(*)()) F480_3336;
	R2755[9] = (char *(*)()) F481_3336;
	R2755[10] = (char *(*)()) F482_3336;
	R2755[11] = (char *(*)()) F483_3336;
	R2755[12] = (char *(*)()) F484_3336;
	R2755[13] = (char *(*)()) F485_3336;
	R2755[14] = (char *(*)()) F486_3336;
}

char *(*R2759[15])();
void R2759_init () {
	R2759[0] = (char *(*)()) F472_3342;
	R2759[1] = (char *(*)()) F473_3342;
	R2759[2] = (char *(*)()) F474_3342;
	R2759[3] = (char *(*)()) F475_3342;
	R2759[4] = (char *(*)()) F476_3342;
	R2759[5] = (char *(*)()) F477_3342;
	R2759[6] = (char *(*)()) F478_3342;
	R2759[7] = (char *(*)()) F479_3342;
	R2759[8] = (char *(*)()) F480_3342;
	R2759[9] = (char *(*)()) F481_3342;
	R2759[10] = (char *(*)()) F482_3342;
	R2759[11] = (char *(*)()) F483_3342;
	R2759[12] = (char *(*)()) F484_3342;
	R2759[13] = (char *(*)()) F485_3342;
	R2759[14] = (char *(*)()) F486_3342;
}

char *(*R2760[15])();
void R2760_init () {
	R2760[0] = (char *(*)()) F472_3345;
	R2760[1] = (char *(*)()) F473_3345;
	R2760[2] = (char *(*)()) F474_3345;
	R2760[3] = (char *(*)()) F475_3345;
	R2760[4] = (char *(*)()) F476_3345;
	R2760[5] = (char *(*)()) F477_3345;
	R2760[6] = (char *(*)()) F478_3345;
	R2760[7] = (char *(*)()) F479_3345;
	R2760[8] = (char *(*)()) F480_3345;
	R2760[9] = (char *(*)()) F481_3345;
	R2760[10] = (char *(*)()) F482_3345;
	R2760[11] = (char *(*)()) F483_3345;
	R2760[12] = (char *(*)()) F484_3345;
	R2760[13] = (char *(*)()) F485_3345;
	R2760[14] = (char *(*)()) F486_3345;
}

char *(*R2774[100])();
void R2774_init () {
	R2774[0] = (char *(*)()) F547_3620;
	R2774[1] = (char *(*)()) F548_3620_2774_1;
	R2774[2] = (char *(*)()) F549_3620_2774_1;
	R2774[85] = (char *(*)()) F632_4182;
	R2774[86] = (char *(*)()) F633_4182_2774_1;
	R2774[87] = (char *(*)()) F634_4182_2774_1;
	R2774[88] = (char *(*)()) F635_4182_2774_1;
	R2774[89] = (char *(*)()) F636_4182_2774_1;
	R2774[90] = (char *(*)()) F637_4182_2774_1;
	R2774[91] = (char *(*)()) F638_4182_2774_1;
	R2774[92] = (char *(*)()) F639_4182_2774_1;
	R2774[93] = (char *(*)()) F640_4182_2774_1;
	R2774[94] = (char *(*)()) F641_4182_2774_1;
	R2774[95] = (char *(*)()) F642_4182_2774_1;
	R2774[96] = (char *(*)()) F643_4182_2774_1;
	R2774[97] = (char *(*)()) F644_4182_2774_1;
	R2774[98] = (char *(*)()) F645_4182_2774_1;
	R2774[99] = (char *(*)()) F646_4182_2774_1;
}
static EIF_REFERENCE F548_3620_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F548_3620(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F549_3620_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F549_3620(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F633_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F633_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F634_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F634_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F635_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F635_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F636_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F636_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F637_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F638_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F639_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F640_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F641_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F642_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F643_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F644_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F644_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F645_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F645_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F646_4182_2774_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F646_4182(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R2775[100])();
void R2775_init () {
	R2775[0] = (char *(*)()) F547_3621;
	R2775[1] = (char *(*)()) F548_3621_2775_1;
	R2775[2] = (char *(*)()) F549_3621_2775_1;
	R2775[85] = (char *(*)()) F632_4183;
	R2775[86] = (char *(*)()) F633_4183_2775_1;
	R2775[87] = (char *(*)()) F634_4183_2775_1;
	R2775[88] = (char *(*)()) F635_4183_2775_1;
	R2775[89] = (char *(*)()) F636_4183_2775_1;
	R2775[90] = (char *(*)()) F637_4183_2775_1;
	R2775[91] = (char *(*)()) F638_4183_2775_1;
	R2775[92] = (char *(*)()) F639_4183_2775_1;
	R2775[93] = (char *(*)()) F640_4183_2775_1;
	R2775[94] = (char *(*)()) F641_4183_2775_1;
	R2775[95] = (char *(*)()) F642_4183_2775_1;
	R2775[96] = (char *(*)()) F643_4183_2775_1;
	R2775[97] = (char *(*)()) F644_4183_2775_1;
	R2775[98] = (char *(*)()) F645_4183_2775_1;
	R2775[99] = (char *(*)()) F646_4183_2775_1;
}
static EIF_REFERENCE F548_3621_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F548_3621(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F549_3621_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F549_3621(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F633_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F633_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F634_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F634_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F635_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F635_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F636_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F636_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F637_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F638_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F639_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F640_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F641_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F642_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F643_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F644_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F644_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F645_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F645_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F646_4183_2775_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F646_4183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R2776[100])();
void R2776_init () {
	R2776[0] = (char *(*)()) F547_3640;
	R2776[1] = (char *(*)()) F548_3640;
	R2776[2] = (char *(*)()) F549_3640;
	R2776[85] = (char *(*)()) F632_4204;
	R2776[86] = (char *(*)()) F633_4204;
	R2776[87] = (char *(*)()) F634_4204;
	R2776[88] = (char *(*)()) F635_4204;
	R2776[89] = (char *(*)()) F636_4204;
	R2776[90] = (char *(*)()) F637_4204;
	R2776[91] = (char *(*)()) F638_4204;
	R2776[92] = (char *(*)()) F639_4204;
	R2776[93] = (char *(*)()) F640_4204;
	R2776[94] = (char *(*)()) F641_4204;
	R2776[95] = (char *(*)()) F642_4204;
	R2776[96] = (char *(*)()) F643_4204;
	R2776[97] = (char *(*)()) F644_4204;
	R2776[98] = (char *(*)()) F645_4204;
	R2776[99] = (char *(*)()) F646_4204;
}

char *(*R2777[100])();
void R2777_init () {
	R2777[0] = (char *(*)()) F547_3641;
	R2777[1] = (char *(*)()) F548_3641;
	R2777[2] = (char *(*)()) F549_3641;
	R2777[85] = (char *(*)()) F632_4209;
	R2777[86] = (char *(*)()) F633_4209;
	R2777[87] = (char *(*)()) F634_4209;
	R2777[88] = (char *(*)()) F635_4209;
	R2777[89] = (char *(*)()) F636_4209;
	R2777[90] = (char *(*)()) F637_4209;
	R2777[91] = (char *(*)()) F638_4209;
	R2777[92] = (char *(*)()) F639_4209;
	R2777[93] = (char *(*)()) F640_4209;
	R2777[94] = (char *(*)()) F641_4209;
	R2777[95] = (char *(*)()) F642_4209;
	R2777[96] = (char *(*)()) F643_4209;
	R2777[97] = (char *(*)()) F644_4209;
	R2777[98] = (char *(*)()) F645_4209;
	R2777[99] = (char *(*)()) F646_4209;
}

char *(*R2778[100])();
void R2778_init () {
	R2778[0] = (char *(*)()) F547_3631;
	R2778[1] = (char *(*)()) F548_3631;
	R2778[2] = (char *(*)()) F549_3631;
	R2778[85] = (char *(*)()) F487_3370;
	R2778[86] = (char *(*)()) F488_3370;
	R2778[87] = (char *(*)()) F489_3370;
	R2778[88] = (char *(*)()) F490_3370;
	R2778[89] = (char *(*)()) F491_3370;
	R2778[90] = (char *(*)()) F492_3370;
	R2778[91] = (char *(*)()) F493_3370;
	R2778[92] = (char *(*)()) F494_3370;
	R2778[93] = (char *(*)()) F495_3370;
	R2778[94] = (char *(*)()) F496_3370;
	R2778[95] = (char *(*)()) F497_3370;
	R2778[96] = (char *(*)()) F498_3370;
	R2778[97] = (char *(*)()) F499_3370;
	R2778[98] = (char *(*)()) F500_3370;
	R2778[99] = (char *(*)()) F501_3370;
}

char *(*R2779[100])();
void R2779_init () {
	R2779[0] = (char *(*)()) F547_3632;
	R2779[1] = (char *(*)()) F548_3632;
	R2779[2] = (char *(*)()) F549_3632;
	R2779[85] = (char *(*)()) F487_3371;
	R2779[86] = (char *(*)()) F488_3371;
	R2779[87] = (char *(*)()) F489_3371;
	R2779[88] = (char *(*)()) F490_3371;
	R2779[89] = (char *(*)()) F491_3371;
	R2779[90] = (char *(*)()) F492_3371;
	R2779[91] = (char *(*)()) F493_3371;
	R2779[92] = (char *(*)()) F494_3371;
	R2779[93] = (char *(*)()) F495_3371;
	R2779[94] = (char *(*)()) F496_3371;
	R2779[95] = (char *(*)()) F497_3371;
	R2779[96] = (char *(*)()) F498_3371;
	R2779[97] = (char *(*)()) F499_3371;
	R2779[98] = (char *(*)()) F500_3371;
	R2779[99] = (char *(*)()) F501_3371;
}

char *(*R2780[100])();
void R2780_init () {
	R2780[0] = (char *(*)()) F487_3373;
	R2780[1] = (char *(*)()) F488_3373;
	R2780[2] = (char *(*)()) F491_3373;
	R2780[85] = (char *(*)()) F487_3373;
	R2780[86] = (char *(*)()) F488_3373;
	R2780[87] = (char *(*)()) F489_3373;
	R2780[88] = (char *(*)()) F490_3373;
	R2780[89] = (char *(*)()) F491_3373;
	R2780[90] = (char *(*)()) F492_3373;
	R2780[91] = (char *(*)()) F493_3373;
	R2780[92] = (char *(*)()) F494_3373;
	R2780[93] = (char *(*)()) F495_3373;
	R2780[94] = (char *(*)()) F496_3373;
	R2780[95] = (char *(*)()) F497_3373;
	R2780[96] = (char *(*)()) F498_3373;
	R2780[97] = (char *(*)()) F499_3373;
	R2780[98] = (char *(*)()) F500_3373;
	R2780[99] = (char *(*)()) F501_3373;
}

char *(*R2784[100])();
void R2784_init () {
	R2784[0] = (char *(*)()) F395_2704;
	R2784[1] = (char *(*)()) F397_2704_2784_140;
	R2784[2] = (char *(*)()) F400_2704_2784_140;
	R2784[85] = (char *(*)()) F395_2704;
	R2784[86] = (char *(*)()) F397_2704_2784_140;
	R2784[87] = (char *(*)()) F398_2704_2784_140;
	R2784[88] = (char *(*)()) F399_2704_2784_140;
	R2784[89] = (char *(*)()) F400_2704_2784_140;
	R2784[90] = (char *(*)()) F396_2704_2784_140;
	R2784[91] = (char *(*)()) F401_2704_2784_140;
	R2784[92] = (char *(*)()) F402_2704_2784_140;
	R2784[93] = (char *(*)()) F403_2704_2784_140;
	R2784[94] = (char *(*)()) F405_2704_2784_140;
	R2784[95] = (char *(*)()) F406_2704_2784_140;
	R2784[96] = (char *(*)()) F407_2704_2784_140;
	R2784[97] = (char *(*)()) F408_2704_2784_140;
	R2784[98] = (char *(*)()) F409_2704_2784_140;
	R2784[99] = (char *(*)()) F404_2704_2784_140;
}
static EIF_INTEGER_32 F397_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F397_2704(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F400_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F400_2704(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_INTEGER_32 F398_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F398_2704(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F399_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F399_2704(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F396_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F396_2704(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F401_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F401_2704(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F402_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F402_2704(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_INTEGER_32 F403_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F403_2704(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F405_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F405_2704(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F406_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F406_2704(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F407_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F407_2704(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F408_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F408_2704(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F409_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F409_2704(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F404_2704_2784_140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F404_2704(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R2785[100])();
void R2785_init () {
	R2785[0] = (char *(*)()) F395_2703;
	R2785[1] = (char *(*)()) F397_2703_2785_2;
	R2785[2] = (char *(*)()) F400_2703_2785_2;
	R2785[85] = (char *(*)()) F395_2703;
	R2785[86] = (char *(*)()) F397_2703_2785_2;
	R2785[87] = (char *(*)()) F398_2703_2785_2;
	R2785[88] = (char *(*)()) F399_2703_2785_2;
	R2785[89] = (char *(*)()) F400_2703_2785_2;
	R2785[90] = (char *(*)()) F396_2703_2785_2;
	R2785[91] = (char *(*)()) F401_2703_2785_2;
	R2785[92] = (char *(*)()) F402_2703_2785_2;
	R2785[93] = (char *(*)()) F403_2703_2785_2;
	R2785[94] = (char *(*)()) F405_2703_2785_2;
	R2785[95] = (char *(*)()) F406_2703_2785_2;
	R2785[96] = (char *(*)()) F407_2703_2785_2;
	R2785[97] = (char *(*)()) F408_2703_2785_2;
	R2785[98] = (char *(*)()) F409_2703_2785_2;
	R2785[99] = (char *(*)()) F404_2703_2785_2;
}
static EIF_BOOLEAN F397_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F397_2703(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F400_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F400_2703(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F398_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F398_2703(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F399_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F399_2703(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F396_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F396_2703(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F401_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F401_2703(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F402_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F402_2703(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F403_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F403_2703(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F405_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F405_2703(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F406_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F406_2703(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F407_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F407_2703(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F408_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F408_2703(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F409_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F409_2703(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F404_2703_2785_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F404_2703(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2787[100])();
void R2787_init () {
	R2787[0] = (char *(*)()) F395_2707;
	R2787[1] = (char *(*)()) F397_2707_2787_9;
	R2787[2] = (char *(*)()) F400_2707_2787_9;
	R2787[85] = (char *(*)()) F395_2707;
	R2787[86] = (char *(*)()) F397_2707_2787_9;
	R2787[87] = (char *(*)()) F398_2707_2787_9;
	R2787[88] = (char *(*)()) F399_2707_2787_9;
	R2787[89] = (char *(*)()) F400_2707_2787_9;
	R2787[90] = (char *(*)()) F396_2707_2787_9;
	R2787[91] = (char *(*)()) F401_2707_2787_9;
	R2787[92] = (char *(*)()) F402_2707_2787_9;
	R2787[93] = (char *(*)()) F403_2707_2787_9;
	R2787[94] = (char *(*)()) F405_2707_2787_9;
	R2787[95] = (char *(*)()) F406_2707_2787_9;
	R2787[96] = (char *(*)()) F407_2707_2787_9;
	R2787[97] = (char *(*)()) F408_2707_2787_9;
	R2787[98] = (char *(*)()) F409_2707_2787_9;
	R2787[99] = (char *(*)()) F404_2707_2787_9;
}
static EIF_INTEGER_32 F397_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F397_2707(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F400_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F400_2707(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_INTEGER_32 F398_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F398_2707(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F399_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F399_2707(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_INTEGER_32 F396_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F396_2707(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_INTEGER_32 F401_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F401_2707(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_INTEGER_32 F402_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F402_2707(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F403_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F403_2707(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_INTEGER_32 F405_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F405_2707(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_INTEGER_32 F406_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F406_2707(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_INTEGER_32 F407_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F407_2707(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_INTEGER_32 F408_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F408_2707(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_INTEGER_32 F409_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F409_2707(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_INTEGER_32 F404_2707_2787_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F404_2707(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2804[100])();
void R2804_init () {
	R2804[0] = (char *(*)()) F547_3643;
	R2804[1] = (char *(*)()) F548_3643_2804_4;
	R2804[2] = (char *(*)()) F549_3643_2804_4;
	R2804[85] = (char *(*)()) F632_4212;
	R2804[86] = (char *(*)()) F633_4212_2804_4;
	R2804[87] = (char *(*)()) F634_4212_2804_4;
	R2804[88] = (char *(*)()) F635_4212_2804_4;
	R2804[89] = (char *(*)()) F636_4212_2804_4;
	R2804[90] = (char *(*)()) F637_4212_2804_4;
	R2804[91] = (char *(*)()) F638_4212_2804_4;
	R2804[92] = (char *(*)()) F639_4212_2804_4;
	R2804[93] = (char *(*)()) F640_4212_2804_4;
	R2804[94] = (char *(*)()) F641_4212_2804_4;
	R2804[95] = (char *(*)()) F642_4212_2804_4;
	R2804[96] = (char *(*)()) F643_4212_2804_4;
	R2804[97] = (char *(*)()) F644_4212_2804_4;
	R2804[98] = (char *(*)()) F645_4212_2804_4;
	R2804[99] = (char *(*)()) F646_4212_2804_4;
}
static void F548_3643_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F548_3643(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F549_3643_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F549_3643(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4212(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4212(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4212(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4212(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4212(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4212(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4212(Current, *(EIF_POINTER *)arg1);
}
static void F640_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4212(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4212(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4212(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4212(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4212(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4212(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4212_2804_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4212(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2805[100])();
void R2805_init () {
	R2805[0] = (char *(*)()) F547_3645;
	R2805[1] = (char *(*)()) F548_3645_2805_4;
	R2805[2] = (char *(*)()) F549_3645_2805_4;
	R2805[85] = (char *(*)()) F632_4216;
	R2805[86] = (char *(*)()) F633_4216_2805_4;
	R2805[87] = (char *(*)()) F634_4216_2805_4;
	R2805[88] = (char *(*)()) F635_4216_2805_4;
	R2805[89] = (char *(*)()) F636_4216_2805_4;
	R2805[90] = (char *(*)()) F637_4216_2805_4;
	R2805[91] = (char *(*)()) F638_4216_2805_4;
	R2805[92] = (char *(*)()) F639_4216_2805_4;
	R2805[93] = (char *(*)()) F640_4216_2805_4;
	R2805[94] = (char *(*)()) F641_4216_2805_4;
	R2805[95] = (char *(*)()) F642_4216_2805_4;
	R2805[96] = (char *(*)()) F643_4216_2805_4;
	R2805[97] = (char *(*)()) F644_4216_2805_4;
	R2805[98] = (char *(*)()) F645_4216_2805_4;
	R2805[99] = (char *(*)()) F646_4216_2805_4;
}
static void F548_3645_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F548_3645(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F549_3645_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F549_3645(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4216(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4216(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4216(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4216(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4216(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4216(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4216(Current, *(EIF_POINTER *)arg1);
}
static void F640_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4216(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4216(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4216(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4216(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4216(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4216(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4216_2805_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4216(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2806[100])();
void R2806_init () {
	R2806[0] = (char *(*)()) F547_3646;
	R2806[1] = (char *(*)()) F548_3646_2806_4;
	R2806[2] = (char *(*)()) F549_3646_2806_4;
	R2806[85] = (char *(*)()) F632_4217;
	R2806[86] = (char *(*)()) F633_4217_2806_4;
	R2806[87] = (char *(*)()) F634_4217_2806_4;
	R2806[88] = (char *(*)()) F635_4217_2806_4;
	R2806[89] = (char *(*)()) F636_4217_2806_4;
	R2806[90] = (char *(*)()) F637_4217_2806_4;
	R2806[91] = (char *(*)()) F638_4217_2806_4;
	R2806[92] = (char *(*)()) F639_4217_2806_4;
	R2806[93] = (char *(*)()) F640_4217_2806_4;
	R2806[94] = (char *(*)()) F641_4217_2806_4;
	R2806[95] = (char *(*)()) F642_4217_2806_4;
	R2806[96] = (char *(*)()) F643_4217_2806_4;
	R2806[97] = (char *(*)()) F644_4217_2806_4;
	R2806[98] = (char *(*)()) F645_4217_2806_4;
	R2806[99] = (char *(*)()) F646_4217_2806_4;
}
static void F548_3646_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F548_3646(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F549_3646_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F549_3646(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4217(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4217(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4217(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4217(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4217(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4217(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4217(Current, *(EIF_POINTER *)arg1);
}
static void F640_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4217(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4217(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4217(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4217(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4217(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4217(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4217_2806_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4217(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2808[100])();
void R2808_init () {
	R2808[0] = (char *(*)()) F547_3649;
	R2808[1] = (char *(*)()) F548_3649;
	R2808[2] = (char *(*)()) F549_3649;
	R2808[85] = (char *(*)()) F632_4220;
	R2808[86] = (char *(*)()) F633_4220;
	R2808[87] = (char *(*)()) F634_4220;
	R2808[88] = (char *(*)()) F635_4220;
	R2808[89] = (char *(*)()) F636_4220;
	R2808[90] = (char *(*)()) F637_4220;
	R2808[91] = (char *(*)()) F638_4220;
	R2808[92] = (char *(*)()) F639_4220;
	R2808[93] = (char *(*)()) F640_4220;
	R2808[94] = (char *(*)()) F641_4220;
	R2808[95] = (char *(*)()) F642_4220;
	R2808[96] = (char *(*)()) F643_4220;
	R2808[97] = (char *(*)()) F644_4220;
	R2808[98] = (char *(*)()) F645_4220;
	R2808[99] = (char *(*)()) F646_4220;
}

char *(*R2810[100])();
void R2810_init () {
	R2810[0] = (char *(*)()) F547_3652;
	R2810[1] = (char *(*)()) F548_3652;
	R2810[2] = (char *(*)()) F549_3652;
	R2810[85] = (char *(*)()) F632_4232;
	R2810[86] = (char *(*)()) F633_4232;
	R2810[87] = (char *(*)()) F634_4232;
	R2810[88] = (char *(*)()) F635_4232;
	R2810[89] = (char *(*)()) F636_4232;
	R2810[90] = (char *(*)()) F637_4232;
	R2810[91] = (char *(*)()) F638_4232;
	R2810[92] = (char *(*)()) F639_4232;
	R2810[93] = (char *(*)()) F640_4232;
	R2810[94] = (char *(*)()) F641_4232;
	R2810[95] = (char *(*)()) F642_4232;
	R2810[96] = (char *(*)()) F643_4232;
	R2810[97] = (char *(*)()) F644_4232;
	R2810[98] = (char *(*)()) F645_4232;
	R2810[99] = (char *(*)()) F646_4232;
}

char *(*R2811[100])();
void R2811_init () {
	R2811[0] = (char *(*)()) F547_3655;
	R2811[1] = (char *(*)()) F548_3655;
	R2811[2] = (char *(*)()) F549_3655;
	R2811[85] = (char *(*)()) F632_4236;
	R2811[86] = (char *(*)()) F633_4236;
	R2811[87] = (char *(*)()) F634_4236;
	R2811[88] = (char *(*)()) F635_4236;
	R2811[89] = (char *(*)()) F636_4236;
	R2811[90] = (char *(*)()) F637_4236;
	R2811[91] = (char *(*)()) F638_4236;
	R2811[92] = (char *(*)()) F639_4236;
	R2811[93] = (char *(*)()) F640_4236;
	R2811[94] = (char *(*)()) F641_4236;
	R2811[95] = (char *(*)()) F642_4236;
	R2811[96] = (char *(*)()) F643_4236;
	R2811[97] = (char *(*)()) F644_4236;
	R2811[98] = (char *(*)()) F645_4236;
	R2811[99] = (char *(*)()) F646_4236;
}

char *(*R2851[100])();
void R2851_init () {
	R2851[0] = (char *(*)()) F502_3429;
	R2851[1] = (char *(*)()) F503_3429;
	R2851[2] = (char *(*)()) F506_3429;
	R2851[85] = (char *(*)()) F502_3429;
	R2851[86] = (char *(*)()) F503_3429;
	R2851[87] = (char *(*)()) F504_3429;
	R2851[88] = (char *(*)()) F505_3429;
	R2851[89] = (char *(*)()) F506_3429;
	R2851[90] = (char *(*)()) F507_3429;
	R2851[91] = (char *(*)()) F508_3429;
	R2851[92] = (char *(*)()) F509_3429;
	R2851[93] = (char *(*)()) F510_3429;
	R2851[94] = (char *(*)()) F511_3429;
	R2851[95] = (char *(*)()) F512_3429;
	R2851[96] = (char *(*)()) F513_3429;
	R2851[97] = (char *(*)()) F514_3429;
	R2851[98] = (char *(*)()) F515_3429;
	R2851[99] = (char *(*)()) F516_3429;
}

char *(*R2861[3])();
void R2861_init () {
	R2861[0] = (char *(*)()) F547_3617;
	R2861[1] = (char *(*)()) F548_3617;
	R2861[2] = (char *(*)()) F549_3617;
}

char *(*R2864[3])();
void R2864_init () {
	R2864[0] = (char *(*)()) F547_3656;
	R2864[1] = (char *(*)()) F548_3656_2864_5;
	R2864[2] = (char *(*)()) F549_3656_2864_5;
}
static EIF_REFERENCE F548_3656_2864_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F548_3656(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F549_3656_2864_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F549_3656(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R2865[3])();
void R2865_init () {
	R2865[0] = (char *(*)()) F547_3657;
	R2865[1] = (char *(*)()) F548_3657;
	R2865[2] = (char *(*)()) F549_3657;
}

char *(*R2866[3])();
void R2866_init () {
	R2866[0] = (char *(*)()) F547_3658;
	R2866[1] = (char *(*)()) F548_3658;
	R2866[2] = (char *(*)()) F549_3658;
}

char *(*R2868[3])();
void R2868_init () {
	R2868[0] = (char *(*)()) F547_3660;
	R2868[1] = (char *(*)()) F548_3660;
	R2868[2] = (char *(*)()) F549_3660;
}

char *(*R2869[3])();
void R2869_init () {
	R2869[0] = (char *(*)()) F547_3661;
	R2869[1] = (char *(*)()) F548_3661;
	R2869[2] = (char *(*)()) F549_3661;
}

char *(*R2870[3])();
void R2870_init () {
	R2870[0] = (char *(*)()) F547_3662;
	R2870[1] = (char *(*)()) F548_3662;
	R2870[2] = (char *(*)()) F549_3662;
}

char *(*R3032[306])();
void R3032_init () {
	R3032[0] = (char *(*)()) F621_3958;
	R3032[1] = (char *(*)()) F622_4016;
	R3032[2] = (char *(*)()) F623_7747;
	R3032[3] = (char *(*)()) F624_4084;
	R3032[4] = (char *(*)()) F625_4084;
	R3032[5] = (char *(*)()) F626_4084;
	R3032[6] = (char *(*)()) F627_4084;
	R3032[7] = (char *(*)()) F628_4084;
	R3032[8] = (char *(*)()) F624_4084;
	R3032[9] = (char *(*)()) F626_4084;
	R3032[10] = (char *(*)()) F624_4084;
	R3032[11] = (char *(*)()) F632_4235;
	R3032[12] = (char *(*)()) F633_4235;
	R3032[13] = (char *(*)()) F634_4235;
	R3032[14] = (char *(*)()) F635_4235;
	R3032[15] = (char *(*)()) F636_4235;
	R3032[16] = (char *(*)()) F637_4235;
	R3032[17] = (char *(*)()) F638_4235;
	R3032[18] = (char *(*)()) F639_4235;
	R3032[19] = (char *(*)()) F640_4235;
	R3032[20] = (char *(*)()) F641_4235;
	R3032[21] = (char *(*)()) F642_4235;
	R3032[22] = (char *(*)()) F643_4235;
	R3032[23] = (char *(*)()) F644_4235;
	R3032[24] = (char *(*)()) F645_4235;
	R3032[25] = (char *(*)()) F646_4235;
	R3032[206] = (char *(*)()) F827_5560;
	{long i; for (i = 280; i < 284; i++) R3032[i] = (char *(*)()) F900_6619;}
	R3032[287] = (char *(*)()) F908_6925;
	R3032[289] = (char *(*)()) F910_7135;
	R3032[291] = (char *(*)()) F912_7159;
	{long i; for (i = 299; i < 301; i++) R3032[i] = (char *(*)()) F623_7747;}
	{long i; for (i = 303; i < 306; i++) R3032[i] = (char *(*)()) F623_7747;}
}

char *(*R3068[8])();
void R3068_init () {
	R3068[0] = (char *(*)()) F624_4026;
	R3068[1] = (char *(*)()) F625_4026;
	R3068[2] = (char *(*)()) F626_4026;
	R3068[3] = (char *(*)()) F627_4026;
	R3068[4] = (char *(*)()) F628_4026;
	R3068[5] = (char *(*)()) F624_4026;
	R3068[6] = (char *(*)()) F626_4026;
	R3068[7] = (char *(*)()) F624_4026;
}

char *(*R3069[8])();
void R3069_init () {
	R3069[0] = (char *(*)()) F624_4027;
	R3069[1] = (char *(*)()) F625_4027;
	R3069[2] = (char *(*)()) F626_4027;
	R3069[3] = (char *(*)()) F627_4027;
	R3069[4] = (char *(*)()) F628_4027;
	R3069[5] = (char *(*)()) F624_4027;
	R3069[6] = (char *(*)()) F626_4027;
	R3069[7] = (char *(*)()) F624_4027;
}

char *(*R3070[8])();
void R3070_init () {
	R3070[0] = (char *(*)()) F624_4028;
	R3070[1] = (char *(*)()) F625_4028;
	R3070[2] = (char *(*)()) F626_4028;
	R3070[3] = (char *(*)()) F627_4028;
	R3070[4] = (char *(*)()) F628_4028;
	R3070[5] = (char *(*)()) F624_4028;
	R3070[6] = (char *(*)()) F626_4028;
	R3070[7] = (char *(*)()) F624_4028;
}

char *(*R3071[8])();
void R3071_init () {
	R3071[0] = (char *(*)()) F624_4029;
	R3071[1] = (char *(*)()) F625_4029;
	R3071[2] = (char *(*)()) F626_4029_3071_1;
	R3071[3] = (char *(*)()) F627_4029_3071_1;
	R3071[4] = (char *(*)()) F628_4029_3071_1;
	R3071[5] = (char *(*)()) F624_4029;
	R3071[6] = (char *(*)()) F626_4029_3071_1;
	R3071[7] = (char *(*)()) F624_4029;
}
static EIF_REFERENCE F626_4029_3071_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4029(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4029_3071_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4029(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4029_3071_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4029(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3072[8])();
void R3072_init () {
	R3072[0] = (char *(*)()) F624_4031;
	R3072[1] = (char *(*)()) F625_4031_3072_5;
	R3072[2] = (char *(*)()) F626_4031_3072_5;
	R3072[3] = (char *(*)()) F627_4031_3072_5;
	R3072[4] = (char *(*)()) F628_4031_3072_5;
	R3072[5] = (char *(*)()) F624_4031;
	R3072[6] = (char *(*)()) F626_4031_3072_5;
	R3072[7] = (char *(*)()) F624_4031;
}
static EIF_REFERENCE F625_4031_3072_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F625_4031(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F626_4031_3072_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4031(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4031_3072_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4031(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4031_3072_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4031(Current, *(EIF_POINTER *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3076[8])();
void R3076_init () {
	R3076[0] = (char *(*)()) F624_4037;
	R3076[1] = (char *(*)()) F625_4037;
	R3076[2] = (char *(*)()) F626_4037_3076_1;
	R3076[3] = (char *(*)()) F627_4037_3076_1;
	R3076[4] = (char *(*)()) F628_4037_3076_1;
	R3076[5] = (char *(*)()) F624_4037;
	R3076[6] = (char *(*)()) F626_4037_3076_1;
	R3076[7] = (char *(*)()) F624_4037;
}
static EIF_REFERENCE F626_4037_3076_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4037(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4037_3076_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4037(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4037_3076_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4037(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3077[8])();
void R3077_init () {
	R3077[0] = (char *(*)()) F624_4038;
	R3077[1] = (char *(*)()) F625_4038_3077_1;
	R3077[2] = (char *(*)()) F626_4038;
	R3077[3] = (char *(*)()) F627_4038_3077_1;
	R3077[4] = (char *(*)()) F628_4038_3077_1;
	R3077[5] = (char *(*)()) F624_4038;
	R3077[6] = (char *(*)()) F626_4038;
	R3077[7] = (char *(*)()) F624_4038;
}
static EIF_REFERENCE F625_4038_3077_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F625_4038(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4038_3077_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4038(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4038_3077_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F628_4038(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3079[8])();
void R3079_init () {
	R3079[0] = (char *(*)()) F624_4042;
	R3079[1] = (char *(*)()) F625_4042_3079_9;
	R3079[2] = (char *(*)()) F626_4042;
	R3079[3] = (char *(*)()) F627_4042_3079_9;
	R3079[4] = (char *(*)()) F628_4042_3079_9;
	R3079[5] = (char *(*)()) F629_4139;
	R3079[6] = (char *(*)()) F630_4139;
	R3079[7] = (char *(*)()) F624_4042;
}
static EIF_INTEGER_32 F625_4042_3079_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F625_4042(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F627_4042_3079_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F627_4042(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F628_4042_3079_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F628_4042(Current, *(EIF_POINTER *)arg1);
}

char *(*R3081[8])();
void R3081_init () {
	R3081[0] = (char *(*)()) F624_4049;
	R3081[1] = (char *(*)()) F625_4049_3081_3;
	R3081[2] = (char *(*)()) F626_4049;
	R3081[3] = (char *(*)()) F627_4049_3081_3;
	R3081[4] = (char *(*)()) F628_4049_3081_3;
	R3081[5] = (char *(*)()) F629_4141;
	R3081[6] = (char *(*)()) F630_4141;
	R3081[7] = (char *(*)()) F624_4049;
}
static EIF_BOOLEAN F625_4049_3081_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F625_4049(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F627_4049_3081_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F627_4049(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F628_4049_3081_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F628_4049(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}

char *(*R3083[8])();
void R3083_init () {
	R3083[0] = (char *(*)()) F624_4053;
	R3083[1] = (char *(*)()) F625_4053;
	R3083[2] = (char *(*)()) F626_4053;
	R3083[3] = (char *(*)()) F627_4053;
	R3083[4] = (char *(*)()) F628_4053;
	R3083[5] = (char *(*)()) F624_4053;
	R3083[6] = (char *(*)()) F626_4053;
	R3083[7] = (char *(*)()) F624_4053;
}

char *(*R3084[8])();
void R3084_init () {
	R3084[0] = (char *(*)()) F624_4054;
	R3084[1] = (char *(*)()) F625_4054;
	R3084[2] = (char *(*)()) F626_4054;
	R3084[3] = (char *(*)()) F627_4054;
	R3084[4] = (char *(*)()) F628_4054;
	R3084[5] = (char *(*)()) F624_4054;
	R3084[6] = (char *(*)()) F626_4054;
	R3084[7] = (char *(*)()) F624_4054;
}

char *(*R3085[8])();
void R3085_init () {
	R3085[0] = (char *(*)()) F624_4055;
	R3085[1] = (char *(*)()) F625_4055;
	R3085[2] = (char *(*)()) F626_4055;
	R3085[3] = (char *(*)()) F627_4055;
	R3085[4] = (char *(*)()) F628_4055;
	R3085[5] = (char *(*)()) F624_4055;
	R3085[6] = (char *(*)()) F626_4055;
	R3085[7] = (char *(*)()) F624_4055;
}

char *(*R3086[8])();
void R3086_init () {
	R3086[0] = (char *(*)()) F624_4056;
	R3086[1] = (char *(*)()) F625_4056;
	R3086[2] = (char *(*)()) F626_4056;
	R3086[3] = (char *(*)()) F627_4056;
	R3086[4] = (char *(*)()) F628_4056;
	R3086[5] = (char *(*)()) F624_4056;
	R3086[6] = (char *(*)()) F626_4056;
	R3086[7] = (char *(*)()) F624_4056;
}

char *(*R3087[8])();
void R3087_init () {
	R3087[0] = (char *(*)()) F624_4057;
	R3087[1] = (char *(*)()) F625_4057;
	R3087[2] = (char *(*)()) F626_4057;
	R3087[3] = (char *(*)()) F627_4057;
	R3087[4] = (char *(*)()) F628_4057;
	R3087[5] = (char *(*)()) F624_4057;
	R3087[6] = (char *(*)()) F626_4057;
	R3087[7] = (char *(*)()) F624_4057;
}

char *(*R3088[8])();
void R3088_init () {
	R3088[0] = (char *(*)()) F624_4058;
	R3088[1] = (char *(*)()) F625_4058;
	R3088[2] = (char *(*)()) F626_4058;
	R3088[3] = (char *(*)()) F627_4058;
	R3088[4] = (char *(*)()) F628_4058;
	R3088[5] = (char *(*)()) F624_4058;
	R3088[6] = (char *(*)()) F626_4058;
	R3088[7] = (char *(*)()) F624_4058;
}

char *(*R3089[8])();
void R3089_init () {
	R3089[0] = (char *(*)()) F624_4059;
	R3089[1] = (char *(*)()) F625_4059;
	R3089[2] = (char *(*)()) F626_4059;
	R3089[3] = (char *(*)()) F627_4059;
	R3089[4] = (char *(*)()) F628_4059;
	R3089[5] = (char *(*)()) F624_4059;
	R3089[6] = (char *(*)()) F626_4059;
	R3089[7] = (char *(*)()) F624_4059;
}

char *(*R3090[8])();
void R3090_init () {
	R3090[0] = (char *(*)()) F624_4060;
	R3090[1] = (char *(*)()) F625_4060;
	R3090[2] = (char *(*)()) F626_4060;
	R3090[3] = (char *(*)()) F627_4060;
	R3090[4] = (char *(*)()) F628_4060;
	R3090[5] = (char *(*)()) F624_4060;
	R3090[6] = (char *(*)()) F626_4060;
	R3090[7] = (char *(*)()) F624_4060;
}

char *(*R3091[8])();
void R3091_init () {
	R3091[0] = (char *(*)()) F624_4061;
	R3091[1] = (char *(*)()) F625_4061;
	R3091[2] = (char *(*)()) F626_4061;
	R3091[3] = (char *(*)()) F627_4061;
	R3091[4] = (char *(*)()) F628_4061;
	R3091[5] = (char *(*)()) F624_4061;
	R3091[6] = (char *(*)()) F626_4061;
	R3091[7] = (char *(*)()) F624_4061;
}

char *(*R3093[8])();
void R3093_init () {
	R3093[0] = (char *(*)()) F624_4064;
	R3093[1] = (char *(*)()) F625_4064;
	R3093[2] = (char *(*)()) F626_4064;
	R3093[3] = (char *(*)()) F627_4064;
	R3093[4] = (char *(*)()) F628_4064;
	R3093[5] = (char *(*)()) F624_4064;
	R3093[6] = (char *(*)()) F626_4064;
	R3093[7] = (char *(*)()) F624_4064;
}

char *(*R3094[8])();
void R3094_init () {
	R3094[0] = (char *(*)()) F624_4065;
	R3094[1] = (char *(*)()) F625_4065;
	R3094[2] = (char *(*)()) F626_4065;
	R3094[3] = (char *(*)()) F627_4065;
	R3094[4] = (char *(*)()) F628_4065;
	R3094[5] = (char *(*)()) F624_4065;
	R3094[6] = (char *(*)()) F626_4065;
	R3094[7] = (char *(*)()) F624_4065;
}

char *(*R3096[8])();
void R3096_init () {
	R3096[0] = (char *(*)()) F624_4067;
	R3096[1] = (char *(*)()) F625_4067_3096_4;
	R3096[2] = (char *(*)()) F626_4067;
	R3096[3] = (char *(*)()) F627_4067_3096_4;
	R3096[4] = (char *(*)()) F628_4067_3096_4;
	R3096[5] = (char *(*)()) F624_4067;
	R3096[6] = (char *(*)()) F626_4067;
	R3096[7] = (char *(*)()) F624_4067;
}
static void F625_4067_3096_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F625_4067(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4067_3096_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4067(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4067_3096_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4067(Current, *(EIF_POINTER *)arg1);
}

char *(*R3098[8])();
void R3098_init () {
	R3098[0] = (char *(*)()) F624_4069;
	R3098[1] = (char *(*)()) F625_4069;
	R3098[2] = (char *(*)()) F626_4069;
	R3098[3] = (char *(*)()) F627_4069;
	R3098[4] = (char *(*)()) F628_4069;
	R3098[5] = (char *(*)()) F624_4069;
	R3098[6] = (char *(*)()) F626_4069;
	R3098[7] = (char *(*)()) F624_4069;
}

char *(*R3099[8])();
void R3099_init () {
	R3099[0] = (char *(*)()) F624_4070;
	R3099[1] = (char *(*)()) F625_4070;
	R3099[2] = (char *(*)()) F626_4070;
	R3099[3] = (char *(*)()) F627_4070;
	R3099[4] = (char *(*)()) F628_4070;
	R3099[5] = (char *(*)()) F624_4070;
	R3099[6] = (char *(*)()) F626_4070;
	R3099[7] = (char *(*)()) F624_4070;
}

char *(*R3105[8])();
void R3105_init () {
	R3105[0] = (char *(*)()) F624_4083;
	R3105[1] = (char *(*)()) F625_4083;
	R3105[2] = (char *(*)()) F626_4083;
	R3105[3] = (char *(*)()) F627_4083;
	R3105[4] = (char *(*)()) F628_4083;
	R3105[5] = (char *(*)()) F629_4143;
	R3105[6] = (char *(*)()) F630_4143;
	R3105[7] = (char *(*)()) F624_4083;
}

char *(*R3114[8])();
void R3114_init () {
	R3114[0] = (char *(*)()) F624_4093;
	R3114[1] = (char *(*)()) F625_4093;
	R3114[2] = (char *(*)()) F626_4093;
	R3114[3] = (char *(*)()) F627_4093;
	R3114[4] = (char *(*)()) F628_4093;
	R3114[5] = (char *(*)()) F624_4093;
	R3114[6] = (char *(*)()) F626_4093;
	R3114[7] = (char *(*)()) F624_4093;
}

char *(*R3115[8])();
void R3115_init () {
	R3115[0] = (char *(*)()) F624_4094;
	R3115[1] = (char *(*)()) F625_4094;
	R3115[2] = (char *(*)()) F626_4094;
	R3115[3] = (char *(*)()) F627_4094;
	R3115[4] = (char *(*)()) F628_4094;
	R3115[5] = (char *(*)()) F624_4094;
	R3115[6] = (char *(*)()) F626_4094;
	R3115[7] = (char *(*)()) F624_4094;
}

char *(*R3122[8])();
void R3122_init () {
	R3122[0] = (char *(*)()) F624_4101;
	R3122[1] = (char *(*)()) F625_4101;
	R3122[2] = (char *(*)()) F626_4101_3122_1;
	R3122[3] = (char *(*)()) F627_4101_3122_1;
	R3122[4] = (char *(*)()) F628_4101_3122_1;
	R3122[5] = (char *(*)()) F624_4101;
	R3122[6] = (char *(*)()) F626_4101_3122_1;
	R3122[7] = (char *(*)()) F624_4101;
}
static EIF_REFERENCE F626_4101_3122_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4101(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4101_3122_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4101(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4101_3122_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4101(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3123[8])();
void R3123_init () {
	R3123[0] = (char *(*)()) F624_4102;
	R3123[1] = (char *(*)()) F625_4102_3123_1;
	R3123[2] = (char *(*)()) F626_4102;
	R3123[3] = (char *(*)()) F627_4102_3123_1;
	R3123[4] = (char *(*)()) F628_4102_3123_1;
	R3123[5] = (char *(*)()) F624_4102;
	R3123[6] = (char *(*)()) F626_4102;
	R3123[7] = (char *(*)()) F624_4102;
}
static EIF_REFERENCE F625_4102_3123_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F625_4102(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4102_3123_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4102(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4102_3123_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F628_4102(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3124[8])();
void R3124_init () {
	R3124[0] = (char *(*)()) F624_4103;
	R3124[1] = (char *(*)()) F625_4103;
	R3124[2] = (char *(*)()) F626_4103;
	R3124[3] = (char *(*)()) F627_4103;
	R3124[4] = (char *(*)()) F628_4103;
	R3124[5] = (char *(*)()) F624_4103;
	R3124[6] = (char *(*)()) F626_4103;
	R3124[7] = (char *(*)()) F624_4103;
}

char *(*R3125[8])();
void R3125_init () {
	R3125[0] = (char *(*)()) F624_4104;
	R3125[1] = (char *(*)()) F625_4104;
	R3125[2] = (char *(*)()) F626_4104;
	R3125[3] = (char *(*)()) F627_4104;
	R3125[4] = (char *(*)()) F628_4104;
	R3125[5] = (char *(*)()) F624_4104;
	R3125[6] = (char *(*)()) F626_4104;
	R3125[7] = (char *(*)()) F624_4104;
}

char *(*R3126[8])();
void R3126_init () {
	R3126[0] = (char *(*)()) F624_4105;
	R3126[1] = (char *(*)()) F625_4105;
	R3126[2] = (char *(*)()) F626_4105;
	R3126[3] = (char *(*)()) F627_4105;
	R3126[4] = (char *(*)()) F628_4105;
	R3126[5] = (char *(*)()) F624_4105;
	R3126[6] = (char *(*)()) F626_4105;
	R3126[7] = (char *(*)()) F624_4105;
}

char *(*R3127[8])();
void R3127_init () {
	R3127[0] = (char *(*)()) F624_4106;
	R3127[1] = (char *(*)()) F625_4106;
	R3127[2] = (char *(*)()) F626_4106;
	R3127[3] = (char *(*)()) F627_4106;
	R3127[4] = (char *(*)()) F628_4106;
	R3127[5] = (char *(*)()) F624_4106;
	R3127[6] = (char *(*)()) F626_4106;
	R3127[7] = (char *(*)()) F624_4106;
}

char *(*R3128[8])();
void R3128_init () {
	R3128[0] = (char *(*)()) F624_4107;
	R3128[1] = (char *(*)()) F625_4107;
	R3128[2] = (char *(*)()) F626_4107;
	R3128[3] = (char *(*)()) F627_4107;
	R3128[4] = (char *(*)()) F628_4107;
	R3128[5] = (char *(*)()) F624_4107;
	R3128[6] = (char *(*)()) F626_4107;
	R3128[7] = (char *(*)()) F624_4107;
}

char *(*R3129[8])();
void R3129_init () {
	R3129[0] = (char *(*)()) F624_4108;
	R3129[1] = (char *(*)()) F625_4108;
	R3129[2] = (char *(*)()) F626_4108;
	R3129[3] = (char *(*)()) F627_4108;
	R3129[4] = (char *(*)()) F628_4108;
	R3129[5] = (char *(*)()) F624_4108;
	R3129[6] = (char *(*)()) F626_4108;
	R3129[7] = (char *(*)()) F624_4108;
}

char *(*R3130[8])();
void R3130_init () {
	R3130[0] = (char *(*)()) F624_4109;
	R3130[1] = (char *(*)()) F625_4109;
	R3130[2] = (char *(*)()) F626_4109;
	R3130[3] = (char *(*)()) F627_4109;
	R3130[4] = (char *(*)()) F628_4109;
	R3130[5] = (char *(*)()) F624_4109;
	R3130[6] = (char *(*)()) F626_4109;
	R3130[7] = (char *(*)()) F624_4109;
}

char *(*R3131[8])();
void R3131_init () {
	R3131[0] = (char *(*)()) F624_4110;
	R3131[1] = (char *(*)()) F625_4110;
	R3131[2] = (char *(*)()) F626_4110;
	R3131[3] = (char *(*)()) F627_4110;
	R3131[4] = (char *(*)()) F628_4110;
	R3131[5] = (char *(*)()) F624_4110;
	R3131[6] = (char *(*)()) F626_4110;
	R3131[7] = (char *(*)()) F624_4110;
}

char *(*R3132[8])();
void R3132_init () {
	R3132[0] = (char *(*)()) F624_4111;
	R3132[1] = (char *(*)()) F625_4111;
	R3132[2] = (char *(*)()) F626_4111;
	R3132[3] = (char *(*)()) F627_4111;
	R3132[4] = (char *(*)()) F628_4111;
	R3132[5] = (char *(*)()) F624_4111;
	R3132[6] = (char *(*)()) F626_4111;
	R3132[7] = (char *(*)()) F624_4111;
}

char *(*R3134[8])();
void R3134_init () {
	R3134[0] = (char *(*)()) F624_4113;
	R3134[1] = (char *(*)()) F625_4113_3134_1;
	R3134[2] = (char *(*)()) F626_4113;
	R3134[3] = (char *(*)()) F627_4113_3134_1;
	R3134[4] = (char *(*)()) F628_4113_3134_1;
	R3134[5] = (char *(*)()) F624_4113;
	R3134[6] = (char *(*)()) F626_4113;
	R3134[7] = (char *(*)()) F624_4113;
}
static EIF_REFERENCE F625_4113_3134_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F625_4113(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4113_3134_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4113(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4113_3134_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F628_4113(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3135[8])();
void R3135_init () {
	R3135[0] = (char *(*)()) F624_4114;
	R3135[1] = (char *(*)()) F625_4114;
	R3135[2] = (char *(*)()) F626_4114_3135_1;
	R3135[3] = (char *(*)()) F627_4114_3135_1;
	R3135[4] = (char *(*)()) F628_4114_3135_1;
	R3135[5] = (char *(*)()) F624_4114;
	R3135[6] = (char *(*)()) F626_4114_3135_1;
	R3135[7] = (char *(*)()) F624_4114;
}
static EIF_REFERENCE F626_4114_3135_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4114(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_4114_3135_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4114(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_4114_3135_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4114(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3136[8])();
void R3136_init () {
	R3136[0] = (char *(*)()) F624_4115;
	R3136[1] = (char *(*)()) F625_4115_3136_4;
	R3136[2] = (char *(*)()) F626_4115;
	R3136[3] = (char *(*)()) F627_4115_3136_4;
	R3136[4] = (char *(*)()) F628_4115_3136_4;
	R3136[5] = (char *(*)()) F624_4115;
	R3136[6] = (char *(*)()) F626_4115;
	R3136[7] = (char *(*)()) F624_4115;
}
static void F625_4115_3136_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F625_4115(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4115_3136_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4115(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4115_3136_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4115(Current, *(EIF_POINTER *)arg1);
}

char *(*R3137[8])();
void R3137_init () {
	R3137[0] = (char *(*)()) F624_4116;
	R3137[1] = (char *(*)()) F625_4116_3137_4;
	R3137[2] = (char *(*)()) F626_4116;
	R3137[3] = (char *(*)()) F627_4116_3137_4;
	R3137[4] = (char *(*)()) F628_4116_3137_4;
	R3137[5] = (char *(*)()) F624_4116;
	R3137[6] = (char *(*)()) F626_4116;
	R3137[7] = (char *(*)()) F624_4116;
}
static void F625_4116_3137_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F625_4116(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4116_3137_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4116(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4116_3137_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4116(Current, *(EIF_POINTER *)arg1);
}

char *(*R3142[8])();
void R3142_init () {
	R3142[0] = (char *(*)()) F624_4121;
	R3142[1] = (char *(*)()) F625_4121;
	R3142[2] = (char *(*)()) F626_4121;
	R3142[3] = (char *(*)()) F627_4121;
	R3142[4] = (char *(*)()) F628_4121;
	R3142[5] = (char *(*)()) F624_4121;
	R3142[6] = (char *(*)()) F626_4121;
	R3142[7] = (char *(*)()) F624_4121;
}

char *(*R3154[8])();
void R3154_init () {
	R3154[0] = (char *(*)()) F624_4133;
	R3154[1] = (char *(*)()) F625_4133;
	R3154[2] = (char *(*)()) F626_4133;
	R3154[3] = (char *(*)()) F627_4133;
	R3154[4] = (char *(*)()) F628_4133;
	R3154[5] = (char *(*)()) F624_4133;
	R3154[6] = (char *(*)()) F626_4133;
	R3154[7] = (char *(*)()) F624_4133;
}

char *(*R3155[8])();
void R3155_init () {
	R3155[0] = (char *(*)()) F624_4134;
	R3155[1] = (char *(*)()) F625_4134;
	R3155[2] = (char *(*)()) F626_4134;
	R3155[3] = (char *(*)()) F627_4134;
	R3155[4] = (char *(*)()) F628_4134;
	R3155[5] = (char *(*)()) F624_4134;
	R3155[6] = (char *(*)()) F626_4134;
	R3155[7] = (char *(*)()) F624_4134;
}

char *(*R3158[2])();
void R3158_init () {
	R3158[0] = (char *(*)()) F629_4137;
	R3158[1] = (char *(*)()) F630_4137;
}

char *(*R3178[15])();
void R3178_init () {
	R3178[0] = (char *(*)()) F632_4174;
	R3178[1] = (char *(*)()) F633_4174;
	R3178[2] = (char *(*)()) F634_4174;
	R3178[3] = (char *(*)()) F635_4174;
	R3178[4] = (char *(*)()) F636_4174;
	R3178[5] = (char *(*)()) F637_4174;
	R3178[6] = (char *(*)()) F638_4174;
	R3178[7] = (char *(*)()) F639_4174;
	R3178[8] = (char *(*)()) F640_4174;
	R3178[9] = (char *(*)()) F641_4174;
	R3178[10] = (char *(*)()) F642_4174;
	R3178[11] = (char *(*)()) F643_4174;
	R3178[12] = (char *(*)()) F644_4174;
	R3178[13] = (char *(*)()) F645_4174;
	R3178[14] = (char *(*)()) F646_4174;
}

char *(*R3182[15])();
void R3182_init () {
	R3182[0] = (char *(*)()) F632_4178;
	R3182[1] = (char *(*)()) F633_4178;
	R3182[2] = (char *(*)()) F634_4178;
	R3182[3] = (char *(*)()) F635_4178;
	R3182[4] = (char *(*)()) F636_4178;
	R3182[5] = (char *(*)()) F637_4178;
	R3182[6] = (char *(*)()) F638_4178;
	R3182[7] = (char *(*)()) F639_4178;
	R3182[8] = (char *(*)()) F640_4178;
	R3182[9] = (char *(*)()) F641_4178;
	R3182[10] = (char *(*)()) F642_4178;
	R3182[11] = (char *(*)()) F643_4178;
	R3182[12] = (char *(*)()) F644_4178;
	R3182[13] = (char *(*)()) F645_4178;
	R3182[14] = (char *(*)()) F646_4178;
}

char *(*R3183[15])();
void R3183_init () {
	R3183[0] = (char *(*)()) F632_4187;
	R3183[1] = (char *(*)()) F633_4187;
	R3183[2] = (char *(*)()) F634_4187;
	R3183[3] = (char *(*)()) F635_4187;
	R3183[4] = (char *(*)()) F636_4187;
	R3183[5] = (char *(*)()) F637_4187;
	R3183[6] = (char *(*)()) F638_4187;
	R3183[7] = (char *(*)()) F639_4187;
	R3183[8] = (char *(*)()) F640_4187;
	R3183[9] = (char *(*)()) F641_4187;
	R3183[10] = (char *(*)()) F642_4187;
	R3183[11] = (char *(*)()) F643_4187;
	R3183[12] = (char *(*)()) F644_4187;
	R3183[13] = (char *(*)()) F645_4187;
	R3183[14] = (char *(*)()) F646_4187;
}

char *(*R3186[15])();
void R3186_init () {
	R3186[0] = (char *(*)()) F632_4197;
	R3186[1] = (char *(*)()) F633_4197;
	R3186[2] = (char *(*)()) F634_4197;
	R3186[3] = (char *(*)()) F635_4197;
	R3186[4] = (char *(*)()) F636_4197;
	R3186[5] = (char *(*)()) F637_4197;
	R3186[6] = (char *(*)()) F638_4197;
	R3186[7] = (char *(*)()) F639_4197;
	R3186[8] = (char *(*)()) F640_4197;
	R3186[9] = (char *(*)()) F641_4197;
	R3186[10] = (char *(*)()) F642_4197;
	R3186[11] = (char *(*)()) F643_4197;
	R3186[12] = (char *(*)()) F644_4197;
	R3186[13] = (char *(*)()) F645_4197;
	R3186[14] = (char *(*)()) F646_4197;
}

char *(*R3190[15])();
void R3190_init () {
	R3190[0] = (char *(*)()) F632_4238;
	R3190[1] = (char *(*)()) F633_4238_3190_126;
	R3190[2] = (char *(*)()) F634_4238_3190_126;
	R3190[3] = (char *(*)()) F635_4238_3190_126;
	R3190[4] = (char *(*)()) F636_4238_3190_126;
	R3190[5] = (char *(*)()) F637_4238_3190_126;
	R3190[6] = (char *(*)()) F638_4238_3190_126;
	R3190[7] = (char *(*)()) F639_4238_3190_126;
	R3190[8] = (char *(*)()) F640_4238_3190_126;
	R3190[9] = (char *(*)()) F641_4238_3190_126;
	R3190[10] = (char *(*)()) F642_4238_3190_126;
	R3190[11] = (char *(*)()) F643_4238_3190_126;
	R3190[12] = (char *(*)()) F644_4238_3190_126;
	R3190[13] = (char *(*)()) F645_4238_3190_126;
	R3190[14] = (char *(*)()) F646_4238_3190_126;
}
static void F633_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F633_4238(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F634_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F634_4238(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F635_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F635_4238(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F636_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F636_4238(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F637_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F637_4238(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F638_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F638_4238(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F639_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F639_4238(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F640_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F640_4238(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F641_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F641_4238(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F642_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F642_4238(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F643_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F643_4238(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F644_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F644_4238(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F645_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F645_4238(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F646_4238_3190_126 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F646_4238(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}

char *(*R3191[15])();
void R3191_init () {
	R3191[0] = (char *(*)()) F632_4239;
	R3191[1] = (char *(*)()) F633_4239;
	R3191[2] = (char *(*)()) F634_4239;
	R3191[3] = (char *(*)()) F635_4239;
	R3191[4] = (char *(*)()) F636_4239;
	R3191[5] = (char *(*)()) F637_4239;
	R3191[6] = (char *(*)()) F638_4239;
	R3191[7] = (char *(*)()) F639_4239;
	R3191[8] = (char *(*)()) F640_4239;
	R3191[9] = (char *(*)()) F641_4239;
	R3191[10] = (char *(*)()) F642_4239;
	R3191[11] = (char *(*)()) F643_4239;
	R3191[12] = (char *(*)()) F644_4239;
	R3191[13] = (char *(*)()) F645_4239;
	R3191[14] = (char *(*)()) F646_4239;
}

char *(*R3242[126])();
void R3242_init () {
	R3242[0] = (char *(*)()) F440_2858_3242_1;
	R3242[1] = (char *(*)()) F663_4362_3242_1;
	R3242[2] = (char *(*)()) F440_2858_3242_1;
	R3242[3] = (char *(*)()) F665_4386;
	R3242[34] = (char *(*)()) F681_4426;
	R3242[35] = (char *(*)()) F682_4426_3242_1;
	R3242[36] = (char *(*)()) F683_4426_3242_1;
	R3242[37] = (char *(*)()) F684_4426_3242_1;
	R3242[38] = (char *(*)()) F685_4426_3242_1;
	R3242[39] = (char *(*)()) F686_4426_3242_1;
	R3242[40] = (char *(*)()) F687_4426_3242_1;
	R3242[41] = (char *(*)()) F688_4426_3242_1;
	R3242[42] = (char *(*)()) F689_4426_3242_1;
	R3242[43] = (char *(*)()) F690_4426_3242_1;
	R3242[44] = (char *(*)()) F691_4426_3242_1;
	R3242[45] = (char *(*)()) F692_4426_3242_1;
	R3242[46] = (char *(*)()) F693_4426_3242_1;
	R3242[47] = (char *(*)()) F694_4426_3242_1;
	R3242[48] = (char *(*)()) F695_4426_3242_1;
	R3242[49] = (char *(*)()) F711_4454;
	R3242[50] = (char *(*)()) F712_4454_3242_1;
	R3242[51] = (char *(*)()) F713_4454_3242_1;
	R3242[67] = (char *(*)()) F714_4466;
	R3242[68] = (char *(*)()) F715_4466_3242_1;
	R3242[69] = (char *(*)()) F716_4466_3242_1;
	R3242[70] = (char *(*)()) F717_4466_3242_1;
	R3242[71] = (char *(*)()) F718_4466_3242_1;
	R3242[72] = (char *(*)()) F719_4466_3242_1;
	R3242[73] = (char *(*)()) F720_4466_3242_1;
	R3242[74] = (char *(*)()) F721_4466_3242_1;
	R3242[75] = (char *(*)()) F722_4466_3242_1;
	R3242[76] = (char *(*)()) F723_4466_3242_1;
	R3242[77] = (char *(*)()) F724_4466_3242_1;
	R3242[78] = (char *(*)()) F725_4466_3242_1;
	R3242[79] = (char *(*)()) F726_4466_3242_1;
	R3242[80] = (char *(*)()) F727_4466_3242_1;
	R3242[81] = (char *(*)()) F728_4466_3242_1;
	R3242[82] = (char *(*)()) F719_4466_3242_1;
	R3242[83] = (char *(*)()) F728_4466_3242_1;
	R3242[84] = (char *(*)()) F714_4466;
	R3242[85] = (char *(*)()) F715_4466_3242_1;
	R3242[86] = (char *(*)()) F716_4466_3242_1;
	R3242[87] = (char *(*)()) F717_4466_3242_1;
	R3242[88] = (char *(*)()) F718_4466_3242_1;
	R3242[89] = (char *(*)()) F719_4466_3242_1;
	R3242[90] = (char *(*)()) F720_4466_3242_1;
	R3242[91] = (char *(*)()) F721_4466_3242_1;
	R3242[92] = (char *(*)()) F722_4466_3242_1;
	R3242[93] = (char *(*)()) F723_4466_3242_1;
	R3242[94] = (char *(*)()) F724_4466_3242_1;
	R3242[95] = (char *(*)()) F725_4466_3242_1;
	R3242[96] = (char *(*)()) F726_4466_3242_1;
	R3242[97] = (char *(*)()) F727_4466_3242_1;
	R3242[98] = (char *(*)()) F728_4466_3242_1;
	R3242[99] = (char *(*)()) F714_4466;
	R3242[100] = (char *(*)()) F715_4466_3242_1;
	R3242[101] = (char *(*)()) F716_4466_3242_1;
	R3242[102] = (char *(*)()) F717_4466_3242_1;
	R3242[103] = (char *(*)()) F718_4466_3242_1;
	R3242[104] = (char *(*)()) F719_4466_3242_1;
	R3242[105] = (char *(*)()) F720_4466_3242_1;
	R3242[106] = (char *(*)()) F721_4466_3242_1;
	R3242[107] = (char *(*)()) F722_4466_3242_1;
	R3242[108] = (char *(*)()) F723_4466_3242_1;
	R3242[109] = (char *(*)()) F724_4466_3242_1;
	R3242[110] = (char *(*)()) F725_4466_3242_1;
	R3242[111] = (char *(*)()) F726_4466_3242_1;
	R3242[112] = (char *(*)()) F727_4466_3242_1;
	R3242[113] = (char *(*)()) F728_4466_3242_1;
	R3242[119] = (char *(*)()) F781_4515;
	R3242[120] = (char *(*)()) F782_4515;
	R3242[121] = (char *(*)()) F783_4515_3242_1;
	R3242[122] = (char *(*)()) F784_4515_3242_1;
	R3242[123] = (char *(*)()) F785_4515_3242_1;
	R3242[125] = (char *(*)()) F787_4548_3242_1;
}
static EIF_REFERENCE F440_2858_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F440_2858(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F663_4362_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F663_4362(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F682_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F682_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F683_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F683_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F684_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F684_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F685_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F685_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F686_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F686_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F687_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F688_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F688_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F689_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F689_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F690_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F691_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F691_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F692_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F692_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F693_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F693_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F694_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F694_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_4426_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F695_4426(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F712_4454_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F712_4454(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F713_4454_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F713_4454(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F715_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F715_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F716_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F716_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F717_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F717_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F718_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F718_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F719_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F719_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F720_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F720_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(856, 0x00).id, 856, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F721_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F721_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F722_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F722_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F723_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F723_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F724_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F724_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(865, 0x00).id, 865, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F725_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F725_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F726_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F726_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F727_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F727_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(862, 0x00).id, 862, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F728_4466_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F728_4466(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F783_4515_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F783_4515(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F784_4515_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F784_4515(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F785_4515_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F785_4515(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(853, 0x00).id, 853, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F787_4548_3242_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F787_4548(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R3243[126])();
void R3243_init () {
	R3243[0] = (char *(*)()) F440_2859;
	R3243[1] = (char *(*)()) F663_4365;
	R3243[2] = (char *(*)()) F440_2859;
	R3243[3] = (char *(*)()) F665_4387;
	R3243[34] = (char *(*)()) F696_4444;
	R3243[35] = (char *(*)()) F697_4444;
	R3243[36] = (char *(*)()) F698_4444;
	R3243[37] = (char *(*)()) F699_4444;
	R3243[38] = (char *(*)()) F700_4444;
	R3243[39] = (char *(*)()) F701_4444;
	R3243[40] = (char *(*)()) F702_4444;
	R3243[41] = (char *(*)()) F703_4444;
	R3243[42] = (char *(*)()) F704_4444;
	R3243[43] = (char *(*)()) F705_4444;
	R3243[44] = (char *(*)()) F706_4444;
	R3243[45] = (char *(*)()) F707_4444;
	R3243[46] = (char *(*)()) F708_4444;
	R3243[47] = (char *(*)()) F709_4444;
	R3243[48] = (char *(*)()) F710_4444;
	R3243[49] = (char *(*)()) F711_4455;
	R3243[50] = (char *(*)()) F712_4455;
	R3243[51] = (char *(*)()) F713_4455;
	R3243[67] = (char *(*)()) F714_4475;
	R3243[68] = (char *(*)()) F715_4475;
	R3243[69] = (char *(*)()) F716_4475;
	R3243[70] = (char *(*)()) F717_4475;
	R3243[71] = (char *(*)()) F718_4475;
	R3243[72] = (char *(*)()) F719_4475;
	R3243[73] = (char *(*)()) F720_4475;
	R3243[74] = (char *(*)()) F721_4475;
	R3243[75] = (char *(*)()) F722_4475;
	R3243[76] = (char *(*)()) F723_4475;
	R3243[77] = (char *(*)()) F724_4475;
	R3243[78] = (char *(*)()) F725_4475;
	R3243[79] = (char *(*)()) F726_4475;
	R3243[80] = (char *(*)()) F727_4475;
	R3243[81] = (char *(*)()) F728_4475;
	R3243[82] = (char *(*)()) F719_4475;
	R3243[83] = (char *(*)()) F728_4475;
	R3243[84] = (char *(*)()) F714_4475;
	R3243[85] = (char *(*)()) F715_4475;
	R3243[86] = (char *(*)()) F716_4475;
	R3243[87] = (char *(*)()) F717_4475;
	R3243[88] = (char *(*)()) F718_4475;
	R3243[89] = (char *(*)()) F719_4475;
	R3243[90] = (char *(*)()) F720_4475;
	R3243[91] = (char *(*)()) F721_4475;
	R3243[92] = (char *(*)()) F722_4475;
	R3243[93] = (char *(*)()) F723_4475;
	R3243[94] = (char *(*)()) F724_4475;
	R3243[95] = (char *(*)()) F725_4475;
	R3243[96] = (char *(*)()) F726_4475;
	R3243[97] = (char *(*)()) F727_4475;
	R3243[98] = (char *(*)()) F728_4475;
	R3243[99] = (char *(*)()) F714_4475;
	R3243[100] = (char *(*)()) F715_4475;
	R3243[101] = (char *(*)()) F716_4475;
	R3243[102] = (char *(*)()) F717_4475;
	R3243[103] = (char *(*)()) F718_4475;
	R3243[104] = (char *(*)()) F719_4475;
	R3243[105] = (char *(*)()) F720_4475;
	R3243[106] = (char *(*)()) F721_4475;
	R3243[107] = (char *(*)()) F722_4475;
	R3243[108] = (char *(*)()) F723_4475;
	R3243[109] = (char *(*)()) F724_4475;
	R3243[110] = (char *(*)()) F725_4475;
	R3243[111] = (char *(*)()) F726_4475;
	R3243[112] = (char *(*)()) F727_4475;
	R3243[113] = (char *(*)()) F728_4475;
	R3243[119] = (char *(*)()) F781_4518;
	R3243[120] = (char *(*)()) F782_4518;
	R3243[121] = (char *(*)()) F783_4518;
	R3243[122] = (char *(*)()) F784_4518;
	R3243[123] = (char *(*)()) F785_4518;
	R3243[125] = (char *(*)()) F787_4550;
}

char *(*R3244[126])();
void R3244_init () {
	R3244[0] = (char *(*)()) F440_2865;
	R3244[1] = (char *(*)()) F663_4367;
	R3244[2] = (char *(*)()) F440_2865;
	R3244[3] = (char *(*)()) F665_4388;
	R3244[34] = (char *(*)()) F696_4452;
	R3244[35] = (char *(*)()) F697_4452;
	R3244[36] = (char *(*)()) F698_4452;
	R3244[37] = (char *(*)()) F699_4452;
	R3244[38] = (char *(*)()) F700_4452;
	R3244[39] = (char *(*)()) F701_4452;
	R3244[40] = (char *(*)()) F702_4452;
	R3244[41] = (char *(*)()) F703_4452;
	R3244[42] = (char *(*)()) F704_4452;
	R3244[43] = (char *(*)()) F705_4452;
	R3244[44] = (char *(*)()) F706_4452;
	R3244[45] = (char *(*)()) F707_4452;
	R3244[46] = (char *(*)()) F708_4452;
	R3244[47] = (char *(*)()) F709_4452;
	R3244[48] = (char *(*)()) F710_4452;
	R3244[49] = (char *(*)()) F711_4457;
	R3244[50] = (char *(*)()) F712_4457;
	R3244[51] = (char *(*)()) F713_4457;
	R3244[67] = (char *(*)()) F714_4481;
	R3244[68] = (char *(*)()) F715_4481;
	R3244[69] = (char *(*)()) F716_4481;
	R3244[70] = (char *(*)()) F717_4481;
	R3244[71] = (char *(*)()) F718_4481;
	R3244[72] = (char *(*)()) F719_4481;
	R3244[73] = (char *(*)()) F720_4481;
	R3244[74] = (char *(*)()) F721_4481;
	R3244[75] = (char *(*)()) F722_4481;
	R3244[76] = (char *(*)()) F723_4481;
	R3244[77] = (char *(*)()) F724_4481;
	R3244[78] = (char *(*)()) F725_4481;
	R3244[79] = (char *(*)()) F726_4481;
	R3244[80] = (char *(*)()) F727_4481;
	R3244[81] = (char *(*)()) F728_4481;
	R3244[82] = (char *(*)()) F719_4481;
	R3244[83] = (char *(*)()) F728_4481;
	R3244[84] = (char *(*)()) F714_4481;
	R3244[85] = (char *(*)()) F715_4481;
	R3244[86] = (char *(*)()) F716_4481;
	R3244[87] = (char *(*)()) F717_4481;
	R3244[88] = (char *(*)()) F718_4481;
	R3244[89] = (char *(*)()) F719_4481;
	R3244[90] = (char *(*)()) F720_4481;
	R3244[91] = (char *(*)()) F721_4481;
	R3244[92] = (char *(*)()) F722_4481;
	R3244[93] = (char *(*)()) F723_4481;
	R3244[94] = (char *(*)()) F724_4481;
	R3244[95] = (char *(*)()) F725_4481;
	R3244[96] = (char *(*)()) F726_4481;
	R3244[97] = (char *(*)()) F727_4481;
	R3244[98] = (char *(*)()) F728_4481;
	R3244[99] = (char *(*)()) F714_4481;
	R3244[100] = (char *(*)()) F715_4481;
	R3244[101] = (char *(*)()) F716_4481;
	R3244[102] = (char *(*)()) F717_4481;
	R3244[103] = (char *(*)()) F718_4481;
	R3244[104] = (char *(*)()) F719_4481;
	R3244[105] = (char *(*)()) F720_4481;
	R3244[106] = (char *(*)()) F721_4481;
	R3244[107] = (char *(*)()) F722_4481;
	R3244[108] = (char *(*)()) F723_4481;
	R3244[109] = (char *(*)()) F724_4481;
	R3244[110] = (char *(*)()) F725_4481;
	R3244[111] = (char *(*)()) F726_4481;
	R3244[112] = (char *(*)()) F727_4481;
	R3244[113] = (char *(*)()) F728_4481;
	R3244[119] = (char *(*)()) F781_4519;
	R3244[120] = (char *(*)()) F782_4519;
	R3244[121] = (char *(*)()) F783_4519;
	R3244[122] = (char *(*)()) F784_4519;
	R3244[123] = (char *(*)()) F785_4519;
	R3244[125] = (char *(*)()) F787_4551;
}

static EIF_TYPE_INDEX Y3245_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype15[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype16[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype17[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype97[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype98[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3245_pgtype139[] = {838,0xFFFF};
EIF_TYPE_INDEX *Y3245_gen_type [141];
EIF_TYPE_INDEX Y3245 [141];
void Y3245_init (void)
{
	egc_routines_types [3245] = Y3245;
	egc_routines_gen_types [3245] = Y3245_gen_type;
	egc_routines_offset [3245] = 646;
	Y3245_gen_type [0] = Y3245_pgtype0;
	Y3245_gen_type [1] = Y3245_pgtype1;
	Y3245_gen_type [2] = Y3245_pgtype2;
	Y3245_gen_type [3] = Y3245_pgtype3;
	Y3245_gen_type [4] = Y3245_pgtype4;
	Y3245_gen_type [5] = Y3245_pgtype5;
	Y3245_gen_type [6] = Y3245_pgtype6;
	Y3245_gen_type [7] = Y3245_pgtype7;
	Y3245_gen_type [8] = Y3245_pgtype8;
	Y3245_gen_type [9] = Y3245_pgtype9;
	Y3245_gen_type [10] = Y3245_pgtype10;
	Y3245_gen_type [11] = Y3245_pgtype11;
	Y3245_gen_type [12] = Y3245_pgtype12;
	Y3245_gen_type [13] = Y3245_pgtype13;
	Y3245_gen_type [14] = Y3245_pgtype14;
	Y3245_gen_type [15] = Y3245_pgtype15;
	Y3245_gen_type [16] = Y3245_pgtype16;
	Y3245_gen_type [17] = Y3245_pgtype17;
	Y3245_gen_type [18] = Y3245_pgtype18;
	Y3245_gen_type [19] = Y3245_pgtype19;
	Y3245_gen_type [20] = Y3245_pgtype20;
	Y3245_gen_type [21] = Y3245_pgtype21;
	Y3245_gen_type [22] = Y3245_pgtype22;
	Y3245_gen_type [23] = Y3245_pgtype23;
	Y3245_gen_type [24] = Y3245_pgtype24;
	Y3245_gen_type [25] = Y3245_pgtype25;
	Y3245_gen_type [26] = Y3245_pgtype26;
	Y3245_gen_type [27] = Y3245_pgtype27;
	Y3245_gen_type [28] = Y3245_pgtype28;
	Y3245_gen_type [29] = Y3245_pgtype29;
	Y3245_gen_type [30] = Y3245_pgtype30;
	Y3245_gen_type [31] = Y3245_pgtype31;
	Y3245_gen_type [32] = Y3245_pgtype32;
	Y3245_gen_type [33] = Y3245_pgtype33;
	Y3245_gen_type [34] = Y3245_pgtype34;
	Y3245_gen_type [35] = Y3245_pgtype35;
	Y3245_gen_type [36] = Y3245_pgtype36;
	Y3245_gen_type [37] = Y3245_pgtype37;
	Y3245_gen_type [38] = Y3245_pgtype38;
	Y3245_gen_type [39] = Y3245_pgtype39;
	Y3245_gen_type [40] = Y3245_pgtype40;
	Y3245_gen_type [41] = Y3245_pgtype41;
	Y3245_gen_type [42] = Y3245_pgtype42;
	Y3245_gen_type [43] = Y3245_pgtype43;
	Y3245_gen_type [44] = Y3245_pgtype44;
	Y3245_gen_type [45] = Y3245_pgtype45;
	Y3245_gen_type [46] = Y3245_pgtype46;
	Y3245_gen_type [47] = Y3245_pgtype47;
	Y3245_gen_type [48] = Y3245_pgtype48;
	Y3245_gen_type [49] = Y3245_pgtype49;
	Y3245_gen_type [50] = Y3245_pgtype50;
	Y3245_gen_type [51] = Y3245_pgtype51;
	Y3245_gen_type [52] = Y3245_pgtype52;
	Y3245_gen_type [53] = Y3245_pgtype53;
	Y3245_gen_type [54] = Y3245_pgtype54;
	Y3245_gen_type [55] = Y3245_pgtype55;
	Y3245_gen_type [56] = Y3245_pgtype56;
	Y3245_gen_type [57] = Y3245_pgtype57;
	Y3245_gen_type [58] = Y3245_pgtype58;
	Y3245_gen_type [59] = Y3245_pgtype59;
	Y3245_gen_type [60] = Y3245_pgtype60;
	Y3245_gen_type [61] = Y3245_pgtype61;
	Y3245_gen_type [62] = Y3245_pgtype62;
	Y3245_gen_type [63] = Y3245_pgtype63;
	Y3245_gen_type [64] = Y3245_pgtype64;
	Y3245_gen_type [65] = Y3245_pgtype65;
	Y3245_gen_type [66] = Y3245_pgtype66;
	Y3245_gen_type [67] = Y3245_pgtype67;
	Y3245_gen_type [68] = Y3245_pgtype68;
	Y3245_gen_type [69] = Y3245_pgtype69;
	Y3245_gen_type [70] = Y3245_pgtype70;
	Y3245_gen_type [71] = Y3245_pgtype71;
	Y3245_gen_type [72] = Y3245_pgtype72;
	Y3245_gen_type [73] = Y3245_pgtype73;
	Y3245_gen_type [74] = Y3245_pgtype74;
	Y3245_gen_type [75] = Y3245_pgtype75;
	Y3245_gen_type [76] = Y3245_pgtype76;
	Y3245_gen_type [77] = Y3245_pgtype77;
	Y3245_gen_type [78] = Y3245_pgtype78;
	Y3245_gen_type [79] = Y3245_pgtype79;
	Y3245_gen_type [80] = Y3245_pgtype80;
	Y3245_gen_type [81] = Y3245_pgtype81;
	Y3245_gen_type [82] = Y3245_pgtype82;
	Y3245_gen_type [83] = Y3245_pgtype83;
	Y3245_gen_type [84] = Y3245_pgtype84;
	Y3245_gen_type [85] = Y3245_pgtype85;
	Y3245_gen_type [86] = Y3245_pgtype86;
	Y3245_gen_type [87] = Y3245_pgtype87;
	Y3245_gen_type [88] = Y3245_pgtype88;
	Y3245_gen_type [89] = Y3245_pgtype89;
	Y3245_gen_type [90] = Y3245_pgtype90;
	Y3245_gen_type [91] = Y3245_pgtype91;
	Y3245_gen_type [92] = Y3245_pgtype92;
	Y3245_gen_type [93] = Y3245_pgtype93;
	Y3245_gen_type [94] = Y3245_pgtype94;
	Y3245_gen_type [95] = Y3245_pgtype95;
	Y3245_gen_type [96] = Y3245_pgtype96;
	Y3245_gen_type [97] = Y3245_pgtype97;
	Y3245_gen_type [98] = Y3245_pgtype98;
	Y3245_gen_type [99] = Y3245_pgtype99;
	Y3245_gen_type [100] = Y3245_pgtype100;
	Y3245_gen_type [101] = Y3245_pgtype101;
	Y3245_gen_type [102] = Y3245_pgtype102;
	Y3245_gen_type [103] = Y3245_pgtype103;
	Y3245_gen_type [104] = Y3245_pgtype104;
	Y3245_gen_type [105] = Y3245_pgtype105;
	Y3245_gen_type [106] = Y3245_pgtype106;
	Y3245_gen_type [107] = Y3245_pgtype107;
	Y3245_gen_type [108] = Y3245_pgtype108;
	Y3245_gen_type [109] = Y3245_pgtype109;
	Y3245_gen_type [110] = Y3245_pgtype110;
	Y3245_gen_type [111] = Y3245_pgtype111;
	Y3245_gen_type [112] = Y3245_pgtype112;
	Y3245_gen_type [113] = Y3245_pgtype113;
	Y3245_gen_type [114] = Y3245_pgtype114;
	Y3245_gen_type [115] = Y3245_pgtype115;
	Y3245_gen_type [116] = Y3245_pgtype116;
	Y3245_gen_type [117] = Y3245_pgtype117;
	Y3245_gen_type [118] = Y3245_pgtype118;
	Y3245_gen_type [119] = Y3245_pgtype119;
	Y3245_gen_type [120] = Y3245_pgtype120;
	Y3245_gen_type [121] = Y3245_pgtype121;
	Y3245_gen_type [122] = Y3245_pgtype122;
	Y3245_gen_type [123] = Y3245_pgtype123;
	Y3245_gen_type [124] = Y3245_pgtype124;
	Y3245_gen_type [125] = Y3245_pgtype125;
	Y3245_gen_type [126] = Y3245_pgtype126;
	Y3245_gen_type [127] = Y3245_pgtype127;
	Y3245_gen_type [128] = Y3245_pgtype128;
	Y3245_gen_type [129] = Y3245_pgtype129;
	Y3245_gen_type [130] = Y3245_pgtype130;
	Y3245_gen_type [131] = Y3245_pgtype131;
	Y3245_gen_type [132] = Y3245_pgtype132;
	Y3245_gen_type [133] = Y3245_pgtype133;
	Y3245_gen_type [134] = Y3245_pgtype134;
	Y3245_gen_type [135] = Y3245_pgtype135;
	Y3245_gen_type [136] = Y3245_pgtype136;
	Y3245_gen_type [137] = Y3245_pgtype137;
	Y3245_gen_type [138] = Y3245_pgtype138;
	Y3245_gen_type [140] = Y3245_pgtype139;
	Y3245[15] = 859;
	Y3245[16] = 835;
	Y3245[17] = 859;
	Y3245[97] = 835;
	Y3245[98] = 838;
	Y3245[140] = 838;
}

char *(*R3295[90])();
void R3295_init () {
	R3295[0] = (char *(*)()) F696_4433;
	R3295[1] = (char *(*)()) F697_4433;
	R3295[2] = (char *(*)()) F698_4433;
	R3295[3] = (char *(*)()) F699_4433;
	R3295[4] = (char *(*)()) F700_4433;
	R3295[5] = (char *(*)()) F701_4433;
	R3295[6] = (char *(*)()) F702_4433;
	R3295[7] = (char *(*)()) F703_4433;
	R3295[8] = (char *(*)()) F704_4433;
	R3295[9] = (char *(*)()) F705_4433;
	R3295[10] = (char *(*)()) F706_4433;
	R3295[11] = (char *(*)()) F707_4433;
	R3295[12] = (char *(*)()) F708_4433;
	R3295[13] = (char *(*)()) F709_4433;
	R3295[14] = (char *(*)()) F710_4433;
	R3295[15] = (char *(*)()) F696_4433;
	R3295[16] = (char *(*)()) F698_4433;
	R3295[17] = (char *(*)()) F701_4433;
	R3295[33] = (char *(*)()) F714_4467;
	R3295[34] = (char *(*)()) F715_4467;
	R3295[35] = (char *(*)()) F716_4467;
	R3295[36] = (char *(*)()) F717_4467;
	R3295[37] = (char *(*)()) F718_4467;
	R3295[38] = (char *(*)()) F719_4467;
	R3295[39] = (char *(*)()) F720_4467;
	R3295[40] = (char *(*)()) F721_4467;
	R3295[41] = (char *(*)()) F722_4467;
	R3295[42] = (char *(*)()) F723_4467;
	R3295[43] = (char *(*)()) F724_4467;
	R3295[44] = (char *(*)()) F725_4467;
	R3295[45] = (char *(*)()) F726_4467;
	R3295[46] = (char *(*)()) F727_4467;
	R3295[47] = (char *(*)()) F728_4467;
	R3295[48] = (char *(*)()) F719_4467;
	R3295[49] = (char *(*)()) F728_4467;
	R3295[50] = (char *(*)()) F714_4467;
	R3295[51] = (char *(*)()) F715_4467;
	R3295[52] = (char *(*)()) F716_4467;
	R3295[53] = (char *(*)()) F717_4467;
	R3295[54] = (char *(*)()) F718_4467;
	R3295[55] = (char *(*)()) F719_4467;
	R3295[56] = (char *(*)()) F720_4467;
	R3295[57] = (char *(*)()) F721_4467;
	R3295[58] = (char *(*)()) F722_4467;
	R3295[59] = (char *(*)()) F723_4467;
	R3295[60] = (char *(*)()) F724_4467;
	R3295[61] = (char *(*)()) F725_4467;
	R3295[62] = (char *(*)()) F726_4467;
	R3295[63] = (char *(*)()) F727_4467;
	R3295[64] = (char *(*)()) F728_4467;
	R3295[65] = (char *(*)()) F714_4467;
	R3295[66] = (char *(*)()) F715_4467;
	R3295[67] = (char *(*)()) F716_4467;
	R3295[68] = (char *(*)()) F717_4467;
	R3295[69] = (char *(*)()) F718_4467;
	R3295[70] = (char *(*)()) F719_4467;
	R3295[71] = (char *(*)()) F720_4467;
	R3295[72] = (char *(*)()) F721_4467;
	R3295[73] = (char *(*)()) F722_4467;
	R3295[74] = (char *(*)()) F723_4467;
	R3295[75] = (char *(*)()) F724_4467;
	R3295[76] = (char *(*)()) F725_4467;
	R3295[77] = (char *(*)()) F726_4467;
	R3295[78] = (char *(*)()) F727_4467;
	R3295[79] = (char *(*)()) F728_4467;
	R3295[85] = (char *(*)()) F781_4517;
	R3295[86] = (char *(*)()) F782_4517;
	R3295[87] = (char *(*)()) F783_4517;
	R3295[88] = (char *(*)()) F784_4517;
	R3295[89] = (char *(*)()) F785_4517;
}

char *(*R3296[90])();
void R3296_init () {
	R3296[0] = (char *(*)()) F696_4434;
	R3296[1] = (char *(*)()) F697_4434;
	R3296[2] = (char *(*)()) F698_4434;
	R3296[3] = (char *(*)()) F699_4434;
	R3296[4] = (char *(*)()) F700_4434;
	R3296[5] = (char *(*)()) F701_4434;
	R3296[6] = (char *(*)()) F702_4434;
	R3296[7] = (char *(*)()) F703_4434;
	R3296[8] = (char *(*)()) F704_4434;
	R3296[9] = (char *(*)()) F705_4434;
	R3296[10] = (char *(*)()) F706_4434;
	R3296[11] = (char *(*)()) F707_4434;
	R3296[12] = (char *(*)()) F708_4434;
	R3296[13] = (char *(*)()) F709_4434;
	R3296[14] = (char *(*)()) F710_4434;
	R3296[15] = (char *(*)()) F696_4434;
	R3296[16] = (char *(*)()) F698_4434;
	R3296[17] = (char *(*)()) F701_4434;
	R3296[33] = (char *(*)()) F714_4468;
	R3296[34] = (char *(*)()) F715_4468;
	R3296[35] = (char *(*)()) F716_4468;
	R3296[36] = (char *(*)()) F717_4468;
	R3296[37] = (char *(*)()) F718_4468;
	R3296[38] = (char *(*)()) F719_4468;
	R3296[39] = (char *(*)()) F720_4468;
	R3296[40] = (char *(*)()) F721_4468;
	R3296[41] = (char *(*)()) F722_4468;
	R3296[42] = (char *(*)()) F723_4468;
	R3296[43] = (char *(*)()) F724_4468;
	R3296[44] = (char *(*)()) F725_4468;
	R3296[45] = (char *(*)()) F726_4468;
	R3296[46] = (char *(*)()) F727_4468;
	R3296[47] = (char *(*)()) F728_4468;
	R3296[48] = (char *(*)()) F719_4468;
	R3296[49] = (char *(*)()) F728_4468;
	R3296[50] = (char *(*)()) F714_4468;
	R3296[51] = (char *(*)()) F715_4468;
	R3296[52] = (char *(*)()) F716_4468;
	R3296[53] = (char *(*)()) F717_4468;
	R3296[54] = (char *(*)()) F718_4468;
	R3296[55] = (char *(*)()) F719_4468;
	R3296[56] = (char *(*)()) F720_4468;
	R3296[57] = (char *(*)()) F721_4468;
	R3296[58] = (char *(*)()) F722_4468;
	R3296[59] = (char *(*)()) F723_4468;
	R3296[60] = (char *(*)()) F724_4468;
	R3296[61] = (char *(*)()) F725_4468;
	R3296[62] = (char *(*)()) F726_4468;
	R3296[63] = (char *(*)()) F727_4468;
	R3296[64] = (char *(*)()) F728_4468;
	R3296[65] = (char *(*)()) F714_4468;
	R3296[66] = (char *(*)()) F715_4468;
	R3296[67] = (char *(*)()) F716_4468;
	R3296[68] = (char *(*)()) F717_4468;
	R3296[69] = (char *(*)()) F718_4468;
	R3296[70] = (char *(*)()) F719_4468;
	R3296[71] = (char *(*)()) F720_4468;
	R3296[72] = (char *(*)()) F721_4468;
	R3296[73] = (char *(*)()) F722_4468;
	R3296[74] = (char *(*)()) F723_4468;
	R3296[75] = (char *(*)()) F724_4468;
	R3296[76] = (char *(*)()) F725_4468;
	R3296[77] = (char *(*)()) F726_4468;
	R3296[78] = (char *(*)()) F727_4468;
	R3296[79] = (char *(*)()) F728_4468;
	{long i; for (i = 85; i < 87; i++) R3296[i] = (char *(*)()) F696_4434;}
	{long i; for (i = 87; i < 89; i++) R3296[i] = (char *(*)()) F698_4434;}
	R3296[89] = (char *(*)()) F699_4434;
}

char *(*R3297[90])();
void R3297_init () {
	R3297[0] = (char *(*)()) F696_4435;
	R3297[1] = (char *(*)()) F697_4435;
	R3297[2] = (char *(*)()) F698_4435;
	R3297[3] = (char *(*)()) F699_4435;
	R3297[4] = (char *(*)()) F700_4435;
	R3297[5] = (char *(*)()) F701_4435;
	R3297[6] = (char *(*)()) F702_4435;
	R3297[7] = (char *(*)()) F703_4435;
	R3297[8] = (char *(*)()) F704_4435;
	R3297[9] = (char *(*)()) F705_4435;
	R3297[10] = (char *(*)()) F706_4435;
	R3297[11] = (char *(*)()) F707_4435;
	R3297[12] = (char *(*)()) F708_4435;
	R3297[13] = (char *(*)()) F709_4435;
	R3297[14] = (char *(*)()) F710_4435;
	R3297[15] = (char *(*)()) F696_4435;
	R3297[16] = (char *(*)()) F698_4435;
	R3297[17] = (char *(*)()) F701_4435;
	R3297[33] = (char *(*)()) F729_4487;
	R3297[34] = (char *(*)()) F730_4487;
	R3297[35] = (char *(*)()) F731_4487;
	R3297[36] = (char *(*)()) F732_4487;
	R3297[37] = (char *(*)()) F733_4487;
	R3297[38] = (char *(*)()) F734_4487;
	R3297[39] = (char *(*)()) F735_4487;
	R3297[40] = (char *(*)()) F736_4487;
	R3297[41] = (char *(*)()) F737_4487;
	R3297[42] = (char *(*)()) F738_4487;
	R3297[43] = (char *(*)()) F739_4487;
	R3297[44] = (char *(*)()) F740_4487;
	R3297[45] = (char *(*)()) F741_4487;
	R3297[46] = (char *(*)()) F742_4487;
	R3297[47] = (char *(*)()) F743_4487;
	R3297[48] = (char *(*)()) F744_4493;
	R3297[49] = (char *(*)()) F745_4499;
	R3297[50] = (char *(*)()) F746_4505;
	R3297[51] = (char *(*)()) F747_4505;
	R3297[52] = (char *(*)()) F748_4505;
	R3297[53] = (char *(*)()) F749_4505;
	R3297[54] = (char *(*)()) F750_4505;
	R3297[55] = (char *(*)()) F751_4505;
	R3297[56] = (char *(*)()) F752_4505;
	R3297[57] = (char *(*)()) F753_4505;
	R3297[58] = (char *(*)()) F754_4505;
	R3297[59] = (char *(*)()) F755_4505;
	R3297[60] = (char *(*)()) F756_4505;
	R3297[61] = (char *(*)()) F757_4505;
	R3297[62] = (char *(*)()) F758_4505;
	R3297[63] = (char *(*)()) F759_4505;
	R3297[64] = (char *(*)()) F760_4505;
	R3297[65] = (char *(*)()) F761_4511;
	R3297[66] = (char *(*)()) F762_4511;
	R3297[67] = (char *(*)()) F763_4511;
	R3297[68] = (char *(*)()) F764_4511;
	R3297[69] = (char *(*)()) F765_4511;
	R3297[70] = (char *(*)()) F766_4511;
	R3297[71] = (char *(*)()) F767_4511;
	R3297[72] = (char *(*)()) F768_4511;
	R3297[73] = (char *(*)()) F769_4511;
	R3297[74] = (char *(*)()) F770_4511;
	R3297[75] = (char *(*)()) F771_4511;
	R3297[76] = (char *(*)()) F772_4511;
	R3297[77] = (char *(*)()) F773_4511;
	R3297[78] = (char *(*)()) F774_4511;
	R3297[79] = (char *(*)()) F775_4511;
	{long i; for (i = 85; i < 87; i++) R3297[i] = (char *(*)()) F696_4435;}
	{long i; for (i = 87; i < 89; i++) R3297[i] = (char *(*)()) F698_4435;}
	R3297[89] = (char *(*)()) F699_4435;
}

char *(*R3298[90])();
void R3298_init () {
	R3298[0] = (char *(*)()) F696_4436;
	R3298[1] = (char *(*)()) F697_4436;
	R3298[2] = (char *(*)()) F698_4436;
	R3298[3] = (char *(*)()) F699_4436;
	R3298[4] = (char *(*)()) F700_4436;
	R3298[5] = (char *(*)()) F701_4436;
	R3298[6] = (char *(*)()) F702_4436;
	R3298[7] = (char *(*)()) F703_4436;
	R3298[8] = (char *(*)()) F704_4436;
	R3298[9] = (char *(*)()) F705_4436;
	R3298[10] = (char *(*)()) F706_4436;
	R3298[11] = (char *(*)()) F707_4436;
	R3298[12] = (char *(*)()) F708_4436;
	R3298[13] = (char *(*)()) F709_4436;
	R3298[14] = (char *(*)()) F710_4436;
	R3298[15] = (char *(*)()) F696_4436;
	R3298[16] = (char *(*)()) F698_4436;
	R3298[17] = (char *(*)()) F701_4436;
	R3298[33] = (char *(*)()) F714_4469;
	R3298[34] = (char *(*)()) F715_4469;
	R3298[35] = (char *(*)()) F716_4469;
	R3298[36] = (char *(*)()) F717_4469;
	R3298[37] = (char *(*)()) F718_4469;
	R3298[38] = (char *(*)()) F719_4469;
	R3298[39] = (char *(*)()) F720_4469;
	R3298[40] = (char *(*)()) F721_4469;
	R3298[41] = (char *(*)()) F722_4469;
	R3298[42] = (char *(*)()) F723_4469;
	R3298[43] = (char *(*)()) F724_4469;
	R3298[44] = (char *(*)()) F725_4469;
	R3298[45] = (char *(*)()) F726_4469;
	R3298[46] = (char *(*)()) F727_4469;
	R3298[47] = (char *(*)()) F728_4469;
	R3298[48] = (char *(*)()) F719_4469;
	R3298[49] = (char *(*)()) F728_4469;
	R3298[50] = (char *(*)()) F714_4469;
	R3298[51] = (char *(*)()) F715_4469;
	R3298[52] = (char *(*)()) F716_4469;
	R3298[53] = (char *(*)()) F717_4469;
	R3298[54] = (char *(*)()) F718_4469;
	R3298[55] = (char *(*)()) F719_4469;
	R3298[56] = (char *(*)()) F720_4469;
	R3298[57] = (char *(*)()) F721_4469;
	R3298[58] = (char *(*)()) F722_4469;
	R3298[59] = (char *(*)()) F723_4469;
	R3298[60] = (char *(*)()) F724_4469;
	R3298[61] = (char *(*)()) F725_4469;
	R3298[62] = (char *(*)()) F726_4469;
	R3298[63] = (char *(*)()) F727_4469;
	R3298[64] = (char *(*)()) F728_4469;
	R3298[65] = (char *(*)()) F714_4469;
	R3298[66] = (char *(*)()) F715_4469;
	R3298[67] = (char *(*)()) F716_4469;
	R3298[68] = (char *(*)()) F717_4469;
	R3298[69] = (char *(*)()) F718_4469;
	R3298[70] = (char *(*)()) F719_4469;
	R3298[71] = (char *(*)()) F720_4469;
	R3298[72] = (char *(*)()) F721_4469;
	R3298[73] = (char *(*)()) F722_4469;
	R3298[74] = (char *(*)()) F723_4469;
	R3298[75] = (char *(*)()) F724_4469;
	R3298[76] = (char *(*)()) F725_4469;
	R3298[77] = (char *(*)()) F726_4469;
	R3298[78] = (char *(*)()) F727_4469;
	R3298[79] = (char *(*)()) F728_4469;
	{long i; for (i = 85; i < 87; i++) R3298[i] = (char *(*)()) F696_4436;}
	{long i; for (i = 87; i < 89; i++) R3298[i] = (char *(*)()) F698_4436;}
	R3298[89] = (char *(*)()) F699_4436;
}

char *(*R3299[90])();
void R3299_init () {
	R3299[0] = (char *(*)()) F696_4437;
	R3299[1] = (char *(*)()) F697_4437;
	R3299[2] = (char *(*)()) F698_4437;
	R3299[3] = (char *(*)()) F699_4437;
	R3299[4] = (char *(*)()) F700_4437;
	R3299[5] = (char *(*)()) F701_4437;
	R3299[6] = (char *(*)()) F702_4437;
	R3299[7] = (char *(*)()) F703_4437;
	R3299[8] = (char *(*)()) F704_4437;
	R3299[9] = (char *(*)()) F705_4437;
	R3299[10] = (char *(*)()) F706_4437;
	R3299[11] = (char *(*)()) F707_4437;
	R3299[12] = (char *(*)()) F708_4437;
	R3299[13] = (char *(*)()) F709_4437;
	R3299[14] = (char *(*)()) F710_4437;
	R3299[15] = (char *(*)()) F696_4437;
	R3299[16] = (char *(*)()) F698_4437;
	R3299[17] = (char *(*)()) F701_4437;
	R3299[33] = (char *(*)()) F714_4470;
	R3299[34] = (char *(*)()) F715_4470;
	R3299[35] = (char *(*)()) F716_4470;
	R3299[36] = (char *(*)()) F717_4470;
	R3299[37] = (char *(*)()) F718_4470;
	R3299[38] = (char *(*)()) F719_4470;
	R3299[39] = (char *(*)()) F720_4470;
	R3299[40] = (char *(*)()) F721_4470;
	R3299[41] = (char *(*)()) F722_4470;
	R3299[42] = (char *(*)()) F723_4470;
	R3299[43] = (char *(*)()) F724_4470;
	R3299[44] = (char *(*)()) F725_4470;
	R3299[45] = (char *(*)()) F726_4470;
	R3299[46] = (char *(*)()) F727_4470;
	R3299[47] = (char *(*)()) F728_4470;
	R3299[48] = (char *(*)()) F719_4470;
	R3299[49] = (char *(*)()) F728_4470;
	R3299[50] = (char *(*)()) F714_4470;
	R3299[51] = (char *(*)()) F715_4470;
	R3299[52] = (char *(*)()) F716_4470;
	R3299[53] = (char *(*)()) F717_4470;
	R3299[54] = (char *(*)()) F718_4470;
	R3299[55] = (char *(*)()) F719_4470;
	R3299[56] = (char *(*)()) F720_4470;
	R3299[57] = (char *(*)()) F721_4470;
	R3299[58] = (char *(*)()) F722_4470;
	R3299[59] = (char *(*)()) F723_4470;
	R3299[60] = (char *(*)()) F724_4470;
	R3299[61] = (char *(*)()) F725_4470;
	R3299[62] = (char *(*)()) F726_4470;
	R3299[63] = (char *(*)()) F727_4470;
	R3299[64] = (char *(*)()) F728_4470;
	R3299[65] = (char *(*)()) F714_4470;
	R3299[66] = (char *(*)()) F715_4470;
	R3299[67] = (char *(*)()) F716_4470;
	R3299[68] = (char *(*)()) F717_4470;
	R3299[69] = (char *(*)()) F718_4470;
	R3299[70] = (char *(*)()) F719_4470;
	R3299[71] = (char *(*)()) F720_4470;
	R3299[72] = (char *(*)()) F721_4470;
	R3299[73] = (char *(*)()) F722_4470;
	R3299[74] = (char *(*)()) F723_4470;
	R3299[75] = (char *(*)()) F724_4470;
	R3299[76] = (char *(*)()) F725_4470;
	R3299[77] = (char *(*)()) F726_4470;
	R3299[78] = (char *(*)()) F727_4470;
	R3299[79] = (char *(*)()) F728_4470;
	{long i; for (i = 85; i < 87; i++) R3299[i] = (char *(*)()) F696_4437;}
	{long i; for (i = 87; i < 89; i++) R3299[i] = (char *(*)()) F698_4437;}
	R3299[89] = (char *(*)()) F699_4437;
}

char *(*R3304[90])();
void R3304_init () {
	R3304[0] = (char *(*)()) F696_4445;
	R3304[1] = (char *(*)()) F697_4445;
	R3304[2] = (char *(*)()) F698_4445;
	R3304[3] = (char *(*)()) F699_4445;
	R3304[4] = (char *(*)()) F700_4445;
	R3304[5] = (char *(*)()) F701_4445;
	R3304[6] = (char *(*)()) F702_4445;
	R3304[7] = (char *(*)()) F703_4445;
	R3304[8] = (char *(*)()) F704_4445;
	R3304[9] = (char *(*)()) F705_4445;
	R3304[10] = (char *(*)()) F706_4445;
	R3304[11] = (char *(*)()) F707_4445;
	R3304[12] = (char *(*)()) F708_4445;
	R3304[13] = (char *(*)()) F709_4445;
	R3304[14] = (char *(*)()) F710_4445;
	R3304[15] = (char *(*)()) F696_4445;
	R3304[16] = (char *(*)()) F698_4445;
	R3304[17] = (char *(*)()) F701_4445;
	R3304[33] = (char *(*)()) F714_4476;
	R3304[34] = (char *(*)()) F715_4476;
	R3304[35] = (char *(*)()) F716_4476;
	R3304[36] = (char *(*)()) F717_4476;
	R3304[37] = (char *(*)()) F718_4476;
	R3304[38] = (char *(*)()) F719_4476;
	R3304[39] = (char *(*)()) F720_4476;
	R3304[40] = (char *(*)()) F721_4476;
	R3304[41] = (char *(*)()) F722_4476;
	R3304[42] = (char *(*)()) F723_4476;
	R3304[43] = (char *(*)()) F724_4476;
	R3304[44] = (char *(*)()) F725_4476;
	R3304[45] = (char *(*)()) F726_4476;
	R3304[46] = (char *(*)()) F727_4476;
	R3304[47] = (char *(*)()) F728_4476;
	R3304[48] = (char *(*)()) F719_4476;
	R3304[49] = (char *(*)()) F728_4476;
	R3304[50] = (char *(*)()) F714_4476;
	R3304[51] = (char *(*)()) F715_4476;
	R3304[52] = (char *(*)()) F716_4476;
	R3304[53] = (char *(*)()) F717_4476;
	R3304[54] = (char *(*)()) F718_4476;
	R3304[55] = (char *(*)()) F719_4476;
	R3304[56] = (char *(*)()) F720_4476;
	R3304[57] = (char *(*)()) F721_4476;
	R3304[58] = (char *(*)()) F722_4476;
	R3304[59] = (char *(*)()) F723_4476;
	R3304[60] = (char *(*)()) F724_4476;
	R3304[61] = (char *(*)()) F725_4476;
	R3304[62] = (char *(*)()) F726_4476;
	R3304[63] = (char *(*)()) F727_4476;
	R3304[64] = (char *(*)()) F728_4476;
	R3304[65] = (char *(*)()) F714_4476;
	R3304[66] = (char *(*)()) F715_4476;
	R3304[67] = (char *(*)()) F716_4476;
	R3304[68] = (char *(*)()) F717_4476;
	R3304[69] = (char *(*)()) F718_4476;
	R3304[70] = (char *(*)()) F719_4476;
	R3304[71] = (char *(*)()) F720_4476;
	R3304[72] = (char *(*)()) F721_4476;
	R3304[73] = (char *(*)()) F722_4476;
	R3304[74] = (char *(*)()) F723_4476;
	R3304[75] = (char *(*)()) F724_4476;
	R3304[76] = (char *(*)()) F725_4476;
	R3304[77] = (char *(*)()) F726_4476;
	R3304[78] = (char *(*)()) F727_4476;
	R3304[79] = (char *(*)()) F728_4476;
	{long i; for (i = 85; i < 87; i++) R3304[i] = (char *(*)()) F696_4445;}
	{long i; for (i = 87; i < 89; i++) R3304[i] = (char *(*)()) F698_4445;}
	R3304[89] = (char *(*)()) F699_4445;
}

char *(*R3305[90])();
void R3305_init () {
	R3305[0] = (char *(*)()) F696_4446;
	R3305[1] = (char *(*)()) F697_4446;
	R3305[2] = (char *(*)()) F698_4446;
	R3305[3] = (char *(*)()) F699_4446;
	R3305[4] = (char *(*)()) F700_4446;
	R3305[5] = (char *(*)()) F701_4446;
	R3305[6] = (char *(*)()) F702_4446;
	R3305[7] = (char *(*)()) F703_4446;
	R3305[8] = (char *(*)()) F704_4446;
	R3305[9] = (char *(*)()) F705_4446;
	R3305[10] = (char *(*)()) F706_4446;
	R3305[11] = (char *(*)()) F707_4446;
	R3305[12] = (char *(*)()) F708_4446;
	R3305[13] = (char *(*)()) F709_4446;
	R3305[14] = (char *(*)()) F710_4446;
	R3305[15] = (char *(*)()) F696_4446;
	R3305[16] = (char *(*)()) F698_4446;
	R3305[17] = (char *(*)()) F701_4446;
	R3305[33] = (char *(*)()) F729_4489;
	R3305[34] = (char *(*)()) F730_4489;
	R3305[35] = (char *(*)()) F731_4489;
	R3305[36] = (char *(*)()) F732_4489;
	R3305[37] = (char *(*)()) F733_4489;
	R3305[38] = (char *(*)()) F734_4489;
	R3305[39] = (char *(*)()) F735_4489;
	R3305[40] = (char *(*)()) F736_4489;
	R3305[41] = (char *(*)()) F737_4489;
	R3305[42] = (char *(*)()) F738_4489;
	R3305[43] = (char *(*)()) F739_4489;
	R3305[44] = (char *(*)()) F740_4489;
	R3305[45] = (char *(*)()) F741_4489;
	R3305[46] = (char *(*)()) F742_4489;
	R3305[47] = (char *(*)()) F743_4489;
	R3305[48] = (char *(*)()) F744_4495;
	R3305[49] = (char *(*)()) F745_4501;
	R3305[50] = (char *(*)()) F746_4507;
	R3305[51] = (char *(*)()) F747_4507;
	R3305[52] = (char *(*)()) F748_4507;
	R3305[53] = (char *(*)()) F749_4507;
	R3305[54] = (char *(*)()) F750_4507;
	R3305[55] = (char *(*)()) F751_4507;
	R3305[56] = (char *(*)()) F752_4507;
	R3305[57] = (char *(*)()) F753_4507;
	R3305[58] = (char *(*)()) F754_4507;
	R3305[59] = (char *(*)()) F755_4507;
	R3305[60] = (char *(*)()) F756_4507;
	R3305[61] = (char *(*)()) F757_4507;
	R3305[62] = (char *(*)()) F758_4507;
	R3305[63] = (char *(*)()) F759_4507;
	R3305[64] = (char *(*)()) F760_4507;
	R3305[65] = (char *(*)()) F714_4477;
	R3305[66] = (char *(*)()) F715_4477;
	R3305[67] = (char *(*)()) F716_4477;
	R3305[68] = (char *(*)()) F717_4477;
	R3305[69] = (char *(*)()) F718_4477;
	R3305[70] = (char *(*)()) F719_4477;
	R3305[71] = (char *(*)()) F720_4477;
	R3305[72] = (char *(*)()) F721_4477;
	R3305[73] = (char *(*)()) F722_4477;
	R3305[74] = (char *(*)()) F723_4477;
	R3305[75] = (char *(*)()) F724_4477;
	R3305[76] = (char *(*)()) F725_4477;
	R3305[77] = (char *(*)()) F726_4477;
	R3305[78] = (char *(*)()) F727_4477;
	R3305[79] = (char *(*)()) F728_4477;
	{long i; for (i = 85; i < 87; i++) R3305[i] = (char *(*)()) F696_4446;}
	{long i; for (i = 87; i < 89; i++) R3305[i] = (char *(*)()) F698_4446;}
	R3305[89] = (char *(*)()) F699_4446;
}

char *(*R3306[90])();
void R3306_init () {
	R3306[0] = (char *(*)()) F696_4447;
	R3306[1] = (char *(*)()) F697_4447;
	R3306[2] = (char *(*)()) F698_4447;
	R3306[3] = (char *(*)()) F699_4447;
	R3306[4] = (char *(*)()) F700_4447;
	R3306[5] = (char *(*)()) F701_4447;
	R3306[6] = (char *(*)()) F702_4447;
	R3306[7] = (char *(*)()) F703_4447;
	R3306[8] = (char *(*)()) F704_4447;
	R3306[9] = (char *(*)()) F705_4447;
	R3306[10] = (char *(*)()) F706_4447;
	R3306[11] = (char *(*)()) F707_4447;
	R3306[12] = (char *(*)()) F708_4447;
	R3306[13] = (char *(*)()) F709_4447;
	R3306[14] = (char *(*)()) F710_4447;
	R3306[15] = (char *(*)()) F696_4447;
	R3306[16] = (char *(*)()) F698_4447;
	R3306[17] = (char *(*)()) F701_4447;
	R3306[33] = (char *(*)()) F714_4478;
	R3306[34] = (char *(*)()) F715_4478;
	R3306[35] = (char *(*)()) F716_4478;
	R3306[36] = (char *(*)()) F717_4478;
	R3306[37] = (char *(*)()) F718_4478;
	R3306[38] = (char *(*)()) F719_4478;
	R3306[39] = (char *(*)()) F720_4478;
	R3306[40] = (char *(*)()) F721_4478;
	R3306[41] = (char *(*)()) F722_4478;
	R3306[42] = (char *(*)()) F723_4478;
	R3306[43] = (char *(*)()) F724_4478;
	R3306[44] = (char *(*)()) F725_4478;
	R3306[45] = (char *(*)()) F726_4478;
	R3306[46] = (char *(*)()) F727_4478;
	R3306[47] = (char *(*)()) F728_4478;
	R3306[48] = (char *(*)()) F719_4478;
	R3306[49] = (char *(*)()) F728_4478;
	R3306[50] = (char *(*)()) F714_4478;
	R3306[51] = (char *(*)()) F715_4478;
	R3306[52] = (char *(*)()) F716_4478;
	R3306[53] = (char *(*)()) F717_4478;
	R3306[54] = (char *(*)()) F718_4478;
	R3306[55] = (char *(*)()) F719_4478;
	R3306[56] = (char *(*)()) F720_4478;
	R3306[57] = (char *(*)()) F721_4478;
	R3306[58] = (char *(*)()) F722_4478;
	R3306[59] = (char *(*)()) F723_4478;
	R3306[60] = (char *(*)()) F724_4478;
	R3306[61] = (char *(*)()) F725_4478;
	R3306[62] = (char *(*)()) F726_4478;
	R3306[63] = (char *(*)()) F727_4478;
	R3306[64] = (char *(*)()) F728_4478;
	R3306[65] = (char *(*)()) F714_4478;
	R3306[66] = (char *(*)()) F715_4478;
	R3306[67] = (char *(*)()) F716_4478;
	R3306[68] = (char *(*)()) F717_4478;
	R3306[69] = (char *(*)()) F718_4478;
	R3306[70] = (char *(*)()) F719_4478;
	R3306[71] = (char *(*)()) F720_4478;
	R3306[72] = (char *(*)()) F721_4478;
	R3306[73] = (char *(*)()) F722_4478;
	R3306[74] = (char *(*)()) F723_4478;
	R3306[75] = (char *(*)()) F724_4478;
	R3306[76] = (char *(*)()) F725_4478;
	R3306[77] = (char *(*)()) F726_4478;
	R3306[78] = (char *(*)()) F727_4478;
	R3306[79] = (char *(*)()) F728_4478;
	{long i; for (i = 85; i < 87; i++) R3306[i] = (char *(*)()) F696_4447;}
	{long i; for (i = 87; i < 89; i++) R3306[i] = (char *(*)()) F698_4447;}
	R3306[89] = (char *(*)()) F699_4447;
}

char *(*R3308[90])();
void R3308_init () {
	R3308[0] = (char *(*)()) F696_4451;
	R3308[1] = (char *(*)()) F697_4451;
	R3308[2] = (char *(*)()) F698_4451;
	R3308[3] = (char *(*)()) F699_4451;
	R3308[4] = (char *(*)()) F700_4451;
	R3308[5] = (char *(*)()) F701_4451;
	R3308[6] = (char *(*)()) F702_4451;
	R3308[7] = (char *(*)()) F703_4451;
	R3308[8] = (char *(*)()) F704_4451;
	R3308[9] = (char *(*)()) F705_4451;
	R3308[10] = (char *(*)()) F706_4451;
	R3308[11] = (char *(*)()) F707_4451;
	R3308[12] = (char *(*)()) F708_4451;
	R3308[13] = (char *(*)()) F709_4451;
	R3308[14] = (char *(*)()) F710_4451;
	R3308[15] = (char *(*)()) F711_4456;
	R3308[16] = (char *(*)()) F712_4456;
	R3308[17] = (char *(*)()) F713_4456;
	R3308[33] = (char *(*)()) F714_4480;
	R3308[34] = (char *(*)()) F715_4480;
	R3308[35] = (char *(*)()) F716_4480;
	R3308[36] = (char *(*)()) F717_4480;
	R3308[37] = (char *(*)()) F718_4480;
	R3308[38] = (char *(*)()) F719_4480;
	R3308[39] = (char *(*)()) F720_4480;
	R3308[40] = (char *(*)()) F721_4480;
	R3308[41] = (char *(*)()) F722_4480;
	R3308[42] = (char *(*)()) F723_4480;
	R3308[43] = (char *(*)()) F724_4480;
	R3308[44] = (char *(*)()) F725_4480;
	R3308[45] = (char *(*)()) F726_4480;
	R3308[46] = (char *(*)()) F727_4480;
	R3308[47] = (char *(*)()) F728_4480;
	R3308[48] = (char *(*)()) F719_4480;
	R3308[49] = (char *(*)()) F728_4480;
	R3308[50] = (char *(*)()) F714_4480;
	R3308[51] = (char *(*)()) F715_4480;
	R3308[52] = (char *(*)()) F716_4480;
	R3308[53] = (char *(*)()) F717_4480;
	R3308[54] = (char *(*)()) F718_4480;
	R3308[55] = (char *(*)()) F719_4480;
	R3308[56] = (char *(*)()) F720_4480;
	R3308[57] = (char *(*)()) F721_4480;
	R3308[58] = (char *(*)()) F722_4480;
	R3308[59] = (char *(*)()) F723_4480;
	R3308[60] = (char *(*)()) F724_4480;
	R3308[61] = (char *(*)()) F725_4480;
	R3308[62] = (char *(*)()) F726_4480;
	R3308[63] = (char *(*)()) F727_4480;
	R3308[64] = (char *(*)()) F728_4480;
	R3308[65] = (char *(*)()) F714_4480;
	R3308[66] = (char *(*)()) F715_4480;
	R3308[67] = (char *(*)()) F716_4480;
	R3308[68] = (char *(*)()) F717_4480;
	R3308[69] = (char *(*)()) F718_4480;
	R3308[70] = (char *(*)()) F719_4480;
	R3308[71] = (char *(*)()) F720_4480;
	R3308[72] = (char *(*)()) F721_4480;
	R3308[73] = (char *(*)()) F722_4480;
	R3308[74] = (char *(*)()) F723_4480;
	R3308[75] = (char *(*)()) F724_4480;
	R3308[76] = (char *(*)()) F725_4480;
	R3308[77] = (char *(*)()) F726_4480;
	R3308[78] = (char *(*)()) F727_4480;
	R3308[79] = (char *(*)()) F728_4480;
	{long i; for (i = 85; i < 87; i++) R3308[i] = (char *(*)()) F696_4451;}
	{long i; for (i = 87; i < 89; i++) R3308[i] = (char *(*)()) F698_4451;}
	R3308[89] = (char *(*)()) F699_4451;
}

char *(*R3309[90])();
void R3309_init () {
	R3309[0] = (char *(*)()) F696_4453;
	R3309[1] = (char *(*)()) F697_4453;
	R3309[2] = (char *(*)()) F698_4453;
	R3309[3] = (char *(*)()) F699_4453;
	R3309[4] = (char *(*)()) F700_4453;
	R3309[5] = (char *(*)()) F701_4453;
	R3309[6] = (char *(*)()) F702_4453;
	R3309[7] = (char *(*)()) F703_4453;
	R3309[8] = (char *(*)()) F704_4453;
	R3309[9] = (char *(*)()) F705_4453;
	R3309[10] = (char *(*)()) F706_4453;
	R3309[11] = (char *(*)()) F707_4453;
	R3309[12] = (char *(*)()) F708_4453;
	R3309[13] = (char *(*)()) F709_4453;
	R3309[14] = (char *(*)()) F710_4453;
	R3309[15] = (char *(*)()) F711_4458;
	R3309[16] = (char *(*)()) F712_4458;
	R3309[17] = (char *(*)()) F713_4458;
	R3309[33] = (char *(*)()) F729_4490;
	R3309[34] = (char *(*)()) F730_4490;
	R3309[35] = (char *(*)()) F731_4490;
	R3309[36] = (char *(*)()) F732_4490;
	R3309[37] = (char *(*)()) F733_4490;
	R3309[38] = (char *(*)()) F734_4490;
	R3309[39] = (char *(*)()) F735_4490;
	R3309[40] = (char *(*)()) F736_4490;
	R3309[41] = (char *(*)()) F737_4490;
	R3309[42] = (char *(*)()) F738_4490;
	R3309[43] = (char *(*)()) F739_4490;
	R3309[44] = (char *(*)()) F740_4490;
	R3309[45] = (char *(*)()) F741_4490;
	R3309[46] = (char *(*)()) F742_4490;
	R3309[47] = (char *(*)()) F743_4490;
	R3309[48] = (char *(*)()) F744_4496;
	R3309[49] = (char *(*)()) F745_4502;
	R3309[50] = (char *(*)()) F746_4508;
	R3309[51] = (char *(*)()) F747_4508;
	R3309[52] = (char *(*)()) F748_4508;
	R3309[53] = (char *(*)()) F749_4508;
	R3309[54] = (char *(*)()) F750_4508;
	R3309[55] = (char *(*)()) F751_4508;
	R3309[56] = (char *(*)()) F752_4508;
	R3309[57] = (char *(*)()) F753_4508;
	R3309[58] = (char *(*)()) F754_4508;
	R3309[59] = (char *(*)()) F755_4508;
	R3309[60] = (char *(*)()) F756_4508;
	R3309[61] = (char *(*)()) F757_4508;
	R3309[62] = (char *(*)()) F758_4508;
	R3309[63] = (char *(*)()) F759_4508;
	R3309[64] = (char *(*)()) F760_4508;
	R3309[65] = (char *(*)()) F714_4482;
	R3309[66] = (char *(*)()) F715_4482;
	R3309[67] = (char *(*)()) F716_4482;
	R3309[68] = (char *(*)()) F717_4482;
	R3309[69] = (char *(*)()) F718_4482;
	R3309[70] = (char *(*)()) F719_4482;
	R3309[71] = (char *(*)()) F720_4482;
	R3309[72] = (char *(*)()) F721_4482;
	R3309[73] = (char *(*)()) F722_4482;
	R3309[74] = (char *(*)()) F723_4482;
	R3309[75] = (char *(*)()) F724_4482;
	R3309[76] = (char *(*)()) F725_4482;
	R3309[77] = (char *(*)()) F726_4482;
	R3309[78] = (char *(*)()) F727_4482;
	R3309[79] = (char *(*)()) F728_4482;
	R3309[85] = (char *(*)()) F781_4520;
	R3309[86] = (char *(*)()) F782_4520;
	R3309[87] = (char *(*)()) F783_4520;
	R3309[88] = (char *(*)()) F784_4520;
	R3309[89] = (char *(*)()) F785_4520;
}

char *(*R3311[90])();
void R3311_init () {
	R3311[0] = (char *(*)()) F696_4432;
	R3311[1] = (char *(*)()) F697_4432;
	R3311[2] = (char *(*)()) F698_4432;
	R3311[3] = (char *(*)()) F699_4432;
	R3311[4] = (char *(*)()) F700_4432;
	R3311[5] = (char *(*)()) F701_4432;
	R3311[6] = (char *(*)()) F702_4432;
	R3311[7] = (char *(*)()) F703_4432;
	R3311[8] = (char *(*)()) F704_4432;
	R3311[9] = (char *(*)()) F705_4432;
	R3311[10] = (char *(*)()) F706_4432;
	R3311[11] = (char *(*)()) F707_4432;
	R3311[12] = (char *(*)()) F708_4432;
	R3311[13] = (char *(*)()) F709_4432;
	R3311[14] = (char *(*)()) F710_4432;
	R3311[15] = (char *(*)()) F696_4432;
	R3311[16] = (char *(*)()) F698_4432;
	R3311[17] = (char *(*)()) F701_4432;
	{long i; for (i = 85; i < 87; i++) R3311[i] = (char *(*)()) F696_4432;}
	{long i; for (i = 87; i < 89; i++) R3311[i] = (char *(*)()) F698_4432;}
	R3311[89] = (char *(*)()) F699_4432;
}

char *(*R3313[90])();
void R3313_init () {
	R3313[0] = (char *(*)()) F696_4449;
	R3313[1] = (char *(*)()) F697_4449;
	R3313[2] = (char *(*)()) F698_4449;
	R3313[3] = (char *(*)()) F699_4449;
	R3313[4] = (char *(*)()) F700_4449;
	R3313[5] = (char *(*)()) F701_4449;
	R3313[6] = (char *(*)()) F702_4449;
	R3313[7] = (char *(*)()) F703_4449;
	R3313[8] = (char *(*)()) F704_4449;
	R3313[9] = (char *(*)()) F705_4449;
	R3313[10] = (char *(*)()) F706_4449;
	R3313[11] = (char *(*)()) F707_4449;
	R3313[12] = (char *(*)()) F708_4449;
	R3313[13] = (char *(*)()) F709_4449;
	R3313[14] = (char *(*)()) F710_4449;
	R3313[15] = (char *(*)()) F696_4449;
	R3313[16] = (char *(*)()) F698_4449;
	R3313[17] = (char *(*)()) F701_4449;
	{long i; for (i = 85; i < 87; i++) R3313[i] = (char *(*)()) F696_4449;}
	{long i; for (i = 87; i < 89; i++) R3313[i] = (char *(*)()) F698_4449;}
	R3313[89] = (char *(*)()) F699_4449;
}

char *(*R3314[90])();
void R3314_init () {
	R3314[0] = (char *(*)()) F696_4450;
	R3314[1] = (char *(*)()) F697_4450;
	R3314[2] = (char *(*)()) F698_4450;
	R3314[3] = (char *(*)()) F699_4450;
	R3314[4] = (char *(*)()) F700_4450;
	R3314[5] = (char *(*)()) F701_4450;
	R3314[6] = (char *(*)()) F702_4450;
	R3314[7] = (char *(*)()) F703_4450;
	R3314[8] = (char *(*)()) F704_4450;
	R3314[9] = (char *(*)()) F705_4450;
	R3314[10] = (char *(*)()) F706_4450;
	R3314[11] = (char *(*)()) F707_4450;
	R3314[12] = (char *(*)()) F708_4450;
	R3314[13] = (char *(*)()) F709_4450;
	R3314[14] = (char *(*)()) F710_4450;
	R3314[15] = (char *(*)()) F696_4450;
	R3314[16] = (char *(*)()) F698_4450;
	R3314[17] = (char *(*)()) F701_4450;
	{long i; for (i = 85; i < 87; i++) R3314[i] = (char *(*)()) F696_4450;}
	{long i; for (i = 87; i < 89; i++) R3314[i] = (char *(*)()) F698_4450;}
	R3314[89] = (char *(*)()) F699_4450;
}

char *(*R3324[47])();
void R3324_init () {
	R3324[0] = (char *(*)()) F729_4491;
	R3324[1] = (char *(*)()) F730_4491;
	R3324[2] = (char *(*)()) F731_4491;
	R3324[3] = (char *(*)()) F732_4491;
	R3324[4] = (char *(*)()) F733_4491;
	R3324[5] = (char *(*)()) F734_4491;
	R3324[6] = (char *(*)()) F735_4491;
	R3324[7] = (char *(*)()) F736_4491;
	R3324[8] = (char *(*)()) F737_4491;
	R3324[9] = (char *(*)()) F738_4491;
	R3324[10] = (char *(*)()) F739_4491;
	R3324[11] = (char *(*)()) F740_4491;
	R3324[12] = (char *(*)()) F741_4491;
	R3324[13] = (char *(*)()) F742_4491;
	R3324[14] = (char *(*)()) F743_4491;
	R3324[15] = (char *(*)()) F744_4497;
	R3324[16] = (char *(*)()) F745_4503;
	R3324[17] = (char *(*)()) F746_4509;
	R3324[18] = (char *(*)()) F747_4509;
	R3324[19] = (char *(*)()) F748_4509;
	R3324[20] = (char *(*)()) F749_4509;
	R3324[21] = (char *(*)()) F750_4509;
	R3324[22] = (char *(*)()) F751_4509;
	R3324[23] = (char *(*)()) F752_4509;
	R3324[24] = (char *(*)()) F753_4509;
	R3324[25] = (char *(*)()) F754_4509;
	R3324[26] = (char *(*)()) F755_4509;
	R3324[27] = (char *(*)()) F756_4509;
	R3324[28] = (char *(*)()) F757_4509;
	R3324[29] = (char *(*)()) F758_4509;
	R3324[30] = (char *(*)()) F759_4509;
	R3324[31] = (char *(*)()) F760_4509;
	R3324[32] = (char *(*)()) F761_4513;
	R3324[33] = (char *(*)()) F762_4513;
	R3324[34] = (char *(*)()) F763_4513;
	R3324[35] = (char *(*)()) F764_4513;
	R3324[36] = (char *(*)()) F765_4513;
	R3324[37] = (char *(*)()) F766_4513;
	R3324[38] = (char *(*)()) F767_4513;
	R3324[39] = (char *(*)()) F768_4513;
	R3324[40] = (char *(*)()) F769_4513;
	R3324[41] = (char *(*)()) F770_4513;
	R3324[42] = (char *(*)()) F771_4513;
	R3324[43] = (char *(*)()) F772_4513;
	R3324[44] = (char *(*)()) F773_4513;
	R3324[45] = (char *(*)()) F774_4513;
	R3324[46] = (char *(*)()) F775_4513;
}

char *(*R3326[15])();
void R3326_init () {
	R3326[0] = (char *(*)()) F729_4486;
	R3326[1] = (char *(*)()) F730_4486;
	R3326[2] = (char *(*)()) F731_4486;
	R3326[3] = (char *(*)()) F732_4486;
	R3326[4] = (char *(*)()) F733_4486;
	R3326[5] = (char *(*)()) F734_4486;
	R3326[6] = (char *(*)()) F735_4486;
	R3326[7] = (char *(*)()) F736_4486;
	R3326[8] = (char *(*)()) F737_4486;
	R3326[9] = (char *(*)()) F738_4486;
	R3326[10] = (char *(*)()) F739_4486;
	R3326[11] = (char *(*)()) F740_4486;
	R3326[12] = (char *(*)()) F741_4486;
	R3326[13] = (char *(*)()) F742_4486;
	R3326[14] = (char *(*)()) F743_4486;
}

char *(*R3334[15])();
void R3334_init () {
	R3334[0] = (char *(*)()) F746_4504;
	R3334[1] = (char *(*)()) F747_4504;
	R3334[2] = (char *(*)()) F748_4504;
	R3334[3] = (char *(*)()) F749_4504;
	R3334[4] = (char *(*)()) F750_4504;
	R3334[5] = (char *(*)()) F751_4504;
	R3334[6] = (char *(*)()) F752_4504;
	R3334[7] = (char *(*)()) F753_4504;
	R3334[8] = (char *(*)()) F754_4504;
	R3334[9] = (char *(*)()) F755_4504;
	R3334[10] = (char *(*)()) F756_4504;
	R3334[11] = (char *(*)()) F757_4504;
	R3334[12] = (char *(*)()) F758_4504;
	R3334[13] = (char *(*)()) F759_4504;
	R3334[14] = (char *(*)()) F760_4504;
}

char *(*R3337[15])();
void R3337_init () {
	R3337[0] = (char *(*)()) F761_4510;
	R3337[1] = (char *(*)()) F762_4510;
	R3337[2] = (char *(*)()) F763_4510;
	R3337[3] = (char *(*)()) F764_4510;
	R3337[4] = (char *(*)()) F765_4510;
	R3337[5] = (char *(*)()) F766_4510;
	R3337[6] = (char *(*)()) F767_4510;
	R3337[7] = (char *(*)()) F768_4510;
	R3337[8] = (char *(*)()) F769_4510;
	R3337[9] = (char *(*)()) F770_4510;
	R3337[10] = (char *(*)()) F771_4510;
	R3337[11] = (char *(*)()) F772_4510;
	R3337[12] = (char *(*)()) F773_4510;
	R3337[13] = (char *(*)()) F774_4510;
	R3337[14] = (char *(*)()) F775_4510;
}

char *(*R3338[5])();
void R3338_init () {
	R3338[0] = (char *(*)()) F781_4516;
	R3338[1] = (char *(*)()) F782_4516_3338_1;
	R3338[2] = (char *(*)()) F783_4516;
	R3338[3] = (char *(*)()) F784_4516_3338_1;
	R3338[4] = (char *(*)()) F785_4516_3338_1;
}
static EIF_REFERENCE F782_4516_3338_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F782_4516(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F784_4516_3338_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F784_4516(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(859, 0x00).id, 859, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F785_4516_3338_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F785_4516(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3630[124])();
void R3630_init () {
	R3630[0] = (char *(*)()) F789_4841;
	R3630[1] = (char *(*)()) F792_5296;
	R3630[123] = (char *(*)()) F792_5296;
}

char *(*R3648[124])();
void R3648_init () {
	{long i; for (i = 0; i < 2; i++) R3648[i] = (char *(*)()) F790_5048;}
	R3648[123] = (char *(*)()) F914_7186;
}

char *(*R3657[124])();
void R3657_init () {
	R3657[0] = (char *(*)()) F791_5241;
	R3657[1] = (char *(*)()) F792_5297;
	R3657[123] = (char *(*)()) F792_5297;
}

char *(*R3659[124])();
void R3659_init () {
	{long i; for (i = 0; i < 2; i++) R3659[i] = (char *(*)()) F790_5127;}
	R3659[123] = (char *(*)()) F914_7217;
}

char *(*R3661[124])();
void R3661_init () {
	{long i; for (i = 0; i < 2; i++) R3661[i] = (char *(*)()) F790_5122;}
	R3661[123] = (char *(*)()) F914_7209;
}

char *(*R3663[124])();
void R3663_init () {
	{long i; for (i = 0; i < 2; i++) R3663[i] = (char *(*)()) F790_5125;}
	R3663[123] = (char *(*)()) F914_7207;
}

char *(*R3665[124])();
void R3665_init () {
	R3665[0] = (char *(*)()) F791_5255;
	R3665[1] = (char *(*)()) F792_5311;
	R3665[123] = (char *(*)()) F914_7211;
}

char *(*R3681[124])();
void R3681_init () {
	R3681[0] = (char *(*)()) F791_5258;
	R3681[1] = (char *(*)()) F792_5314;
	R3681[123] = (char *(*)()) F914_7213;
}

char *(*R3685[124])();
void R3685_init () {
	R3685[0] = (char *(*)()) F791_5273;
	R3685[1] = (char *(*)()) F792_5330;
	R3685[123] = (char *(*)()) F914_7191;
}

char *(*R3688[124])();
void R3688_init () {
	R3688[0] = (char *(*)()) F791_5276;
	R3688[1] = (char *(*)()) F792_5333;
	R3688[123] = (char *(*)()) F914_7193;
}

char *(*R3691[124])();
void R3691_init () {
	{long i; for (i = 0; i < 2; i++) R3691[i] = (char *(*)()) F790_5155;}
	R3691[123] = (char *(*)()) F914_7204;
}

char *(*R3704[124])();
void R3704_init () {
	{long i; for (i = 0; i < 2; i++) R3704[i] = (char *(*)()) F790_5162;}
	R3704[123] = (char *(*)()) F914_7198;
}

char *(*R3707[124])();
void R3707_init () {
	{long i; for (i = 0; i < 2; i++) R3707[i] = (char *(*)()) F790_5159;}
	R3707[123] = (char *(*)()) F914_7195;
}

char *(*R3734[124])();
void R3734_init () {
	R3734[0] = (char *(*)()) F790_5013;
	R3734[1] = (char *(*)()) F792_5294;
	R3734[123] = (char *(*)()) F792_5294;
}

char *(*R3759[124])();
void R3759_init () {
	{long i; for (i = 0; i < 2; i++) R3759[i] = (char *(*)()) F790_5047;}
	R3759[123] = (char *(*)()) F914_7185;
}

char *(*R3804[124])();
void R3804_init () {
	{long i; for (i = 0; i < 2; i++) R3804[i] = (char *(*)()) F790_5108;}
	R3804[123] = (char *(*)()) F914_7206;
}

char *(*R3824[124])();
void R3824_init () {
	{long i; for (i = 0; i < 2; i++) R3824[i] = (char *(*)()) F790_5167;}
	R3824[123] = (char *(*)()) F914_7201;
}

char *(*R3828[124])();
void R3828_init () {
	R3828[0] = (char *(*)()) F791_5288;
	R3828[1] = (char *(*)()) F790_5171;
	R3828[123] = (char *(*)()) F790_5171;
}


#ifdef __cplusplus
}
#endif
