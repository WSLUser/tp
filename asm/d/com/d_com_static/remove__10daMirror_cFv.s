lbl_80031990:
/* 80031990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80031994  7C 08 02 A6 */	mflr r0
/* 80031998  90 01 00 14 */	stw r0, 0x14(r1)
/* 8003199C  80 6D 88 28 */	lwz r3, m_myObj__10daMirror_c(r13)
/* 800319A0  28 03 00 00 */	cmplwi r3, 0
/* 800319A4  40 82 00 0C */	bne lbl_800319B0
/* 800319A8  38 60 00 00 */	li r3, 0
/* 800319AC  48 00 00 0C */	b lbl_800319B8
lbl_800319B0:
/* 800319B0  4B FE 82 CD */	bl fopAcM_delete__FP10fopAc_ac_c
/* 800319B4  38 60 00 01 */	li r3, 1
lbl_800319B8:
/* 800319B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800319BC  7C 08 03 A6 */	mtlr r0
/* 800319C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800319C4  4E 80 00 20 */	blr 
