lbl_805A39B8:
/* 805A39B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805A39BC  7C 08 02 A6 */	mflr r0
/* 805A39C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805A39C4  4B FF FE D9 */	bl execute__12daTagHinit_cFv
/* 805A39C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805A39CC  7C 08 03 A6 */	mtlr r0
/* 805A39D0  38 21 00 10 */	addi r1, r1, 0x10
/* 805A39D4  4E 80 00 20 */	blr 
