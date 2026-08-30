nonmatching func_80191C38, 0x20

glabel func_80191C38
    /* A0038 80191C38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A003C 80191C3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0040 80191C40 D443060C */  jal        func_80190F50
    /* A0044 80191C44 00000000 */   nop
    /* A0048 80191C48 1000BF8F */  lw         $ra, 0x10($sp)
    /* A004C 80191C4C 01000224 */  addiu      $v0, $zero, 0x1
    /* A0050 80191C50 0800E003 */  jr         $ra
    /* A0054 80191C54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80191C38
