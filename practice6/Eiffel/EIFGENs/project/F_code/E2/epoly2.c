#include "epoly2.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX Y2260_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype15[] = {0xFF01,907,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype21[] = {0xFF01,911,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype22[] = {0xFF01,911,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype162[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype202[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype203[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype204[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype205[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype206[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype207[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype208[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype209[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype210[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype211[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype212[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype213[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype214[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype215[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype216[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype232[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype233[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype234[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype235[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype236[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype237[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype238[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype239[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype240[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype241[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype242[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype243[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype244[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype245[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype246[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype247[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype249[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype250[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype251[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype252[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype253[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype254[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype255[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype256[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype257[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype258[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype259[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype260[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype261[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype262[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype263[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype264[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype265[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype266[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype267[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype268[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype269[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype270[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype271[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype272[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype273[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype274[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype275[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype276[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype277[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype278[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype279[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype280[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype281[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype282[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype283[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype284[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype285[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype286[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype287[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype288[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype289[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype290[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype291[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype292[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype293[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype294[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype295[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype296[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype297[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype298[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype299[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype300[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype301[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype302[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype303[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype304[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype305[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype306[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype307[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype308[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype309[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype310[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype311[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype312[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype313[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype314[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype315[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype316[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype317[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype318[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype319[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype320[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype321[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype322[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype323[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype324[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype325[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype326[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype327[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype328[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype329[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype330[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype331[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype332[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype333[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype334[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype335[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype336[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype337[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype338[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype339[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype340[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype341[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype342[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype343[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype344[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype345[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype346[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype347[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype348[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype349[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype350[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype351[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype352[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype353[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype354[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype355[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype356[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype357[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype358[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype359[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype360[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype361[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype362[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype363[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype364[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype365[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype366[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype367[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype368[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype369[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype370[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype371[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype372[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype373[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype374[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype375[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype376[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype377[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype378[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype379[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype380[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype381[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype382[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype383[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype384[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype385[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype386[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype387[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype388[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype389[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype390[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype391[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype392[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype393[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype394[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype395[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype396[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype397[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype398[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype399[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype400[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype401[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype402[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype403[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype404[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype405[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype406[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype407[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype408[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype409[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype410[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype411[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype412[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype413[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype414[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype415[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype416[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype417[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype418[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype419[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype420[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype421[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype422[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype423[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype424[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype425[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype426[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype427[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype428[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype429[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype430[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype431[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype432[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype433[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype434[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype435[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype436[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype437[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype438[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype439[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype440[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype441[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype442[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype443[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype444[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype445[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype446[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype447[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype448[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype449[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype450[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype451[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype452[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype453[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype454[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype455[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype456[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype457[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype458[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype459[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype460[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype461[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype462[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype463[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype464[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype465[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype466[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype467[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype468[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype469[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype470[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype471[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype472[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype473[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype474[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype475[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype476[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype477[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype478[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype479[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype480[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype481[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype482[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype483[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype484[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype485[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype486[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype487[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype488[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype489[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype490[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype491[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype492[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype493[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype494[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype495[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype496[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype497[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype498[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype499[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype500[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype501[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype502[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype503[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype504[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype505[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype506[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype507[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype508[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype509[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype510[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype511[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype512[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype513[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype514[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype515[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype516[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype517[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype518[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype519[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype520[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype521[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype522[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype523[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype524[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype525[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype526[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype527[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype528[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype529[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype530[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype531[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype532[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype533[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype534[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype535[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype536[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype537[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype538[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype539[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype540[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype541[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype542[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype543[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype544[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype545[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype546[] = {0xFF04,0,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype547[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype548[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype549[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype550[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype551[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype552[] = {838,0xFFFF};
static EIF_TYPE_INDEX Y2260_pgtype553[] = {838,0xFFFF};
EIF_TYPE_INDEX *Y2260_gen_type [751];
EIF_TYPE_INDEX Y2260 [751];
void Y2260_init (void)
{
	egc_routines_types [2260] = Y2260;
	egc_routines_gen_types [2260] = Y2260_gen_type;
	egc_routines_offset [2260] = 163;
	Y2260_gen_type [0] = Y2260_pgtype0;
	Y2260_gen_type [1] = Y2260_pgtype1;
	Y2260_gen_type [2] = Y2260_pgtype2;
	Y2260_gen_type [3] = Y2260_pgtype3;
	Y2260_gen_type [4] = Y2260_pgtype4;
	Y2260_gen_type [5] = Y2260_pgtype5;
	Y2260_gen_type [6] = Y2260_pgtype6;
	Y2260_gen_type [7] = Y2260_pgtype7;
	Y2260_gen_type [8] = Y2260_pgtype8;
	Y2260_gen_type [9] = Y2260_pgtype9;
	Y2260_gen_type [10] = Y2260_pgtype10;
	Y2260_gen_type [11] = Y2260_pgtype11;
	Y2260_gen_type [12] = Y2260_pgtype12;
	Y2260_gen_type [13] = Y2260_pgtype13;
	Y2260_gen_type [14] = Y2260_pgtype14;
	Y2260_gen_type [15] = Y2260_pgtype15;
	Y2260_gen_type [16] = Y2260_pgtype16;
	Y2260_gen_type [17] = Y2260_pgtype17;
	Y2260_gen_type [18] = Y2260_pgtype18;
	Y2260_gen_type [19] = Y2260_pgtype19;
	Y2260_gen_type [20] = Y2260_pgtype20;
	Y2260_gen_type [21] = Y2260_pgtype21;
	Y2260_gen_type [22] = Y2260_pgtype22;
	Y2260_gen_type [23] = Y2260_pgtype23;
	Y2260_gen_type [24] = Y2260_pgtype24;
	Y2260_gen_type [25] = Y2260_pgtype25;
	Y2260_gen_type [26] = Y2260_pgtype26;
	Y2260_gen_type [27] = Y2260_pgtype27;
	Y2260_gen_type [28] = Y2260_pgtype28;
	Y2260_gen_type [29] = Y2260_pgtype29;
	Y2260_gen_type [30] = Y2260_pgtype30;
	Y2260_gen_type [31] = Y2260_pgtype31;
	Y2260_gen_type [32] = Y2260_pgtype32;
	Y2260_gen_type [33] = Y2260_pgtype33;
	Y2260_gen_type [34] = Y2260_pgtype34;
	Y2260_gen_type [35] = Y2260_pgtype35;
	Y2260_gen_type [36] = Y2260_pgtype36;
	Y2260_gen_type [37] = Y2260_pgtype37;
	Y2260_gen_type [38] = Y2260_pgtype38;
	Y2260_gen_type [39] = Y2260_pgtype39;
	Y2260_gen_type [40] = Y2260_pgtype40;
	Y2260_gen_type [41] = Y2260_pgtype41;
	Y2260_gen_type [42] = Y2260_pgtype42;
	Y2260_gen_type [43] = Y2260_pgtype43;
	Y2260_gen_type [44] = Y2260_pgtype44;
	Y2260_gen_type [45] = Y2260_pgtype45;
	Y2260_gen_type [46] = Y2260_pgtype46;
	Y2260_gen_type [47] = Y2260_pgtype47;
	Y2260_gen_type [48] = Y2260_pgtype48;
	Y2260_gen_type [49] = Y2260_pgtype49;
	Y2260_gen_type [50] = Y2260_pgtype50;
	Y2260_gen_type [51] = Y2260_pgtype51;
	Y2260_gen_type [52] = Y2260_pgtype52;
	Y2260_gen_type [53] = Y2260_pgtype53;
	Y2260_gen_type [54] = Y2260_pgtype54;
	Y2260_gen_type [55] = Y2260_pgtype55;
	Y2260_gen_type [56] = Y2260_pgtype56;
	Y2260_gen_type [57] = Y2260_pgtype57;
	Y2260_gen_type [58] = Y2260_pgtype58;
	Y2260_gen_type [59] = Y2260_pgtype59;
	Y2260_gen_type [60] = Y2260_pgtype60;
	Y2260_gen_type [61] = Y2260_pgtype61;
	Y2260_gen_type [62] = Y2260_pgtype62;
	Y2260_gen_type [63] = Y2260_pgtype63;
	Y2260_gen_type [64] = Y2260_pgtype64;
	Y2260_gen_type [65] = Y2260_pgtype65;
	Y2260_gen_type [66] = Y2260_pgtype66;
	Y2260_gen_type [67] = Y2260_pgtype67;
	Y2260_gen_type [68] = Y2260_pgtype68;
	Y2260_gen_type [69] = Y2260_pgtype69;
	Y2260_gen_type [70] = Y2260_pgtype70;
	Y2260_gen_type [71] = Y2260_pgtype71;
	Y2260_gen_type [72] = Y2260_pgtype72;
	Y2260_gen_type [73] = Y2260_pgtype73;
	Y2260_gen_type [74] = Y2260_pgtype74;
	Y2260_gen_type [75] = Y2260_pgtype75;
	Y2260_gen_type [76] = Y2260_pgtype76;
	Y2260_gen_type [77] = Y2260_pgtype77;
	Y2260_gen_type [78] = Y2260_pgtype78;
	Y2260_gen_type [79] = Y2260_pgtype79;
	Y2260_gen_type [80] = Y2260_pgtype80;
	Y2260_gen_type [81] = Y2260_pgtype81;
	Y2260_gen_type [82] = Y2260_pgtype82;
	Y2260_gen_type [83] = Y2260_pgtype83;
	Y2260_gen_type [84] = Y2260_pgtype84;
	Y2260_gen_type [85] = Y2260_pgtype85;
	Y2260_gen_type [86] = Y2260_pgtype86;
	Y2260_gen_type [87] = Y2260_pgtype87;
	Y2260_gen_type [88] = Y2260_pgtype88;
	Y2260_gen_type [89] = Y2260_pgtype89;
	Y2260_gen_type [90] = Y2260_pgtype90;
	Y2260_gen_type [91] = Y2260_pgtype91;
	Y2260_gen_type [92] = Y2260_pgtype92;
	Y2260_gen_type [93] = Y2260_pgtype93;
	Y2260_gen_type [94] = Y2260_pgtype94;
	Y2260_gen_type [95] = Y2260_pgtype95;
	Y2260_gen_type [96] = Y2260_pgtype96;
	Y2260_gen_type [97] = Y2260_pgtype97;
	Y2260_gen_type [98] = Y2260_pgtype98;
	Y2260_gen_type [99] = Y2260_pgtype99;
	Y2260_gen_type [100] = Y2260_pgtype100;
	Y2260_gen_type [101] = Y2260_pgtype101;
	Y2260_gen_type [102] = Y2260_pgtype102;
	Y2260_gen_type [103] = Y2260_pgtype103;
	Y2260_gen_type [104] = Y2260_pgtype104;
	Y2260_gen_type [105] = Y2260_pgtype105;
	Y2260_gen_type [106] = Y2260_pgtype106;
	Y2260_gen_type [107] = Y2260_pgtype107;
	Y2260_gen_type [108] = Y2260_pgtype108;
	Y2260_gen_type [109] = Y2260_pgtype109;
	Y2260_gen_type [110] = Y2260_pgtype110;
	Y2260_gen_type [111] = Y2260_pgtype111;
	Y2260_gen_type [112] = Y2260_pgtype112;
	Y2260_gen_type [113] = Y2260_pgtype113;
	Y2260_gen_type [114] = Y2260_pgtype114;
	Y2260_gen_type [115] = Y2260_pgtype115;
	Y2260_gen_type [116] = Y2260_pgtype116;
	Y2260_gen_type [117] = Y2260_pgtype117;
	Y2260_gen_type [118] = Y2260_pgtype118;
	Y2260_gen_type [119] = Y2260_pgtype119;
	Y2260_gen_type [120] = Y2260_pgtype120;
	Y2260_gen_type [121] = Y2260_pgtype121;
	Y2260_gen_type [122] = Y2260_pgtype122;
	Y2260_gen_type [123] = Y2260_pgtype123;
	Y2260_gen_type [124] = Y2260_pgtype124;
	Y2260_gen_type [125] = Y2260_pgtype125;
	Y2260_gen_type [126] = Y2260_pgtype126;
	Y2260_gen_type [127] = Y2260_pgtype127;
	Y2260_gen_type [128] = Y2260_pgtype128;
	Y2260_gen_type [129] = Y2260_pgtype129;
	Y2260_gen_type [130] = Y2260_pgtype130;
	Y2260_gen_type [131] = Y2260_pgtype131;
	Y2260_gen_type [132] = Y2260_pgtype132;
	Y2260_gen_type [133] = Y2260_pgtype133;
	Y2260_gen_type [134] = Y2260_pgtype134;
	Y2260_gen_type [135] = Y2260_pgtype135;
	Y2260_gen_type [136] = Y2260_pgtype136;
	Y2260_gen_type [137] = Y2260_pgtype137;
	Y2260_gen_type [138] = Y2260_pgtype138;
	Y2260_gen_type [139] = Y2260_pgtype139;
	Y2260_gen_type [140] = Y2260_pgtype140;
	Y2260_gen_type [141] = Y2260_pgtype141;
	Y2260_gen_type [142] = Y2260_pgtype142;
	Y2260_gen_type [143] = Y2260_pgtype143;
	Y2260_gen_type [144] = Y2260_pgtype144;
	Y2260_gen_type [145] = Y2260_pgtype145;
	Y2260_gen_type [146] = Y2260_pgtype146;
	Y2260_gen_type [147] = Y2260_pgtype147;
	Y2260_gen_type [148] = Y2260_pgtype148;
	Y2260_gen_type [149] = Y2260_pgtype149;
	Y2260_gen_type [150] = Y2260_pgtype150;
	Y2260_gen_type [151] = Y2260_pgtype151;
	Y2260_gen_type [152] = Y2260_pgtype152;
	Y2260_gen_type [153] = Y2260_pgtype153;
	Y2260_gen_type [154] = Y2260_pgtype154;
	Y2260_gen_type [155] = Y2260_pgtype155;
	Y2260_gen_type [156] = Y2260_pgtype156;
	Y2260_gen_type [157] = Y2260_pgtype157;
	Y2260_gen_type [158] = Y2260_pgtype158;
	Y2260_gen_type [159] = Y2260_pgtype159;
	Y2260_gen_type [160] = Y2260_pgtype160;
	Y2260_gen_type [161] = Y2260_pgtype161;
	Y2260_gen_type [162] = Y2260_pgtype162;
	Y2260_gen_type [163] = Y2260_pgtype163;
	Y2260_gen_type [164] = Y2260_pgtype164;
	Y2260_gen_type [165] = Y2260_pgtype165;
	Y2260_gen_type [166] = Y2260_pgtype166;
	Y2260_gen_type [167] = Y2260_pgtype167;
	Y2260_gen_type [168] = Y2260_pgtype168;
	Y2260_gen_type [169] = Y2260_pgtype169;
	Y2260_gen_type [170] = Y2260_pgtype170;
	Y2260_gen_type [171] = Y2260_pgtype171;
	Y2260_gen_type [172] = Y2260_pgtype172;
	Y2260_gen_type [173] = Y2260_pgtype173;
	Y2260_gen_type [174] = Y2260_pgtype174;
	Y2260_gen_type [175] = Y2260_pgtype175;
	Y2260_gen_type [176] = Y2260_pgtype176;
	Y2260_gen_type [177] = Y2260_pgtype177;
	Y2260_gen_type [178] = Y2260_pgtype178;
	Y2260_gen_type [179] = Y2260_pgtype179;
	Y2260_gen_type [180] = Y2260_pgtype180;
	Y2260_gen_type [181] = Y2260_pgtype181;
	Y2260_gen_type [182] = Y2260_pgtype182;
	Y2260_gen_type [183] = Y2260_pgtype183;
	Y2260_gen_type [184] = Y2260_pgtype184;
	Y2260_gen_type [185] = Y2260_pgtype185;
	Y2260_gen_type [186] = Y2260_pgtype186;
	Y2260_gen_type [187] = Y2260_pgtype187;
	Y2260_gen_type [188] = Y2260_pgtype188;
	Y2260_gen_type [189] = Y2260_pgtype189;
	Y2260_gen_type [190] = Y2260_pgtype190;
	Y2260_gen_type [191] = Y2260_pgtype191;
	Y2260_gen_type [192] = Y2260_pgtype192;
	Y2260_gen_type [193] = Y2260_pgtype193;
	Y2260_gen_type [194] = Y2260_pgtype194;
	Y2260_gen_type [195] = Y2260_pgtype195;
	Y2260_gen_type [196] = Y2260_pgtype196;
	Y2260_gen_type [197] = Y2260_pgtype197;
	Y2260_gen_type [198] = Y2260_pgtype198;
	Y2260_gen_type [199] = Y2260_pgtype199;
	Y2260_gen_type [200] = Y2260_pgtype200;
	Y2260_gen_type [201] = Y2260_pgtype201;
	Y2260_gen_type [202] = Y2260_pgtype202;
	Y2260_gen_type [203] = Y2260_pgtype203;
	Y2260_gen_type [204] = Y2260_pgtype204;
	Y2260_gen_type [205] = Y2260_pgtype205;
	Y2260_gen_type [206] = Y2260_pgtype206;
	Y2260_gen_type [207] = Y2260_pgtype207;
	Y2260_gen_type [208] = Y2260_pgtype208;
	Y2260_gen_type [209] = Y2260_pgtype209;
	Y2260_gen_type [210] = Y2260_pgtype210;
	Y2260_gen_type [211] = Y2260_pgtype211;
	Y2260_gen_type [212] = Y2260_pgtype212;
	Y2260_gen_type [213] = Y2260_pgtype213;
	Y2260_gen_type [214] = Y2260_pgtype214;
	Y2260_gen_type [215] = Y2260_pgtype215;
	Y2260_gen_type [216] = Y2260_pgtype216;
	Y2260_gen_type [217] = Y2260_pgtype217;
	Y2260_gen_type [218] = Y2260_pgtype218;
	Y2260_gen_type [219] = Y2260_pgtype219;
	Y2260_gen_type [220] = Y2260_pgtype220;
	Y2260_gen_type [221] = Y2260_pgtype221;
	Y2260_gen_type [222] = Y2260_pgtype222;
	Y2260_gen_type [223] = Y2260_pgtype223;
	Y2260_gen_type [224] = Y2260_pgtype224;
	Y2260_gen_type [225] = Y2260_pgtype225;
	Y2260_gen_type [226] = Y2260_pgtype226;
	Y2260_gen_type [227] = Y2260_pgtype227;
	Y2260_gen_type [228] = Y2260_pgtype228;
	Y2260_gen_type [229] = Y2260_pgtype229;
	Y2260_gen_type [230] = Y2260_pgtype230;
	Y2260_gen_type [231] = Y2260_pgtype231;
	Y2260_gen_type [232] = Y2260_pgtype232;
	Y2260_gen_type [233] = Y2260_pgtype233;
	Y2260_gen_type [234] = Y2260_pgtype234;
	Y2260_gen_type [235] = Y2260_pgtype235;
	Y2260_gen_type [236] = Y2260_pgtype236;
	Y2260_gen_type [237] = Y2260_pgtype237;
	Y2260_gen_type [238] = Y2260_pgtype238;
	Y2260_gen_type [239] = Y2260_pgtype239;
	Y2260_gen_type [240] = Y2260_pgtype240;
	Y2260_gen_type [241] = Y2260_pgtype241;
	Y2260_gen_type [242] = Y2260_pgtype242;
	Y2260_gen_type [243] = Y2260_pgtype243;
	Y2260_gen_type [244] = Y2260_pgtype244;
	Y2260_gen_type [245] = Y2260_pgtype245;
	Y2260_gen_type [246] = Y2260_pgtype246;
	Y2260_gen_type [247] = Y2260_pgtype247;
	Y2260_gen_type [248] = Y2260_pgtype248;
	Y2260_gen_type [249] = Y2260_pgtype249;
	Y2260_gen_type [250] = Y2260_pgtype250;
	Y2260_gen_type [251] = Y2260_pgtype251;
	Y2260_gen_type [252] = Y2260_pgtype252;
	Y2260_gen_type [253] = Y2260_pgtype253;
	Y2260_gen_type [254] = Y2260_pgtype254;
	Y2260_gen_type [255] = Y2260_pgtype255;
	Y2260_gen_type [256] = Y2260_pgtype256;
	Y2260_gen_type [257] = Y2260_pgtype257;
	Y2260_gen_type [258] = Y2260_pgtype258;
	Y2260_gen_type [259] = Y2260_pgtype259;
	Y2260_gen_type [260] = Y2260_pgtype260;
	Y2260_gen_type [261] = Y2260_pgtype261;
	Y2260_gen_type [262] = Y2260_pgtype262;
	Y2260_gen_type [263] = Y2260_pgtype263;
	Y2260_gen_type [264] = Y2260_pgtype264;
	Y2260_gen_type [265] = Y2260_pgtype265;
	Y2260_gen_type [266] = Y2260_pgtype266;
	Y2260_gen_type [267] = Y2260_pgtype267;
	Y2260_gen_type [268] = Y2260_pgtype268;
	Y2260_gen_type [269] = Y2260_pgtype269;
	Y2260_gen_type [270] = Y2260_pgtype270;
	Y2260_gen_type [271] = Y2260_pgtype271;
	Y2260_gen_type [272] = Y2260_pgtype272;
	Y2260_gen_type [273] = Y2260_pgtype273;
	Y2260_gen_type [274] = Y2260_pgtype274;
	Y2260_gen_type [275] = Y2260_pgtype275;
	Y2260_gen_type [276] = Y2260_pgtype276;
	Y2260_gen_type [277] = Y2260_pgtype277;
	Y2260_gen_type [278] = Y2260_pgtype278;
	Y2260_gen_type [279] = Y2260_pgtype279;
	Y2260_gen_type [280] = Y2260_pgtype280;
	Y2260_gen_type [281] = Y2260_pgtype281;
	Y2260_gen_type [282] = Y2260_pgtype282;
	Y2260_gen_type [283] = Y2260_pgtype283;
	Y2260_gen_type [284] = Y2260_pgtype284;
	Y2260_gen_type [285] = Y2260_pgtype285;
	Y2260_gen_type [286] = Y2260_pgtype286;
	Y2260_gen_type [287] = Y2260_pgtype287;
	Y2260_gen_type [288] = Y2260_pgtype288;
	Y2260_gen_type [289] = Y2260_pgtype289;
	Y2260_gen_type [290] = Y2260_pgtype290;
	Y2260_gen_type [291] = Y2260_pgtype291;
	Y2260_gen_type [292] = Y2260_pgtype292;
	Y2260_gen_type [293] = Y2260_pgtype293;
	Y2260_gen_type [294] = Y2260_pgtype294;
	Y2260_gen_type [295] = Y2260_pgtype295;
	Y2260_gen_type [296] = Y2260_pgtype296;
	Y2260_gen_type [297] = Y2260_pgtype297;
	Y2260_gen_type [298] = Y2260_pgtype298;
	Y2260_gen_type [299] = Y2260_pgtype299;
	Y2260_gen_type [300] = Y2260_pgtype300;
	Y2260_gen_type [301] = Y2260_pgtype301;
	Y2260_gen_type [302] = Y2260_pgtype302;
	Y2260_gen_type [303] = Y2260_pgtype303;
	Y2260_gen_type [304] = Y2260_pgtype304;
	Y2260_gen_type [305] = Y2260_pgtype305;
	Y2260_gen_type [306] = Y2260_pgtype306;
	Y2260_gen_type [307] = Y2260_pgtype307;
	Y2260_gen_type [308] = Y2260_pgtype308;
	Y2260_gen_type [309] = Y2260_pgtype309;
	Y2260_gen_type [310] = Y2260_pgtype310;
	Y2260_gen_type [311] = Y2260_pgtype311;
	Y2260_gen_type [312] = Y2260_pgtype312;
	Y2260_gen_type [313] = Y2260_pgtype313;
	Y2260_gen_type [314] = Y2260_pgtype314;
	Y2260_gen_type [315] = Y2260_pgtype315;
	Y2260_gen_type [316] = Y2260_pgtype316;
	Y2260_gen_type [317] = Y2260_pgtype317;
	Y2260_gen_type [318] = Y2260_pgtype318;
	Y2260_gen_type [319] = Y2260_pgtype319;
	Y2260_gen_type [320] = Y2260_pgtype320;
	Y2260_gen_type [321] = Y2260_pgtype321;
	Y2260_gen_type [322] = Y2260_pgtype322;
	Y2260_gen_type [323] = Y2260_pgtype323;
	Y2260_gen_type [324] = Y2260_pgtype324;
	Y2260_gen_type [325] = Y2260_pgtype325;
	Y2260_gen_type [326] = Y2260_pgtype326;
	Y2260_gen_type [327] = Y2260_pgtype327;
	Y2260_gen_type [328] = Y2260_pgtype328;
	Y2260_gen_type [329] = Y2260_pgtype329;
	Y2260_gen_type [330] = Y2260_pgtype330;
	Y2260_gen_type [331] = Y2260_pgtype331;
	Y2260_gen_type [332] = Y2260_pgtype332;
	Y2260_gen_type [333] = Y2260_pgtype333;
	Y2260_gen_type [334] = Y2260_pgtype334;
	Y2260_gen_type [335] = Y2260_pgtype335;
	Y2260_gen_type [336] = Y2260_pgtype336;
	Y2260_gen_type [337] = Y2260_pgtype337;
	Y2260_gen_type [338] = Y2260_pgtype338;
	Y2260_gen_type [339] = Y2260_pgtype339;
	Y2260_gen_type [340] = Y2260_pgtype340;
	Y2260_gen_type [341] = Y2260_pgtype341;
	Y2260_gen_type [342] = Y2260_pgtype342;
	Y2260_gen_type [343] = Y2260_pgtype343;
	Y2260_gen_type [344] = Y2260_pgtype344;
	Y2260_gen_type [345] = Y2260_pgtype345;
	Y2260_gen_type [346] = Y2260_pgtype346;
	Y2260_gen_type [347] = Y2260_pgtype347;
	Y2260_gen_type [348] = Y2260_pgtype348;
	Y2260_gen_type [349] = Y2260_pgtype349;
	Y2260_gen_type [350] = Y2260_pgtype350;
	Y2260_gen_type [351] = Y2260_pgtype351;
	Y2260_gen_type [352] = Y2260_pgtype352;
	Y2260_gen_type [353] = Y2260_pgtype353;
	Y2260_gen_type [354] = Y2260_pgtype354;
	Y2260_gen_type [355] = Y2260_pgtype355;
	Y2260_gen_type [356] = Y2260_pgtype356;
	Y2260_gen_type [357] = Y2260_pgtype357;
	Y2260_gen_type [358] = Y2260_pgtype358;
	Y2260_gen_type [359] = Y2260_pgtype359;
	Y2260_gen_type [360] = Y2260_pgtype360;
	Y2260_gen_type [361] = Y2260_pgtype361;
	Y2260_gen_type [362] = Y2260_pgtype362;
	Y2260_gen_type [363] = Y2260_pgtype363;
	Y2260_gen_type [364] = Y2260_pgtype364;
	Y2260_gen_type [365] = Y2260_pgtype365;
	Y2260_gen_type [366] = Y2260_pgtype366;
	Y2260_gen_type [367] = Y2260_pgtype367;
	Y2260_gen_type [368] = Y2260_pgtype368;
	Y2260_gen_type [369] = Y2260_pgtype369;
	Y2260_gen_type [370] = Y2260_pgtype370;
	Y2260_gen_type [371] = Y2260_pgtype371;
	Y2260_gen_type [372] = Y2260_pgtype372;
	Y2260_gen_type [373] = Y2260_pgtype373;
	Y2260_gen_type [374] = Y2260_pgtype374;
	Y2260_gen_type [375] = Y2260_pgtype375;
	Y2260_gen_type [376] = Y2260_pgtype376;
	Y2260_gen_type [377] = Y2260_pgtype377;
	Y2260_gen_type [378] = Y2260_pgtype378;
	Y2260_gen_type [379] = Y2260_pgtype379;
	Y2260_gen_type [380] = Y2260_pgtype380;
	Y2260_gen_type [381] = Y2260_pgtype381;
	Y2260_gen_type [382] = Y2260_pgtype382;
	Y2260_gen_type [383] = Y2260_pgtype383;
	Y2260_gen_type [384] = Y2260_pgtype384;
	Y2260_gen_type [385] = Y2260_pgtype385;
	Y2260_gen_type [395] = Y2260_pgtype386;
	Y2260_gen_type [396] = Y2260_pgtype387;
	Y2260_gen_type [397] = Y2260_pgtype388;
	Y2260_gen_type [398] = Y2260_pgtype389;
	Y2260_gen_type [399] = Y2260_pgtype390;
	Y2260_gen_type [400] = Y2260_pgtype391;
	Y2260_gen_type [401] = Y2260_pgtype392;
	Y2260_gen_type [402] = Y2260_pgtype393;
	Y2260_gen_type [403] = Y2260_pgtype394;
	Y2260_gen_type [404] = Y2260_pgtype395;
	Y2260_gen_type [405] = Y2260_pgtype396;
	Y2260_gen_type [406] = Y2260_pgtype397;
	Y2260_gen_type [407] = Y2260_pgtype398;
	Y2260_gen_type [408] = Y2260_pgtype399;
	Y2260_gen_type [409] = Y2260_pgtype400;
	Y2260_gen_type [458] = Y2260_pgtype401;
	Y2260_gen_type [460] = Y2260_pgtype402;
	Y2260_gen_type [461] = Y2260_pgtype403;
	Y2260_gen_type [462] = Y2260_pgtype404;
	Y2260_gen_type [463] = Y2260_pgtype405;
	Y2260_gen_type [464] = Y2260_pgtype406;
	Y2260_gen_type [465] = Y2260_pgtype407;
	Y2260_gen_type [466] = Y2260_pgtype408;
	Y2260_gen_type [467] = Y2260_pgtype409;
	Y2260_gen_type [468] = Y2260_pgtype410;
	Y2260_gen_type [469] = Y2260_pgtype411;
	Y2260_gen_type [470] = Y2260_pgtype412;
	Y2260_gen_type [471] = Y2260_pgtype413;
	Y2260_gen_type [472] = Y2260_pgtype414;
	Y2260_gen_type [473] = Y2260_pgtype415;
	Y2260_gen_type [474] = Y2260_pgtype416;
	Y2260_gen_type [475] = Y2260_pgtype417;
	Y2260_gen_type [476] = Y2260_pgtype418;
	Y2260_gen_type [477] = Y2260_pgtype419;
	Y2260_gen_type [478] = Y2260_pgtype420;
	Y2260_gen_type [479] = Y2260_pgtype421;
	Y2260_gen_type [480] = Y2260_pgtype422;
	Y2260_gen_type [481] = Y2260_pgtype423;
	Y2260_gen_type [482] = Y2260_pgtype424;
	Y2260_gen_type [498] = Y2260_pgtype425;
	Y2260_gen_type [499] = Y2260_pgtype426;
	Y2260_gen_type [500] = Y2260_pgtype427;
	Y2260_gen_type [502] = Y2260_pgtype428;
	Y2260_gen_type [503] = Y2260_pgtype429;
	Y2260_gen_type [504] = Y2260_pgtype430;
	Y2260_gen_type [505] = Y2260_pgtype431;
	Y2260_gen_type [506] = Y2260_pgtype432;
	Y2260_gen_type [507] = Y2260_pgtype433;
	Y2260_gen_type [508] = Y2260_pgtype434;
	Y2260_gen_type [509] = Y2260_pgtype435;
	Y2260_gen_type [510] = Y2260_pgtype436;
	Y2260_gen_type [511] = Y2260_pgtype437;
	Y2260_gen_type [512] = Y2260_pgtype438;
	Y2260_gen_type [513] = Y2260_pgtype439;
	Y2260_gen_type [514] = Y2260_pgtype440;
	Y2260_gen_type [515] = Y2260_pgtype441;
	Y2260_gen_type [516] = Y2260_pgtype442;
	Y2260_gen_type [517] = Y2260_pgtype443;
	Y2260_gen_type [518] = Y2260_pgtype444;
	Y2260_gen_type [519] = Y2260_pgtype445;
	Y2260_gen_type [520] = Y2260_pgtype446;
	Y2260_gen_type [521] = Y2260_pgtype447;
	Y2260_gen_type [522] = Y2260_pgtype448;
	Y2260_gen_type [523] = Y2260_pgtype449;
	Y2260_gen_type [524] = Y2260_pgtype450;
	Y2260_gen_type [525] = Y2260_pgtype451;
	Y2260_gen_type [526] = Y2260_pgtype452;
	Y2260_gen_type [527] = Y2260_pgtype453;
	Y2260_gen_type [528] = Y2260_pgtype454;
	Y2260_gen_type [529] = Y2260_pgtype455;
	Y2260_gen_type [530] = Y2260_pgtype456;
	Y2260_gen_type [531] = Y2260_pgtype457;
	Y2260_gen_type [532] = Y2260_pgtype458;
	Y2260_gen_type [533] = Y2260_pgtype459;
	Y2260_gen_type [534] = Y2260_pgtype460;
	Y2260_gen_type [535] = Y2260_pgtype461;
	Y2260_gen_type [536] = Y2260_pgtype462;
	Y2260_gen_type [537] = Y2260_pgtype463;
	Y2260_gen_type [538] = Y2260_pgtype464;
	Y2260_gen_type [539] = Y2260_pgtype465;
	Y2260_gen_type [540] = Y2260_pgtype466;
	Y2260_gen_type [541] = Y2260_pgtype467;
	Y2260_gen_type [542] = Y2260_pgtype468;
	Y2260_gen_type [543] = Y2260_pgtype469;
	Y2260_gen_type [544] = Y2260_pgtype470;
	Y2260_gen_type [545] = Y2260_pgtype471;
	Y2260_gen_type [546] = Y2260_pgtype472;
	Y2260_gen_type [547] = Y2260_pgtype473;
	Y2260_gen_type [548] = Y2260_pgtype474;
	Y2260_gen_type [549] = Y2260_pgtype475;
	Y2260_gen_type [550] = Y2260_pgtype476;
	Y2260_gen_type [551] = Y2260_pgtype477;
	Y2260_gen_type [552] = Y2260_pgtype478;
	Y2260_gen_type [553] = Y2260_pgtype479;
	Y2260_gen_type [554] = Y2260_pgtype480;
	Y2260_gen_type [555] = Y2260_pgtype481;
	Y2260_gen_type [556] = Y2260_pgtype482;
	Y2260_gen_type [557] = Y2260_pgtype483;
	Y2260_gen_type [558] = Y2260_pgtype484;
	Y2260_gen_type [559] = Y2260_pgtype485;
	Y2260_gen_type [560] = Y2260_pgtype486;
	Y2260_gen_type [561] = Y2260_pgtype487;
	Y2260_gen_type [562] = Y2260_pgtype488;
	Y2260_gen_type [563] = Y2260_pgtype489;
	Y2260_gen_type [564] = Y2260_pgtype490;
	Y2260_gen_type [565] = Y2260_pgtype491;
	Y2260_gen_type [566] = Y2260_pgtype492;
	Y2260_gen_type [567] = Y2260_pgtype493;
	Y2260_gen_type [568] = Y2260_pgtype494;
	Y2260_gen_type [569] = Y2260_pgtype495;
	Y2260_gen_type [570] = Y2260_pgtype496;
	Y2260_gen_type [571] = Y2260_pgtype497;
	Y2260_gen_type [572] = Y2260_pgtype498;
	Y2260_gen_type [573] = Y2260_pgtype499;
	Y2260_gen_type [574] = Y2260_pgtype500;
	Y2260_gen_type [575] = Y2260_pgtype501;
	Y2260_gen_type [576] = Y2260_pgtype502;
	Y2260_gen_type [577] = Y2260_pgtype503;
	Y2260_gen_type [578] = Y2260_pgtype504;
	Y2260_gen_type [579] = Y2260_pgtype505;
	Y2260_gen_type [580] = Y2260_pgtype506;
	Y2260_gen_type [581] = Y2260_pgtype507;
	Y2260_gen_type [582] = Y2260_pgtype508;
	Y2260_gen_type [583] = Y2260_pgtype509;
	Y2260_gen_type [584] = Y2260_pgtype510;
	Y2260_gen_type [585] = Y2260_pgtype511;
	Y2260_gen_type [586] = Y2260_pgtype512;
	Y2260_gen_type [587] = Y2260_pgtype513;
	Y2260_gen_type [588] = Y2260_pgtype514;
	Y2260_gen_type [589] = Y2260_pgtype515;
	Y2260_gen_type [590] = Y2260_pgtype516;
	Y2260_gen_type [591] = Y2260_pgtype517;
	Y2260_gen_type [592] = Y2260_pgtype518;
	Y2260_gen_type [593] = Y2260_pgtype519;
	Y2260_gen_type [594] = Y2260_pgtype520;
	Y2260_gen_type [595] = Y2260_pgtype521;
	Y2260_gen_type [596] = Y2260_pgtype522;
	Y2260_gen_type [597] = Y2260_pgtype523;
	Y2260_gen_type [598] = Y2260_pgtype524;
	Y2260_gen_type [599] = Y2260_pgtype525;
	Y2260_gen_type [600] = Y2260_pgtype526;
	Y2260_gen_type [601] = Y2260_pgtype527;
	Y2260_gen_type [602] = Y2260_pgtype528;
	Y2260_gen_type [603] = Y2260_pgtype529;
	Y2260_gen_type [604] = Y2260_pgtype530;
	Y2260_gen_type [605] = Y2260_pgtype531;
	Y2260_gen_type [606] = Y2260_pgtype532;
	Y2260_gen_type [607] = Y2260_pgtype533;
	Y2260_gen_type [608] = Y2260_pgtype534;
	Y2260_gen_type [609] = Y2260_pgtype535;
	Y2260_gen_type [610] = Y2260_pgtype536;
	Y2260_gen_type [611] = Y2260_pgtype537;
	Y2260_gen_type [617] = Y2260_pgtype538;
	Y2260_gen_type [618] = Y2260_pgtype539;
	Y2260_gen_type [619] = Y2260_pgtype540;
	Y2260_gen_type [620] = Y2260_pgtype541;
	Y2260_gen_type [621] = Y2260_pgtype542;
	Y2260_gen_type [626] = Y2260_pgtype543;
	Y2260_gen_type [627] = Y2260_pgtype544;
	Y2260_gen_type [628] = Y2260_pgtype545;
	Y2260_gen_type [663] = Y2260_pgtype546;
	Y2260_gen_type [742] = Y2260_pgtype547;
	Y2260_gen_type [744] = Y2260_pgtype548;
	Y2260_gen_type [745] = Y2260_pgtype549;
	Y2260_gen_type [746] = Y2260_pgtype550;
	Y2260_gen_type [748] = Y2260_pgtype551;
	Y2260_gen_type [749] = Y2260_pgtype552;
	Y2260_gen_type [750] = Y2260_pgtype553;
	Y2260[15] = 907;
	{long i; for (i = 21; i < 23; i++) Y2260[i] = 911;};
	Y2260[307] = 859;
	Y2260[467] = 0;
	Y2260[498] = 859;
	Y2260[499] = 835;
	Y2260[500] = 859;
	Y2260[580] = 835;
	Y2260[581] = 838;
	{long i; for (i = 626; i < 629; i++) Y2260[i] = 838;};
	Y2260[663] = 0;
	Y2260[742] = 838;
	Y2260[744] = 838;
	{long i; for (i = 745; i < 747; i++) Y2260[i] = 835;};
	Y2260[748] = 835;
	{long i; for (i = 749; i < 751; i++) Y2260[i] = 838;};
}

