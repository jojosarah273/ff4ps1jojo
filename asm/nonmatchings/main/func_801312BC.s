nonmatching func_801312BC, 0x9C

glabel func_801312BC
    /* 3F6BC 801312BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3F6C0 801312C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3F6C4 801312C4 80E4030C */  jal        func_800F9200
    /* 3F6C8 801312C8 00000000 */   nop
    /* 3F6CC 801312CC CCE4030C */  jal        func_800F9330
    /* 3F6D0 801312D0 00000000 */   nop
    /* 3F6D4 801312D4 80E4030C */  jal        func_800F9200
    /* 3F6D8 801312D8 00000000 */   nop
    /* 3F6DC 801312DC 91E5030C */  jal        func_800F9644
    /* 3F6E0 801312E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3F6E4 801312E4 1E00043C */  lui        $a0, (0x1EFEA9 >> 16)
    /* 3F6E8 801312E8 3DDB030C */  jal        func_800F6CF4
    /* 3F6EC 801312EC A9FE8434 */   ori       $a0, $a0, (0x1EFEA9 & 0xFFFF)
    /* 3F6F0 801312F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3F6F4 801312F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3F6F8 801312F8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3F6FC 801312FC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3F700 80131300 00004394 */  lhu        $v1, 0x0($v0)
    /* 3F704 80131304 20000424 */  addiu      $a0, $zero, 0x20
    /* 3F708 80131308 98E5030C */  jal        func_800F9660
    /* 3F70C 8013130C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3F710 80131310 F7E4030C */  jal        func_800F93DC
    /* 3F714 80131314 00000000 */   nop
    /* 3F718 80131318 C191040C */  jal        func_80124704
    /* 3F71C 8013131C 00000000 */   nop
    /* 3F720 80131320 68E5030C */  jal        func_800F95A0
    /* 3F724 80131324 00000000 */   nop
    /* 3F728 80131328 F7E4030C */  jal        func_800F93DC
    /* 3F72C 8013132C 00000000 */   nop
    /* 3F730 80131330 7AD8030C */  jal        func_800F61E8
    /* 3F734 80131334 00000000 */   nop
    /* 3F738 80131338 D9D8030C */  jal        func_800F6364
    /* 3F73C 8013133C 00000000 */   nop
    /* 3F740 80131340 D9D8030C */  jal        func_800F6364
    /* 3F744 80131344 00000000 */   nop
    /* 3F748 80131348 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3F74C 8013134C 00000000 */  nop
    /* 3F750 80131350 0800E003 */  jr         $ra
    /* 3F754 80131354 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801312BC
