lbl_80372414:
/* 80372414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80372418  7C 08 02 A6 */	mflr r0
/* 8037241C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80372420  48 00 09 01 */	bl EXI2_Unreserve
/* 80372424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80372428  38 60 00 00 */	li r3, 0
/* 8037242C  7C 08 03 A6 */	mtlr r0
/* 80372430  38 21 00 10 */	addi r1, r1, 0x10
/* 80372434  4E 80 00 20 */	blr 
