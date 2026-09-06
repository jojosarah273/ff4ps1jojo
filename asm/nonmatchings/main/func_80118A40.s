nonmatching func_80118A40, 0x68

glabel func_80118A40
    /* 26E40 80118A40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26E44 80118A44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26E48 80118A48 8CD9030C */  jal        func_800F6630
    /* 26E4C 80118A4C 80000424 */   addiu     $a0, $zero, 0x80
    /* 26E50 80118A50 0DD9030C */  jal        func_800F6434
    /* 26E54 80118A54 02020424 */   addiu     $a0, $zero, 0x202
    /* 26E58 80118A58 09004014 */  bnez       $v0, .L80118A80
    /* 26E5C 80118A5C 00000000 */   nop
    /* 26E60 80118A60 53D9030C */  jal        func_800F654C
    /* 26E64 80118A64 07000424 */   addiu     $a0, $zero, 0x7
    /* 26E68 80118A68 17F6030C */  jal        func_800FD85C
    /* 26E6C 80118A6C 00000000 */   nop
    /* 26E70 80118A70 977A040C */  jal        func_8011EA5C
    /* 26E74 80118A74 00000000 */   nop
    /* 26E78 80118A78 A6620408 */  j          .L80118A98
    /* 26E7C 80118A7C 00000000 */   nop
  .L80118A80:
    /* 26E80 80118A80 53D9030C */  jal        func_800F654C
    /* 26E84 80118A84 07000424 */   addiu     $a0, $zero, 0x7
    /* 26E88 80118A88 45F6030C */  jal        func_800FD914
    /* 26E8C 80118A8C 00000000 */   nop
    /* 26E90 80118A90 977A040C */  jal        func_8011EA5C
    /* 26E94 80118A94 00000000 */   nop
  .L80118A98:
    /* 26E98 80118A98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26E9C 80118A9C 00000000 */  nop
    /* 26EA0 80118AA0 0800E003 */  jr         $ra
    /* 26EA4 80118AA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118A40
