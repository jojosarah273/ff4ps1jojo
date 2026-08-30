nonmatching func_80114680, 0x70

glabel func_80114680
    /* 22A80 80114680 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22A84 80114684 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22A88 80114688 8CD9030C */  jal        func_800F6630
    /* 22A8C 8011468C 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 22A90 80114690 92D0030C */  jal        func_800F4248
    /* 22A94 80114694 07000424 */   addiu     $a0, $zero, 0x7
    /* 22A98 80114698 48D0030C */  jal        func_800F4120
    /* 22A9C 8011469C 02020424 */   addiu     $a0, $zero, 0x202
    /* 22AA0 801146A0 0B004014 */  bnez       $v0, .L801146D0
    /* 22AA4 801146A4 00000000 */   nop
    /* 22AA8 801146A8 8CD9030C */  jal        func_800F6630
    /* 22AAC 801146AC 80000424 */   addiu     $a0, $zero, 0x80
    /* 22AB0 801146B0 5DD5030C */  jal        func_800F5574
    /* 22AB4 801146B4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 22AB8 801146B8 F5D4030C */  jal        func_800F53D4
    /* 22ABC 801146BC 00000000 */   nop
    /* 22AC0 801146C0 03004014 */  bnez       $v0, .L801146D0
    /* 22AC4 801146C4 00000000 */   nop
    /* 22AC8 801146C8 AFD8030C */  jal        func_800F62BC
    /* 22ACC 801146CC 80000424 */   addiu     $a0, $zero, 0x80
  .L801146D0:
    /* 22AD0 801146D0 8CD9030C */  jal        func_800F6630
    /* 22AD4 801146D4 80000424 */   addiu     $a0, $zero, 0x80
    /* 22AD8 801146D8 62E0030C */  jal        func_800F8188
    /* 22ADC 801146DC 00210424 */   addiu     $a0, $zero, 0x2100
    /* 22AE0 801146E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22AE4 801146E4 00000000 */  nop
    /* 22AE8 801146E8 0800E003 */  jr         $ra
    /* 22AEC 801146EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114680
