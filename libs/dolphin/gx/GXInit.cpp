//
// Generated By: dol2asm
// Translation Unit: GXInit
//

#include "dolphin/gx/GXInit.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __GXDefaultTexRegionCallback();
extern "C" void __GXDefaultTlutRegionCallback();
extern "C" void __GXShutdown();
extern "C" void __GXInitRevisionBits();
extern "C" void GXInit();
extern "C" void __GXInitGX();

//
// External References:
//

extern "C" void PPCSync();
extern "C" void PPCMfhid2();
extern "C" void PPCMthid2();
extern "C" void PPCMtwpar();
extern "C" void OSRegisterVersion();
extern "C" void OSRegisterResetFunction();
extern "C" void OSGetTime();
extern "C" void VIGetTvFormat();
extern "C" void GXInitFifoBase();
extern "C" void GXSetCPUFifo();
extern "C" void GXSetGPFifo();
extern "C" void GXSetBreakPtCallback();
extern "C" void __GXFifoInit();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmtv();
extern "C" void GXSetArray();
extern "C" void GXInvalidateVtxCache();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetMisc();
extern "C" void __GXAbort();
extern "C" void GXPokeAlphaMode();
extern "C" void GXPokeAlphaRead();
extern "C" void GXPokeAlphaUpdate();
extern "C" void GXPokeBlendMode();
extern "C" void GXPokeColorUpdate();
extern "C" void GXPokeDstAlpha();
extern "C" void GXPokeDither();
extern "C" void GXPokeZMode();
extern "C" void GXSetDrawSyncCallback();
extern "C" void GXSetDrawDoneCallback();
extern "C" void __GXPEInit();
extern "C" void GXSetLineWidth();
extern "C" void GXSetPointSize();
extern "C" void GXEnableTexOffsets();
extern "C" void GXSetCullMode();
extern "C" void GXSetCoPlanar();
extern "C" void GXSetDispCopySrc();
extern "C" void GXSetDispCopyDst();
extern "C" void GXSetDispCopyFrame2Field();
extern "C" void GXSetCopyClamp();
extern "C" void GXSetDispCopyYScale();
extern "C" void GXSetCopyClear();
extern "C" void GXSetCopyFilter();
extern "C" void GXSetDispCopyGamma();
extern "C" void GXClearBoundingBox();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXInitTexObj();
extern "C" void GXGetTexObjFmt();
extern "C" void GXGetTexObjMipMap();
extern "C" void GXLoadTexObj();
extern "C" void GXInitTexCacheRegion();
extern "C" void GXInitTlutRegion();
extern "C" void GXInvalidateTexAll();
extern "C" void GXSetTexRegionCallback();
extern "C" void GXSetTlutRegionCallback();
extern "C" void __GXSetTmemConfig();
extern "C" void GXSetIndTexCoordScale();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevDirect();
extern "C" void __GXSetIndirectMask();
extern "C" void __GXFlushTextureState();
extern "C" void GXSetTevOp();
extern "C" void GXSetTevKColorSel();
extern "C" void GXSetTevKAlphaSel();
extern "C" void GXSetTevSwapMode();
extern "C" void GXSetTevSwapModeTable();
extern "C" void GXSetAlphaCompare();
extern "C" void GXSetZTexture();
extern "C" void GXSetTevOrder();
extern "C" void GXSetNumTevStages();
extern "C" void GXSetFog();
extern "C" void GXSetFogRangeAdj();
extern "C" void GXSetBlendMode();
extern "C" void GXSetColorUpdate();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetZMode();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetPixelFmt();
extern "C" void GXSetDither();
extern "C" void GXSetDstAlpha();
extern "C" void GXSetFieldMask();
extern "C" void GXSetFieldMode();
extern "C" void GXSetProjectionv();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXLoadNrmMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXSetViewport();
extern "C" void GXSetScissor();
extern "C" void GXSetScissorBoxOffset();
extern "C" void GXSetClipMode();
extern "C" void GXSetGPMetric();
extern "C" void GXClearGPMetric();
extern "C" extern u8 GXNtsc480IntDf[60];
extern "C" extern u8 GXMpal480IntDf[60];
extern "C" extern u8 GXPal528IntDf[60];
extern "C" extern u8 GXEurgb60Hz480IntDf[60 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8044CE00-8044CE80 079B20 0080+00 1/1 0/0 0/0 .bss             FifoObj */
static u8 FifoObj[128];

/* 8044CE80-8044D430 079BA0 05B0+00 1/0 0/0 0/0 .bss             gxData */
static u8 gxData[1456];

/* 80456580-80456584 -00001 0004+00 6/6 108/108 0/0 .sdata2          __GXData */
SECTION_SDATA2 extern void* __GXData = (void*)&gxData;

/* 8035921C-80359318 353B5C 00FC+00 1/1 0/0 0/0 .text            __GXDefaultTexRegionCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXDefaultTexRegionCallback() {
    nofralloc
#include "asm/dolphin/gx/GXInit/__GXDefaultTexRegionCallback.s"
}
#pragma pop

/* 80359318-8035933C 353C58 0024+00 1/1 0/0 0/0 .text            __GXDefaultTlutRegionCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXDefaultTlutRegionCallback() {
    nofralloc
#include "asm/dolphin/gx/GXInit/__GXDefaultTlutRegionCallback.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451920-80451924 000E20 0004+00 1/1 2/2 0/0 .sbss            __piReg */
extern u8 __piReg[4];
u8 __piReg[4];

/* 80451924-80451928 000E24 0004+00 2/2 12/12 0/0 .sbss            __cpReg */
extern u8 __cpReg[4];
u8 __cpReg[4];

/* 80451928-8045192C 000E28 0004+00 1/1 11/11 0/0 .sbss            __peReg */
extern u8 __peReg[4];
u8 __peReg[4];

/* 8045192C-80451930 000E2C 0004+00 2/2 2/2 0/0 .sbss            __memReg */
extern u8 __memReg[4];
u8 __memReg[4];

/* 80451930-80451938 000E30 0004+04 1/1 0/0 0/0 .sbss            peCount$35 */
static u8 peCount[4 + 4 /* padding */];

/* 80451938-8045193C 000E38 0004+00 1/1 0/0 0/0 .sbss            time$36 */
static u8 time[4];

/* 8045193C-80451940 000E3C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045193C[4];

/* 80451940-80451944 000E40 0004+00 1/1 0/0 0/0 .sbss            calledOnce$37 */
static u8 calledOnce[4];

/* 8035933C-803594CC 353C7C 0190+00 1/0 0/0 0/0 .text            __GXShutdown */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXShutdown() {
    nofralloc
#include "asm/dolphin/gx/GXInit/__GXShutdown.s"
}
#pragma pop

/* 803594CC-80359670 353E0C 01A4+00 1/1 1/1 0/0 .text            __GXInitRevisionBits */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXInitRevisionBits() {
    nofralloc
#include "asm/dolphin/gx/GXInit/__GXInitRevisionBits.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2040-803D20A0 02F160 0044+1C 2/1 0/0 0/0 .data            @1 */
SECTION_DATA static u8 lit_1[68 + 28 /* padding */] = {
    0x3C,
    0x3C,
    0x20,
    0x44,
    0x6F,
    0x6C,
    0x70,
    0x68,
    0x69,
    0x6E,
    0x20,
    0x53,
    0x44,
    0x4B,
    0x20,
    0x2D,
    0x20,
    0x47,
    0x58,
    0x09,
    0x72,
    0x65,
    0x6C,
    0x65,
    0x61,
    0x73,
    0x65,
    0x20,
    0x62,
    0x75,
    0x69,
    0x6C,
    0x64,
    0x3A,
    0x20,
    0x4E,
    0x6F,
    0x76,
    0x20,
    0x31,
    0x30,
    0x20,
    0x32,
    0x30,
    0x30,
    0x34,
    0x20,
    0x30,
    0x36,
    0x3A,
    0x32,
    0x37,
    0x3A,
    0x31,
    0x32,
    0x20,
    0x28,
    0x30,
    0x78,
    0x32,
    0x33,
    0x30,
    0x31,
    0x29,
    0x20,
    0x3E,
    0x3E,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 803D20A0-803D20C0 02F1C0 0020+00 0/1 0/0 0/0 .data            DefaultTexData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 DefaultTexData[32] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
#pragma pop

/* 803D20C0-803D2190 02F1E0 00D0+00 0/1 0/0 0/0 .data            GXDefaultVATList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 GXDefaultVATList[208] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803D2190-803D21AC 02F2B0 001C+00 0/1 0/0 0/0 .data            GXDefaultProjData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 GXDefaultProjData[28] = {
    0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xBF, 0x80, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803D21AC-803D226C 02F2CC 00C0+00 1/1 0/0 0/0 .data            GXTexRegionAddrTable */
SECTION_DATA static u8 GXTexRegionAddrTable[192] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x03, 0x80, 0x00,
    0x00, 0x04, 0x80, 0x00, 0x00, 0x05, 0x80, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0B, 0x80, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x08, 0x80, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x00, 0x00, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
};

/* 803D226C-803D2280 -00001 0010+04 1/1 0/0 0/0 .data            GXResetFuncInfo */
SECTION_DATA static void* GXResetFuncInfo[4 + 1 /* padding */] = {
    (void*)__GXShutdown,
    (void*)0x0000007F,
    (void*)NULL,
    (void*)NULL,
    /* padding */
    NULL,
};

/* 80450A78-80450A80 -00001 0004+04 1/1 0/0 0/0 .sdata           __GXVersion */
SECTION_SDATA static void* __GXVersion[1 + 1 /* padding */] = {
    (void*)&lit_1,
    /* padding */
    NULL,
};

/* 80451944-80451948 000E44 0004+00 1/1 0/0 0/0 .sbss            resetFuncRegistered$145 */
static u8 resetFuncRegistered[4];

/* 80456584-80456588 004B84 0004+00 1/1 0/0 0/0 .sdata2          @267 */
SECTION_SDATA2 static f32 lit_267 = 16777216.0f;

/* 80456588-8045658C 004B88 0004+00 2/2 0/0 0/0 .sdata2          @268 */
SECTION_SDATA2 static u8 lit_268[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80359670-80359C70 353FB0 0600+00 0/0 2/2 0/0 .text            GXInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXInit() {
    nofralloc
#include "asm/dolphin/gx/GXInit/GXInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045658C-80456590 004B8C 0004+00 1/1 0/0 0/0 .sdata2          @269 */
SECTION_SDATA2 static u32 lit_269 = 0x404040FF;

/* 80456590-80456594 004B90 0004+00 1/1 0/0 0/0 .sdata2          @270 */
SECTION_SDATA2 static u8 lit_270[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456594-80456598 004B94 0004+00 1/1 0/0 0/0 .sdata2          @271 */
SECTION_SDATA2 static u32 lit_271 = 0xFFFFFFFF;

/* 80456598-8045659C 004B98 0004+00 1/1 0/0 0/0 .sdata2          @331 */
SECTION_SDATA2 static f32 lit_331 = 1.0f;

/* 8045659C-804565A0 004B9C 0004+00 1/1 0/0 0/0 .sdata2          @332 */
SECTION_SDATA2 static f32 lit_332 = 1.0f / 10.0f;

/* 804565A0-804565A8 004BA0 0008+00 1/1 0/0 0/0 .sdata2          @334 */
SECTION_SDATA2 static f64 lit_334 = 4503599627370496.0 /* cast u32 to float */;

/* 80359C70-8035A5A8 3545B0 0938+00 1/1 0/0 0/0 .text            __GXInitGX */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXInitGX() {
    nofralloc
#include "asm/dolphin/gx/GXInit/__GXInitGX.s"
}
#pragma pop
