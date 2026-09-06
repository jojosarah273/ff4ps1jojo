nonmatching func_8011EDA4, 0x50

glabel func_8011EDA4
    /* 2D1A4 8011EDA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D1A8 8011EDA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D1AC 8011EDAC 80E4030C */  jal        func_800F9200
    /* 2D1B0 8011EDB0 00000000 */   nop
    /* 2D1B4 8011EDB4 53D9030C */  jal        func_800F654C
    /* 2D1B8 8011EDB8 21200000 */   addu      $a0, $zero, $zero
    /* 2D1BC 8011EDBC 7AE0030C */  jal        func_800F81E8
    /* 2D1C0 8011EDC0 40010424 */   addiu     $a0, $zero, 0x140
    /* 2D1C4 8011EDC4 87BA050C */  jal        func_8016EA1C
    /* 2D1C8 8011EDC8 00000000 */   nop
    /* 2D1CC 8011EDCC 53D9030C */  jal        func_800F654C
    /* 2D1D0 8011EDD0 21200000 */   addu      $a0, $zero, $zero
    /* 2D1D4 8011EDD4 52CF030C */  jal        func_800F3D48
    /* 2D1D8 8011EDD8 00000000 */   nop
    /* 2D1DC 8011EDDC F7E4030C */  jal        func_800F93DC
    /* 2D1E0 8011EDE0 00000000 */   nop
    /* 2D1E4 8011EDE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D1E8 8011EDE8 00000000 */  nop
    /* 2D1EC 8011EDEC 0800E003 */  jr         $ra
    /* 2D1F0 8011EDF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EDA4
