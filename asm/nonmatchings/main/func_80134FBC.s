nonmatching func_80134FBC, 0x38

glabel func_80134FBC
    /* 433BC 80134FBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 433C0 80134FC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 433C4 80134FC4 9DD3040C */  jal        func_80134E74
    /* 433C8 80134FC8 00000000 */   nop
    /* 433CC 80134FCC 1A80023C */  lui        $v0, %hi(D_801991FE)
    /* 433D0 80134FD0 FE914494 */  lhu        $a0, %lo(D_801991FE)($v0)
    /* 433D4 80134FD4 40DD030C */  jal        func_800F7500
    /* 433D8 80134FD8 00000000 */   nop
    /* 433DC 80134FDC CC7B040C */  jal        func_8011EF30
    /* 433E0 80134FE0 00000000 */   nop
    /* 433E4 80134FE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 433E8 80134FE8 00000000 */  nop
    /* 433EC 80134FEC 0800E003 */  jr         $ra
    /* 433F0 80134FF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80134FBC
