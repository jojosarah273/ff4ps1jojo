nonmatching func_80140FE0, 0x40

glabel func_80140FE0
    /* 4F3E0 80140FE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F3E4 80140FE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F3E8 80140FE8 90D8030C */  jal        func_800F6240
    /* 4F3EC 80140FEC 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F3F0 80140FF0 53D9030C */  jal        func_800F654C
    /* 4F3F4 80140FF4 01000424 */   addiu     $a0, $zero, 0x1
    /* 4F3F8 80140FF8 CD04050C */  jal        func_80141334
    /* 4F3FC 80140FFC 00000000 */   nop
    /* 4F400 80141000 90D8030C */  jal        func_800F6240
    /* 4F404 80141004 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F408 80141008 EE03050C */  jal        func_80140FB8
    /* 4F40C 8014100C 00000000 */   nop
    /* 4F410 80141010 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F414 80141014 00000000 */  nop
    /* 4F418 80141018 0800E003 */  jr         $ra
    /* 4F41C 8014101C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140FE0
