nonmatching func_801229C4, 0x30

glabel func_801229C4
    /* 30DC4 801229C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30DC8 801229C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30DCC 801229CC 77DC030C */  jal        func_800F71DC
    /* 30DD0 801229D0 8E010424 */   addiu     $a0, $zero, 0x18E
    /* 30DD4 801229D4 40DD030C */  jal        func_800F7500
    /* 30DD8 801229D8 C0100424 */   addiu     $a0, $zero, 0x10C0
    /* 30DDC 801229DC 488B040C */  jal        func_80122D20
    /* 30DE0 801229E0 00000000 */   nop
    /* 30DE4 801229E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30DE8 801229E8 00000000 */  nop
    /* 30DEC 801229EC 0800E003 */  jr         $ra
    /* 30DF0 801229F0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801229C4
