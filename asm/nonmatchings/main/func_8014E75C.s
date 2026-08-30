nonmatching func_8014E75C, 0x68

glabel func_8014E75C
    /* 5CB5C 8014E75C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CB60 8014E760 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CB64 8014E764 77DC030C */  jal        func_800F71DC
    /* 5CB68 8014E768 10000424 */   addiu     $a0, $zero, 0x10
  .L8014E76C:
    /* 5CB6C 8014E76C CCE4030C */  jal        func_800F9330
    /* 5CB70 8014E770 00000000 */   nop
    /* 5CB74 8014E774 F139050C */  jal        func_8014E7C4
    /* 5CB78 8014E778 00000000 */   nop
    /* 5CB7C 8014E77C 67C9010C */  jal        func_8007259C
    /* 5CB80 8014E780 00000000 */   nop
    /* 5CB84 8014E784 67C9010C */  jal        func_8007259C
    /* 5CB88 8014E788 00000000 */   nop
    /* 5CB8C 8014E78C 68E5030C */  jal        func_800F95A0
    /* 5CB90 8014E790 00000000 */   nop
    /* 5CB94 8014E794 92D7030C */  jal        func_800F5E48
    /* 5CB98 8014E798 00000000 */   nop
    /* 5CB9C 8014E79C 19D7030C */  jal        func_800F5C64
    /* 5CBA0 8014E7A0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5CBA4 8014E7A4 F1FF4014 */  bnez       $v0, .L8014E76C
    /* 5CBA8 8014E7A8 00000000 */   nop
    /* 5CBAC 8014E7AC 2B23050C */  jal        func_80148CAC
    /* 5CBB0 8014E7B0 00000000 */   nop
    /* 5CBB4 8014E7B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CBB8 8014E7B8 00000000 */  nop
    /* 5CBBC 8014E7BC 0800E003 */  jr         $ra
    /* 5CBC0 8014E7C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E75C