char *(*R2305[444])();
void R2305_init () {
	R2305[0] = (char *(*)()) F471_3247_2305_2;
	R2305[1] = (char *(*)()) F472_3296;
	R2305[2] = (char *(*)()) F473_3296_2305_2;
	R2305[3] = (char *(*)()) F474_3296_2305_2;
	R2305[4] = (char *(*)()) F475_3296_2305_2;
	R2305[5] = (char *(*)()) F476_3296_2305_2;
	R2305[6] = (char *(*)()) F477_3296_2305_2;
	R2305[7] = (char *(*)()) F478_3296_2305_2;
	R2305[8] = (char *(*)()) F479_3296_2305_2;
	R2305[9] = (char *(*)()) F480_3296_2305_2;
	R2305[10] = (char *(*)()) F481_3296_2305_2;
	R2305[11] = (char *(*)()) F482_3296_2305_2;
	R2305[12] = (char *(*)()) F483_3296_2305_2;
	R2305[13] = (char *(*)()) F484_3296_2305_2;
	R2305[14] = (char *(*)()) F485_3296_2305_2;
	R2305[15] = (char *(*)()) F486_3296_2305_2;
	R2305[76] = (char *(*)()) F487_3359;
	R2305[77] = (char *(*)()) F488_3359_2305_2;
	R2305[78] = (char *(*)()) F491_3359_2305_2;
	R2305[151] = (char *(*)()) F622_3994;
	R2305[153] = (char *(*)()) F624_4035;
	R2305[154] = (char *(*)()) F625_4035;
	R2305[155] = (char *(*)()) F626_4035_2305_2;
	R2305[156] = (char *(*)()) F627_4035_2305_2;
	R2305[157] = (char *(*)()) F628_4035_2305_2;
	R2305[158] = (char *(*)()) F624_4035;
	R2305[159] = (char *(*)()) F626_4035_2305_2;
	R2305[160] = (char *(*)()) F624_4035;
	R2305[161] = (char *(*)()) F632_4186;
	R2305[162] = (char *(*)()) F633_4186_2305_2;
	R2305[163] = (char *(*)()) F634_4186_2305_2;
	R2305[164] = (char *(*)()) F635_4186_2305_2;
	R2305[165] = (char *(*)()) F636_4186_2305_2;
	R2305[166] = (char *(*)()) F637_4186_2305_2;
	R2305[167] = (char *(*)()) F638_4186_2305_2;
	R2305[168] = (char *(*)()) F639_4186_2305_2;
	R2305[169] = (char *(*)()) F640_4186_2305_2;
	R2305[170] = (char *(*)()) F641_4186_2305_2;
	R2305[171] = (char *(*)()) F642_4186_2305_2;
	R2305[172] = (char *(*)()) F643_4186_2305_2;
	R2305[173] = (char *(*)()) F644_4186_2305_2;
	R2305[174] = (char *(*)()) F645_4186_2305_2;
	R2305[175] = (char *(*)()) F646_4186_2305_2;
	R2305[191] = (char *(*)()) F662_4346_2305_2;
	R2305[193] = (char *(*)()) F664_4379_2305_2;
	{long i; for (i = 320; i < 322; i++) R2305[i] = (char *(*)()) F404_2703_2305_2;}
	R2305[437] = (char *(*)()) F906_6783_2305_2;
	R2305[439] = (char *(*)()) F909_7026_2305_2;
	R2305[443] = (char *(*)()) F404_2703_2305_2;
}
static EIF_BOOLEAN F471_3247_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F471_3247(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F473_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F473_3296(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F474_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F474_3296(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F475_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F475_3296(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F476_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F476_3296(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F477_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F477_3296(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F478_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F478_3296(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F479_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F479_3296(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F480_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F480_3296(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F481_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F481_3296(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F482_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F482_3296(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F483_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F483_3296(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F484_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F484_3296(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F485_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F485_3296(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F486_3296_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F486_3296(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F488_3359_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F488_3359(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F491_3359_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F491_3359(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F626_4035_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F626_4035(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F627_4035_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F627_4035(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F628_4035_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F628_4035(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F633_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F633_4186(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F634_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F634_4186(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F635_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F635_4186(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F636_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_4186(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F637_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F637_4186(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F638_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F638_4186(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F639_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F639_4186(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F640_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F640_4186(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F641_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F641_4186(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F642_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F642_4186(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F643_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F643_4186(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F644_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F644_4186(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F645_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F645_4186(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F646_4186_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F646_4186(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F662_4346_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F662_4346(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F664_4379_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F664_4379(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F404_2703_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F404_2703(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F906_6783_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F906_6783(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F909_7026_2305_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F909_7026(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2306[444])();
void R2306_init () {
	R2306[0] = (char *(*)()) F318_2638;
	R2306[1] = (char *(*)()) F316_2638;
	R2306[2] = (char *(*)()) F318_2638;
	R2306[3] = (char *(*)()) F319_2638;
	R2306[4] = (char *(*)()) F320_2638;
	R2306[5] = (char *(*)()) F321_2638;
	R2306[6] = (char *(*)()) F317_2638;
	R2306[7] = (char *(*)()) F322_2638;
	R2306[8] = (char *(*)()) F323_2638;
	R2306[9] = (char *(*)()) F324_2638;
	R2306[10] = (char *(*)()) F326_2638;
	R2306[11] = (char *(*)()) F327_2638;
	R2306[12] = (char *(*)()) F328_2638;
	R2306[13] = (char *(*)()) F329_2638;
	R2306[14] = (char *(*)()) F330_2638;
	R2306[15] = (char *(*)()) F325_2638;
	R2306[76] = (char *(*)()) F316_2638;
	R2306[77] = (char *(*)()) F318_2638;
	R2306[78] = (char *(*)()) F321_2638;
	R2306[151] = (char *(*)()) F622_4001;
	{long i; for (i = 153; i < 155; i++) R2306[i] = (char *(*)()) F316_2638;}
	{long i; for (i = 155; i < 157; i++) R2306[i] = (char *(*)()) F318_2638;}
	R2306[157] = (char *(*)()) F319_2638;
	R2306[158] = (char *(*)()) F316_2638;
	R2306[159] = (char *(*)()) F318_2638;
	{long i; for (i = 160; i < 162; i++) R2306[i] = (char *(*)()) F316_2638;}
	R2306[162] = (char *(*)()) F318_2638;
	R2306[163] = (char *(*)()) F319_2638;
	R2306[164] = (char *(*)()) F320_2638;
	R2306[165] = (char *(*)()) F321_2638;
	R2306[166] = (char *(*)()) F317_2638;
	R2306[167] = (char *(*)()) F322_2638;
	R2306[168] = (char *(*)()) F323_2638;
	R2306[169] = (char *(*)()) F324_2638;
	R2306[170] = (char *(*)()) F326_2638;
	R2306[171] = (char *(*)()) F327_2638;
	R2306[172] = (char *(*)()) F328_2638;
	R2306[173] = (char *(*)()) F329_2638;
	R2306[174] = (char *(*)()) F330_2638;
	R2306[175] = (char *(*)()) F325_2638;
	R2306[191] = (char *(*)()) F314_2634;
	R2306[193] = (char *(*)()) F314_2634;
	{long i; for (i = 320; i < 322; i++) R2306[i] = (char *(*)()) F325_2638;}
	R2306[437] = (char *(*)()) F325_2638;
	R2306[439] = (char *(*)()) F317_2638;
	R2306[443] = (char *(*)()) F914_7219;
}

char *(*R2309[444])();
void R2309_init () {
	R2309[0] = (char *(*)()) F217_2581;
	R2309[1] = (char *(*)()) F187_2563;
	R2309[2] = (char *(*)()) F189_2563;
	R2309[3] = (char *(*)()) F190_2563;
	R2309[4] = (char *(*)()) F191_2563;
	R2309[5] = (char *(*)()) F192_2563;
	R2309[6] = (char *(*)()) F188_2563;
	R2309[7] = (char *(*)()) F193_2563;
	R2309[8] = (char *(*)()) F194_2563;
	R2309[9] = (char *(*)()) F195_2563;
	R2309[10] = (char *(*)()) F197_2563;
	R2309[11] = (char *(*)()) F198_2563;
	R2309[12] = (char *(*)()) F199_2563;
	R2309[13] = (char *(*)()) F200_2563;
	R2309[14] = (char *(*)()) F201_2563;
	R2309[15] = (char *(*)()) F196_2563;
	R2309[76] = (char *(*)()) F187_2563;
	R2309[77] = (char *(*)()) F189_2563;
	R2309[78] = (char *(*)()) F192_2563;
	R2309[151] = (char *(*)()) F187_2563;
	{long i; for (i = 153; i < 155; i++) R2309[i] = (char *(*)()) F187_2563;}
	{long i; for (i = 155; i < 157; i++) R2309[i] = (char *(*)()) F189_2563;}
	R2309[157] = (char *(*)()) F190_2563;
	R2309[158] = (char *(*)()) F187_2563;
	R2309[159] = (char *(*)()) F189_2563;
	{long i; for (i = 160; i < 162; i++) R2309[i] = (char *(*)()) F187_2563;}
	R2309[162] = (char *(*)()) F189_2563;
	R2309[163] = (char *(*)()) F190_2563;
	R2309[164] = (char *(*)()) F191_2563;
	R2309[165] = (char *(*)()) F192_2563;
	R2309[166] = (char *(*)()) F188_2563;
	R2309[167] = (char *(*)()) F193_2563;
	R2309[168] = (char *(*)()) F194_2563;
	R2309[169] = (char *(*)()) F195_2563;
	R2309[170] = (char *(*)()) F197_2563;
	R2309[171] = (char *(*)()) F198_2563;
	R2309[172] = (char *(*)()) F199_2563;
	R2309[173] = (char *(*)()) F200_2563;
	R2309[174] = (char *(*)()) F201_2563;
	R2309[175] = (char *(*)()) F196_2563;
	R2309[191] = (char *(*)()) F189_2563;
	R2309[193] = (char *(*)()) F189_2563;
	{long i; for (i = 320; i < 322; i++) R2309[i] = (char *(*)()) F196_2563;}
	R2309[437] = (char *(*)()) F908_6848;
	R2309[439] = (char *(*)()) F910_7057;
	R2309[443] = (char *(*)()) F196_2563;
}

char *(*R2310[444])();
void R2310_init () {
	R2310[0] = (char *(*)()) F189_2564;
	R2310[1] = (char *(*)()) F187_2564;
	R2310[2] = (char *(*)()) F189_2564;
	R2310[3] = (char *(*)()) F190_2564;
	R2310[4] = (char *(*)()) F191_2564;
	R2310[5] = (char *(*)()) F192_2564;
	R2310[6] = (char *(*)()) F188_2564;
	R2310[7] = (char *(*)()) F193_2564;
	R2310[8] = (char *(*)()) F194_2564;
	R2310[9] = (char *(*)()) F195_2564;
	R2310[10] = (char *(*)()) F197_2564;
	R2310[11] = (char *(*)()) F198_2564;
	R2310[12] = (char *(*)()) F199_2564;
	R2310[13] = (char *(*)()) F200_2564;
	R2310[14] = (char *(*)()) F201_2564;
	R2310[15] = (char *(*)()) F196_2564;
	R2310[76] = (char *(*)()) F187_2564;
	R2310[77] = (char *(*)()) F189_2564;
	R2310[78] = (char *(*)()) F192_2564;
	R2310[151] = (char *(*)()) F187_2564;
	{long i; for (i = 153; i < 155; i++) R2310[i] = (char *(*)()) F187_2564;}
	{long i; for (i = 155; i < 157; i++) R2310[i] = (char *(*)()) F189_2564;}
	R2310[157] = (char *(*)()) F190_2564;
	R2310[158] = (char *(*)()) F187_2564;
	R2310[159] = (char *(*)()) F189_2564;
	{long i; for (i = 160; i < 162; i++) R2310[i] = (char *(*)()) F187_2564;}
	R2310[162] = (char *(*)()) F189_2564;
	R2310[163] = (char *(*)()) F190_2564;
	R2310[164] = (char *(*)()) F191_2564;
	R2310[165] = (char *(*)()) F192_2564;
	R2310[166] = (char *(*)()) F188_2564;
	R2310[167] = (char *(*)()) F193_2564;
	R2310[168] = (char *(*)()) F194_2564;
	R2310[169] = (char *(*)()) F195_2564;
	R2310[170] = (char *(*)()) F197_2564;
	R2310[171] = (char *(*)()) F198_2564;
	R2310[172] = (char *(*)()) F199_2564;
	R2310[173] = (char *(*)()) F200_2564;
	R2310[174] = (char *(*)()) F201_2564;
	R2310[175] = (char *(*)()) F196_2564;
	R2310[191] = (char *(*)()) F189_2564;
	R2310[193] = (char *(*)()) F189_2564;
	{long i; for (i = 320; i < 322; i++) R2310[i] = (char *(*)()) F196_2564;}
	R2310[437] = (char *(*)()) F196_2564;
	R2310[439] = (char *(*)()) F188_2564;
	R2310[443] = (char *(*)()) F196_2564;
}

char *(*R2312[444])();
void R2312_init () {
	R2312[0] = (char *(*)()) F471_3266;
	R2312[1] = (char *(*)()) F472_3340;
	R2312[2] = (char *(*)()) F473_3340;
	R2312[3] = (char *(*)()) F474_3340;
	R2312[4] = (char *(*)()) F475_3340;
	R2312[5] = (char *(*)()) F476_3340;
	R2312[6] = (char *(*)()) F477_3340;
	R2312[7] = (char *(*)()) F478_3340;
	R2312[8] = (char *(*)()) F479_3340;
	R2312[9] = (char *(*)()) F480_3340;
	R2312[10] = (char *(*)()) F481_3340;
	R2312[11] = (char *(*)()) F482_3340;
	R2312[12] = (char *(*)()) F483_3340;
	R2312[13] = (char *(*)()) F484_3340;
	R2312[14] = (char *(*)()) F485_3340;
	R2312[15] = (char *(*)()) F486_3340;
	R2312[76] = (char *(*)()) F395_2718;
	R2312[77] = (char *(*)()) F397_2718;
	R2312[78] = (char *(*)()) F400_2718;
	R2312[151] = (char *(*)()) F622_4015;
	R2312[153] = (char *(*)()) F624_4081;
	R2312[154] = (char *(*)()) F625_4081;
	R2312[155] = (char *(*)()) F626_4081;
	R2312[156] = (char *(*)()) F627_4081;
	R2312[157] = (char *(*)()) F628_4081;
	R2312[158] = (char *(*)()) F624_4081;
	R2312[159] = (char *(*)()) F626_4081;
	R2312[160] = (char *(*)()) F624_4081;
	R2312[161] = (char *(*)()) F395_2718;
	R2312[162] = (char *(*)()) F397_2718;
	R2312[163] = (char *(*)()) F398_2718;
	R2312[164] = (char *(*)()) F399_2718;
	R2312[165] = (char *(*)()) F400_2718;
	R2312[166] = (char *(*)()) F396_2718;
	R2312[167] = (char *(*)()) F401_2718;
	R2312[168] = (char *(*)()) F402_2718;
	R2312[169] = (char *(*)()) F403_2718;
	R2312[170] = (char *(*)()) F405_2718;
	R2312[171] = (char *(*)()) F406_2718;
	R2312[172] = (char *(*)()) F407_2718;
	R2312[173] = (char *(*)()) F408_2718;
	R2312[174] = (char *(*)()) F409_2718;
	R2312[175] = (char *(*)()) F404_2718;
	R2312[191] = (char *(*)()) F440_2869;
	R2312[193] = (char *(*)()) F440_2869;
	{long i; for (i = 320; i < 322; i++) R2312[i] = (char *(*)()) F404_2718;}
	R2312[437] = (char *(*)()) F908_6918;
	R2312[439] = (char *(*)()) F910_7127;
	R2312[443] = (char *(*)()) F404_2718;
}

char *(*R2313[444])();
void R2313_init () {
	R2313[0] = (char *(*)()) F189_2567;
	R2313[1] = (char *(*)()) F187_2567;
	R2313[2] = (char *(*)()) F189_2567;
	R2313[3] = (char *(*)()) F190_2567;
	R2313[4] = (char *(*)()) F191_2567;
	R2313[5] = (char *(*)()) F192_2567;
	R2313[6] = (char *(*)()) F188_2567;
	R2313[7] = (char *(*)()) F193_2567;
	R2313[8] = (char *(*)()) F194_2567;
	R2313[9] = (char *(*)()) F195_2567;
	R2313[10] = (char *(*)()) F197_2567;
	R2313[11] = (char *(*)()) F198_2567;
	R2313[12] = (char *(*)()) F199_2567;
	R2313[13] = (char *(*)()) F200_2567;
	R2313[14] = (char *(*)()) F201_2567;
	R2313[15] = (char *(*)()) F196_2567;
	R2313[76] = (char *(*)()) F187_2567;
	R2313[77] = (char *(*)()) F189_2567;
	R2313[78] = (char *(*)()) F192_2567;
	R2313[151] = (char *(*)()) F187_2567;
	{long i; for (i = 153; i < 155; i++) R2313[i] = (char *(*)()) F187_2567;}
	{long i; for (i = 155; i < 157; i++) R2313[i] = (char *(*)()) F189_2567;}
	R2313[157] = (char *(*)()) F190_2567;
	R2313[158] = (char *(*)()) F187_2567;
	R2313[159] = (char *(*)()) F189_2567;
	{long i; for (i = 160; i < 162; i++) R2313[i] = (char *(*)()) F187_2567;}
	R2313[162] = (char *(*)()) F189_2567;
	R2313[163] = (char *(*)()) F190_2567;
	R2313[164] = (char *(*)()) F191_2567;
	R2313[165] = (char *(*)()) F192_2567;
	R2313[166] = (char *(*)()) F188_2567;
	R2313[167] = (char *(*)()) F193_2567;
	R2313[168] = (char *(*)()) F194_2567;
	R2313[169] = (char *(*)()) F195_2567;
	R2313[170] = (char *(*)()) F197_2567;
	R2313[171] = (char *(*)()) F198_2567;
	R2313[172] = (char *(*)()) F199_2567;
	R2313[173] = (char *(*)()) F200_2567;
	R2313[174] = (char *(*)()) F201_2567;
	R2313[175] = (char *(*)()) F196_2567;
	R2313[191] = (char *(*)()) F189_2567;
	R2313[193] = (char *(*)()) F189_2567;
	{long i; for (i = 320; i < 322; i++) R2313[i] = (char *(*)()) F196_2567;}
	R2313[437] = (char *(*)()) F196_2567;
	R2313[439] = (char *(*)()) F188_2567;
	R2313[443] = (char *(*)()) F196_2567;
}

char *(*R2314[444])();
void R2314_init () {
	R2314[0] = (char *(*)()) F471_3255;
	R2314[1] = (char *(*)()) F472_3309;
	R2314[2] = (char *(*)()) F473_3309;
	R2314[3] = (char *(*)()) F474_3309;
	R2314[4] = (char *(*)()) F475_3309;
	R2314[5] = (char *(*)()) F476_3309;
	R2314[6] = (char *(*)()) F477_3309;
	R2314[7] = (char *(*)()) F478_3309;
	R2314[8] = (char *(*)()) F479_3309;
	R2314[9] = (char *(*)()) F480_3309;
	R2314[10] = (char *(*)()) F481_3309;
	R2314[11] = (char *(*)()) F482_3309;
	R2314[12] = (char *(*)()) F483_3309;
	R2314[13] = (char *(*)()) F484_3309;
	R2314[14] = (char *(*)()) F485_3309;
	R2314[15] = (char *(*)()) F486_3309;
	R2314[76] = (char *(*)()) F502_3418;
	R2314[77] = (char *(*)()) F503_3418;
	R2314[78] = (char *(*)()) F506_3418;
	R2314[151] = (char *(*)()) F622_4003;
	R2314[153] = (char *(*)()) F624_4052;
	R2314[154] = (char *(*)()) F625_4052;
	R2314[155] = (char *(*)()) F626_4052;
	R2314[156] = (char *(*)()) F627_4052;
	R2314[157] = (char *(*)()) F628_4052;
	R2314[158] = (char *(*)()) F624_4052;
	R2314[159] = (char *(*)()) F626_4052;
	R2314[160] = (char *(*)()) F624_4052;
	R2314[161] = (char *(*)()) F502_3418;
	R2314[162] = (char *(*)()) F503_3418;
	R2314[163] = (char *(*)()) F504_3418;
	R2314[164] = (char *(*)()) F505_3418;
	R2314[165] = (char *(*)()) F506_3418;
	R2314[166] = (char *(*)()) F507_3418;
	R2314[167] = (char *(*)()) F508_3418;
	R2314[168] = (char *(*)()) F509_3418;
	R2314[169] = (char *(*)()) F510_3418;
	R2314[170] = (char *(*)()) F511_3418;
	R2314[171] = (char *(*)()) F512_3418;
	R2314[172] = (char *(*)()) F513_3418;
	R2314[173] = (char *(*)()) F514_3418;
	R2314[174] = (char *(*)()) F515_3418;
	R2314[175] = (char *(*)()) F516_3418;
	R2314[191] = (char *(*)()) F440_2860;
	R2314[193] = (char *(*)()) F440_2860;
	{long i; for (i = 320; i < 322; i++) R2314[i] = (char *(*)()) F790_5077;}
	R2314[437] = (char *(*)()) F908_6847;
	R2314[439] = (char *(*)()) F910_7056;
	R2314[443] = (char *(*)()) F790_5077;
}

char *(*R2315[444])();
void R2315_init () {
	R2315[0] = (char *(*)()) F471_3256;
	R2315[1] = (char *(*)()) F472_3310;
	R2315[2] = (char *(*)()) F473_3310;
	R2315[3] = (char *(*)()) F474_3310;
	R2315[4] = (char *(*)()) F475_3310;
	R2315[5] = (char *(*)()) F476_3310;
	R2315[6] = (char *(*)()) F477_3310;
	R2315[7] = (char *(*)()) F478_3310;
	R2315[8] = (char *(*)()) F479_3310;
	R2315[9] = (char *(*)()) F480_3310;
	R2315[10] = (char *(*)()) F481_3310;
	R2315[11] = (char *(*)()) F482_3310;
	R2315[12] = (char *(*)()) F483_3310;
	R2315[13] = (char *(*)()) F484_3310;
	R2315[14] = (char *(*)()) F485_3310;
	R2315[15] = (char *(*)()) F486_3310;
	R2315[76] = (char *(*)()) F252_2622;
	R2315[77] = (char *(*)()) F254_2622;
	R2315[78] = (char *(*)()) F257_2622;
	R2315[151] = (char *(*)()) F622_4004;
	R2315[153] = (char *(*)()) F251_2622;
	R2315[154] = (char *(*)()) F252_2622;
	R2315[155] = (char *(*)()) F253_2622;
	R2315[156] = (char *(*)()) F254_2622;
	R2315[157] = (char *(*)()) F261_2622;
	R2315[158] = (char *(*)()) F251_2622;
	R2315[159] = (char *(*)()) F253_2622;
	R2315[160] = (char *(*)()) F251_2622;
	R2315[161] = (char *(*)()) F632_4199;
	R2315[162] = (char *(*)()) F633_4199;
	R2315[163] = (char *(*)()) F634_4199;
	R2315[164] = (char *(*)()) F635_4199;
	R2315[165] = (char *(*)()) F636_4199;
	R2315[166] = (char *(*)()) F637_4199;
	R2315[167] = (char *(*)()) F638_4199;
	R2315[168] = (char *(*)()) F639_4199;
	R2315[169] = (char *(*)()) F640_4199;
	R2315[170] = (char *(*)()) F641_4199;
	R2315[171] = (char *(*)()) F642_4199;
	R2315[172] = (char *(*)()) F643_4199;
	R2315[173] = (char *(*)()) F644_4199;
	R2315[174] = (char *(*)()) F645_4199;
	R2315[175] = (char *(*)()) F646_4199;
	R2315[191] = (char *(*)()) F440_2861;
	R2315[193] = (char *(*)()) F440_2861;
	{long i; for (i = 320; i < 322; i++) R2315[i] = (char *(*)()) F790_5081;}
	R2315[437] = (char *(*)()) F268_2622;
	R2315[439] = (char *(*)()) F258_2622;
	R2315[443] = (char *(*)()) F790_5081;
}

char *(*R2316[444])();
void R2316_init () {
	R2316[0] = (char *(*)()) F204_2570_2316_2;
	R2316[1] = (char *(*)()) F202_2570;
	R2316[2] = (char *(*)()) F204_2570_2316_2;
	R2316[3] = (char *(*)()) F205_2570_2316_2;
	R2316[4] = (char *(*)()) F206_2570_2316_2;
	R2316[5] = (char *(*)()) F207_2570_2316_2;
	R2316[6] = (char *(*)()) F203_2570_2316_2;
	R2316[7] = (char *(*)()) F208_2570_2316_2;
	R2316[8] = (char *(*)()) F209_2570_2316_2;
	R2316[9] = (char *(*)()) F210_2570_2316_2;
	R2316[10] = (char *(*)()) F212_2570_2316_2;
	R2316[11] = (char *(*)()) F213_2570_2316_2;
	R2316[12] = (char *(*)()) F214_2570_2316_2;
	R2316[13] = (char *(*)()) F215_2570_2316_2;
	R2316[14] = (char *(*)()) F216_2570_2316_2;
	R2316[15] = (char *(*)()) F211_2570_2316_2;
	R2316[76] = (char *(*)()) F547_3635;
	R2316[77] = (char *(*)()) F548_3635_2316_2;
	R2316[78] = (char *(*)()) F549_3635_2316_2;
	R2316[151] = (char *(*)()) F202_2570;
	{long i; for (i = 153; i < 155; i++) R2316[i] = (char *(*)()) F202_2570;}
	{long i; for (i = 155; i < 157; i++) R2316[i] = (char *(*)()) F204_2570_2316_2;}
	R2316[157] = (char *(*)()) F205_2570_2316_2;
	R2316[158] = (char *(*)()) F202_2570;
	R2316[159] = (char *(*)()) F204_2570_2316_2;
	R2316[160] = (char *(*)()) F202_2570;
	R2316[161] = (char *(*)()) F632_4202;
	R2316[162] = (char *(*)()) F633_4202_2316_2;
	R2316[163] = (char *(*)()) F634_4202_2316_2;
	R2316[164] = (char *(*)()) F635_4202_2316_2;
	R2316[165] = (char *(*)()) F636_4202_2316_2;
	R2316[166] = (char *(*)()) F637_4202_2316_2;
	R2316[167] = (char *(*)()) F638_4202_2316_2;
	R2316[168] = (char *(*)()) F639_4202_2316_2;
	R2316[169] = (char *(*)()) F640_4202_2316_2;
	R2316[170] = (char *(*)()) F641_4202_2316_2;
	R2316[171] = (char *(*)()) F642_4202_2316_2;
	R2316[172] = (char *(*)()) F643_4202_2316_2;
	R2316[173] = (char *(*)()) F644_4202_2316_2;
	R2316[174] = (char *(*)()) F645_4202_2316_2;
	R2316[175] = (char *(*)()) F646_4202_2316_2;
	R2316[191] = (char *(*)()) F204_2570_2316_2;
	R2316[193] = (char *(*)()) F204_2570_2316_2;
	{long i; for (i = 320; i < 322; i++) R2316[i] = (char *(*)()) F211_2570_2316_2;}
	R2316[437] = (char *(*)()) F211_2570_2316_2;
	R2316[439] = (char *(*)()) F203_2570_2316_2;
	R2316[443] = (char *(*)()) F211_2570_2316_2;
}
static EIF_BOOLEAN F204_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F204_2570(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F205_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F205_2570(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F206_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F206_2570(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F207_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F207_2570(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F203_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F203_2570(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F208_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F208_2570(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F209_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F209_2570(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F210_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F210_2570(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F212_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F212_2570(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F213_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F213_2570(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F214_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F214_2570(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F215_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F215_2570(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F216_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F216_2570(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F211_2570_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F211_2570(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F548_3635_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F548_3635(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F549_3635_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F549_3635(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F633_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F633_4202(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F634_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F634_4202(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F635_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F635_4202(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F636_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_4202(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F637_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F637_4202(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F638_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F638_4202(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F639_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F639_4202(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F640_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F640_4202(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F641_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F641_4202(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F642_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F642_4202(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F643_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F643_4202(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F644_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F644_4202(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F645_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F645_4202(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F646_4202_2316_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F646_4202(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2318[444])();
void R2318_init () {
	R2318[0] = (char *(*)()) F471_3257_2318_4;
	R2318[1] = (char *(*)()) F472_3344;
	R2318[2] = (char *(*)()) F473_3344_2318_4;
	R2318[3] = (char *(*)()) F474_3344_2318_4;
	R2318[4] = (char *(*)()) F475_3344_2318_4;
	R2318[5] = (char *(*)()) F476_3344_2318_4;
	R2318[6] = (char *(*)()) F477_3344_2318_4;
	R2318[7] = (char *(*)()) F478_3344_2318_4;
	R2318[8] = (char *(*)()) F479_3344_2318_4;
	R2318[9] = (char *(*)()) F480_3344_2318_4;
	R2318[10] = (char *(*)()) F481_3344_2318_4;
	R2318[11] = (char *(*)()) F482_3344_2318_4;
	R2318[12] = (char *(*)()) F483_3344_2318_4;
	R2318[13] = (char *(*)()) F484_3344_2318_4;
	R2318[14] = (char *(*)()) F485_3344_2318_4;
	R2318[15] = (char *(*)()) F486_3344_2318_4;
	R2318[76] = (char *(*)()) F547_3644;
	R2318[77] = (char *(*)()) F548_3644_2318_4;
	R2318[78] = (char *(*)()) F549_3644_2318_4;
	R2318[151] = (char *(*)()) F622_4005;
	R2318[153] = (char *(*)()) F624_4136;
	R2318[154] = (char *(*)()) F625_4136;
	R2318[155] = (char *(*)()) F626_4136_2318_4;
	R2318[156] = (char *(*)()) F627_4136_2318_4;
	R2318[157] = (char *(*)()) F628_4136_2318_4;
	R2318[158] = (char *(*)()) F624_4136;
	R2318[159] = (char *(*)()) F626_4136_2318_4;
	R2318[160] = (char *(*)()) F624_4136;
	R2318[161] = (char *(*)()) F632_4215;
	R2318[162] = (char *(*)()) F633_4215_2318_4;
	R2318[163] = (char *(*)()) F634_4215_2318_4;
	R2318[164] = (char *(*)()) F635_4215_2318_4;
	R2318[165] = (char *(*)()) F636_4215_2318_4;
	R2318[166] = (char *(*)()) F637_4215_2318_4;
	R2318[167] = (char *(*)()) F638_4215_2318_4;
	R2318[168] = (char *(*)()) F639_4215_2318_4;
	R2318[169] = (char *(*)()) F640_4215_2318_4;
	R2318[170] = (char *(*)()) F641_4215_2318_4;
	R2318[171] = (char *(*)()) F642_4215_2318_4;
	R2318[172] = (char *(*)()) F643_4215_2318_4;
	R2318[173] = (char *(*)()) F644_4215_2318_4;
	R2318[174] = (char *(*)()) F645_4215_2318_4;
	R2318[175] = (char *(*)()) F646_4215_2318_4;
	R2318[191] = (char *(*)()) F440_2867_2318_4;
	R2318[193] = (char *(*)()) F440_2867_2318_4;
	{long i; for (i = 320; i < 322; i++) R2318[i] = (char *(*)()) F790_5110_2318_4;}
	R2318[437] = (char *(*)()) F908_6889_2318_4;
	R2318[439] = (char *(*)()) F910_7098_2318_4;
	R2318[443] = (char *(*)()) F790_5110_2318_4;
}
static void F471_3257_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F471_3257(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F473_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F473_3344(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F474_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F474_3344(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F475_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F475_3344(Current, *(EIF_REAL_64 *)arg1);
}
static void F476_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F476_3344(Current, *(EIF_BOOLEAN *)arg1);
}
static void F477_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F477_3344(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F478_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F478_3344(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F479_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F479_3344(Current, *(EIF_POINTER *)arg1);
}
static void F480_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F480_3344(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F481_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F481_3344(Current, *(EIF_REAL_32 *)arg1);
}
static void F482_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F482_3344(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F483_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F483_3344(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F484_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F484_3344(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F485_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F485_3344(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F486_3344_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F486_3344(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F548_3644_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F548_3644(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F549_3644_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F549_3644(Current, *(EIF_BOOLEAN *)arg1);
}
static void F626_4136_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F626_4136(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4136_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4136(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4136_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4136(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F633_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4215(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4215(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4215(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4215(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4215(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4215(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4215(Current, *(EIF_POINTER *)arg1);
}
static void F640_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4215(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4215(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4215(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4215(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4215(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4215(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4215_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4215(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F440_2867_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F440_2867(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F790_5110_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F790_5110(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F908_6889_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F908_6889(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F910_7098_2318_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F910_7098(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2320[444])();
void R2320_init () {
	R2320[0] = (char *(*)()) F471_3274_2320_4;
	R2320[1] = (char *(*)()) F472_3343;
	R2320[2] = (char *(*)()) F473_3343_2320_4;
	R2320[3] = (char *(*)()) F474_3343_2320_4;
	R2320[4] = (char *(*)()) F475_3343_2320_4;
	R2320[5] = (char *(*)()) F476_3343_2320_4;
	R2320[6] = (char *(*)()) F477_3343_2320_4;
	R2320[7] = (char *(*)()) F478_3343_2320_4;
	R2320[8] = (char *(*)()) F479_3343_2320_4;
	R2320[9] = (char *(*)()) F480_3343_2320_4;
	R2320[10] = (char *(*)()) F481_3343_2320_4;
	R2320[11] = (char *(*)()) F482_3343_2320_4;
	R2320[12] = (char *(*)()) F483_3343_2320_4;
	R2320[13] = (char *(*)()) F484_3343_2320_4;
	R2320[14] = (char *(*)()) F485_3343_2320_4;
	R2320[15] = (char *(*)()) F486_3343_2320_4;
	R2320[76] = (char *(*)()) F502_3424;
	R2320[77] = (char *(*)()) F503_3424_2320_4;
	R2320[78] = (char *(*)()) F506_3424_2320_4;
	R2320[151] = (char *(*)()) F622_4011;
	R2320[153] = (char *(*)()) F624_4078;
	R2320[154] = (char *(*)()) F625_4078;
	R2320[155] = (char *(*)()) F626_4078_2320_4;
	R2320[156] = (char *(*)()) F627_4078_2320_4;
	R2320[157] = (char *(*)()) F628_4078_2320_4;
	R2320[158] = (char *(*)()) F624_4078;
	R2320[159] = (char *(*)()) F626_4078_2320_4;
	R2320[160] = (char *(*)()) F624_4078;
	R2320[161] = (char *(*)()) F632_4227;
	R2320[162] = (char *(*)()) F633_4227_2320_4;
	R2320[163] = (char *(*)()) F634_4227_2320_4;
	R2320[164] = (char *(*)()) F635_4227_2320_4;
	R2320[165] = (char *(*)()) F636_4227_2320_4;
	R2320[166] = (char *(*)()) F637_4227_2320_4;
	R2320[167] = (char *(*)()) F638_4227_2320_4;
	R2320[168] = (char *(*)()) F639_4227_2320_4;
	R2320[169] = (char *(*)()) F640_4227_2320_4;
	R2320[170] = (char *(*)()) F641_4227_2320_4;
	R2320[171] = (char *(*)()) F642_4227_2320_4;
	R2320[172] = (char *(*)()) F643_4227_2320_4;
	R2320[173] = (char *(*)()) F644_4227_2320_4;
	R2320[174] = (char *(*)()) F645_4227_2320_4;
	R2320[175] = (char *(*)()) F646_4227_2320_4;
	R2320[191] = (char *(*)()) F440_2870_2320_4;
	R2320[193] = (char *(*)()) F440_2870_2320_4;
	{long i; for (i = 320; i < 322; i++) R2320[i] = (char *(*)()) F790_5231_2320_4;}
	R2320[437] = (char *(*)()) F908_6900_2320_4;
	R2320[439] = (char *(*)()) F910_7109_2320_4;
	R2320[443] = (char *(*)()) F790_5231_2320_4;
}
static void F471_3274_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F471_3274(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F473_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F473_3343(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F474_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F474_3343(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F475_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F475_3343(Current, *(EIF_REAL_64 *)arg1);
}
static void F476_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F476_3343(Current, *(EIF_BOOLEAN *)arg1);
}
static void F477_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F477_3343(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F478_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F478_3343(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F479_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F479_3343(Current, *(EIF_POINTER *)arg1);
}
static void F480_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F480_3343(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F481_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F481_3343(Current, *(EIF_REAL_32 *)arg1);
}
static void F482_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F482_3343(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F483_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F483_3343(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F484_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F484_3343(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F485_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F485_3343(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F486_3343_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F486_3343(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F503_3424_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F503_3424(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F506_3424_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F506_3424(Current, *(EIF_BOOLEAN *)arg1);
}
static void F626_4078_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F626_4078(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4078_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4078(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4078_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4078(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F633_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4227(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4227(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F635_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4227(Current, *(EIF_REAL_64 *)arg1);
}
static void F636_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4227(Current, *(EIF_BOOLEAN *)arg1);
}
static void F637_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4227(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F638_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4227(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F639_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4227(Current, *(EIF_POINTER *)arg1);
}
static void F640_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4227(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F641_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4227(Current, *(EIF_REAL_32 *)arg1);
}
static void F642_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4227(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F643_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4227(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F644_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4227(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F645_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4227(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F646_4227_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4227(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F440_2870_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F440_2870(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F790_5231_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F790_5231(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F908_6900_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F908_6900(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F910_7109_2320_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F910_7109(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2322[444])();
void R2322_init () {
	R2322[0] = (char *(*)()) F471_3263;
	R2322[1] = (char *(*)()) F472_3324;
	R2322[2] = (char *(*)()) F473_3324;
	R2322[3] = (char *(*)()) F474_3324;
	R2322[4] = (char *(*)()) F475_3324;
	R2322[5] = (char *(*)()) F476_3324;
	R2322[6] = (char *(*)()) F477_3324;
	R2322[7] = (char *(*)()) F478_3324;
	R2322[8] = (char *(*)()) F479_3324;
	R2322[9] = (char *(*)()) F480_3324;
	R2322[10] = (char *(*)()) F481_3324;
	R2322[11] = (char *(*)()) F482_3324;
	R2322[12] = (char *(*)()) F483_3324;
	R2322[13] = (char *(*)()) F484_3324;
	R2322[14] = (char *(*)()) F485_3324;
	R2322[15] = (char *(*)()) F486_3324;
	R2322[76] = (char *(*)()) F547_3653;
	R2322[77] = (char *(*)()) F548_3653;
	R2322[78] = (char *(*)()) F549_3653;
	R2322[151] = (char *(*)()) F622_4013;
	R2322[153] = (char *(*)()) F624_4079;
	R2322[154] = (char *(*)()) F625_4079;
	R2322[155] = (char *(*)()) F626_4079;
	R2322[156] = (char *(*)()) F627_4079;
	R2322[157] = (char *(*)()) F628_4079;
	R2322[158] = (char *(*)()) F624_4079;
	R2322[159] = (char *(*)()) F626_4079;
	R2322[160] = (char *(*)()) F624_4079;
	R2322[161] = (char *(*)()) F632_4233;
	R2322[162] = (char *(*)()) F633_4233;
	R2322[163] = (char *(*)()) F634_4233;
	R2322[164] = (char *(*)()) F635_4233;
	R2322[165] = (char *(*)()) F636_4233;
	R2322[166] = (char *(*)()) F637_4233;
	R2322[167] = (char *(*)()) F638_4233;
	R2322[168] = (char *(*)()) F639_4233;
	R2322[169] = (char *(*)()) F640_4233;
	R2322[170] = (char *(*)()) F641_4233;
	R2322[171] = (char *(*)()) F642_4233;
	R2322[172] = (char *(*)()) F643_4233;
	R2322[173] = (char *(*)()) F644_4233;
	R2322[174] = (char *(*)()) F645_4233;
	R2322[175] = (char *(*)()) F646_4233;
	R2322[191] = (char *(*)()) F440_2874;
	R2322[193] = (char *(*)()) F440_2874;
	{long i; for (i = 320; i < 322; i++) R2322[i] = (char *(*)()) F790_5145;}
	R2322[437] = (char *(*)()) F908_6904;
	R2322[439] = (char *(*)()) F910_7113;
	R2322[443] = (char *(*)()) F790_5145;
}

char *(*R2348[440])();
void R2348_init () {
	R2348[0] = (char *(*)()) F471_3245_2348_5;
	R2348[1] = (char *(*)()) F472_3293_2348_5;
	R2348[2] = (char *(*)()) F473_3293_2348_5;
	R2348[3] = (char *(*)()) F474_3293_2348_5;
	R2348[4] = (char *(*)()) F475_3293_2348_5;
	R2348[5] = (char *(*)()) F476_3293_2348_5;
	R2348[6] = (char *(*)()) F477_3293_2348_5;
	R2348[7] = (char *(*)()) F478_3293_2348_5;
	R2348[8] = (char *(*)()) F479_3293_2348_5;
	R2348[9] = (char *(*)()) F480_3293_2348_5;
	R2348[10] = (char *(*)()) F481_3293_2348_5;
	R2348[11] = (char *(*)()) F482_3293_2348_5;
	R2348[12] = (char *(*)()) F483_3293_2348_5;
	R2348[13] = (char *(*)()) F484_3293_2348_5;
	R2348[14] = (char *(*)()) F485_3293_2348_5;
	R2348[15] = (char *(*)()) F486_3293_2348_5;
	R2348[76] = (char *(*)()) F487_3361_2348_5;
	R2348[77] = (char *(*)()) F488_3361_2348_5;
	R2348[78] = (char *(*)()) F491_3361_2348_5;
	R2348[153] = (char *(*)()) F624_4030;
	R2348[154] = (char *(*)()) F625_4030_2348_5;
	R2348[155] = (char *(*)()) F626_4030_2348_5;
	R2348[156] = (char *(*)()) F627_4030_2348_5;
	R2348[157] = (char *(*)()) F628_4030_2348_5;
	R2348[158] = (char *(*)()) F624_4030;
	R2348[159] = (char *(*)()) F626_4030_2348_5;
	R2348[160] = (char *(*)()) F624_4030;
	R2348[161] = (char *(*)()) F632_4180_2348_5;
	R2348[162] = (char *(*)()) F633_4180_2348_5;
	R2348[163] = (char *(*)()) F634_4180_2348_5;
	R2348[164] = (char *(*)()) F635_4180_2348_5;
	R2348[165] = (char *(*)()) F636_4180_2348_5;
	R2348[166] = (char *(*)()) F637_4180_2348_5;
	R2348[167] = (char *(*)()) F638_4180_2348_5;
	R2348[168] = (char *(*)()) F639_4180_2348_5;
	R2348[169] = (char *(*)()) F640_4180_2348_5;
	R2348[170] = (char *(*)()) F641_4180_2348_5;
	R2348[171] = (char *(*)()) F642_4180_2348_5;
	R2348[172] = (char *(*)()) F643_4180_2348_5;
	R2348[173] = (char *(*)()) F644_4180_2348_5;
	R2348[174] = (char *(*)()) F645_4180_2348_5;
	R2348[175] = (char *(*)()) F646_4180_2348_5;
	R2348[437] = (char *(*)()) F908_6841_2348_5;
	R2348[439] = (char *(*)()) F910_7051_2348_5;
}
static EIF_REFERENCE F471_3245_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F471_3245(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F472_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F472_3293(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F473_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F473_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F474_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F474_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F475_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F475_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F476_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F476_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F477_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F477_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F478_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F478_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F479_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F479_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F480_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F480_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F481_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F481_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F482_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F482_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F483_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F483_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F484_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F484_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F485_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F485_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F486_3293_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F486_3293(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F487_3361_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F487_3361(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F488_3361_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F488_3361(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F491_3361_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F491_3361(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F625_4030_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F625_4030(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F626_4030_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F626_4030(Current, arg1);
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
static EIF_REFERENCE F627_4030_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F627_4030(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F628_4030_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F628_4030(Current, *(EIF_POINTER *)arg1);
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
static EIF_REFERENCE F632_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F632_4180(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F633_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F633_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F634_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F634_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F635_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F635_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F636_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F636_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F637_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F637_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F638_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F638_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F639_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F639_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F640_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F640_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F641_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F641_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F642_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F642_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F643_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F643_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F644_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F644_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F645_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F645_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F646_4180_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F646_4180(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F908_6841_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F908_6841(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F910_7051_2348_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F910_7051(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R2350[440])();
void R2350_init () {
	R2350[0] = (char *(*)()) F471_3248_2350_2;
	R2350[1] = (char *(*)()) F472_3308_2350_2;
	R2350[2] = (char *(*)()) F473_3308_2350_2;
	R2350[3] = (char *(*)()) F474_3308_2350_2;
	R2350[4] = (char *(*)()) F475_3308_2350_2;
	R2350[5] = (char *(*)()) F476_3308_2350_2;
	R2350[6] = (char *(*)()) F477_3308_2350_2;
	R2350[7] = (char *(*)()) F478_3308_2350_2;
	R2350[8] = (char *(*)()) F479_3308_2350_2;
	R2350[9] = (char *(*)()) F480_3308_2350_2;
	R2350[10] = (char *(*)()) F481_3308_2350_2;
	R2350[11] = (char *(*)()) F482_3308_2350_2;
	R2350[12] = (char *(*)()) F483_3308_2350_2;
	R2350[13] = (char *(*)()) F484_3308_2350_2;
	R2350[14] = (char *(*)()) F485_3308_2350_2;
	R2350[15] = (char *(*)()) F486_3308_2350_2;
	R2350[76] = (char *(*)()) F487_3369_2350_2;
	R2350[77] = (char *(*)()) F488_3369_2350_2;
	R2350[78] = (char *(*)()) F491_3369_2350_2;
	R2350[153] = (char *(*)()) F624_4033;
	R2350[154] = (char *(*)()) F625_4033_2350_2;
	R2350[155] = (char *(*)()) F626_4033;
	R2350[156] = (char *(*)()) F627_4033_2350_2;
	R2350[157] = (char *(*)()) F628_4033_2350_2;
	R2350[158] = (char *(*)()) F624_4033;
	R2350[159] = (char *(*)()) F626_4033;
	R2350[160] = (char *(*)()) F624_4033;
	R2350[161] = (char *(*)()) F632_4201_2350_2;
	R2350[162] = (char *(*)()) F633_4201_2350_2;
	R2350[163] = (char *(*)()) F634_4201_2350_2;
	R2350[164] = (char *(*)()) F635_4201_2350_2;
	R2350[165] = (char *(*)()) F636_4201_2350_2;
	R2350[166] = (char *(*)()) F637_4201_2350_2;
	R2350[167] = (char *(*)()) F638_4201_2350_2;
	R2350[168] = (char *(*)()) F639_4201_2350_2;
	R2350[169] = (char *(*)()) F640_4201_2350_2;
	R2350[170] = (char *(*)()) F641_4201_2350_2;
	R2350[171] = (char *(*)()) F642_4201_2350_2;
	R2350[172] = (char *(*)()) F643_4201_2350_2;
	R2350[173] = (char *(*)()) F644_4201_2350_2;
	R2350[174] = (char *(*)()) F645_4201_2350_2;
	R2350[175] = (char *(*)()) F646_4201_2350_2;
	R2350[437] = (char *(*)()) F905_6665_2350_2;
	R2350[439] = (char *(*)()) F905_6665_2350_2;
}
static EIF_BOOLEAN F471_3248_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F471_3248(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F472_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F472_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F473_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F473_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F474_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F474_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F475_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F475_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F476_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F476_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F477_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F477_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F478_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F478_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F479_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F479_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F480_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F480_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F481_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F481_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F482_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F482_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F483_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F483_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F484_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F484_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F485_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F485_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F486_3308_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F486_3308(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F487_3369_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F487_3369(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F488_3369_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F488_3369(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F491_3369_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F491_3369(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F625_4033_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F625_4033(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F627_4033_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F627_4033(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F628_4033_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F628_4033(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F632_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F632_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F633_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F633_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F634_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F634_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F635_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F635_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F636_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F637_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F637_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F638_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F638_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F639_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F639_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F640_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F640_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F641_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F641_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F642_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F642_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F643_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F643_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F644_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F644_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F645_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F645_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F646_4201_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F646_4201(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F905_6665_2350_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F905_6665(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2351[440])();
void R2351_init () {
	R2351[0] = (char *(*)()) F471_3275_2351_8;
	R2351[1] = (char *(*)()) F472_3312_2351_8;
	R2351[2] = (char *(*)()) F473_3312_2351_8;
	R2351[3] = (char *(*)()) F474_3312_2351_8;
	R2351[4] = (char *(*)()) F475_3312_2351_8;
	R2351[5] = (char *(*)()) F476_3312_2351_8;
	R2351[6] = (char *(*)()) F477_3312_2351_8;
	R2351[7] = (char *(*)()) F478_3312_2351_8;
	R2351[8] = (char *(*)()) F479_3312_2351_8;
	R2351[9] = (char *(*)()) F480_3312_2351_8;
	R2351[10] = (char *(*)()) F481_3312_2351_8;
	R2351[11] = (char *(*)()) F482_3312_2351_8;
	R2351[12] = (char *(*)()) F483_3312_2351_8;
	R2351[13] = (char *(*)()) F484_3312_2351_8;
	R2351[14] = (char *(*)()) F485_3312_2351_8;
	R2351[15] = (char *(*)()) F486_3312_2351_8;
	R2351[76] = (char *(*)()) F487_3375_2351_8;
	R2351[77] = (char *(*)()) F488_3375_2351_8;
	R2351[78] = (char *(*)()) F491_3375_2351_8;
	R2351[153] = (char *(*)()) F624_4071;
	R2351[154] = (char *(*)()) F625_4071_2351_8;
	R2351[155] = (char *(*)()) F626_4071_2351_8;
	R2351[156] = (char *(*)()) F627_4071_2351_8;
	R2351[157] = (char *(*)()) F628_4071_2351_8;
	R2351[158] = (char *(*)()) F624_4071;
	R2351[159] = (char *(*)()) F626_4071_2351_8;
	R2351[160] = (char *(*)()) F624_4071;
	R2351[161] = (char *(*)()) F632_4213_2351_8;
	R2351[162] = (char *(*)()) F633_4213_2351_8;
	R2351[163] = (char *(*)()) F634_4213_2351_8;
	R2351[164] = (char *(*)()) F635_4213_2351_8;
	R2351[165] = (char *(*)()) F636_4213_2351_8;
	R2351[166] = (char *(*)()) F637_4213_2351_8;
	R2351[167] = (char *(*)()) F638_4213_2351_8;
	R2351[168] = (char *(*)()) F639_4213_2351_8;
	R2351[169] = (char *(*)()) F640_4213_2351_8;
	R2351[170] = (char *(*)()) F641_4213_2351_8;
	R2351[171] = (char *(*)()) F642_4213_2351_8;
	R2351[172] = (char *(*)()) F643_4213_2351_8;
	R2351[173] = (char *(*)()) F644_4213_2351_8;
	R2351[174] = (char *(*)()) F645_4213_2351_8;
	R2351[175] = (char *(*)()) F646_4213_2351_8;
	R2351[437] = (char *(*)()) F908_6862_2351_8;
	R2351[439] = (char *(*)()) F910_7071_2351_8;
}
static void F471_3275_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F471_3275(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F472_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F472_3312(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F473_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F473_3312(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F474_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F474_3312(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F475_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F475_3312(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F476_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F476_3312(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F477_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F477_3312(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F478_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F478_3312(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F479_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F479_3312(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F480_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F480_3312(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F481_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F481_3312(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F482_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F482_3312(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F483_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F483_3312(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F484_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F484_3312(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F485_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F485_3312(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F486_3312_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F486_3312(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F487_3375_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F487_3375(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F488_3375_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F488_3375(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F491_3375_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F491_3375(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F625_4071_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F625_4071(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F626_4071_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F626_4071(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F627_4071_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F627_4071(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F628_4071_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F628_4071(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F632_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F632_4213(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F633_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F633_4213(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F634_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F634_4213(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F635_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F635_4213(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F636_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F636_4213(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F637_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F637_4213(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F638_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F638_4213(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F639_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F639_4213(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F640_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F640_4213(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F641_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F641_4213(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F642_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F642_4213(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F643_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F643_4213(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F644_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F644_4213(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F645_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F645_4213(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F646_4213_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F646_4213(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F908_6862_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F908_6862(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F910_7071_2351_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F910_7071(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R2352[440])();
void R2352_init () {
	R2352[0] = (char *(*)()) F471_3275_2352_8;
	R2352[1] = (char *(*)()) F472_3312_2352_8;
	R2352[2] = (char *(*)()) F473_3312_2352_8;
	R2352[3] = (char *(*)()) F474_3312_2352_8;
	R2352[4] = (char *(*)()) F475_3312_2352_8;
	R2352[5] = (char *(*)()) F476_3312_2352_8;
	R2352[6] = (char *(*)()) F477_3312_2352_8;
	R2352[7] = (char *(*)()) F478_3312_2352_8;
	R2352[8] = (char *(*)()) F479_3312_2352_8;
	R2352[9] = (char *(*)()) F480_3312_2352_8;
	R2352[10] = (char *(*)()) F481_3312_2352_8;
	R2352[11] = (char *(*)()) F482_3312_2352_8;
	R2352[12] = (char *(*)()) F483_3312_2352_8;
	R2352[13] = (char *(*)()) F484_3312_2352_8;
	R2352[14] = (char *(*)()) F485_3312_2352_8;
	R2352[15] = (char *(*)()) F486_3312_2352_8;
	R2352[76] = (char *(*)()) F487_3375_2352_8;
	R2352[77] = (char *(*)()) F488_3375_2352_8;
	R2352[78] = (char *(*)()) F491_3375_2352_8;
	R2352[153] = (char *(*)()) F624_4072;
	R2352[154] = (char *(*)()) F625_4072_2352_8;
	R2352[155] = (char *(*)()) F626_4072_2352_8;
	R2352[156] = (char *(*)()) F627_4072_2352_8;
	R2352[157] = (char *(*)()) F628_4072_2352_8;
	R2352[158] = (char *(*)()) F624_4072;
	R2352[159] = (char *(*)()) F626_4072_2352_8;
	R2352[160] = (char *(*)()) F624_4072;
	R2352[161] = (char *(*)()) F632_4213_2352_8;
	R2352[162] = (char *(*)()) F633_4213_2352_8;
	R2352[163] = (char *(*)()) F634_4213_2352_8;
	R2352[164] = (char *(*)()) F635_4213_2352_8;
	R2352[165] = (char *(*)()) F636_4213_2352_8;
	R2352[166] = (char *(*)()) F637_4213_2352_8;
	R2352[167] = (char *(*)()) F638_4213_2352_8;
	R2352[168] = (char *(*)()) F639_4213_2352_8;
	R2352[169] = (char *(*)()) F640_4213_2352_8;
	R2352[170] = (char *(*)()) F641_4213_2352_8;
	R2352[171] = (char *(*)()) F642_4213_2352_8;
	R2352[172] = (char *(*)()) F643_4213_2352_8;
	R2352[173] = (char *(*)()) F644_4213_2352_8;
	R2352[174] = (char *(*)()) F645_4213_2352_8;
	R2352[175] = (char *(*)()) F646_4213_2352_8;
	R2352[437] = (char *(*)()) F908_6862_2352_8;
	R2352[439] = (char *(*)()) F910_7071_2352_8;
}
static void F471_3275_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F471_3275(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F472_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F472_3312(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F473_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F473_3312(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F474_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F474_3312(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F475_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F475_3312(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F476_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F476_3312(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F477_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F477_3312(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F478_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F478_3312(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F479_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F479_3312(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F480_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F480_3312(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F481_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F481_3312(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F482_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F482_3312(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F483_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F483_3312(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F484_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F484_3312(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F485_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F485_3312(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F486_3312_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F486_3312(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F487_3375_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F487_3375(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F488_3375_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F488_3375(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F491_3375_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F491_3375(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F625_4072_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F625_4072(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F626_4072_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F626_4072(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F627_4072_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F627_4072(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F628_4072_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F628_4072(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F632_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F632_4213(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F633_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F633_4213(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F634_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F634_4213(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F635_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F635_4213(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F636_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F636_4213(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F637_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F637_4213(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F638_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F638_4213(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F639_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F639_4213(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F640_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F640_4213(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F641_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F641_4213(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F642_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F642_4213(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F643_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F643_4213(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F644_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F644_4213(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F645_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F645_4213(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F646_4213_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F646_4213(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F908_6862_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F908_6862(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F910_7071_2352_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F910_7071(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y2353_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype14[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype15[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype16[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype17[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype18[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype19[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype20[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype21[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype22[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype23[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype24[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype25[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype26[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype27[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype28[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype29[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype30[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype31[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype32[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype33[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype34[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype35[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype36[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype37[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype38[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype39[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype40[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype41[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype42[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype43[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype44[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype45[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype46[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype47[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype48[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype49[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype50[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype51[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype52[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype53[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype54[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype55[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype56[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype57[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype58[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype59[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype60[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype61[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype62[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype63[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype64[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype65[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype66[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype67[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype68[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype69[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype70[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype71[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype72[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype73[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype74[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype75[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype76[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype77[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype78[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype79[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype80[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype81[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype82[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype83[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype84[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype85[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype86[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype87[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype88[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype89[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype90[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype91[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype92[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype93[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype94[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype95[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype96[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype97[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype98[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype99[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype100[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype101[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype102[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype103[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype104[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype105[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype106[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype107[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype108[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype109[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype110[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype111[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype112[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype113[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype114[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype115[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype116[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype117[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype118[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype119[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype120[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype121[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype122[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype123[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype124[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype125[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype126[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype127[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype128[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype129[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype130[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype131[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype132[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype133[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype134[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype135[] = {0xFF01,904,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype136[] = {0xFF01,904,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype137[] = {0xFF01,907,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype138[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype139[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype140[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype141[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype142[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype143[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype144[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype145[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype146[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype147[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype148[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype149[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype150[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype151[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype152[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype153[] = {859,0xFFFF};
static EIF_TYPE_INDEX Y2353_pgtype154[] = {859,0xFFFF};
EIF_TYPE_INDEX *Y2353_gen_type [678];
EIF_TYPE_INDEX Y2353 [678];
void Y2353_init (void)
{
	egc_routines_types [2353] = Y2353;
	egc_routines_gen_types [2353] = Y2353_gen_type;
	egc_routines_offset [2353] = 232;
	Y2353_gen_type [0] = Y2353_pgtype0;
	Y2353_gen_type [1] = Y2353_pgtype1;
	Y2353_gen_type [2] = Y2353_pgtype2;
	Y2353_gen_type [3] = Y2353_pgtype3;
	Y2353_gen_type [4] = Y2353_pgtype4;
	Y2353_gen_type [5] = Y2353_pgtype5;
	Y2353_gen_type [6] = Y2353_pgtype6;
	Y2353_gen_type [7] = Y2353_pgtype7;
	Y2353_gen_type [8] = Y2353_pgtype8;
	Y2353_gen_type [9] = Y2353_pgtype9;
	Y2353_gen_type [10] = Y2353_pgtype10;
	Y2353_gen_type [11] = Y2353_pgtype11;
	Y2353_gen_type [12] = Y2353_pgtype12;
	Y2353_gen_type [13] = Y2353_pgtype13;
	Y2353_gen_type [14] = Y2353_pgtype14;
	Y2353_gen_type [15] = Y2353_pgtype15;
	Y2353_gen_type [16] = Y2353_pgtype16;
	Y2353_gen_type [17] = Y2353_pgtype17;
	Y2353_gen_type [18] = Y2353_pgtype18;
	Y2353_gen_type [19] = Y2353_pgtype19;
	Y2353_gen_type [20] = Y2353_pgtype20;
	Y2353_gen_type [21] = Y2353_pgtype21;
	Y2353_gen_type [22] = Y2353_pgtype22;
	Y2353_gen_type [23] = Y2353_pgtype23;
	Y2353_gen_type [24] = Y2353_pgtype24;
	Y2353_gen_type [25] = Y2353_pgtype25;
	Y2353_gen_type [26] = Y2353_pgtype26;
	Y2353_gen_type [27] = Y2353_pgtype27;
	Y2353_gen_type [28] = Y2353_pgtype28;
	Y2353_gen_type [29] = Y2353_pgtype29;
	Y2353_gen_type [30] = Y2353_pgtype30;
	Y2353_gen_type [31] = Y2353_pgtype31;
	Y2353_gen_type [32] = Y2353_pgtype32;
	Y2353_gen_type [33] = Y2353_pgtype33;
	Y2353_gen_type [34] = Y2353_pgtype34;
	Y2353_gen_type [35] = Y2353_pgtype35;
	Y2353_gen_type [223] = Y2353_pgtype36;
	Y2353_gen_type [224] = Y2353_pgtype37;
	Y2353_gen_type [225] = Y2353_pgtype38;
	Y2353_gen_type [226] = Y2353_pgtype39;
	Y2353_gen_type [227] = Y2353_pgtype40;
	Y2353_gen_type [228] = Y2353_pgtype41;
	Y2353_gen_type [229] = Y2353_pgtype42;
	Y2353_gen_type [230] = Y2353_pgtype43;
	Y2353_gen_type [231] = Y2353_pgtype44;
	Y2353_gen_type [232] = Y2353_pgtype45;
	Y2353_gen_type [233] = Y2353_pgtype46;
	Y2353_gen_type [234] = Y2353_pgtype47;
	Y2353_gen_type [235] = Y2353_pgtype48;
	Y2353_gen_type [236] = Y2353_pgtype49;
	Y2353_gen_type [237] = Y2353_pgtype50;
	Y2353_gen_type [238] = Y2353_pgtype51;
	Y2353_gen_type [239] = Y2353_pgtype52;
	Y2353_gen_type [240] = Y2353_pgtype53;
	Y2353_gen_type [241] = Y2353_pgtype54;
	Y2353_gen_type [242] = Y2353_pgtype55;
	Y2353_gen_type [243] = Y2353_pgtype56;
	Y2353_gen_type [244] = Y2353_pgtype57;
	Y2353_gen_type [245] = Y2353_pgtype58;
	Y2353_gen_type [246] = Y2353_pgtype59;
	Y2353_gen_type [247] = Y2353_pgtype60;
	Y2353_gen_type [248] = Y2353_pgtype61;
	Y2353_gen_type [249] = Y2353_pgtype62;
	Y2353_gen_type [250] = Y2353_pgtype63;
	Y2353_gen_type [251] = Y2353_pgtype64;
	Y2353_gen_type [252] = Y2353_pgtype65;
	Y2353_gen_type [253] = Y2353_pgtype66;
	Y2353_gen_type [254] = Y2353_pgtype67;
	Y2353_gen_type [255] = Y2353_pgtype68;
	Y2353_gen_type [256] = Y2353_pgtype69;
	Y2353_gen_type [257] = Y2353_pgtype70;
	Y2353_gen_type [258] = Y2353_pgtype71;
	Y2353_gen_type [259] = Y2353_pgtype72;
	Y2353_gen_type [260] = Y2353_pgtype73;
	Y2353_gen_type [261] = Y2353_pgtype74;
	Y2353_gen_type [262] = Y2353_pgtype75;
	Y2353_gen_type [263] = Y2353_pgtype76;
	Y2353_gen_type [264] = Y2353_pgtype77;
	Y2353_gen_type [265] = Y2353_pgtype78;
	Y2353_gen_type [266] = Y2353_pgtype79;
	Y2353_gen_type [267] = Y2353_pgtype80;
	Y2353_gen_type [268] = Y2353_pgtype81;
	Y2353_gen_type [269] = Y2353_pgtype82;
	Y2353_gen_type [270] = Y2353_pgtype83;
	Y2353_gen_type [271] = Y2353_pgtype84;
	Y2353_gen_type [272] = Y2353_pgtype85;
	Y2353_gen_type [273] = Y2353_pgtype86;
	Y2353_gen_type [274] = Y2353_pgtype87;
	Y2353_gen_type [275] = Y2353_pgtype88;
	Y2353_gen_type [276] = Y2353_pgtype89;
	Y2353_gen_type [277] = Y2353_pgtype90;
	Y2353_gen_type [278] = Y2353_pgtype91;
	Y2353_gen_type [279] = Y2353_pgtype92;
	Y2353_gen_type [280] = Y2353_pgtype93;
	Y2353_gen_type [281] = Y2353_pgtype94;
	Y2353_gen_type [282] = Y2353_pgtype95;
	Y2353_gen_type [283] = Y2353_pgtype96;
	Y2353_gen_type [284] = Y2353_pgtype97;
	Y2353_gen_type [285] = Y2353_pgtype98;
	Y2353_gen_type [286] = Y2353_pgtype99;
	Y2353_gen_type [287] = Y2353_pgtype100;
	Y2353_gen_type [288] = Y2353_pgtype101;
	Y2353_gen_type [289] = Y2353_pgtype102;
	Y2353_gen_type [290] = Y2353_pgtype103;
	Y2353_gen_type [291] = Y2353_pgtype104;
	Y2353_gen_type [292] = Y2353_pgtype105;
	Y2353_gen_type [293] = Y2353_pgtype106;
	Y2353_gen_type [294] = Y2353_pgtype107;
	Y2353_gen_type [295] = Y2353_pgtype108;
	Y2353_gen_type [296] = Y2353_pgtype109;
	Y2353_gen_type [297] = Y2353_pgtype110;
	Y2353_gen_type [298] = Y2353_pgtype111;
	Y2353_gen_type [299] = Y2353_pgtype112;
	Y2353_gen_type [300] = Y2353_pgtype113;
	Y2353_gen_type [301] = Y2353_pgtype114;
	Y2353_gen_type [302] = Y2353_pgtype115;
	Y2353_gen_type [303] = Y2353_pgtype116;
	Y2353_gen_type [304] = Y2353_pgtype117;
	Y2353_gen_type [305] = Y2353_pgtype118;
	Y2353_gen_type [306] = Y2353_pgtype119;
	Y2353_gen_type [307] = Y2353_pgtype120;
	Y2353_gen_type [308] = Y2353_pgtype121;
	Y2353_gen_type [309] = Y2353_pgtype122;
	Y2353_gen_type [310] = Y2353_pgtype123;
	Y2353_gen_type [311] = Y2353_pgtype124;
	Y2353_gen_type [312] = Y2353_pgtype125;
	Y2353_gen_type [313] = Y2353_pgtype126;
	Y2353_gen_type [314] = Y2353_pgtype127;
	Y2353_gen_type [315] = Y2353_pgtype128;
	Y2353_gen_type [316] = Y2353_pgtype129;
	Y2353_gen_type [391] = Y2353_pgtype130;
	Y2353_gen_type [392] = Y2353_pgtype131;
	Y2353_gen_type [393] = Y2353_pgtype132;
	Y2353_gen_type [394] = Y2353_pgtype133;
	Y2353_gen_type [395] = Y2353_pgtype134;
	Y2353_gen_type [396] = Y2353_pgtype135;
	Y2353_gen_type [397] = Y2353_pgtype136;
	Y2353_gen_type [398] = Y2353_pgtype137;
	Y2353_gen_type [399] = Y2353_pgtype138;
	Y2353_gen_type [400] = Y2353_pgtype139;
	Y2353_gen_type [401] = Y2353_pgtype140;
	Y2353_gen_type [402] = Y2353_pgtype141;
	Y2353_gen_type [403] = Y2353_pgtype142;
	Y2353_gen_type [404] = Y2353_pgtype143;
	Y2353_gen_type [405] = Y2353_pgtype144;
	Y2353_gen_type [406] = Y2353_pgtype145;
	Y2353_gen_type [407] = Y2353_pgtype146;
	Y2353_gen_type [408] = Y2353_pgtype147;
	Y2353_gen_type [409] = Y2353_pgtype148;
	Y2353_gen_type [410] = Y2353_pgtype149;
	Y2353_gen_type [411] = Y2353_pgtype150;
	Y2353_gen_type [412] = Y2353_pgtype151;
	Y2353_gen_type [413] = Y2353_pgtype152;
	Y2353_gen_type [675] = Y2353_pgtype153;
	Y2353_gen_type [677] = Y2353_pgtype154;
	{long i; for (i = 223; i < 317; i++) Y2353[i] = 859;};
	{long i; for (i = 396; i < 398; i++) Y2353[i] = 904;};
	Y2353[398] = 907;
	{long i; for (i = 399; i < 414; i++) Y2353[i] = 859;};
	Y2353[675] = 859;
	Y2353[677] = 859;
}

char *(*R2354[364])();
void R2354_init () {
	R2354[0] = (char *(*)()) F502_3428_2354_4;
	R2354[1] = (char *(*)()) F503_3428_2354_4;
	R2354[2] = (char *(*)()) F506_3428_2354_4;
	R2354[77] = (char *(*)()) F624_4077;
	R2354[78] = (char *(*)()) F625_4077_2354_4;
	R2354[79] = (char *(*)()) F626_4077;
	R2354[80] = (char *(*)()) F627_4077_2354_4;
	R2354[81] = (char *(*)()) F628_4077_2354_4;
	R2354[82] = (char *(*)()) F624_4077;
	R2354[83] = (char *(*)()) F626_4077;
	R2354[84] = (char *(*)()) F624_4077;
	R2354[85] = (char *(*)()) F632_4229_2354_4;
	R2354[86] = (char *(*)()) F633_4229_2354_4;
	R2354[87] = (char *(*)()) F634_4229_2354_4;
	R2354[88] = (char *(*)()) F635_4229_2354_4;
	R2354[89] = (char *(*)()) F636_4229_2354_4;
	R2354[90] = (char *(*)()) F637_4229_2354_4;
	R2354[91] = (char *(*)()) F638_4229_2354_4;
	R2354[92] = (char *(*)()) F639_4229_2354_4;
	R2354[93] = (char *(*)()) F640_4229_2354_4;
	R2354[94] = (char *(*)()) F641_4229_2354_4;
	R2354[95] = (char *(*)()) F642_4229_2354_4;
	R2354[96] = (char *(*)()) F643_4229_2354_4;
	R2354[97] = (char *(*)()) F644_4229_2354_4;
	R2354[98] = (char *(*)()) F645_4229_2354_4;
	R2354[99] = (char *(*)()) F646_4229_2354_4;
	R2354[361] = (char *(*)()) F908_6896_2354_4;
	R2354[363] = (char *(*)()) F910_7105_2354_4;
}
static void F502_3428_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F502_3428(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F503_3428_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F503_3428(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F506_3428_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F506_3428(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F625_4077_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F625_4077(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F627_4077_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F627_4077(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F628_4077_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F628_4077(Current, *(EIF_POINTER *)arg1);
}
static void F632_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F632_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F633_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F633_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F634_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F634_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F635_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F635_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F636_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F636_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F637_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F637_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F638_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F638_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F639_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F639_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F640_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F640_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F641_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F641_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F642_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F642_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F643_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F643_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F644_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F644_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F645_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F645_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F646_4229_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_4229(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F908_6896_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F908_6896(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F910_7105_2354_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F910_7105(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2355[368])();
void R2355_init () {
	R2355[0] = (char *(*)()) F547_3619;
	R2355[1] = (char *(*)()) F548_3619_2355_1;
	R2355[2] = (char *(*)()) F549_3619_2355_1;
	R2355[75] = (char *(*)()) F622_3993;
	R2355[85] = (char *(*)()) F632_4179;
	R2355[86] = (char *(*)()) F633_4179_2355_1;
	R2355[87] = (char *(*)()) F634_4179_2355_1;
	R2355[88] = (char *(*)()) F635_4179_2355_1;
	R2355[89] = (char *(*)()) F636_4179_2355_1;
	R2355[90] = (char *(*)()) F637_4179_2355_1;
	R2355[91] = (char *(*)()) F638_4179_2355_1;
	R2355[92] = (char *(*)()) F639_4179_2355_1;
	R2355[93] = (char *(*)()) F640_4179_2355_1;
	R2355[94] = (char *(*)()) F641_4179_2355_1;
	R2355[95] = (char *(*)()) F642_4179_2355_1;
	R2355[96] = (char *(*)()) F643_4179_2355_1;
	R2355[97] = (char *(*)()) F644_4179_2355_1;
	R2355[98] = (char *(*)()) F645_4179_2355_1;
	R2355[99] = (char *(*)()) F646_4179_2355_1;
	R2355[115] = (char *(*)()) F440_2858_2355_1;
	R2355[117] = (char *(*)()) F440_2858_2355_1;
	{long i; for (i = 244; i < 246; i++) R2355[i] = (char *(*)()) F790_5025_2355_1;}
	R2355[367] = (char *(*)()) F790_5025_2355_1;
}
static EIF_REFERENCE F548_3619_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F549_3619_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F633_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F634_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F635_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F636_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F637_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F638_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F639_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F640_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F641_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F642_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F643_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F644_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F645_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F646_4179_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F440_2858_2355_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F790_5025_2355_1 (EIF_REFERENCE Current)
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

static EIF_TYPE_INDEX Y2355_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2355_pgtype128[] = {0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y2355_gen_type [646];
EIF_TYPE_INDEX Y2355 [646];
void Y2355_init (void)
{
	egc_routines_types [2355] = Y2355;
	egc_routines_gen_types [2355] = Y2355_gen_type;
	egc_routines_offset [2355] = 268;
	Y2355_gen_type [0] = Y2355_pgtype0;
	Y2355_gen_type [1] = Y2355_pgtype1;
	Y2355_gen_type [2] = Y2355_pgtype2;
	Y2355_gen_type [3] = Y2355_pgtype3;
	Y2355_gen_type [4] = Y2355_pgtype4;
	Y2355_gen_type [5] = Y2355_pgtype5;
	Y2355_gen_type [6] = Y2355_pgtype6;
	Y2355_gen_type [7] = Y2355_pgtype7;
	Y2355_gen_type [8] = Y2355_pgtype8;
	Y2355_gen_type [9] = Y2355_pgtype9;
	Y2355_gen_type [10] = Y2355_pgtype10;
	Y2355_gen_type [11] = Y2355_pgtype11;
	Y2355_gen_type [12] = Y2355_pgtype12;
	Y2355_gen_type [13] = Y2355_pgtype13;
	Y2355_gen_type [14] = Y2355_pgtype14;
	Y2355_gen_type [15] = Y2355_pgtype15;
	Y2355_gen_type [16] = Y2355_pgtype16;
	Y2355_gen_type [17] = Y2355_pgtype17;
	Y2355_gen_type [18] = Y2355_pgtype18;
	Y2355_gen_type [19] = Y2355_pgtype19;
	Y2355_gen_type [20] = Y2355_pgtype20;
	Y2355_gen_type [21] = Y2355_pgtype21;
	Y2355_gen_type [22] = Y2355_pgtype22;
	Y2355_gen_type [23] = Y2355_pgtype23;
	Y2355_gen_type [24] = Y2355_pgtype24;
	Y2355_gen_type [25] = Y2355_pgtype25;
	Y2355_gen_type [26] = Y2355_pgtype26;
	Y2355_gen_type [27] = Y2355_pgtype27;
	Y2355_gen_type [28] = Y2355_pgtype28;
	Y2355_gen_type [29] = Y2355_pgtype29;
	Y2355_gen_type [62] = Y2355_pgtype30;
	Y2355_gen_type [63] = Y2355_pgtype31;
	Y2355_gen_type [64] = Y2355_pgtype32;
	Y2355_gen_type [65] = Y2355_pgtype33;
	Y2355_gen_type [156] = Y2355_pgtype34;
	Y2355_gen_type [157] = Y2355_pgtype35;
	Y2355_gen_type [158] = Y2355_pgtype36;
	Y2355_gen_type [159] = Y2355_pgtype37;
	Y2355_gen_type [160] = Y2355_pgtype38;
	Y2355_gen_type [161] = Y2355_pgtype39;
	Y2355_gen_type [162] = Y2355_pgtype40;
	Y2355_gen_type [163] = Y2355_pgtype41;
	Y2355_gen_type [164] = Y2355_pgtype42;
	Y2355_gen_type [165] = Y2355_pgtype43;
	Y2355_gen_type [166] = Y2355_pgtype44;
	Y2355_gen_type [167] = Y2355_pgtype45;
	Y2355_gen_type [168] = Y2355_pgtype46;
	Y2355_gen_type [169] = Y2355_pgtype47;
	Y2355_gen_type [170] = Y2355_pgtype48;
	Y2355_gen_type [171] = Y2355_pgtype49;
	Y2355_gen_type [218] = Y2355_pgtype50;
	Y2355_gen_type [219] = Y2355_pgtype51;
	Y2355_gen_type [220] = Y2355_pgtype52;
	Y2355_gen_type [221] = Y2355_pgtype53;
	Y2355_gen_type [222] = Y2355_pgtype54;
	Y2355_gen_type [223] = Y2355_pgtype55;
	Y2355_gen_type [224] = Y2355_pgtype56;
	Y2355_gen_type [225] = Y2355_pgtype57;
	Y2355_gen_type [226] = Y2355_pgtype58;
	Y2355_gen_type [227] = Y2355_pgtype59;
	Y2355_gen_type [228] = Y2355_pgtype60;
	Y2355_gen_type [229] = Y2355_pgtype61;
	Y2355_gen_type [230] = Y2355_pgtype62;
	Y2355_gen_type [231] = Y2355_pgtype63;
	Y2355_gen_type [232] = Y2355_pgtype64;
	Y2355_gen_type [233] = Y2355_pgtype65;
	Y2355_gen_type [234] = Y2355_pgtype66;
	Y2355_gen_type [235] = Y2355_pgtype67;
	Y2355_gen_type [236] = Y2355_pgtype68;
	Y2355_gen_type [237] = Y2355_pgtype69;
	Y2355_gen_type [238] = Y2355_pgtype70;
	Y2355_gen_type [239] = Y2355_pgtype71;
	Y2355_gen_type [240] = Y2355_pgtype72;
	Y2355_gen_type [241] = Y2355_pgtype73;
	Y2355_gen_type [242] = Y2355_pgtype74;
	Y2355_gen_type [243] = Y2355_pgtype75;
	Y2355_gen_type [244] = Y2355_pgtype76;
	Y2355_gen_type [245] = Y2355_pgtype77;
	Y2355_gen_type [246] = Y2355_pgtype78;
	Y2355_gen_type [247] = Y2355_pgtype79;
	Y2355_gen_type [248] = Y2355_pgtype80;
	Y2355_gen_type [249] = Y2355_pgtype81;
	Y2355_gen_type [250] = Y2355_pgtype82;
	Y2355_gen_type [251] = Y2355_pgtype83;
	Y2355_gen_type [252] = Y2355_pgtype84;
	Y2355_gen_type [253] = Y2355_pgtype85;
	Y2355_gen_type [254] = Y2355_pgtype86;
	Y2355_gen_type [255] = Y2355_pgtype87;
	Y2355_gen_type [256] = Y2355_pgtype88;
	Y2355_gen_type [257] = Y2355_pgtype89;
	Y2355_gen_type [258] = Y2355_pgtype90;
	Y2355_gen_type [259] = Y2355_pgtype91;
	Y2355_gen_type [260] = Y2355_pgtype92;
	Y2355_gen_type [261] = Y2355_pgtype93;
	Y2355_gen_type [262] = Y2355_pgtype94;
	Y2355_gen_type [263] = Y2355_pgtype95;
	Y2355_gen_type [264] = Y2355_pgtype96;
	Y2355_gen_type [265] = Y2355_pgtype97;
	Y2355_gen_type [266] = Y2355_pgtype98;
	Y2355_gen_type [267] = Y2355_pgtype99;
	Y2355_gen_type [268] = Y2355_pgtype100;
	Y2355_gen_type [269] = Y2355_pgtype101;
	Y2355_gen_type [270] = Y2355_pgtype102;
	Y2355_gen_type [271] = Y2355_pgtype103;
	Y2355_gen_type [272] = Y2355_pgtype104;
	Y2355_gen_type [273] = Y2355_pgtype105;
	Y2355_gen_type [274] = Y2355_pgtype106;
	Y2355_gen_type [275] = Y2355_pgtype107;
	Y2355_gen_type [276] = Y2355_pgtype108;
	Y2355_gen_type [277] = Y2355_pgtype109;
	Y2355_gen_type [278] = Y2355_pgtype110;
	Y2355_gen_type [279] = Y2355_pgtype111;
	Y2355_gen_type [280] = Y2355_pgtype112;
	Y2355_gen_type [353] = Y2355_pgtype113;
	Y2355_gen_type [363] = Y2355_pgtype114;
	Y2355_gen_type [364] = Y2355_pgtype115;
	Y2355_gen_type [365] = Y2355_pgtype116;
	Y2355_gen_type [366] = Y2355_pgtype117;
	Y2355_gen_type [367] = Y2355_pgtype118;
	Y2355_gen_type [368] = Y2355_pgtype119;
	Y2355_gen_type [369] = Y2355_pgtype120;
	Y2355_gen_type [370] = Y2355_pgtype121;
	Y2355_gen_type [371] = Y2355_pgtype122;
	Y2355_gen_type [372] = Y2355_pgtype123;
	Y2355_gen_type [373] = Y2355_pgtype124;
	Y2355_gen_type [374] = Y2355_pgtype125;
	Y2355_gen_type [375] = Y2355_pgtype126;
	Y2355_gen_type [376] = Y2355_pgtype127;
	Y2355_gen_type [377] = Y2355_pgtype128;
	Y2355[393] = 859;
	Y2355[395] = 859;
	{long i; for (i = 521; i < 524; i++) Y2355[i] = 838;};
	Y2355[645] = 838;
}

char *(*R2356[368])();
void R2356_init () {
	R2356[0] = (char *(*)()) F547_3627;
	R2356[1] = (char *(*)()) F548_3627;
	R2356[2] = (char *(*)()) F549_3627;
	R2356[75] = (char *(*)()) F331_2639;
	R2356[85] = (char *(*)()) F425_2850;
	R2356[86] = (char *(*)()) F426_2850;
	R2356[87] = (char *(*)()) F427_2850;
	R2356[88] = (char *(*)()) F428_2850;
	R2356[89] = (char *(*)()) F429_2850;
	R2356[90] = (char *(*)()) F430_2850;
	R2356[91] = (char *(*)()) F431_2850;
	R2356[92] = (char *(*)()) F432_2850;
	R2356[93] = (char *(*)()) F433_2850;
	R2356[94] = (char *(*)()) F434_2850;
	R2356[95] = (char *(*)()) F435_2850;
	R2356[96] = (char *(*)()) F436_2850;
	R2356[97] = (char *(*)()) F437_2850;
	R2356[98] = (char *(*)()) F438_2850;
	R2356[99] = (char *(*)()) F439_2850;
	R2356[115] = (char *(*)()) F440_2862;
	R2356[117] = (char *(*)()) F440_2862;
	{long i; for (i = 244; i < 246; i++) R2356[i] = (char *(*)()) F439_2850;}
	R2356[367] = (char *(*)()) F439_2850;
}


#ifdef __cplusplus
}
#endif
