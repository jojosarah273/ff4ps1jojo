nonmatching func_8013C50C, 0x48

glabel func_8013C50C
    /* 4A90C 8013C50C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A910 8013C510 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4A914 8013C514 2B84040C */  jal        func_801210AC
    /* 4A918 8013C518 00000000 */   nop
    /* 4A91C 8013C51C 1A80023C */  lui        $v0, %hi(D_80199268)
    /* 4A920 8013C520 68924494 */  lhu        $a0, %lo(D_80199268)($v0)
    /* 4A924 8013C524 40DD030C */  jal        func_800F7500
    /* 4A928 8013C528 00000000 */   nop
    /* 4A92C 8013C52C E97E040C */  jal        func_8011FBA4
    /* 4A930 8013C530 00000000 */   nop
    /* 4A934 8013C534 FC98040C */  jal        func_801263F0
    /* 4A938 8013C538 00000000 */   nop
    /* 4A93C 8013C53C 25F0040C */  jal        func_8013C094
    /* 4A940 8013C540 00000000 */   nop
    /* 4A944 8013C544 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A948 8013C548 00000000 */  nop
    /* 4A94C 8013C54C 0800E003 */  jr         $ra
    /* 4A950 8013C550 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013C50C
