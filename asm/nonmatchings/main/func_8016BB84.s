nonmatching func_8016BB84, 0x40

glabel func_8016BB84
    /* 79F84 8016BB84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 79F88 8016BB88 1000BFAF */  sw         $ra, 0x10($sp)
    /* 79F8C 8016BB8C 8CD9030C */  jal        func_800F6630
    /* 79F90 8016BB90 64000424 */   addiu     $a0, $zero, 0x64
    /* 79F94 8016BB94 5DD5030C */  jal        func_800F5574
    /* 79F98 8016BB98 02000424 */   addiu     $a0, $zero, 0x2
    /* 79F9C 8016BB9C F5D4030C */  jal        func_800F53D4
    /* 79FA0 8016BBA0 00000000 */   nop
    /* 79FA4 8016BBA4 03004010 */  beqz       $v0, .L8016BBB4
    /* 79FA8 8016BBA8 00000000 */   nop
    /* 79FAC 8016BBAC 67B7050C */  jal        func_8016DD9C
    /* 79FB0 8016BBB0 00000000 */   nop
  .L8016BBB4:
    /* 79FB4 8016BBB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79FB8 8016BBB8 00000000 */  nop
    /* 79FBC 8016BBBC 0800E003 */  jr         $ra
    /* 79FC0 8016BBC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BB84
