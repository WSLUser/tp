//
// Generated By: dol2asm
// Translation Unit: d_a_obj_Turara
//

#include "rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80B9CC54 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct fOpAcm_HIO_entry_c {
    /* 80B9CBF8 */ ~fOpAcm_HIO_entry_c();
};

struct daTurara_c {
    /* 80B9CC9C */ void setBaseMtx();
    /* 80B9CD74 */ void CreateHeap();
    /* 80B9CED8 */ void create();
    /* 80B9D468 */ void setFallStat();
    /* 80B9D4CC */ void Execute(f32 (**)[3][4]);
    /* 80B9D548 */ void move();
    /* 80B9D72C */ void init_modeWait();
    /* 80B9D738 */ void modeWait();
    /* 80B9D998 */ void eventStart();
    /* 80B9D9BC */ void init_modeDropInit();
    /* 80B9DA00 */ void modeDropInit();
    /* 80B9DA44 */ void init_modeDrop();
    /* 80B9DB44 */ void modeDrop();
    /* 80B9DB90 */ void bgCheck();
    /* 80B9DBD0 */ void init_modeDropEnd();
    /* 80B9DE48 */ void modeDropEnd();
    /* 80B9E078 */ void init_modeDropEnd2();
    /* 80B9E338 */ void modeDropEnd2();
    /* 80B9E388 */ void Draw();
    /* 80B9E478 */ void Delete();
    /* 80B9E710 */ ~daTurara_c();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

struct daTurara_HIO_c {
    /* 80B9CB8C */ daTurara_HIO_c();
    /* 80B9E5B4 */ ~daTurara_HIO_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 80B9E6B0 */ ~dEvLib_callback_c();
    /* 80B9E6F8 */ bool eventStart();
    /* 80B9E700 */ bool eventRun();
    /* 80B9E708 */ bool eventEnd();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 80B9D40C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80B9D29C */ ~dBgS_ObjAcch();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
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
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80B9D30C */ ~dBgS_AcchCir();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80B9D37C */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80B9D3C4 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80B9E56C */ ~cCcD_GStts();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__14daTurara_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daTurara_cFv();
extern "C" void CreateHeap__10daTurara_cFv();
extern "C" void create__10daTurara_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void setFallStat__10daTurara_cFv();
extern "C" void Execute__10daTurara_cFPPA3_A4_f();
extern "C" void move__10daTurara_cFv();
extern "C" void init_modeWait__10daTurara_cFv();
extern "C" void modeWait__10daTurara_cFv();
extern "C" void eventStart__10daTurara_cFv();
extern "C" void init_modeDropInit__10daTurara_cFv();
extern "C" void modeDropInit__10daTurara_cFv();
extern "C" void init_modeDrop__10daTurara_cFv();
extern "C" void modeDrop__10daTurara_cFv();
extern "C" void bgCheck__10daTurara_cFv();
extern "C" void init_modeDropEnd__10daTurara_cFv();
extern "C" void modeDropEnd__10daTurara_cFv();
extern "C" void init_modeDropEnd2__10daTurara_cFv();
extern "C" void modeDropEnd2__10daTurara_cFv();
extern "C" void Draw__10daTurara_cFv();
extern "C" void Delete__10daTurara_cFv();
extern "C" static void daTurara_Draw__FP10daTurara_c();
extern "C" static void daTurara_Execute__FP10daTurara_c();
extern "C" static void daTurara_Delete__FP10daTurara_c();
extern "C" static void daTurara_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__14daTurara_HIO_cFv();
extern "C" void __sinit_d_a_obj_Turara_cpp();
extern "C" static void func_80B9E690();
extern "C" static void func_80B9E698();
extern "C" static void func_80B9E6A0();
extern "C" static void func_80B9E6A8();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__10daTurara_cFv();
extern "C" u8 const mCcDObjInfo__10daTurara_c[48];
extern "C" extern char const* const d_a_obj_Turara__stringBase0;
extern "C" u8 mCcDCyl__10daTurara_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B9E8F4-80B9E8F8 000000 0004+00 6/6 0/0 0/0 .rodata          @3661 */
SECTION_RODATA static f32 const lit_3661 = 450.0f;
COMPILER_STRIP_GATE(0x80B9E8F4, &lit_3661);

/* 80B9E8F8-80B9E8FC 000004 0004+00 0/2 0/0 0/0 .rodata          @3662 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3662 = 10.0f;
COMPILER_STRIP_GATE(0x80B9E8F8, &lit_3662);
#pragma pop

/* 80B9E8FC-80B9E900 000008 0004+00 0/1 0/0 0/0 .rodata          @3663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3663 = 200.0f;
COMPILER_STRIP_GATE(0x80B9E8FC, &lit_3663);
#pragma pop

/* 80B9E900-80B9E904 00000C 0004+00 0/1 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3664 = 5.0f;
COMPILER_STRIP_GATE(0x80B9E900, &lit_3664);
#pragma pop

/* 80B9E904-80B9E908 000010 0004+00 0/2 0/0 0/0 .rodata          @3665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3665 = 3.0f;
COMPILER_STRIP_GATE(0x80B9E904, &lit_3665);
#pragma pop

/* 80B9E97C-80B9E988 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B9E988-80B9E99C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80B9E99C-80B9E9E0 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__10daTurara_c */
SECTION_DATA u8 daTurara_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B9E9E0-80B9E9EC -00001 000C+00 0/1 0/0 0/0 .data            @3924 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3924[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daTurara_cFv,
};
#pragma pop

/* 80B9E9EC-80B9E9F8 -00001 000C+00 0/1 0/0 0/0 .data            @3925 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3925[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDropInit__10daTurara_cFv,
};
#pragma pop

/* 80B9E9F8-80B9EA04 -00001 000C+00 0/1 0/0 0/0 .data            @3926 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3926[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDrop__10daTurara_cFv,
};
#pragma pop

/* 80B9EA04-80B9EA10 -00001 000C+00 0/1 0/0 0/0 .data            @3927 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3927[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDropEnd__10daTurara_cFv,
};
#pragma pop

/* 80B9EA10-80B9EA1C -00001 000C+00 0/1 0/0 0/0 .data            @3928 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3928[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDropEnd2__10daTurara_cFv,
};
#pragma pop

/* 80B9EA1C-80B9EA58 0000A0 003C+00 0/1 0/0 0/0 .data            mode_proc$3923 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9EA58-80B9EA78 -00001 0020+00 1/0 0/0 0/0 .data            l_daTurara_Method */
SECTION_DATA static void* l_daTurara_Method[8] = {
    (void*)daTurara_Create__FP10fopAc_ac_c,
    (void*)daTurara_Delete__FP10daTurara_c,
    (void*)daTurara_Execute__FP10daTurara_c,
    (void*)NULL,
    (void*)daTurara_Draw__FP10daTurara_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80B9EA78-80B9EAA8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Turara */
SECTION_DATA extern void* g_profile_Obj_Turara[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00500000, (void*)&g_fpcLf_Method,
    (void*)0x00000998, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02210000, (void*)&l_daTurara_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80B9EAA8-80B9EAB4 00012C 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80B9EAB4-80B9EAC0 000138 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80B9EAC0-80B9EACC 000144 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80B9EACC-80B9EAF0 000150 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9E6A8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9E6A0,
};

/* 80B9EAF0-80B9EAFC 000174 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80B9EAFC-80B9EB08 000180 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B9EB08-80B9EB20 00018C 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80B9EB20-80B9EB68 0001A4 0048+00 2/2 0/0 0/0 .data            __vt__10daTurara_c */
SECTION_DATA extern void* __vt__10daTurara_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daTurara_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daTurara_cFPPA3_A4_f,
    (void*)Draw__10daTurara_cFv,
    (void*)Delete__10daTurara_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9E698,
    (void*)func_80B9E690,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__10daTurara_cFv,
    (void*)eventStart__10daTurara_cFv,
};

/* 80B9EB68-80B9EB74 0001EC 000C+00 2/2 0/0 0/0 .data            __vt__14daTurara_HIO_c */
SECTION_DATA extern void* __vt__14daTurara_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daTurara_HIO_cFv,
};

/* 80B9EB74-80B9EB80 0001F8 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80B9EB80-80B9EB8C 000204 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80B9CB8C-80B9CBF8 0000EC 006C+00 1/1 0/0 0/0 .text            __ct__14daTurara_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTurara_HIO_c::daTurara_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__ct__14daTurara_HIO_cFv.s"
}
#pragma pop

/* 80B9CBF8-80B9CC54 000158 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop

/* 80B9CC54-80B9CC9C 0001B4 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80B9CC9C-80B9CD74 0001FC 00D8+00 2/2 0/0 0/0 .text            setBaseMtx__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/setBaseMtx__10daTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9E908-80B9E938 000014 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__10daTurara_c */
SECTION_RODATA u8 const daTurara_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0xF8, 0x40, 0x00, 0x22, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9E908, &daTurara_c::mCcDObjInfo);

