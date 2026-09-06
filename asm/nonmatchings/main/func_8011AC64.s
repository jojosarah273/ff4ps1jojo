nonmatching func_8011AC64, 0x48

glabel func_8011AC64
    /* 29064 8011AC64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29068 8011AC68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2906C 8011AC6C 655D040C */  jal        func_80117594
    /* 29070 8011AC70 00000000 */   nop
    /* 29074 8011AC74 93E0030C */  jal        func_800F824C
    /* 29078 8011AC78 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 2907C 8011AC7C F11F040C */  jal        func_80107FC4
    /* 29080 8011AC80 00000000 */   nop
    /* 29084 8011AC84 261F040C */  jal        func_80107C98
    /* 29088 8011AC88 00000000 */   nop
    /* 2908C 8011AC8C CF1F040C */  jal        func_80107F3C
    /* 29090 8011AC90 00000000 */   nop
    /* 29094 8011AC94 977A040C */  jal        func_8011EA5C
    /* 29098 8011AC98 00000000 */   nop
    /* 2909C 8011AC9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 290A0 8011ACA0 00000000 */  nop
    /* 290A4 8011ACA4 0800E003 */  jr         $ra
    /* 290A8 8011ACA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AC64
