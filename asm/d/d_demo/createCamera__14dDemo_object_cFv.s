lbl_800390AC:
/* 800390AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800390B0  7C 08 02 A6 */	mflr r0
/* 800390B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800390B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800390BC  7C 7F 1B 78 */	mr r31, r3
/* 800390C0  80 63 00 84 */	lwz r3, 0x84(r3)
/* 800390C4  28 03 00 00 */	cmplwi r3, 0
/* 800390C8  41 82 00 08 */	beq lbl_800390D0
/* 800390CC  48 00 00 48 */	b lbl_80039114
lbl_800390D0:
/* 800390D0  38 60 00 40 */	li r3, 0x40
/* 800390D4  48 29 5B 79 */	bl __nw__FUl
/* 800390D8  28 03 00 00 */	cmplwi r3, 0
/* 800390DC  41 82 00 30 */	beq lbl_8003910C
/* 800390E0  3C 80 80 3C */	lis r4, __vt__Q26JStage7TObject@ha /* 0x803C47E8@ha */
/* 800390E4  38 04 47 E8 */	addi r0, r4, __vt__Q26JStage7TObject@l /* 0x803C47E8@l */
/* 800390E8  90 03 00 00 */	stw r0, 0(r3)
/* 800390EC  3C 80 80 3C */	lis r4, __vt__Q26JStage7TCamera@ha /* 0x803C4680@ha */
/* 800390F0  38 04 46 80 */	addi r0, r4, __vt__Q26JStage7TCamera@l /* 0x803C4680@l */
/* 800390F4  90 03 00 00 */	stw r0, 0(r3)
/* 800390F8  3C 80 80 3A */	lis r4, __vt__14dDemo_camera_c@ha /* 0x803A7AA0@ha */
/* 800390FC  38 04 7A A0 */	addi r0, r4, __vt__14dDemo_camera_c@l /* 0x803A7AA0@l */
/* 80039100  90 03 00 00 */	stw r0, 0(r3)
/* 80039104  38 00 00 00 */	li r0, 0
/* 80039108  98 03 00 04 */	stb r0, 4(r3)
lbl_8003910C:
/* 8003910C  90 7F 00 84 */	stw r3, 0x84(r31)
/* 80039110  80 7F 00 84 */	lwz r3, 0x84(r31)
lbl_80039114:
/* 80039114  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80039118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8003911C  7C 08 03 A6 */	mtlr r0
/* 80039120  38 21 00 10 */	addi r1, r1, 0x10
/* 80039124  4E 80 00 20 */	blr 