/* 80B9E938-80B9E940 000044 0008+00 1/1 0/0 0/0 .rodata          l_bmdIdx */
SECTION_RODATA static u8 const l_bmdIdx[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08,
};
COMPILER_STRIP_GATE(0x80B9E938, &l_bmdIdx);

/* 80B9E970-80B9E970 00007C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9E970 = "M_Turara";
#pragma pop

/* 80B9CD74-80B9CED8 0002D4 0164+00 1/0 0/0 0/0 .text            CreateHeap__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/CreateHeap__10daTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9E940-80B9E944 00004C 0004+00 0/1 0/0 0/0 .rodata          @3823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3823 = 150.0f;
COMPILER_STRIP_GATE(0x80B9E940, &lit_3823);
#pragma pop

/* 80B9E944-80B9E948 000050 0004+00 0/1 0/0 0/0 .rodata          @3824 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3824 = 10000.0f;
COMPILER_STRIP_GATE(0x80B9E944, &lit_3824);
#pragma pop

/* 80B9E948-80B9E94C 000054 0004+00 1/5 0/0 0/0 .rodata          @3825 */
SECTION_RODATA static u8 const lit_3825[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9E948, &lit_3825);

/* 80B9CED8-80B9D29C 000438 03C4+00 1/1 0/0 0/0 .text            create__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/create__10daTurara_cFv.s"
}
#pragma pop

/* 80B9D29C-80B9D30C 0007FC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80B9D30C-80B9D37C 00086C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80B9D37C-80B9D3C4 0008DC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80B9D3C4-80B9D40C 000924 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80B9D40C-80B9D468 00096C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80B9D468-80B9D4CC 0009C8 0064+00 1/1 0/0 0/0 .text            setFallStat__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::setFallStat() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/setFallStat__10daTurara_cFv.s"
}
#pragma pop

/* 80B9D4CC-80B9D548 000A2C 007C+00 1/0 0/0 0/0 .text            Execute__10daTurara_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/Execute__10daTurara_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9E94C-80B9E950 000058 0004+00 0/1 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B9E94C, &lit_3949);
#pragma pop

/* 80B9E950-80B9E954 00005C 0004+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = 170.0f;
COMPILER_STRIP_GATE(0x80B9E950, &lit_3950);
#pragma pop

/* 80B9E954-80B9E958 000060 0004+00 0/1 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = 130.0f;
COMPILER_STRIP_GATE(0x80B9E954, &lit_3951);
#pragma pop

/* 80B9E958-80B9E95C 000064 0004+00 0/1 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3952 = 510.0f;
COMPILER_STRIP_GATE(0x80B9E958, &lit_3952);
#pragma pop

/* 80B9E95C-80B9E960 000068 0004+00 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 50.0f;
COMPILER_STRIP_GATE(0x80B9E95C, &lit_3953);
#pragma pop

/* 80B9EB98-80B9EBA4 000008 000C+00 1/1 0/0 0/0 .bss             @3653 */
static u8 lit_3653[12];

