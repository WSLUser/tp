lbl_802BC218:
/* 802BC218  A0 03 00 12 */	lhz r0, 0x12(r3)
/* 802BC21C  28 00 00 00 */	cmplwi r0, 0
/* 802BC220  41 82 00 20 */	beq lbl_802BC240
/* 802BC224  54 03 07 7F */	clrlwi. r3, r0, 0x1d
/* 802BC228  4C 82 00 20 */	bnelr 
/* 802BC22C  54 00 06 77 */	rlwinm. r0, r0, 0, 0x19, 0x1b
/* 802BC230  41 82 00 10 */	beq lbl_802BC240
/* 802BC234  7C 03 26 70 */	srawi r3, r0, 4
/* 802BC238  38 63 00 07 */	addi r3, r3, 7
/* 802BC23C  4E 80 00 20 */	blr 
lbl_802BC240:
/* 802BC240  38 60 00 00 */	li r3, 0
/* 802BC244  4E 80 00 20 */	blr 
