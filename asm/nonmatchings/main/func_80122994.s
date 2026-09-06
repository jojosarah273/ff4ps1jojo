nonmatching func_80122994, 0x30

glabel func_80122994
    /* 30D94 80122994 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30D98 80122998 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30D9C 8012299C 77DC030C */  jal        func_800F71DC
    /* 30DA0 801229A0 4E050424 */   addiu     $a0, $zero, 0x54E
    /* 30DA4 801229A4 40DD030C */  jal        func_800F7500
    /* 30DA8 801229A8 80100424 */   addiu     $a0, $zero, 0x1080
    /* 30DAC 801229AC 488B040C */  jal        func_80122D20
    /* 30DB0 801229B0 00000000 */   nop
    /* 30DB4 801229B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30DB8 801229B8 00000000 */  nop
    /* 30DBC 801229BC 0800E003 */  jr         $ra
    /* 30DC0 801229C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122994
