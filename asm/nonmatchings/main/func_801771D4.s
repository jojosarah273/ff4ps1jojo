nonmatching func_801771D4, 0x50

glabel func_801771D4
    /* 855D4 801771D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 855D8 801771D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 855DC 801771DC 50D4030C */  jal        func_800F5140
    /* 855E0 801771E0 00000000 */   nop
    /* 855E4 801771E4 93E0030C */  jal        func_800F824C
    /* 855E8 801771E8 45000424 */   addiu     $a0, $zero, 0x45
    /* 855EC 801771EC 50D4030C */  jal        func_800F5140
    /* 855F0 801771F0 00000000 */   nop
    /* 855F4 801771F4 D3D3030C */  jal        func_800F4F4C
    /* 855F8 801771F8 00000000 */   nop
    /* 855FC 801771FC 0FCF030C */  jal        func_800F3C3C
    /* 85600 80177200 45000424 */   addiu     $a0, $zero, 0x45
    /* 85604 80177204 CECF030C */  jal        func_800F3F38
    /* 85608 80177208 21204000 */   addu      $a0, $v0, $zero
    /* 8560C 8017720C F5DC050C */  jal        func_801773D4
    /* 85610 80177210 00000000 */   nop
    /* 85614 80177214 1000BF8F */  lw         $ra, 0x10($sp)
    /* 85618 80177218 00000000 */  nop
    /* 8561C 8017721C 0800E003 */  jr         $ra
    /* 85620 80177220 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801771D4
