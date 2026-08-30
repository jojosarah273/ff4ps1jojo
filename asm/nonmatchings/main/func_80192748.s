nonmatching func_80192748, 0x20

glabel func_80192748
    /* A0B48 80192748 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0B4C 8019274C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0B50 80192750 DA49060C */  jal        func_80192768
    /* A0B54 80192754 00000000 */   nop
    /* A0B58 80192758 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0B5C 8019275C 0100422C */  sltiu      $v0, $v0, 0x1
    /* A0B60 80192760 0800E003 */  jr         $ra
    /* A0B64 80192764 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80192748
