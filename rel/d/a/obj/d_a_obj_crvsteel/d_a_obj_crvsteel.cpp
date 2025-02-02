//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crvsteel
//

#include "rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);

    static f32 mGroundY;
};

struct daObjCRVSTEEL_c {
    /* 80BD5BFC */ void OpenSet(f32, f32);
    /* 80BD5C18 */ void CloseSet(f32);
    /* 80BD5C28 */ void CloseExecute();
    /* 80BD5CA0 */ void OpenExecute();
    /* 80BD5CC8 */ void Action();
    /* 80BD5D10 */ void setBaseMtx();
    /* 80BD5DB8 */ void CreateHeap();
    /* 80BD5E30 */ void create();
    /* 80BD60A8 */ void Create();
    /* 80BD60EC */ void Execute(f32 (**)[3][4]);
    /* 80BD6138 */ void Draw();
    /* 80BD61BC */ void Delete();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BD6030 */ ~dBgS_ObjAcch();
};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" static void daObjCRVSTEEL_Create__FP10fopAc_ac_c();
extern "C" static void daObjCRVSTEEL_Delete__FP15daObjCRVSTEEL_c();
extern "C" void OpenSet__15daObjCRVSTEEL_cFff();
extern "C" void CloseSet__15daObjCRVSTEEL_cFf();
extern "C" void CloseExecute__15daObjCRVSTEEL_cFv();
extern "C" void OpenExecute__15daObjCRVSTEEL_cFv();
extern "C" void Action__15daObjCRVSTEEL_cFv();
extern "C" void setBaseMtx__15daObjCRVSTEEL_cFv();
extern "C" static void daObjCRVSTEEL_Draw__FP15daObjCRVSTEEL_c();
extern "C" static void daObjCRVSTEEL_Execute__FP15daObjCRVSTEEL_c();
extern "C" void CreateHeap__15daObjCRVSTEEL_cFv();
extern "C" void create__15daObjCRVSTEEL_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static bool daObjCRVSTEEL_IsDelete__FP15daObjCRVSTEEL_c();
extern "C" void Create__15daObjCRVSTEEL_cFv();
extern "C" void Execute__15daObjCRVSTEEL_cFPPA3_A4_f();
extern "C" void Draw__15daObjCRVSTEEL_cFv();
extern "C" void Delete__15daObjCRVSTEEL_cFv();
extern "C" static void func_80BD61F0();
extern "C" static void func_80BD61F8();
extern "C" extern char const* const d_a_obj_crvsteel__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" f32 mGroundY__11fopAcM_gc_c;

//
// Declarations:
//

/* 80BD5BB8-80BD5BD8 000078 0020+00 1/0 0/0 0/0 .text daObjCRVSTEEL_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVSTEEL_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/daObjCRVSTEEL_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BD5BD8-80BD5BFC 000098 0024+00 1/0 0/0 0/0 .text daObjCRVSTEEL_Delete__FP15daObjCRVSTEEL_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVSTEEL_Delete(daObjCRVSTEEL_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/daObjCRVSTEEL_Delete__FP15daObjCRVSTEEL_c.s"
}
#pragma pop

/* 80BD5BFC-80BD5C18 0000BC 001C+00 0/0 0/0 1/1 .text            OpenSet__15daObjCRVSTEEL_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::OpenSet(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/OpenSet__15daObjCRVSTEEL_cFff.s"
}
#pragma pop

/* 80BD5C18-80BD5C28 0000D8 0010+00 0/0 0/0 1/1 .text            CloseSet__15daObjCRVSTEEL_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::CloseSet(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/CloseSet__15daObjCRVSTEEL_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD6208-80BD620C 000000 0004+00 3/3 0/0 0/0 .rodata          @3789 */
SECTION_RODATA static f32 const lit_3789 = 5.0f;
COMPILER_STRIP_GATE(0x80BD6208, &lit_3789);

