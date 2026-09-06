nonmatching func_80114788, 0x38

glabel func_80114788
    /* 22B88 80114788 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22B8C 8011478C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22B90 80114790 53D9030C */  jal        func_800F654C
    /* 22B94 80114794 10000424 */   addiu     $a0, $zero, 0x10
    /* 22B98 80114798 93E0030C */  jal        func_800F824C
    /* 22B9C 8011479C A2000424 */   addiu     $a0, $zero, 0xA2
    /* 22BA0 801147A0 D510040C */  jal        func_80104354
    /* 22BA4 801147A4 00000000 */   nop
    /* 22BA8 801147A8 977A040C */  jal        func_8011EA5C
    /* 22BAC 801147AC 00000000 */   nop
    /* 22BB0 801147B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22BB4 801147B4 00000000 */  nop
    /* 22BB8 801147B8 0800E003 */  jr         $ra
    /* 22BBC 801147BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114788
