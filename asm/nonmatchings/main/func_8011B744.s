nonmatching func_8011B744, 0x70

glabel func_8011B744
    /* 29B44 8011B744 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29B48 8011B748 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29B4C 8011B74C 80E4030C */  jal        func_800F9200
    /* 29B50 8011B750 00000000 */   nop
    /* 29B54 8011B754 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 29B58 8011B758 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 29B5C 8011B75C 00000000 */  nop
    /* 29B60 8011B760 00006290 */  lbu        $v0, 0x0($v1)
    /* 29B64 8011B764 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 29B68 8011B768 C2100200 */  srl        $v0, $v0, 3
    /* 29B6C 8011B76C 93E0030C */  jal        func_800F824C
    /* 29B70 8011B770 000062A0 */   sb        $v0, 0x0($v1)
    /* 29B74 8011B774 EEE3030C */  jal        func_800F8FB8
    /* 29B78 8011B778 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 29B7C 8011B77C F7E4030C */  jal        func_800F93DC
    /* 29B80 8011B780 00000000 */   nop
    /* 29B84 8011B784 92D0030C */  jal        func_800F4248
    /* 29B88 8011B788 07000424 */   addiu     $a0, $zero, 0x7
    /* 29B8C 8011B78C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 29B90 8011B790 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 29B94 8011B794 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 29B98 8011B798 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 29B9C 8011B79C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29BA0 8011B7A0 00006294 */  lhu        $v0, 0x0($v1)
    /* 29BA4 8011B7A4 00000000 */  nop
    /* 29BA8 8011B7A8 000082A4 */  sh         $v0, 0x0($a0)
    /* 29BAC 8011B7AC 0800E003 */  jr         $ra
    /* 29BB0 8011B7B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B744