/* 80BD5C28-80BD5CA0 0000E8 0078+00 1/1 0/0 0/0 .text            CloseExecute__15daObjCRVSTEEL_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::CloseExecute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/CloseExecute__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD5CA0-80BD5CC8 000160 0028+00 1/1 0/0 0/0 .text            OpenExecute__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::OpenExecute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/OpenExecute__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD5CC8-80BD5D10 000188 0048+00 1/1 0/0 0/0 .text            Action__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/Action__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD5D10-80BD5D6C 0001D0 005C+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/setBaseMtx__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD5D6C-80BD5D98 00022C 002C+00 1/0 0/0 0/0 .text daObjCRVSTEEL_Draw__FP15daObjCRVSTEEL_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVSTEEL_Draw(daObjCRVSTEEL_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/daObjCRVSTEEL_Draw__FP15daObjCRVSTEEL_c.s"
}
#pragma pop

/* 80BD5D98-80BD5DB8 000258 0020+00 2/1 0/0 0/0 .text daObjCRVSTEEL_Execute__FP15daObjCRVSTEEL_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVSTEEL_Execute(daObjCRVSTEEL_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/daObjCRVSTEEL_Execute__FP15daObjCRVSTEEL_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD623C-80BD623C 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BD623C = "CrvSteel";
SECTION_DEAD static char const* const stringBase_80BD6245 = "U_CrvSteelGate.bmd";
#pragma pop

/* 80BD626C-80BD6270 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_crvsteel__stringBase0;

/* 80BD5DB8-80BD5E30 000278 0078+00 1/0 0/0 0/0 .text            CreateHeap__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/CreateHeap__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD620C-80BD6210 000004 0004+00 0/1 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3900 = -9.0f;
COMPILER_STRIP_GATE(0x80BD620C, &lit_3900);
#pragma pop

/* 80BD6210-80BD6214 000008 0004+00 0/1 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3901 = 100.0f;
COMPILER_STRIP_GATE(0x80BD6210, &lit_3901);
#pragma pop

/* 80BD6214-80BD6218 00000C 0004+00 0/1 0/0 0/0 .rodata          @3902 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3902 = -400.0f;
COMPILER_STRIP_GATE(0x80BD6214, &lit_3902);
#pragma pop

/* 80BD6218-80BD621C 000010 0004+00 0/1 0/0 0/0 .rodata          @3903 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3903[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BD6218, &lit_3903);
#pragma pop

/* 80BD621C-80BD6220 000014 0004+00 0/1 0/0 0/0 .rodata          @3904 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3904 = -50.0f;
COMPILER_STRIP_GATE(0x80BD621C, &lit_3904);
#pragma pop

/* 80BD6220-80BD6224 000018 0004+00 0/1 0/0 0/0 .rodata          @3905 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3905 = 400.0f;
COMPILER_STRIP_GATE(0x80BD6220, &lit_3905);
#pragma pop

/* 80BD6224-80BD6228 00001C 0004+00 0/1 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3906 = 900.0f;
COMPILER_STRIP_GATE(0x80BD6224, &lit_3906);
#pragma pop

/* 80BD6228-80BD622C 000020 0004+00 0/1 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3907 = 50.0f;
COMPILER_STRIP_GATE(0x80BD6228, &lit_3907);
#pragma pop

/* 80BD623C-80BD623C 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BD6258 = "U_CrvSteelGate.dzb";
#pragma pop

/* 80BD6270-80BD6290 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCRVSTEEL_Method */
SECTION_DATA static void* l_daObjCRVSTEEL_Method[8] = {
    (void*)daObjCRVSTEEL_Create__FP10fopAc_ac_c,
    (void*)daObjCRVSTEEL_Delete__FP15daObjCRVSTEEL_c,
    (void*)daObjCRVSTEEL_Execute__FP15daObjCRVSTEEL_c,
    (void*)daObjCRVSTEEL_IsDelete__FP15daObjCRVSTEEL_c,
    (void*)daObjCRVSTEEL_Draw__FP15daObjCRVSTEEL_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BD6290-80BD62C0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_CRVSTEEL */
SECTION_DATA extern void* g_profile_Obj_CRVSTEEL[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00720000, (void*)&g_fpcLf_Method,
    (void*)0x00000848, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D50000, (void*)&l_daObjCRVSTEEL_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80BD62C0-80BD62E4 000054 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BD61F8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BD61F0,
};

/* 80BD62E4-80BD630C 000078 0028+00 1/1 0/0 0/0 .data            __vt__15daObjCRVSTEEL_c */
SECTION_DATA extern void* __vt__15daObjCRVSTEEL_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjCRVSTEEL_cFv,
    (void*)Create__15daObjCRVSTEEL_cFv,
    (void*)Execute__15daObjCRVSTEEL_cFPPA3_A4_f,
    (void*)Draw__15daObjCRVSTEEL_cFv,
    (void*)Delete__15daObjCRVSTEEL_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BD5E30-80BD6030 0002F0 0200+00 1/1 0/0 0/0 .text            create__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/create__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD6030-80BD60A0 0004F0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BD60A0-80BD60A8 000560 0008+00 1/0 0/0 0/0 .text daObjCRVSTEEL_IsDelete__FP15daObjCRVSTEEL_c
 */
static bool daObjCRVSTEEL_IsDelete(daObjCRVSTEEL_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BD622C-80BD6230 000024 0004+00 0/1 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3947 = -1000.0f;
COMPILER_STRIP_GATE(0x80BD622C, &lit_3947);
#pragma pop

/* 80BD6230-80BD6234 000028 0004+00 0/1 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3948 = -500.0f;
COMPILER_STRIP_GATE(0x80BD6230, &lit_3948);
#pragma pop

/* 80BD6234-80BD6238 00002C 0004+00 0/1 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = 1000.0f;
COMPILER_STRIP_GATE(0x80BD6234, &lit_3949);
#pragma pop

/* 80BD6238-80BD623C 000030 0004+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = 500.0f;
COMPILER_STRIP_GATE(0x80BD6238, &lit_3950);
#pragma pop

/* 80BD60A8-80BD60EC 000568 0044+00 1/0 0/0 0/0 .text            Create__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/func_80BD60A8.s"
}
#pragma pop

/* 80BD60EC-80BD6138 0005AC 004C+00 1/0 0/0 0/0 .text Execute__15daObjCRVSTEEL_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/Execute__15daObjCRVSTEEL_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BD6138-80BD61BC 0005F8 0084+00 1/0 0/0 0/0 .text            Draw__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/Draw__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD61BC-80BD61F0 00067C 0034+00 1/0 0/0 0/0 .text            Delete__15daObjCRVSTEEL_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVSTEEL_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/Delete__15daObjCRVSTEEL_cFv.s"
}
#pragma pop

/* 80BD61F0-80BD61F8 0006B0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BD61F0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/func_80BD61F0.s"
}
#pragma pop

/* 80BD61F8-80BD6200 0006B8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BD61F8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvsteel/d_a_obj_crvsteel/func_80BD61F8.s"
}
#pragma pop

/* 80BD623C-80BD623C 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
