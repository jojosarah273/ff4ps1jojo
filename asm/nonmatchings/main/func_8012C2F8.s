nonmatching func_8012C2F8, 0x68

glabel func_8012C2F8
    /* 3A6F8 8012C2F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A6FC 8012C2FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A700 8012C300 90D8030C */  jal        func_800F6240
    /* 3A704 8012C304 821A0424 */   addiu     $a0, $zero, 0x1A82
    /* 3A708 8012C308 E7E4030C */  jal        func_800F939C
    /* 3A70C 8012C30C 00000000 */   nop
    /* 3A710 8012C310 2B84040C */  jal        func_801210AC
    /* 3A714 8012C314 00000000 */   nop
    /* 3A718 8012C318 1A80023C */  lui        $v0, %hi(D_801991AC)
    /* 3A71C 8012C31C AC914494 */  lhu        $a0, %lo(D_801991AC)($v0)
    /* 3A720 8012C320 40DD030C */  jal        func_800F7500
    /* 3A724 8012C324 00000000 */   nop
    /* 3A728 8012C328 CC7B040C */  jal        func_8011EF30
    /* 3A72C 8012C32C 00000000 */   nop
    /* 3A730 8012C330 83E5030C */  jal        func_800F960C
    /* 3A734 8012C334 00000000 */   nop
    /* 3A738 8012C338 E97E040C */  jal        func_8011FBA4
    /* 3A73C 8012C33C 00000000 */   nop
    /* 3A740 8012C340 FC98040C */  jal        func_801263F0
    /* 3A744 8012C344 00000000 */   nop
    /* 3A748 8012C348 94B0040C */  jal        func_8012C250
    /* 3A74C 8012C34C 00000000 */   nop
    /* 3A750 8012C350 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A754 8012C354 00000000 */  nop
    /* 3A758 8012C358 0800E003 */  jr         $ra
    /* 3A75C 8012C35C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C2F8
