lbl_8011E3D8:
/* 8011E3D8  38 A0 00 01 */	li r5, 1
/* 8011E3DC  7C A6 2B 78 */	mr r6, r5
/* 8011E3E0  7C A7 2B 78 */	mr r7, r5
/* 8011E3E4  7C A8 2B 78 */	mr r8, r5
/* 8011E3E8  38 03 FF 80 */	addi r0, r3, -128
/* 8011E3EC  38 80 FF FF */	li r4, -1
/* 8011E3F0  7C 00 28 10 */	subfc r0, r0, r5
/* 8011E3F4  7C 04 01 90 */	subfze r0, r4
/* 8011E3F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8011E3FC  40 82 00 08 */	bne lbl_8011E404
/* 8011E400  39 00 00 00 */	li r8, 0
lbl_8011E404:
/* 8011E404  55 00 06 3F */	clrlwi. r0, r8, 0x18
/* 8011E408  40 82 00 10 */	bne lbl_8011E418
/* 8011E40C  2C 03 00 90 */	cmpwi r3, 0x90
/* 8011E410  41 82 00 08 */	beq lbl_8011E418
/* 8011E414  38 E0 00 00 */	li r7, 0
lbl_8011E418:
/* 8011E418  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 8011E41C  40 82 00 10 */	bne lbl_8011E42C
/* 8011E420  2C 03 00 2D */	cmpwi r3, 0x2d
/* 8011E424  41 82 00 08 */	beq lbl_8011E42C
/* 8011E428  38 C0 00 00 */	li r6, 0
lbl_8011E42C:
/* 8011E42C  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8011E430  40 82 00 10 */	bne lbl_8011E440
/* 8011E434  2C 03 00 91 */	cmpwi r3, 0x91
/* 8011E438  41 82 00 08 */	beq lbl_8011E440
/* 8011E43C  38 A0 00 00 */	li r5, 0
lbl_8011E440:
/* 8011E440  54 A3 06 3E */	clrlwi r3, r5, 0x18
/* 8011E444  4E 80 00 20 */	blr 
