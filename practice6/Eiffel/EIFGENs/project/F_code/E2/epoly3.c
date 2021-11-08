#include "epoly3.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2357[368])();
void R2357_init () {
	R2357[0] = (char *(*)()) F425_2851;
	R2357[1] = (char *(*)()) F426_2851;
	R2357[2] = (char *(*)()) F429_2851;
	R2357[75] = (char *(*)()) F331_2640;
	R2357[85] = (char *(*)()) F425_2851;
	R2357[86] = (char *(*)()) F426_2851;
	R2357[87] = (char *(*)()) F427_2851;
	R2357[88] = (char *(*)()) F428_2851;
	R2357[89] = (char *(*)()) F429_2851;
	R2357[90] = (char *(*)()) F430_2851;
	R2357[91] = (char *(*)()) F431_2851;
	R2357[92] = (char *(*)()) F432_2851;
	R2357[93] = (char *(*)()) F433_2851;
	R2357[94] = (char *(*)()) F434_2851;
	R2357[95] = (char *(*)()) F435_2851;
	R2357[96] = (char *(*)()) F436_2851;
	R2357[97] = (char *(*)()) F437_2851;
	R2357[98] = (char *(*)()) F438_2851;
	R2357[99] = (char *(*)()) F439_2851;
	R2357[115] = (char *(*)()) F440_2863;
	R2357[117] = (char *(*)()) F440_2863;
	{long i; for (i = 244; i < 246; i++) R2357[i] = (char *(*)()) F439_2851;}
	R2357[367] = (char *(*)()) F439_2851;
}

char *(*R2358[368])();
void R2358_init () {
	R2358[0] = (char *(*)()) F269_2627;
	R2358[1] = (char *(*)()) F271_2627;
	R2358[2] = (char *(*)()) F274_2627;
	R2358[75] = (char *(*)()) F269_2627;
	R2358[85] = (char *(*)()) F269_2627;
	R2358[86] = (char *(*)()) F271_2627;
	R2358[87] = (char *(*)()) F272_2627;
	R2358[88] = (char *(*)()) F273_2627;
	R2358[89] = (char *(*)()) F274_2627;
	R2358[90] = (char *(*)()) F270_2627;
	R2358[91] = (char *(*)()) F275_2627;
	R2358[92] = (char *(*)()) F276_2627;
	R2358[93] = (char *(*)()) F277_2627;
	R2358[94] = (char *(*)()) F279_2627;
	R2358[95] = (char *(*)()) F280_2627;
	R2358[96] = (char *(*)()) F281_2627;
	R2358[97] = (char *(*)()) F282_2627;
	R2358[98] = (char *(*)()) F283_2627;
	R2358[99] = (char *(*)()) F278_2627;
	R2358[115] = (char *(*)()) F440_2864;
	R2358[117] = (char *(*)()) F440_2864;
	{long i; for (i = 244; i < 246; i++) R2358[i] = (char *(*)()) F790_5078;}
	R2358[367] = (char *(*)()) F790_5078;
}

