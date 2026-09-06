nonmatching func_80125A64, 0x68

glabel func_80125A64
    /* 33E64 80125A64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 33E68 80125A68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 33E6C 80125A6C C7E5030C */  jal        func_800F971C
    /* 33E70 80125A70 00000000 */   nop
  .L80125A74:
    /* 33E74 80125A74 C87C040C */  jal        func_8011F320
    /* 33E78 80125A78 00000000 */   nop
    /* 33E7C 80125A7C B396040C */  jal        func_80125ACC
    /* 33E80 80125A80 00000000 */   nop
    /* 33E84 80125A84 CE97040C */  jal        func_80125F38
    /* 33E88 80125A88 00000000 */   nop
    /* 33E8C 80125A8C 7AD8030C */  jal        func_800F61E8
    /* 33E90 80125A90 00000000 */   nop
    /* 33E94 80125A94 5DD5030C */  jal        func_800F5574
    /* 33E98 80125A98 05000424 */   addiu     $a0, $zero, 0x5
    /* 33E9C 80125A9C F5D4030C */  jal        func_800F53D4
    /* 33EA0 80125AA0 00000000 */   nop
    /* 33EA4 80125AA4 F3FF4010 */  beqz       $v0, .L80125A74
    /* 33EA8 80125AA8 00000000 */   nop
    /* 33EAC 80125AAC C87C040C */  jal        func_8011F320
    /* 33EB0 80125AB0 00000000 */   nop
    /* 33EB4 80125AB4 C37B040C */  jal        func_8011EF0C
    /* 33EB8 80125AB8 00000000 */   nop
    /* 33EBC 80125ABC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 33EC0 80125AC0 00000000 */  nop
    /* 33EC4 80125AC4 0800E003 */  jr         $ra
    /* 33EC8 80125AC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80125A64
