nonmatching func_8014E984, 0x40

glabel func_8014E984
    /* 5CD84 8014E984 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CD88 8014E988 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CD8C 8014E98C 93E0030C */  jal        func_800F824C
    /* 5CD90 8014E990 26000424 */   addiu     $a0, $zero, 0x26
    /* 5CD94 8014E994 713A050C */  jal        func_8014E9C4
    /* 5CD98 8014E998 00000000 */   nop
    /* 5CD9C 8014E99C 93E0030C */  jal        func_800F824C
    /* 5CDA0 8014E9A0 28000424 */   addiu     $a0, $zero, 0x28
    /* 5CDA4 8014E9A4 C8C9010C */  jal        func_80072720
    /* 5CDA8 8014E9A8 00000000 */   nop
    /* 5CDAC 8014E9AC 8CD9030C */  jal        func_800F6630
    /* 5CDB0 8014E9B0 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 5CDB4 8014E9B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CDB8 8014E9B8 00000000 */  nop
    /* 5CDBC 8014E9BC 0800E003 */  jr         $ra
    /* 5CDC0 8014E9C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E984
