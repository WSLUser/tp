lbl_8045C644:
/* 8045C644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C648  7C 08 02 A6 */	mflr r0
/* 8045C64C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C654  7C 7F 1B 79 */	or. r31, r3, r3
/* 8045C658  41 82 00 30 */	beq lbl_8045C688
/* 8045C65C  3C 60 80 46 */	lis r3, __vt__8cM3dGTri@ha /* 0x8045CDA8@ha */
/* 8045C660  38 03 CD A8 */	addi r0, r3, __vt__8cM3dGTri@l /* 0x8045CDA8@l */
/* 8045C664  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045C668  41 82 00 10 */	beq lbl_8045C678
/* 8045C66C  3C 60 80 46 */	lis r3, __vt__8cM3dGPla@ha /* 0x8045CD9C@ha */
/* 8045C670  38 03 CD 9C */	addi r0, r3, __vt__8cM3dGPla@l /* 0x8045CD9C@l */
/* 8045C674  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_8045C678:
/* 8045C678  7C 80 07 35 */	extsh. r0, r4
/* 8045C67C  40 81 00 0C */	ble lbl_8045C688
/* 8045C680  7F E3 FB 78 */	mr r3, r31
/* 8045C684  4B E7 26 B9 */	bl __dl__FPv
lbl_8045C688:
/* 8045C688  7F E3 FB 78 */	mr r3, r31
/* 8045C68C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C694  7C 08 03 A6 */	mtlr r0
/* 8045C698  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C69C  4E 80 00 20 */	blr 
