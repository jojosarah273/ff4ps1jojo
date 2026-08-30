nonmatching func_80170084, 0x38

glabel func_80170084
    /* 7E484 80170084 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E488 80170088 1000BFAF */  sw         $ra, 0x10($sp)
  .L8017008C:
    /* 7E48C 8017008C D1AE050C */  jal        func_8016BB44
    /* 7E490 80170090 00000000 */   nop
    /* 7E494 80170094 92D7030C */  jal        func_800F5E48
    /* 7E498 80170098 00000000 */   nop
    /* 7E49C 8017009C 19D7030C */  jal        func_800F5C64
    /* 7E4A0 801700A0 02020424 */   addiu     $a0, $zero, 0x202
    /* 7E4A4 801700A4 F9FF4014 */  bnez       $v0, .L8017008C
    /* 7E4A8 801700A8 00000000 */   nop
    /* 7E4AC 801700AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E4B0 801700B0 00000000 */  nop
    /* 7E4B4 801700B4 0800E003 */  jr         $ra
    /* 7E4B8 801700B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80170084
