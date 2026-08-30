nonmatching func_8014EC98, 0x30

glabel func_8014EC98
    /* 5D098 8014EC98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D09C 8014EC9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D0A0 8014ECA0 8CD9030C */  jal        func_800F6630
    /* 5D0A4 8014ECA4 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D0A8 8014ECA8 93E0030C */  jal        func_800F824C
    /* 5D0AC 8014ECAC 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D0B0 8014ECB0 93E0030C */  jal        func_800F824C
    /* 5D0B4 8014ECB4 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D0B8 8014ECB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D0BC 8014ECBC 00000000 */  nop
    /* 5D0C0 8014ECC0 0800E003 */  jr         $ra
    /* 5D0C4 8014ECC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EC98
