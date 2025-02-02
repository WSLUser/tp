//
// Generated By: dol2asm
// Translation Unit: d_a_tag_howl
//

#include "rel/d/a/tag/d_a_tag_howl/d_a_tag_howl.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Howl_c {
    /* 8048D958 */ void create();
    /* 8048D9BC */ bool destroy();
    /* 8048D9C4 */ void execute();
    /* 8048DA24 */ bool draw();
    /* 8048DA2C */ void isAreaCheck();
    /* 8048DC1C */ void getParam();
    /* 8048DC68 */ void getSwitchBit();
    /* 8048DCFC */ ~daTag_Howl_c();
};

struct dSv_memBit_c {
    /* 80034860 */ void isSwitch(int) const;
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

extern "C" void create__12daTag_Howl_cFv();
extern "C" bool destroy__12daTag_Howl_cFv();
extern "C" void execute__12daTag_Howl_cFv();
extern "C" bool draw__12daTag_Howl_cFv();
extern "C" void isAreaCheck__12daTag_Howl_cFv();
extern "C" void getParam__12daTag_Howl_cFv();
extern "C" void getSwitchBit__12daTag_Howl_cFv();
extern "C" static void daTag_Howl_Create__FPv();
extern "C" static void daTag_Howl_Delete__FPv();
extern "C" static void daTag_Howl_Execute__FPv();
extern "C" static void daTag_Howl_Draw__FPv();
extern "C" static bool daTag_Howl_IsDelete__FPv();
extern "C" void __dt__12daTag_Howl_cFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareMag();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8048DD88-8048DDA8 -00001 0020+00 1/0 0/0 0/0 .data            daTag_Howl_MethodTable */
SECTION_DATA static void* daTag_Howl_MethodTable[8] = {
    (void*)daTag_Howl_Create__FPv,
    (void*)daTag_Howl_Delete__FPv,
    (void*)daTag_Howl_Execute__FPv,
    (void*)daTag_Howl_IsDelete__FPv,
    (void*)daTag_Howl_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048DDA8-8048DDD8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_HOWL */
SECTION_DATA extern void* g_profile_TAG_HOWL[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D40000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x011B0000, (void*)&daTag_Howl_MethodTable,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 8048DDD8-8048DDE4 000050 000C+00 2/2 0/0 0/0 .data            __vt__12daTag_Howl_c */
SECTION_DATA extern void* __vt__12daTag_Howl_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daTag_Howl_cFv,
};

/* 8048D958-8048D9BC 000078 0064+00 1/1 0/0 0/0 .text            create__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Howl_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/create__12daTag_Howl_cFv.s"
}
#pragma pop

/* 8048D9BC-8048D9C4 0000DC 0008+00 1/1 0/0 0/0 .text            destroy__12daTag_Howl_cFv */
bool daTag_Howl_c::destroy() {
    return true;
}

/* 8048D9C4-8048DA24 0000E4 0060+00 1/1 0/0 0/0 .text            execute__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Howl_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/execute__12daTag_Howl_cFv.s"
}
#pragma pop

/* 8048DA24-8048DA2C 000144 0008+00 1/1 0/0 0/0 .text            draw__12daTag_Howl_cFv */
bool daTag_Howl_c::draw() {
    return true;
}

/* ############################################################################################## */
/* 8048DD64-8048DD6C 000000 0004+04 1/1 0/0 0/0 .rodata          @3739 */
SECTION_RODATA static u8 const lit_3739[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8048DD64, &lit_3739);

/* 8048DD6C-8048DD74 000008 0008+00 0/1 0/0 0/0 .rodata          @3740 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3740[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048DD6C, &lit_3740);
#pragma pop

/* 8048DD74-8048DD7C 000010 0008+00 0/1 0/0 0/0 .rodata          @3741 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3741[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048DD74, &lit_3741);
#pragma pop

/* 8048DD7C-8048DD84 000018 0008+00 0/1 0/0 0/0 .rodata          @3742 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3742[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048DD7C, &lit_3742);
#pragma pop

/* 8048DA2C-8048DC1C 00014C 01F0+00 1/1 0/0 0/0 .text            isAreaCheck__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Howl_c::isAreaCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/isAreaCheck__12daTag_Howl_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048DD84-8048DD88 000020 0004+00 1/1 0/0 0/0 .rodata          @3752 */
SECTION_RODATA static f32 const lit_3752 = 100.0f;
COMPILER_STRIP_GATE(0x8048DD84, &lit_3752);

/* 8048DC1C-8048DC68 00033C 004C+00 1/1 0/0 0/0 .text            getParam__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Howl_c::getParam() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/getParam__12daTag_Howl_cFv.s"
}
#pragma pop

/* 8048DC68-8048DC74 000388 000C+00 1/1 0/0 0/0 .text            getSwitchBit__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Howl_c::getSwitchBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/getSwitchBit__12daTag_Howl_cFv.s"
}
#pragma pop

/* 8048DC74-8048DC94 000394 0020+00 1/0 0/0 0/0 .text            daTag_Howl_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Howl_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/daTag_Howl_Create__FPv.s"
}
#pragma pop

/* 8048DC94-8048DCB4 0003B4 0020+00 1/0 0/0 0/0 .text            daTag_Howl_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Howl_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/daTag_Howl_Delete__FPv.s"
}
#pragma pop

/* 8048DCB4-8048DCD4 0003D4 0020+00 1/0 0/0 0/0 .text            daTag_Howl_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Howl_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/daTag_Howl_Execute__FPv.s"
}
#pragma pop

/* 8048DCD4-8048DCF4 0003F4 0020+00 1/0 0/0 0/0 .text            daTag_Howl_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Howl_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/daTag_Howl_Draw__FPv.s"
}
#pragma pop

/* 8048DCF4-8048DCFC 000414 0008+00 1/0 0/0 0/0 .text            daTag_Howl_IsDelete__FPv */
static bool daTag_Howl_IsDelete(void* param_0) {
    return true;
}

/* 8048DCFC-8048DD5C 00041C 0060+00 1/0 0/0 0/0 .text            __dt__12daTag_Howl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Howl_c::~daTag_Howl_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/d_a_tag_howl/__dt__12daTag_Howl_cFv.s"
}
#pragma pop
