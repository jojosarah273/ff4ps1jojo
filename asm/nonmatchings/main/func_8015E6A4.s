nonmatching func_8015E6A4, 0x38

glabel func_8015E6A4
    /* 6CAA4 8015E6A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CAA8 8015E6A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CAAC 8015E6AC 9CDC030C */  jal        func_800F7270
    /* 6CAB0 8015E6B0 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6CAB4 8015E6B4 53D9030C */  jal        func_800F654C
    /* 6CAB8 8015E6B8 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 6CABC 8015E6BC DAE1030C */  jal        func_800F8768
    /* 6CAC0 8015E6C0 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6CAC4 8015E6C4 B779050C */  jal        func_8015E6DC
    /* 6CAC8 8015E6C8 00000000 */   nop
    /* 6CACC 8015E6CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CAD0 8015E6D0 00000000 */  nop
    /* 6CAD4 8015E6D4 0800E003 */  jr         $ra
    /* 6CAD8 8015E6D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E6A4
