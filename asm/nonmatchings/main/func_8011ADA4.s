nonmatching func_8011ADA4, 0x48

glabel func_8011ADA4
    /* 291A4 8011ADA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 291A8 8011ADA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 291AC 8011ADAC 655D040C */  jal        func_80117594
    /* 291B0 8011ADB0 00000000 */   nop
    /* 291B4 8011ADB4 93E0030C */  jal        func_800F824C
    /* 291B8 8011ADB8 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 291BC 8011ADBC E620040C */  jal        func_80108398
    /* 291C0 8011ADC0 00000000 */   nop
    /* 291C4 8011ADC4 261F040C */  jal        func_80107C98
    /* 291C8 8011ADC8 00000000 */   nop
    /* 291CC 8011ADCC CF1F040C */  jal        func_80107F3C
    /* 291D0 8011ADD0 00000000 */   nop
    /* 291D4 8011ADD4 977A040C */  jal        func_8011EA5C
    /* 291D8 8011ADD8 00000000 */   nop
    /* 291DC 8011ADDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 291E0 8011ADE0 00000000 */  nop
    /* 291E4 8011ADE4 0800E003 */  jr         $ra
    /* 291E8 8011ADE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011ADA4
