nonmatching func_8015A524, 0x48

glabel func_8015A524
    /* 68924 8015A524 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68928 8015A528 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6892C 8015A52C FB6A050C */  jal        func_8015ABEC
    /* 68930 8015A530 00000000 */   nop
    /* 68934 8015A534 65DD030C */  jal        func_800F7594
    /* 68938 8015A538 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6893C 8015A53C 25DD030C */  jal        func_800F7494
    /* 68940 8015A540 02020424 */   addiu     $a0, $zero, 0x202
    /* 68944 8015A544 03004014 */  bnez       $v0, .L8015A554
    /* 68948 8015A548 00000000 */   nop
    /* 6894C 8015A54C AFD8030C */  jal        func_800F62BC
    /* 68950 8015A550 AB000424 */   addiu     $a0, $zero, 0xAB
  .L8015A554:
    /* 68954 8015A554 5B69050C */  jal        func_8015A56C
    /* 68958 8015A558 00000000 */   nop
    /* 6895C 8015A55C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68960 8015A560 00000000 */  nop
    /* 68964 8015A564 0800E003 */  jr         $ra
    /* 68968 8015A568 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A524
