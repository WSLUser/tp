//
// Generated By: dol2asm
// Translation Unit: d/d_path
//

#include "d/d_path.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dStage_roomControl_c {
    /* 80024384 */ void getStatusRoomDt(int);
};

struct dPath {};

struct cBgS_PolyInfo {};

struct dBgS {
    /* 80074FE0 */ void GetRoomPathId(cBgS_PolyInfo const&);
    /* 80075030 */ void GetRoomPathPntNo(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct cXyz {};

//
// Forward References:
//

extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
extern "C" void dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi();

//
// External References:
//

extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void GetRoomPathId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 800517B0-800517EC 04C0F0 003C+00 0/0 7/7 63/63 .text            dPath_GetPnt__FPC5dPathi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPath_GetPnt(dPath const* param_0, int param_1) {
    nofralloc
#include "asm/d/d_path/dPath_GetPnt__FPC5dPathi.s"
}
#pragma pop

/* 800517EC-80051898 04C12C 00AC+00 1/1 12/12 82/82 .text            dPath_GetRoomPath__Fii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u16* dPath_GetRoomPath(int param_0, int param_1) {
    nofralloc
#include "asm/d/d_path/dPath_GetRoomPath__Fii.s"
}
#pragma pop

/* 80051898-8005195C 04C1D8 00C4+00 0/0 1/1 3/3 .text            dPath_GetNextRoomPath__FPC5dPathi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPath_GetNextRoomPath(dPath const* param_0, int param_1) {
    nofralloc
#include "asm/d/d_path/dPath_GetNextRoomPath__FPC5dPathi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80452000-80452008 000600 0004+04 1/1 0/0 0/0 .sdata2          @3685 */
SECTION_SDATA2 static f32 lit_3685[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 8005195C-80051AC0 04C29C 0164+00 0/0 1/1 4/4 .text
 * dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPath_GetPolyRoomPathVec(cBgS_PolyInfo const& param_0, cXyz* param_1, int* param_2) {
    nofralloc
#include "asm/d/d_path/dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi.s"
}
#pragma pop
