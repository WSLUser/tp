lbl_8061E19C:
/* 8061E19C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8061E1A0  7C 08 02 A6 */	mflr r0
/* 8061E1A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8061E1A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8061E1AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8061E1B0  41 82 00 10 */	beq lbl_8061E1C0
/* 8061E1B4  7C 80 07 35 */	extsh. r0, r4
/* 8061E1B8  40 81 00 08 */	ble lbl_8061E1C0
/* 8061E1BC  4B CB 0B 81 */	bl __dl__FPv
lbl_8061E1C0:
/* 8061E1C0  7F E3 FB 78 */	mr r3, r31
/* 8061E1C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8061E1C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8061E1CC  7C 08 03 A6 */	mtlr r0
/* 8061E1D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8061E1D4  4E 80 00 20 */	blr 
