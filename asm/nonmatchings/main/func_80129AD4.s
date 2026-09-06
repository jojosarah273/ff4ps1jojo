nonmatching func_80129AD4, 0x30

glabel func_80129AD4
    /* 37ED4 80129AD4 1A80023C */  lui        $v0, %hi(D_801991A4)
    /* 37ED8 80129AD8 A4914494 */  lhu        $a0, %lo(D_801991A4)($v0)
    /* 37EDC 80129ADC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37EE0 80129AE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37EE4 80129AE4 40DD030C */  jal        func_800F7500
    /* 37EE8 80129AE8 00000000 */   nop
    /* 37EEC 80129AEC E97E040C */  jal        func_8011FBA4
    /* 37EF0 80129AF0 00000000 */   nop
    /* 37EF4 80129AF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37EF8 80129AF8 00000000 */  nop
    /* 37EFC 80129AFC 0800E003 */  jr         $ra
    /* 37F00 80129B00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129AD4
