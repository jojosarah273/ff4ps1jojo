nonmatching func_80168118, 0x30

glabel func_80168118
    /* 76518 80168118 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7651C 8016811C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 76520 80168120 9CDC030C */  jal        func_800F7270
    /* 76524 80168124 21200000 */   addu      $a0, $zero, $zero
    /* 76528 80168128 D9D8030C */  jal        func_800F6364
    /* 7652C 8016812C 00000000 */   nop
    /* 76530 80168130 5BE3030C */  jal        func_800F8D6C
    /* 76534 80168134 21200000 */   addu      $a0, $zero, $zero
    /* 76538 80168138 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7653C 8016813C 00000000 */  nop
    /* 76540 80168140 0800E003 */  jr         $ra
    /* 76544 80168144 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80168118