/* 80B9EBA4-80B9EBC4 000014 0020+00 5/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[32];

/* 80B9EBC4-80B9EBC8 000034 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80B9EBC4[4];

/* 80B9D548-80B9D72C 000AA8 01E4+00 1/1 0/0 0/0 .text            move__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/move__10daTurara_cFv.s"
}
#pragma pop

/* 80B9D72C-80B9D738 000C8C 000C+00 1/1 0/0 0/0 .text            init_modeWait__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/init_modeWait__10daTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9E960-80B9E964 00006C 0004+00 2/5 0/0 0/0 .rodata          @4027 */
SECTION_RODATA static f32 const lit_4027 = 1.0f;
COMPILER_STRIP_GATE(0x80B9E960, &lit_4027);

/* 80B9E964-80B9E968 000070 0004+00 2/5 0/0 0/0 .rodata          @4028 */
SECTION_RODATA static f32 const lit_4028 = -1.0f;
COMPILER_STRIP_GATE(0x80B9E964, &lit_4028);

/* 80B9D738-80B9D998 000C98 0260+00 1/0 0/0 0/0 .text            modeWait__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/modeWait__10daTurara_cFv.s"
}
#pragma pop

/* 80B9D998-80B9D9BC 000EF8 0024+00 2/1 0/0 0/0 .text            eventStart__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/eventStart__10daTurara_cFv.s"
}
#pragma pop

/* 80B9D9BC-80B9DA00 000F1C 0044+00 1/1 0/0 0/0 .text            init_modeDropInit__10daTurara_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::init_modeDropInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/init_modeDropInit__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DA00-80B9DA44 000F60 0044+00 1/0 0/0 0/0 .text            modeDropInit__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::modeDropInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/modeDropInit__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DA44-80B9DB44 000FA4 0100+00 1/1 0/0 0/0 .text            init_modeDrop__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::init_modeDrop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/init_modeDrop__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DB44-80B9DB90 0010A4 004C+00 1/0 0/0 0/0 .text            modeDrop__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::modeDrop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/modeDrop__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DB90-80B9DBD0 0010F0 0040+00 1/1 0/0 0/0 .text            bgCheck__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::bgCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/bgCheck__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DBD0-80B9DE48 001130 0278+00 1/1 0/0 0/0 .text            init_modeDropEnd__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::init_modeDropEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/init_modeDropEnd__10daTurara_cFv.s"
}
#pragma pop

/* 80B9DE48-80B9E078 0013A8 0230+00 1/0 0/0 0/0 .text            modeDropEnd__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::modeDropEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/modeDropEnd__10daTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9E968-80B9E96C 000074 0004+00 0/1 0/0 0/0 .rodata          @4263 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4263 = 100.0f;
COMPILER_STRIP_GATE(0x80B9E968, &lit_4263);
#pragma pop

/* 80B9E96C-80B9E970 000078 0004+00 0/1 0/0 0/0 .rodata          @4264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4264 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B9E96C, &lit_4264);
#pragma pop

/* 80B9E078-80B9E338 0015D8 02C0+00 1/1 0/0 0/0 .text            init_modeDropEnd2__10daTurara_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::init_modeDropEnd2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/init_modeDropEnd2__10daTurara_cFv.s"
}
#pragma pop

/* 80B9E338-80B9E388 001898 0050+00 1/0 0/0 0/0 .text            modeDropEnd2__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::modeDropEnd2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/modeDropEnd2__10daTurara_cFv.s"
}
#pragma pop

/* 80B9E388-80B9E478 0018E8 00F0+00 1/0 0/0 0/0 .text            Draw__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/Draw__10daTurara_cFv.s"
}
#pragma pop

/* 80B9E478-80B9E4E0 0019D8 0068+00 1/0 0/0 0/0 .text            Delete__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTurara_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/Delete__10daTurara_cFv.s"
}
#pragma pop

/* 80B9E4E0-80B9E50C 001A40 002C+00 1/0 0/0 0/0 .text            daTurara_Draw__FP10daTurara_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTurara_Draw(daTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/daTurara_Draw__FP10daTurara_c.s"
}
#pragma pop

/* 80B9E50C-80B9E52C 001A6C 0020+00 1/0 0/0 0/0 .text            daTurara_Execute__FP10daTurara_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTurara_Execute(daTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/daTurara_Execute__FP10daTurara_c.s"
}
#pragma pop

/* 80B9E52C-80B9E54C 001A8C 0020+00 1/0 0/0 0/0 .text            daTurara_Delete__FP10daTurara_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTurara_Delete(daTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/daTurara_Delete__FP10daTurara_c.s"
}
#pragma pop

/* 80B9E54C-80B9E56C 001AAC 0020+00 1/0 0/0 0/0 .text            daTurara_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTurara_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/daTurara_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80B9E56C-80B9E5B4 001ACC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80B9E5B4-80B9E620 001B14 006C+00 2/1 0/0 0/0 .text            __dt__14daTurara_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTurara_HIO_c::~daTurara_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__14daTurara_HIO_cFv.s"
}
#pragma pop

/* 80B9E620-80B9E690 001B80 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_Turara_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_Turara_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__sinit_d_a_obj_Turara_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B9E620, __sinit_d_a_obj_Turara_cpp);
#pragma pop

/* 80B9E690-80B9E698 001BF0 0008+00 1/0 0/0 0/0 .text            @1448@eventStart__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9E690() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/func_80B9E690.s"
}
#pragma pop

/* 80B9E698-80B9E6A0 001BF8 0008+00 1/0 0/0 0/0 .text            @1448@__dt__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9E698() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/func_80B9E698.s"
}
#pragma pop

/* 80B9E6A0-80B9E6A8 001C00 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9E6A0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/func_80B9E6A0.s"
}
#pragma pop

/* 80B9E6A8-80B9E6B0 001C08 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9E6A8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/func_80B9E6A8.s"
}
#pragma pop

/* 80B9E6B0-80B9E6F8 001C10 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 80B9E6F8-80B9E700 001C58 0008+00 1/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 80B9E700-80B9E708 001C60 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 80B9E708-80B9E710 001C68 0008+00 2/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 80B9E710-80B9E8E0 001C70 01D0+00 2/1 0/0 0/0 .text            __dt__10daTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTurara_c::~daTurara_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Turara/d_a_obj_Turara/__dt__10daTurara_cFv.s"
}
#pragma pop

/* 80B9E970-80B9E970 00007C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
