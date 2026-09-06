nonmatching func_80192858, 0x24

glabel func_80192858
    /* A0C58 80192858 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0C5C 8019285C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0C60 80192860 21288000 */  addu       $a1, $a0, $zero
    /* A0C64 80192864 D64A060C */  jal        func_80192B58
    /* A0C68 80192868 03000424 */   addiu     $a0, $zero, 0x3
    /* A0C6C 8019286C 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0C70 80192870 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0C74 80192874 0800E003 */  jr         $ra
    /* A0C78 80192878 00000000 */   nop
endlabel func_80192858
    /* A0C7C 8019287C 00000000 */  nop
    /* A0C80 80192880 00000000 */  nop
    /* A0C84 80192884 00000000 */  nop