char *(*R2359[368])();
void R2359_init () {
	R2359[0] = (char *(*)()) F547_3647;
	R2359[1] = (char *(*)()) F548_3647_2359_4;
	R2359[2] = (char *(*)()) F549_3647_2359_4;
	R2359[75] = (char *(*)()) F622_4008;
	R2359[85] = (char *(*)()) F632_4218;
	R2359[86] = (char *(*)()) F633_4218_2359_4;
	R2359[87] = (char *(*)()) F634_4218_2359_4;
	R2359[88] = (char *(*)()) F635_4218_2359_4;
	R2359[89] = (char *(*)()) F636_4218_2359_4;
	R2359[90] = (char *(*)()) F637_4218_2359_4;
	R2359[91] = (char *(*)()) F638_4218_2359_4;
	R2359[92] = (char *(*)()) F639_4218_2359_4;
	R2359[93] = (char *(*)()) F640_4218_2359_4;
	R2359[94] = (char *(*)()) F641_4218_2359_4;
	R2359[95] = (char *(*)()) F642_4218_2359_4;
	R2359[96] = (char *(*)()) F643_4218_2359_4;
	R2359[97] = (char *(*)()) F644_4218_2359_4;
	R2359[98] = (char *(*)()) F645_4218_2359_4;
	R2359[99] = (char *(*)()) F646_4218_2359_4;
	R2359[115] = (char *(*)()) F440_2873_2359_4;
	R2359[117] = (char *(*)()) F440_2873_2359_4;
	{long i; for (i = 244; i < 246; i++) R2359[i] = (char *(*)()) F790_5229_2359_4;}
	R2359[367] = (char *(*)()) F790_5229_2359_4;
}
static void F548_3647_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F548_3647(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F549_3647_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F549_3647(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4218(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4218(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4218(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4218(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4218(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4218(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4218(Current, *(EIF_POINTER *)arg1);
}
static void F640_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4218(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4218(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4218(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4218(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4218(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4218(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4218_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4218(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F440_2873_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F440_2873(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F790_5229_2359_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F790_5229(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2360[368])();
void R2360_init () {
	R2360[0] = (char *(*)()) F547_3650;
	R2360[1] = (char *(*)()) F548_3650;
	R2360[2] = (char *(*)()) F549_3650;
	R2360[75] = (char *(*)()) F622_4010;
	R2360[85] = (char *(*)()) F632_4228;
	R2360[86] = (char *(*)()) F633_4228;
	R2360[87] = (char *(*)()) F634_4228;
	R2360[88] = (char *(*)()) F635_4228;
	R2360[89] = (char *(*)()) F636_4228;
	R2360[90] = (char *(*)()) F637_4228;
	R2360[91] = (char *(*)()) F638_4228;
	R2360[92] = (char *(*)()) F639_4228;
	R2360[93] = (char *(*)()) F640_4228;
	R2360[94] = (char *(*)()) F641_4228;
	R2360[95] = (char *(*)()) F642_4228;
	R2360[96] = (char *(*)()) F643_4228;
	R2360[97] = (char *(*)()) F644_4228;
	R2360[98] = (char *(*)()) F645_4228;
	R2360[99] = (char *(*)()) F646_4228;
	R2360[115] = (char *(*)()) F440_2872;
	R2360[117] = (char *(*)()) F440_2872;
	{long i; for (i = 244; i < 246; i++) R2360[i] = (char *(*)()) F790_5230;}
	R2360[367] = (char *(*)()) F790_5230;
}

char *(*R2361[100])();
void R2361_init () {
	R2361[0] = (char *(*)()) F547_3623;
	R2361[1] = (char *(*)()) F548_3623;
	R2361[2] = (char *(*)()) F549_3623;
	R2361[85] = (char *(*)()) F632_4185;
	R2361[86] = (char *(*)()) F633_4185;
	R2361[87] = (char *(*)()) F634_4185;
	R2361[88] = (char *(*)()) F635_4185;
	R2361[89] = (char *(*)()) F636_4185;
	R2361[90] = (char *(*)()) F637_4185;
	R2361[91] = (char *(*)()) F638_4185;
	R2361[92] = (char *(*)()) F639_4185;
	R2361[93] = (char *(*)()) F640_4185;
	R2361[94] = (char *(*)()) F641_4185;
	R2361[95] = (char *(*)()) F642_4185;
	R2361[96] = (char *(*)()) F643_4185;
	R2361[97] = (char *(*)()) F644_4185;
	R2361[98] = (char *(*)()) F645_4185;
	R2361[99] = (char *(*)()) F646_4185;
}

static EIF_TYPE_INDEX Y2361_pgtype0[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype1[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype2[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype3[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype4[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype5[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype6[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype7[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype8[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype9[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype10[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype11[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype12[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype13[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype14[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype15[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype16[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype17[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype18[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype19[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype20[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype21[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype22[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype23[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype24[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype25[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype26[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype27[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype28[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype29[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype30[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype31[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype32[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype33[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype34[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype35[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype36[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype37[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype38[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype39[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype40[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype41[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype42[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype43[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype44[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype45[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype46[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype47[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype48[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype49[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype50[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype51[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype52[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype53[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype54[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype55[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype56[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype57[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype58[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype59[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype60[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype61[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype62[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype63[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype64[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype65[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype66[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype67[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype68[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype69[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype70[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype71[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype72[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype73[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype74[] = {0xFF01,142,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype75[] = {0xFF01,145,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype76[] = {0xFF01,146,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype77[] = {0xFF01,147,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype78[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype79[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype80[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype81[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype82[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype83[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype84[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype85[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype86[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype87[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype88[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype89[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype90[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype91[] = {0xFF01,144,0xFFFF};
static EIF_TYPE_INDEX Y2361_pgtype92[] = {0xFF01,144,0xFFFF};
EIF_TYPE_INDEX *Y2361_gen_type [363];
EIF_TYPE_INDEX Y2361 [363];
void Y2361_init (void)
{
	egc_routines_types [2361] = Y2361;
	egc_routines_gen_types [2361] = Y2361_gen_type;
	egc_routines_offset [2361] = 283;
	Y2361_gen_type [0] = Y2361_pgtype0;
	Y2361_gen_type [1] = Y2361_pgtype1;
	Y2361_gen_type [2] = Y2361_pgtype2;
	Y2361_gen_type [3] = Y2361_pgtype3;
	Y2361_gen_type [4] = Y2361_pgtype4;
	Y2361_gen_type [5] = Y2361_pgtype5;
	Y2361_gen_type [6] = Y2361_pgtype6;
	Y2361_gen_type [7] = Y2361_pgtype7;
	Y2361_gen_type [8] = Y2361_pgtype8;
	Y2361_gen_type [9] = Y2361_pgtype9;
	Y2361_gen_type [10] = Y2361_pgtype10;
	Y2361_gen_type [11] = Y2361_pgtype11;
	Y2361_gen_type [12] = Y2361_pgtype12;
	Y2361_gen_type [13] = Y2361_pgtype13;
	Y2361_gen_type [14] = Y2361_pgtype14;
	Y2361_gen_type [203] = Y2361_pgtype15;
	Y2361_gen_type [204] = Y2361_pgtype16;
	Y2361_gen_type [205] = Y2361_pgtype17;
	Y2361_gen_type [206] = Y2361_pgtype18;
	Y2361_gen_type [207] = Y2361_pgtype19;
	Y2361_gen_type [208] = Y2361_pgtype20;
	Y2361_gen_type [209] = Y2361_pgtype21;
	Y2361_gen_type [210] = Y2361_pgtype22;
	Y2361_gen_type [211] = Y2361_pgtype23;
	Y2361_gen_type [212] = Y2361_pgtype24;
	Y2361_gen_type [213] = Y2361_pgtype25;
	Y2361_gen_type [214] = Y2361_pgtype26;
	Y2361_gen_type [215] = Y2361_pgtype27;
	Y2361_gen_type [216] = Y2361_pgtype28;
	Y2361_gen_type [217] = Y2361_pgtype29;
	Y2361_gen_type [218] = Y2361_pgtype30;
	Y2361_gen_type [219] = Y2361_pgtype31;
	Y2361_gen_type [220] = Y2361_pgtype32;
	Y2361_gen_type [221] = Y2361_pgtype33;
	Y2361_gen_type [222] = Y2361_pgtype34;
	Y2361_gen_type [223] = Y2361_pgtype35;
	Y2361_gen_type [224] = Y2361_pgtype36;
	Y2361_gen_type [225] = Y2361_pgtype37;
	Y2361_gen_type [226] = Y2361_pgtype38;
	Y2361_gen_type [227] = Y2361_pgtype39;
	Y2361_gen_type [228] = Y2361_pgtype40;
	Y2361_gen_type [229] = Y2361_pgtype41;
	Y2361_gen_type [230] = Y2361_pgtype42;
	Y2361_gen_type [231] = Y2361_pgtype43;
	Y2361_gen_type [232] = Y2361_pgtype44;
	Y2361_gen_type [233] = Y2361_pgtype45;
	Y2361_gen_type [234] = Y2361_pgtype46;
	Y2361_gen_type [235] = Y2361_pgtype47;
	Y2361_gen_type [236] = Y2361_pgtype48;
	Y2361_gen_type [237] = Y2361_pgtype49;
	Y2361_gen_type [238] = Y2361_pgtype50;
	Y2361_gen_type [239] = Y2361_pgtype51;
	Y2361_gen_type [240] = Y2361_pgtype52;
	Y2361_gen_type [241] = Y2361_pgtype53;
	Y2361_gen_type [242] = Y2361_pgtype54;
	Y2361_gen_type [243] = Y2361_pgtype55;
	Y2361_gen_type [244] = Y2361_pgtype56;
	Y2361_gen_type [245] = Y2361_pgtype57;
	Y2361_gen_type [246] = Y2361_pgtype58;
	Y2361_gen_type [247] = Y2361_pgtype59;
	Y2361_gen_type [248] = Y2361_pgtype60;
	Y2361_gen_type [249] = Y2361_pgtype61;
	Y2361_gen_type [250] = Y2361_pgtype62;
	Y2361_gen_type [251] = Y2361_pgtype63;
	Y2361_gen_type [252] = Y2361_pgtype64;
	Y2361_gen_type [253] = Y2361_pgtype65;
	Y2361_gen_type [254] = Y2361_pgtype66;
	Y2361_gen_type [255] = Y2361_pgtype67;
	Y2361_gen_type [256] = Y2361_pgtype68;
	Y2361_gen_type [257] = Y2361_pgtype69;
	Y2361_gen_type [258] = Y2361_pgtype70;
	Y2361_gen_type [259] = Y2361_pgtype71;
	Y2361_gen_type [260] = Y2361_pgtype72;
	Y2361_gen_type [261] = Y2361_pgtype73;
	Y2361_gen_type [262] = Y2361_pgtype74;
	Y2361_gen_type [263] = Y2361_pgtype75;
	Y2361_gen_type [264] = Y2361_pgtype76;
	Y2361_gen_type [265] = Y2361_pgtype77;
	Y2361_gen_type [348] = Y2361_pgtype78;
	Y2361_gen_type [349] = Y2361_pgtype79;
	Y2361_gen_type [350] = Y2361_pgtype80;
	Y2361_gen_type [351] = Y2361_pgtype81;
	Y2361_gen_type [352] = Y2361_pgtype82;
	Y2361_gen_type [353] = Y2361_pgtype83;
	Y2361_gen_type [354] = Y2361_pgtype84;
	Y2361_gen_type [355] = Y2361_pgtype85;
	Y2361_gen_type [356] = Y2361_pgtype86;
	Y2361_gen_type [357] = Y2361_pgtype87;
	Y2361_gen_type [358] = Y2361_pgtype88;
	Y2361_gen_type [359] = Y2361_pgtype89;
	Y2361_gen_type [360] = Y2361_pgtype90;
	Y2361_gen_type [361] = Y2361_pgtype91;
	Y2361_gen_type [362] = Y2361_pgtype92;
	{long i; for (i = 0; i < 15; i++) Y2361[i] = 142;};
	{long i; for (i = 203; i < 263; i++) Y2361[i] = 142;};
	Y2361[263] = 145;
	Y2361[264] = 146;
	Y2361[265] = 147;
	{long i; for (i = 348; i < 363; i++) Y2361[i] = 144;};
}

char *(*R2362[100])();
void R2362_init () {
	R2362[0] = (char *(*)()) F547_3633;
	R2362[1] = (char *(*)()) F548_3633;
	R2362[2] = (char *(*)()) F549_3633;
	R2362[85] = (char *(*)()) F632_4200;
	R2362[86] = (char *(*)()) F633_4200;
	R2362[87] = (char *(*)()) F634_4200;
	R2362[88] = (char *(*)()) F635_4200;
	R2362[89] = (char *(*)()) F636_4200;
	R2362[90] = (char *(*)()) F637_4200;
	R2362[91] = (char *(*)()) F638_4200;
	R2362[92] = (char *(*)()) F639_4200;
	R2362[93] = (char *(*)()) F640_4200;
	R2362[94] = (char *(*)()) F641_4200;
	R2362[95] = (char *(*)()) F642_4200;
	R2362[96] = (char *(*)()) F643_4200;
	R2362[97] = (char *(*)()) F644_4200;
	R2362[98] = (char *(*)()) F645_4200;
	R2362[99] = (char *(*)()) F646_4200;
}

char *(*R2363[100])();
void R2363_init () {
	R2363[0] = (char *(*)()) F547_3642;
	R2363[1] = (char *(*)()) F548_3642;
	R2363[2] = (char *(*)()) F549_3642;
	R2363[85] = (char *(*)()) F632_4210;
	R2363[86] = (char *(*)()) F633_4210;
	R2363[87] = (char *(*)()) F634_4210;
	R2363[88] = (char *(*)()) F635_4210;
	R2363[89] = (char *(*)()) F636_4210;
	R2363[90] = (char *(*)()) F637_4210;
	R2363[91] = (char *(*)()) F638_4210;
	R2363[92] = (char *(*)()) F639_4210;
	R2363[93] = (char *(*)()) F640_4210;
	R2363[94] = (char *(*)()) F641_4210;
	R2363[95] = (char *(*)()) F642_4210;
	R2363[96] = (char *(*)()) F643_4210;
	R2363[97] = (char *(*)()) F644_4210;
	R2363[98] = (char *(*)()) F645_4210;
	R2363[99] = (char *(*)()) F646_4210;
}

char *(*R2364[444])();
void R2364_init () {
	R2364[0] = (char *(*)()) F351_2652;
	R2364[1] = (char *(*)()) F472_3306;
	R2364[2] = (char *(*)()) F473_3306;
	R2364[3] = (char *(*)()) F474_3306;
	R2364[4] = (char *(*)()) F475_3306;
	R2364[5] = (char *(*)()) F476_3306;
	R2364[6] = (char *(*)()) F477_3306;
	R2364[7] = (char *(*)()) F478_3306;
	R2364[8] = (char *(*)()) F479_3306;
	R2364[9] = (char *(*)()) F480_3306;
	R2364[10] = (char *(*)()) F481_3306;
	R2364[11] = (char *(*)()) F482_3306;
	R2364[12] = (char *(*)()) F483_3306;
	R2364[13] = (char *(*)()) F484_3306;
	R2364[14] = (char *(*)()) F485_3306;
	R2364[15] = (char *(*)()) F486_3306;
	R2364[76] = (char *(*)()) F547_3634;
	R2364[77] = (char *(*)()) F548_3634;
	R2364[78] = (char *(*)()) F549_3634;
	R2364[151] = (char *(*)()) F350_2652;
	R2364[153] = (char *(*)()) F624_4051;
	R2364[154] = (char *(*)()) F625_4051;
	R2364[155] = (char *(*)()) F626_4051;
	R2364[156] = (char *(*)()) F627_4051;
	R2364[157] = (char *(*)()) F628_4051;
	R2364[158] = (char *(*)()) F624_4051;
	R2364[159] = (char *(*)()) F626_4051;
	R2364[160] = (char *(*)()) F624_4051;
	R2364[161] = (char *(*)()) F350_2652;
	R2364[162] = (char *(*)()) F351_2652;
	R2364[163] = (char *(*)()) F352_2652;
	R2364[164] = (char *(*)()) F353_2652;
	R2364[165] = (char *(*)()) F354_2652;
	R2364[166] = (char *(*)()) F355_2652;
	R2364[167] = (char *(*)()) F356_2652;
	R2364[168] = (char *(*)()) F357_2652;
	R2364[169] = (char *(*)()) F358_2652;
	R2364[170] = (char *(*)()) F359_2652;
	R2364[171] = (char *(*)()) F360_2652;
	R2364[172] = (char *(*)()) F361_2652;
	R2364[173] = (char *(*)()) F362_2652;
	R2364[174] = (char *(*)()) F363_2652;
	R2364[175] = (char *(*)()) F364_2652;
	R2364[191] = (char *(*)()) F314_2635;
	R2364[193] = (char *(*)()) F314_2635;
	{long i; for (i = 320; i < 322; i++) R2364[i] = (char *(*)()) F790_5080;}
	R2364[437] = (char *(*)()) F364_2652;
	R2364[439] = (char *(*)()) F355_2652;
	R2364[443] = (char *(*)()) F790_5080;
}

char *(*R2365[3])();
void R2365_init () {
	R2365[0] = (char *(*)()) F662_4347;
	R2365[2] = (char *(*)()) F664_4380;
}

char *(*R2366[444])();
void R2366_init () {
	R2366[0] = (char *(*)()) F471_3251;
	R2366[1] = (char *(*)()) F472_3300;
	R2366[2] = (char *(*)()) F473_3300;
	R2366[3] = (char *(*)()) F474_3300;
	R2366[4] = (char *(*)()) F475_3300;
	R2366[5] = (char *(*)()) F476_3300;
	R2366[6] = (char *(*)()) F477_3300;
	R2366[7] = (char *(*)()) F478_3300;
	R2366[8] = (char *(*)()) F479_3300;
	R2366[9] = (char *(*)()) F480_3300;
	R2366[10] = (char *(*)()) F481_3300;
	R2366[11] = (char *(*)()) F482_3300;
	R2366[12] = (char *(*)()) F483_3300;
	R2366[13] = (char *(*)()) F484_3300;
	R2366[14] = (char *(*)()) F485_3300;
	R2366[15] = (char *(*)()) F486_3300;
	R2366[76] = (char *(*)()) F547_3626;
	R2366[77] = (char *(*)()) F548_3626;
	R2366[78] = (char *(*)()) F549_3626;
	R2366[151] = (char *(*)()) F622_3997;
	R2366[153] = (char *(*)()) F624_4043;
	R2366[154] = (char *(*)()) F625_4043;
	R2366[155] = (char *(*)()) F626_4043;
	R2366[156] = (char *(*)()) F627_4043;
	R2366[157] = (char *(*)()) F628_4043;
	R2366[158] = (char *(*)()) F624_4043;
	R2366[159] = (char *(*)()) F626_4043;
	R2366[160] = (char *(*)()) F624_4043;
	R2366[161] = (char *(*)()) F632_4195;
	R2366[162] = (char *(*)()) F633_4195;
	R2366[163] = (char *(*)()) F634_4195;
	R2366[164] = (char *(*)()) F635_4195;
	R2366[165] = (char *(*)()) F636_4195;
	R2366[166] = (char *(*)()) F637_4195;
	R2366[167] = (char *(*)()) F638_4195;
	R2366[168] = (char *(*)()) F639_4195;
	R2366[169] = (char *(*)()) F640_4195;
	R2366[170] = (char *(*)()) F641_4195;
	R2366[171] = (char *(*)()) F642_4195;
	R2366[172] = (char *(*)()) F643_4195;
	R2366[173] = (char *(*)()) F644_4195;
	R2366[174] = (char *(*)()) F645_4195;
	R2366[175] = (char *(*)()) F646_4195;
	{long i; for (i = 320; i < 322; i++) R2366[i] = (char *(*)()) F790_5043;}
	R2366[437] = (char *(*)()) F906_6770;
	R2366[439] = (char *(*)()) F909_7013;
	R2366[443] = (char *(*)()) F914_7187;
}

char *(*R2369[440])();
void R2369_init () {
	R2369[0] = (char *(*)()) F471_3250;
	R2369[1] = (char *(*)()) F472_3301;
	R2369[2] = (char *(*)()) F473_3301;
	R2369[3] = (char *(*)()) F474_3301;
	R2369[4] = (char *(*)()) F475_3301;
	R2369[5] = (char *(*)()) F476_3301;
	R2369[6] = (char *(*)()) F477_3301;
	R2369[7] = (char *(*)()) F478_3301;
	R2369[8] = (char *(*)()) F479_3301;
	R2369[9] = (char *(*)()) F480_3301;
	R2369[10] = (char *(*)()) F481_3301;
	R2369[11] = (char *(*)()) F482_3301;
	R2369[12] = (char *(*)()) F483_3301;
	R2369[13] = (char *(*)()) F484_3301;
	R2369[14] = (char *(*)()) F485_3301;
	R2369[15] = (char *(*)()) F486_3301;
	R2369[151] = (char *(*)()) F622_3998;
	R2369[161] = (char *(*)()) F632_4196;
	R2369[162] = (char *(*)()) F633_4196;
	R2369[163] = (char *(*)()) F634_4196;
	R2369[164] = (char *(*)()) F635_4196;
	R2369[165] = (char *(*)()) F636_4196;
	R2369[166] = (char *(*)()) F637_4196;
	R2369[167] = (char *(*)()) F638_4196;
	R2369[168] = (char *(*)()) F639_4196;
	R2369[169] = (char *(*)()) F640_4196;
	R2369[170] = (char *(*)()) F641_4196;
	R2369[171] = (char *(*)()) F642_4196;
	R2369[172] = (char *(*)()) F643_4196;
	R2369[173] = (char *(*)()) F644_4196;
	R2369[174] = (char *(*)()) F645_4196;
	R2369[175] = (char *(*)()) F646_4196;
	R2369[437] = (char *(*)()) F906_6769;
	R2369[439] = (char *(*)()) F909_7012;
}

char *(*R2370[440])();
void R2370_init () {
	R2370[0] = (char *(*)()) F366_2658;
	R2370[1] = (char *(*)()) F472_3311;
	R2370[2] = (char *(*)()) F473_3311;
	R2370[3] = (char *(*)()) F474_3311;
	R2370[4] = (char *(*)()) F475_3311;
	R2370[5] = (char *(*)()) F476_3311;
	R2370[6] = (char *(*)()) F477_3311;
	R2370[7] = (char *(*)()) F478_3311;
	R2370[8] = (char *(*)()) F479_3311;
	R2370[9] = (char *(*)()) F480_3311;
	R2370[10] = (char *(*)()) F481_3311;
	R2370[11] = (char *(*)()) F482_3311;
	R2370[12] = (char *(*)()) F483_3311;
	R2370[13] = (char *(*)()) F484_3311;
	R2370[14] = (char *(*)()) F485_3311;
	R2370[15] = (char *(*)()) F486_3311;
	R2370[151] = (char *(*)()) F365_2658;
	R2370[161] = (char *(*)()) F365_2658;
	R2370[162] = (char *(*)()) F366_2658;
	R2370[163] = (char *(*)()) F367_2658;
	R2370[164] = (char *(*)()) F368_2658;
	R2370[165] = (char *(*)()) F369_2658;
	R2370[166] = (char *(*)()) F370_2658;
	R2370[167] = (char *(*)()) F371_2658;
	R2370[168] = (char *(*)()) F372_2658;
	R2370[169] = (char *(*)()) F373_2658;
	R2370[170] = (char *(*)()) F374_2658;
	R2370[171] = (char *(*)()) F375_2658;
	R2370[172] = (char *(*)()) F376_2658;
	R2370[173] = (char *(*)()) F377_2658;
	R2370[174] = (char *(*)()) F378_2658;
	R2370[175] = (char *(*)()) F379_2658;
	R2370[437] = (char *(*)()) F379_2658;
	R2370[439] = (char *(*)()) F370_2658;
}

char *(*R2373[440])();
void R2373_init () {
	R2373[0] = (char *(*)()) F366_2657;
	R2373[1] = (char *(*)()) F365_2657;
	R2373[2] = (char *(*)()) F366_2657;
	R2373[3] = (char *(*)()) F367_2657;
	R2373[4] = (char *(*)()) F368_2657;
	R2373[5] = (char *(*)()) F369_2657;
	R2373[6] = (char *(*)()) F370_2657;
	R2373[7] = (char *(*)()) F371_2657;
	R2373[8] = (char *(*)()) F372_2657;
	R2373[9] = (char *(*)()) F373_2657;
	R2373[10] = (char *(*)()) F374_2657;
	R2373[11] = (char *(*)()) F375_2657;
	R2373[12] = (char *(*)()) F376_2657;
	R2373[13] = (char *(*)()) F377_2657;
	R2373[14] = (char *(*)()) F378_2657;
	R2373[15] = (char *(*)()) F379_2657;
	R2373[151] = (char *(*)()) F365_2657;
	R2373[161] = (char *(*)()) F365_2657;
	R2373[162] = (char *(*)()) F366_2657;
	R2373[163] = (char *(*)()) F367_2657;
	R2373[164] = (char *(*)()) F368_2657;
	R2373[165] = (char *(*)()) F369_2657;
	R2373[166] = (char *(*)()) F370_2657;
	R2373[167] = (char *(*)()) F371_2657;
	R2373[168] = (char *(*)()) F372_2657;
	R2373[169] = (char *(*)()) F373_2657;
	R2373[170] = (char *(*)()) F374_2657;
	R2373[171] = (char *(*)()) F375_2657;
	R2373[172] = (char *(*)()) F376_2657;
	R2373[173] = (char *(*)()) F377_2657;
	R2373[174] = (char *(*)()) F378_2657;
	R2373[175] = (char *(*)()) F379_2657;
	R2373[437] = (char *(*)()) F379_2657;
	R2373[439] = (char *(*)()) F370_2657;
}

char *(*R2375[440])();
void R2375_init () {
	R2375[0] = (char *(*)()) F471_3261;
	R2375[1] = (char *(*)()) F472_3331;
	R2375[2] = (char *(*)()) F473_3331;
	R2375[3] = (char *(*)()) F474_3331;
	R2375[4] = (char *(*)()) F475_3331;
	R2375[5] = (char *(*)()) F476_3331;
	R2375[6] = (char *(*)()) F477_3331;
	R2375[7] = (char *(*)()) F478_3331;
	R2375[8] = (char *(*)()) F479_3331;
	R2375[9] = (char *(*)()) F480_3331;
	R2375[10] = (char *(*)()) F481_3331;
	R2375[11] = (char *(*)()) F482_3331;
	R2375[12] = (char *(*)()) F483_3331;
	R2375[13] = (char *(*)()) F484_3331;
	R2375[14] = (char *(*)()) F485_3331;
	R2375[15] = (char *(*)()) F486_3331;
	R2375[151] = (char *(*)()) F622_4020;
	R2375[161] = (char *(*)()) F632_4222;
	R2375[162] = (char *(*)()) F633_4222;
	R2375[163] = (char *(*)()) F634_4222;
	R2375[164] = (char *(*)()) F635_4222;
	R2375[165] = (char *(*)()) F636_4222;
	R2375[166] = (char *(*)()) F637_4222;
	R2375[167] = (char *(*)()) F638_4222;
	R2375[168] = (char *(*)()) F639_4222;
	R2375[169] = (char *(*)()) F640_4222;
	R2375[170] = (char *(*)()) F641_4222;
	R2375[171] = (char *(*)()) F642_4222;
	R2375[172] = (char *(*)()) F643_4222;
	R2375[173] = (char *(*)()) F644_4222;
	R2375[174] = (char *(*)()) F645_4222;
	R2375[175] = (char *(*)()) F646_4222;
	R2375[437] = (char *(*)()) F908_6908;
	R2375[439] = (char *(*)()) F910_7117;
}

char *(*R2387[368])();
void R2387_init () {
	R2387[0] = (char *(*)()) F547_3619;
	R2387[1] = (char *(*)()) F548_3619_2387_1;
	R2387[2] = (char *(*)()) F549_3619_2387_1;
	R2387[85] = (char *(*)()) F632_4179;
	R2387[86] = (char *(*)()) F633_4179_2387_1;
	R2387[87] = (char *(*)()) F634_4179_2387_1;
	R2387[88] = (char *(*)()) F635_4179_2387_1;
	R2387[89] = (char *(*)()) F636_4179_2387_1;
	R2387[90] = (char *(*)()) F637_4179_2387_1;
	R2387[91] = (char *(*)()) F638_4179_2387_1;
	R2387[92] = (char *(*)()) F639_4179_2387_1;
	R2387[93] = (char *(*)()) F640_4179_2387_1;
	R2387[94] = (char *(*)()) F641_4179_2387_1;
	R2387[95] = (char *(*)()) F642_4179_2387_1;
	R2387[96] = (char *(*)()) F643_4179_2387_1;
	R2387[97] = (char *(*)()) F644_4179_2387_1;
	R2387[98] = (char *(*)()) F645_4179_2387_1;
	R2387[99] = (char *(*)()) F646_4179_2387_1;
	R2387[115] = (char *(*)()) F440_2858_2387_1;
	R2387[117] = (char *(*)()) F440_2858_2387_1;
	{long i; for (i = 244; i < 246; i++) R2387[i] = (char *(*)()) F790_5025_2387_1;}
	R2387[367] = (char *(*)()) F790_5025_2387_1;
}
static EIF_REFERENCE F548_3619_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F548_3619(Current);
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
static EIF_REFERENCE F549_3619_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F549_3619(Current);
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
static EIF_REFERENCE F633_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F633_4179(Current);
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
static EIF_REFERENCE F634_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F634_4179(Current);
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
static EIF_REFERENCE F635_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F635_4179(Current);
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
static EIF_REFERENCE F636_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F636_4179(Current);
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
static EIF_REFERENCE F637_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F637_4179(Current);
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
static EIF_REFERENCE F638_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F638_4179(Current);
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
static EIF_REFERENCE F639_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F639_4179(Current);
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
static EIF_REFERENCE F640_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F640_4179(Current);
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
static EIF_REFERENCE F641_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F641_4179(Current);
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
static EIF_REFERENCE F642_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F642_4179(Current);
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
static EIF_REFERENCE F643_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F643_4179(Current);
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
static EIF_REFERENCE F644_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F644_4179(Current);
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
static EIF_REFERENCE F645_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F645_4179(Current);
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
static EIF_REFERENCE F646_4179_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F646_4179(Current);
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
static EIF_REFERENCE F440_2858_2387_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F790_5025_2387_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F790_5025(Current);
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

char *(*R2388[368])();
void R2388_init () {
	R2388[0] = (char *(*)()) F547_3630;
	R2388[1] = (char *(*)()) F548_3630;
	R2388[2] = (char *(*)()) F549_3630;
	R2388[85] = (char *(*)()) F487_3372;
	R2388[86] = (char *(*)()) F488_3372;
	R2388[87] = (char *(*)()) F489_3372;
	R2388[88] = (char *(*)()) F490_3372;
	R2388[89] = (char *(*)()) F491_3372;
	R2388[90] = (char *(*)()) F492_3372;
	R2388[91] = (char *(*)()) F493_3372;
	R2388[92] = (char *(*)()) F494_3372;
	R2388[93] = (char *(*)()) F495_3372;
	R2388[94] = (char *(*)()) F496_3372;
	R2388[95] = (char *(*)()) F497_3372;
	R2388[96] = (char *(*)()) F498_3372;
	R2388[97] = (char *(*)()) F499_3372;
	R2388[98] = (char *(*)()) F500_3372;
	R2388[99] = (char *(*)()) F501_3372;
	R2388[115] = (char *(*)()) F397_2711;
	R2388[117] = (char *(*)()) F397_2711;
	{long i; for (i = 244; i < 246; i++) R2388[i] = (char *(*)()) F790_5046;}
	R2388[367] = (char *(*)()) F790_5046;
}

char *(*R2389[368])();
void R2389_init () {
	R2389[0] = (char *(*)()) F547_3636;
	R2389[1] = (char *(*)()) F548_3636;
	R2389[2] = (char *(*)()) F549_3636;
	R2389[85] = (char *(*)()) F632_4205;
	R2389[86] = (char *(*)()) F633_4205;
	R2389[87] = (char *(*)()) F634_4205;
	R2389[88] = (char *(*)()) F635_4205;
	R2389[89] = (char *(*)()) F636_4205;
	R2389[90] = (char *(*)()) F637_4205;
	R2389[91] = (char *(*)()) F638_4205;
	R2389[92] = (char *(*)()) F639_4205;
	R2389[93] = (char *(*)()) F640_4205;
	R2389[94] = (char *(*)()) F641_4205;
	R2389[95] = (char *(*)()) F642_4205;
	R2389[96] = (char *(*)()) F643_4205;
	R2389[97] = (char *(*)()) F644_4205;
	R2389[98] = (char *(*)()) F645_4205;
	R2389[99] = (char *(*)()) F646_4205;
	R2389[115] = (char *(*)()) F440_2866;
	R2389[117] = (char *(*)()) F440_2866;
	{long i; for (i = 244; i < 246; i++) R2389[i] = (char *(*)()) F790_5101;}
	R2389[367] = (char *(*)()) F790_5101;
}

char *(*R2390[368])();
void R2390_init () {
	R2390[0] = (char *(*)()) F395_2714;
	R2390[1] = (char *(*)()) F397_2714;
	R2390[2] = (char *(*)()) F400_2714;
	R2390[85] = (char *(*)()) F632_4189;
	R2390[86] = (char *(*)()) F633_4189;
	R2390[87] = (char *(*)()) F634_4189;
	R2390[88] = (char *(*)()) F635_4189;
	R2390[89] = (char *(*)()) F636_4189;
	R2390[90] = (char *(*)()) F637_4189;
	R2390[91] = (char *(*)()) F638_4189;
	R2390[92] = (char *(*)()) F639_4189;
	R2390[93] = (char *(*)()) F640_4189;
	R2390[94] = (char *(*)()) F641_4189;
	R2390[95] = (char *(*)()) F642_4189;
	R2390[96] = (char *(*)()) F643_4189;
	R2390[97] = (char *(*)()) F644_4189;
	R2390[98] = (char *(*)()) F645_4189;
	R2390[99] = (char *(*)()) F646_4189;
	R2390[115] = (char *(*)()) F397_2714;
	R2390[117] = (char *(*)()) F397_2714;
	{long i; for (i = 244; i < 246; i++) R2390[i] = (char *(*)()) F404_2714;}
	R2390[367] = (char *(*)()) F404_2714;
}

char *(*R2391[368])();
void R2391_init () {
	R2391[0] = (char *(*)()) F395_2715;
	R2391[1] = (char *(*)()) F397_2715;
	R2391[2] = (char *(*)()) F400_2715;
	R2391[85] = (char *(*)()) F632_4190;
	R2391[86] = (char *(*)()) F633_4190;
	R2391[87] = (char *(*)()) F634_4190;
	R2391[88] = (char *(*)()) F635_4190;
	R2391[89] = (char *(*)()) F636_4190;
	R2391[90] = (char *(*)()) F637_4190;
	R2391[91] = (char *(*)()) F638_4190;
	R2391[92] = (char *(*)()) F639_4190;
	R2391[93] = (char *(*)()) F640_4190;
	R2391[94] = (char *(*)()) F641_4190;
	R2391[95] = (char *(*)()) F642_4190;
	R2391[96] = (char *(*)()) F643_4190;
	R2391[97] = (char *(*)()) F644_4190;
	R2391[98] = (char *(*)()) F645_4190;
	R2391[99] = (char *(*)()) F646_4190;
	R2391[115] = (char *(*)()) F397_2715;
	R2391[117] = (char *(*)()) F397_2715;
	{long i; for (i = 244; i < 246; i++) R2391[i] = (char *(*)()) F404_2715;}
	R2391[367] = (char *(*)()) F404_2715;
}

char *(*R2392[368])();
void R2392_init () {
	R2392[0] = (char *(*)()) F395_2716;
	R2392[1] = (char *(*)()) F397_2716;
	R2392[2] = (char *(*)()) F400_2716;
	R2392[85] = (char *(*)()) F632_4191;
	R2392[86] = (char *(*)()) F633_4191;
	R2392[87] = (char *(*)()) F634_4191;
	R2392[88] = (char *(*)()) F635_4191;
	R2392[89] = (char *(*)()) F636_4191;
	R2392[90] = (char *(*)()) F637_4191;
	R2392[91] = (char *(*)()) F638_4191;
	R2392[92] = (char *(*)()) F639_4191;
	R2392[93] = (char *(*)()) F640_4191;
	R2392[94] = (char *(*)()) F641_4191;
	R2392[95] = (char *(*)()) F642_4191;
	R2392[96] = (char *(*)()) F643_4191;
	R2392[97] = (char *(*)()) F644_4191;
	R2392[98] = (char *(*)()) F645_4191;
	R2392[99] = (char *(*)()) F646_4191;
	R2392[115] = (char *(*)()) F397_2716;
	R2392[117] = (char *(*)()) F397_2716;
	{long i; for (i = 244; i < 246; i++) R2392[i] = (char *(*)()) F404_2716;}
	R2392[367] = (char *(*)()) F404_2716;
}

char *(*R2393[368])();
void R2393_init () {
	R2393[0] = (char *(*)()) F395_2717;
	R2393[1] = (char *(*)()) F397_2717;
	R2393[2] = (char *(*)()) F400_2717;
	R2393[85] = (char *(*)()) F632_4192;
	R2393[86] = (char *(*)()) F633_4192;
	R2393[87] = (char *(*)()) F634_4192;
	R2393[88] = (char *(*)()) F635_4192;
	R2393[89] = (char *(*)()) F636_4192;
	R2393[90] = (char *(*)()) F637_4192;
	R2393[91] = (char *(*)()) F638_4192;
	R2393[92] = (char *(*)()) F639_4192;
	R2393[93] = (char *(*)()) F640_4192;
	R2393[94] = (char *(*)()) F641_4192;
	R2393[95] = (char *(*)()) F642_4192;
	R2393[96] = (char *(*)()) F643_4192;
	R2393[97] = (char *(*)()) F644_4192;
	R2393[98] = (char *(*)()) F645_4192;
	R2393[99] = (char *(*)()) F646_4192;
	R2393[115] = (char *(*)()) F397_2717;
	R2393[117] = (char *(*)()) F397_2717;
	{long i; for (i = 244; i < 246; i++) R2393[i] = (char *(*)()) F404_2717;}
	R2393[367] = (char *(*)()) F404_2717;
}

char *(*R2398[368])();
void R2398_init () {
	R2398[0] = (char *(*)()) F410_2814;
	R2398[1] = (char *(*)()) F411_2814_2398_4;
	R2398[2] = (char *(*)()) F414_2814_2398_4;
	R2398[85] = (char *(*)()) F632_4211;
	R2398[86] = (char *(*)()) F633_4211_2398_4;
	R2398[87] = (char *(*)()) F634_4211_2398_4;
	R2398[88] = (char *(*)()) F635_4211_2398_4;
	R2398[89] = (char *(*)()) F636_4211_2398_4;
	R2398[90] = (char *(*)()) F637_4211_2398_4;
	R2398[91] = (char *(*)()) F638_4211_2398_4;
	R2398[92] = (char *(*)()) F639_4211_2398_4;
	R2398[93] = (char *(*)()) F640_4211_2398_4;
	R2398[94] = (char *(*)()) F641_4211_2398_4;
	R2398[95] = (char *(*)()) F642_4211_2398_4;
	R2398[96] = (char *(*)()) F643_4211_2398_4;
	R2398[97] = (char *(*)()) F644_4211_2398_4;
	R2398[98] = (char *(*)()) F645_4211_2398_4;
	R2398[99] = (char *(*)()) F646_4211_2398_4;
	R2398[115] = (char *(*)()) F397_2705_2398_4;
	R2398[117] = (char *(*)()) F397_2705_2398_4;
	{long i; for (i = 244; i < 246; i++) R2398[i] = (char *(*)()) F424_2814_2398_4;}
	R2398[367] = (char *(*)()) F424_2814_2398_4;
}
static void F411_2814_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F411_2814(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F414_2814_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F414_2814(Current, *(EIF_BOOLEAN *)arg1);
}
static void F633_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4211(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4211(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4211(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4211(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4211(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4211(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4211(Current, *(EIF_POINTER *)arg1);
}
static void F640_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4211(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4211(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4211(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4211(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4211(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4211(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4211_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4211(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F397_2705_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F397_2705(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F424_2814_2398_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F424_2814(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2399[368])();
void R2399_init () {
	R2399[0] = (char *(*)()) F547_3622;
	R2399[1] = (char *(*)()) F548_3622;
	R2399[2] = (char *(*)()) F549_3622;
	R2399[85] = (char *(*)()) F632_4184;
	R2399[86] = (char *(*)()) F633_4184;
	R2399[87] = (char *(*)()) F634_4184;
	R2399[88] = (char *(*)()) F635_4184;
	R2399[89] = (char *(*)()) F636_4184;
	R2399[90] = (char *(*)()) F637_4184;
	R2399[91] = (char *(*)()) F638_4184;
	R2399[92] = (char *(*)()) F639_4184;
	R2399[93] = (char *(*)()) F640_4184;
	R2399[94] = (char *(*)()) F641_4184;
	R2399[95] = (char *(*)()) F642_4184;
	R2399[96] = (char *(*)()) F643_4184;
	R2399[97] = (char *(*)()) F644_4184;
	R2399[98] = (char *(*)()) F645_4184;
	R2399[99] = (char *(*)()) F646_4184;
	R2399[115] = (char *(*)()) F440_2857;
	R2399[117] = (char *(*)()) F440_2857;
	{long i; for (i = 244; i < 246; i++) R2399[i] = (char *(*)()) F790_5026;}
	R2399[367] = (char *(*)()) F790_5026;
}

char *(*R2401[368])();
void R2401_init () {
	R2401[0] = (char *(*)()) F395_2708;
	R2401[1] = (char *(*)()) F397_2708_2401_1;
	R2401[2] = (char *(*)()) F400_2708_2401_1;
	R2401[85] = (char *(*)()) F395_2708;
	R2401[86] = (char *(*)()) F397_2708_2401_1;
	R2401[87] = (char *(*)()) F398_2708_2401_1;
	R2401[88] = (char *(*)()) F399_2708_2401_1;
	R2401[89] = (char *(*)()) F400_2708_2401_1;
	R2401[90] = (char *(*)()) F396_2708_2401_1;
	R2401[91] = (char *(*)()) F401_2708_2401_1;
	R2401[92] = (char *(*)()) F402_2708_2401_1;
	R2401[93] = (char *(*)()) F403_2708_2401_1;
	R2401[94] = (char *(*)()) F405_2708_2401_1;
	R2401[95] = (char *(*)()) F406_2708_2401_1;
	R2401[96] = (char *(*)()) F407_2708_2401_1;
	R2401[97] = (char *(*)()) F408_2708_2401_1;
	R2401[98] = (char *(*)()) F409_2708_2401_1;
	R2401[99] = (char *(*)()) F404_2708_2401_1;
	R2401[115] = (char *(*)()) F397_2708_2401_1;
	R2401[117] = (char *(*)()) F397_2708_2401_1;
	{long i; for (i = 244; i < 246; i++) R2401[i] = (char *(*)()) F404_2708_2401_1;}
	R2401[367] = (char *(*)()) F404_2708_2401_1;
}
static EIF_REFERENCE F397_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F397_2708(Current);
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
static EIF_REFERENCE F400_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F400_2708(Current);
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
static EIF_REFERENCE F398_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F398_2708(Current);
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
static EIF_REFERENCE F399_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F399_2708(Current);
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
static EIF_REFERENCE F396_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F396_2708(Current);
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
static EIF_REFERENCE F401_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F401_2708(Current);
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
static EIF_REFERENCE F402_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F402_2708(Current);
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
static EIF_REFERENCE F403_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F403_2708(Current);
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
static EIF_REFERENCE F405_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F405_2708(Current);
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
static EIF_REFERENCE F406_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F406_2708(Current);
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
static EIF_REFERENCE F407_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F407_2708(Current);
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
static EIF_REFERENCE F408_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F408_2708(Current);
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
static EIF_REFERENCE F409_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F409_2708(Current);
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
static EIF_REFERENCE F404_2708_2401_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F404_2708(Current);
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

char *(*R2402[368])();
void R2402_init () {
	R2402[0] = (char *(*)()) F395_2709;
	R2402[1] = (char *(*)()) F397_2709;
	R2402[2] = (char *(*)()) F400_2709;
	R2402[85] = (char *(*)()) F395_2709;
	R2402[86] = (char *(*)()) F397_2709;
	R2402[87] = (char *(*)()) F398_2709;
	R2402[88] = (char *(*)()) F399_2709;
	R2402[89] = (char *(*)()) F400_2709;
	R2402[90] = (char *(*)()) F396_2709;
	R2402[91] = (char *(*)()) F401_2709;
	R2402[92] = (char *(*)()) F402_2709;
	R2402[93] = (char *(*)()) F403_2709;
	R2402[94] = (char *(*)()) F405_2709;
	R2402[95] = (char *(*)()) F406_2709;
	R2402[96] = (char *(*)()) F407_2709;
	R2402[97] = (char *(*)()) F408_2709;
	R2402[98] = (char *(*)()) F409_2709;
	R2402[99] = (char *(*)()) F404_2709;
	R2402[115] = (char *(*)()) F397_2709;
	R2402[117] = (char *(*)()) F397_2709;
	{long i; for (i = 244; i < 246; i++) R2402[i] = (char *(*)()) F404_2709;}
	R2402[367] = (char *(*)()) F404_2709;
}

char *(*R2403[368])();
void R2403_init () {
	R2403[0] = (char *(*)()) F547_3628;
	R2403[1] = (char *(*)()) F548_3628;
	R2403[2] = (char *(*)()) F549_3628;
	R2403[85] = (char *(*)()) F517_3434;
	R2403[86] = (char *(*)()) F518_3434;
	R2403[87] = (char *(*)()) F519_3434;
	R2403[88] = (char *(*)()) F520_3434;
	R2403[89] = (char *(*)()) F521_3434;
	R2403[90] = (char *(*)()) F522_3434;
	R2403[91] = (char *(*)()) F523_3434;
	R2403[92] = (char *(*)()) F524_3434;
	R2403[93] = (char *(*)()) F525_3434;
	R2403[94] = (char *(*)()) F526_3434;
	R2403[95] = (char *(*)()) F527_3434;
	R2403[96] = (char *(*)()) F528_3434;
	R2403[97] = (char *(*)()) F529_3434;
	R2403[98] = (char *(*)()) F530_3434;
	R2403[99] = (char *(*)()) F531_3434;
	R2403[115] = (char *(*)()) F440_2859;
	R2403[117] = (char *(*)()) F440_2859;
	{long i; for (i = 244; i < 246; i++) R2403[i] = (char *(*)()) F790_5044;}
	R2403[367] = (char *(*)()) F790_5044;
}

char *(*R2404[368])();
void R2404_init () {
	R2404[0] = (char *(*)()) F547_3637;
	R2404[1] = (char *(*)()) F548_3637;
	R2404[2] = (char *(*)()) F549_3637;
	R2404[85] = (char *(*)()) F632_4206;
	R2404[86] = (char *(*)()) F633_4206;
	R2404[87] = (char *(*)()) F634_4206;
	R2404[88] = (char *(*)()) F635_4206;
	R2404[89] = (char *(*)()) F636_4206;
	R2404[90] = (char *(*)()) F637_4206;
	R2404[91] = (char *(*)()) F638_4206;
	R2404[92] = (char *(*)()) F639_4206;
	R2404[93] = (char *(*)()) F640_4206;
	R2404[94] = (char *(*)()) F641_4206;
	R2404[95] = (char *(*)()) F642_4206;
	R2404[96] = (char *(*)()) F643_4206;
	R2404[97] = (char *(*)()) F644_4206;
	R2404[98] = (char *(*)()) F645_4206;
	R2404[99] = (char *(*)()) F646_4206;
	R2404[115] = (char *(*)()) F440_2868;
	R2404[117] = (char *(*)()) F440_2868;
	{long i; for (i = 244; i < 246; i++) R2404[i] = (char *(*)()) F790_5102;}
	R2404[367] = (char *(*)()) F790_5102;
}

char *(*R2405[368])();
void R2405_init () {
	R2405[0] = (char *(*)()) F547_3638;
	R2405[1] = (char *(*)()) F548_3638;
	R2405[2] = (char *(*)()) F549_3638;
	R2405[85] = (char *(*)()) F632_4207;
	R2405[86] = (char *(*)()) F633_4207;
	R2405[87] = (char *(*)()) F634_4207;
	R2405[88] = (char *(*)()) F635_4207;
	R2405[89] = (char *(*)()) F636_4207;
	R2405[90] = (char *(*)()) F637_4207;
	R2405[91] = (char *(*)()) F638_4207;
	R2405[92] = (char *(*)()) F639_4207;
	R2405[93] = (char *(*)()) F640_4207;
	R2405[94] = (char *(*)()) F641_4207;
	R2405[95] = (char *(*)()) F642_4207;
	R2405[96] = (char *(*)()) F643_4207;
	R2405[97] = (char *(*)()) F644_4207;
	R2405[98] = (char *(*)()) F645_4207;
	R2405[99] = (char *(*)()) F646_4207;
	R2405[115] = (char *(*)()) F440_2865;
	R2405[117] = (char *(*)()) F440_2865;
	{long i; for (i = 244; i < 246; i++) R2405[i] = (char *(*)()) F790_5103;}
	R2405[367] = (char *(*)()) F790_5103;
}

char *(*R2456[368])();
void R2456_init () {
	R2456[0] = (char *(*)()) F547_3629;
	R2456[1] = (char *(*)()) F548_3629;
	R2456[2] = (char *(*)()) F549_3629;
	R2456[85] = (char *(*)()) F517_3435;
	R2456[86] = (char *(*)()) F518_3435;
	R2456[87] = (char *(*)()) F519_3435;
	R2456[88] = (char *(*)()) F520_3435;
	R2456[89] = (char *(*)()) F521_3435;
	R2456[90] = (char *(*)()) F522_3435;
	R2456[91] = (char *(*)()) F523_3435;
	R2456[92] = (char *(*)()) F524_3435;
	R2456[93] = (char *(*)()) F525_3435;
	R2456[94] = (char *(*)()) F526_3435;
	R2456[95] = (char *(*)()) F527_3435;
	R2456[96] = (char *(*)()) F528_3435;
	R2456[97] = (char *(*)()) F529_3435;
	R2456[98] = (char *(*)()) F530_3435;
	R2456[99] = (char *(*)()) F531_3435;
	{long i; for (i = 244; i < 246; i++) R2456[i] = (char *(*)()) F790_5045;}
	R2456[367] = (char *(*)()) F790_5045;
}


#ifdef __cplusplus
}
#endif
