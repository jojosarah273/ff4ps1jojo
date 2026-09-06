nonmatching func_8011AD14, 0x48

glabel func_8011AD14
    /* 29114 8011AD14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29118 8011AD18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2911C 8011AD1C 655D040C */  jal        func_80117594
    /* 29120 8011AD20 00000000 */   nop
    /* 29124 8011AD24 93E0030C */  jal        func_800F824C
    /* 29128 8011AD28 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 2912C 8011AD2C B220040C */  jal        func_801082C8
    /* 29130 8011AD30 00000000 */   nop
    /* 29134 8011AD34 261F040C */  jal        func_80107C98
    /* 29138 8011AD38 00000000 */   nop
    /* 2913C 8011AD3C CF1F040C */  jal        func_80107F3C
    /* 29140 8011AD40 00000000 */   nop
    /* 29144 8011AD44 977A040C */  jal        func_8011EA5C
    /* 29148 8011AD48 00000000 */   nop
    /* 2914C 8011AD4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29150 8011AD50 00000000 */  nop
    /* 29154 8011AD54 0800E003 */  jr         $ra
    /* 29158 8011AD58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AD14
