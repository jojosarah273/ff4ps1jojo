nonmatching func_8012DB6C, 0x30

glabel func_8012DB6C
    /* 3BF6C 8012DB6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3BF70 8012DB70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3BF74 8012DB74 90D8030C */  jal        func_800F6240
    /* 3BF78 8012DB78 C21B0424 */   addiu     $a0, $zero, 0x1BC2
    /* 3BF7C 8012DB7C 8FB4040C */  jal        func_8012D23C
    /* 3BF80 8012DB80 00000000 */   nop
    /* 3BF84 8012DB84 DDE3030C */  jal        func_800F8F74
    /* 3BF88 8012DB88 C21B0424 */   addiu     $a0, $zero, 0x1BC2
    /* 3BF8C 8012DB8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3BF90 8012DB90 00000000 */  nop
    /* 3BF94 8012DB94 0800E003 */  jr         $ra
    /* 3BF98 8012DB98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012DB6C
