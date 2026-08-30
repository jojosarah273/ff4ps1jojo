nonmatching func_8014A8B8, 0x30

glabel func_8014A8B8
    /* 58CB8 8014A8B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58CBC 8014A8BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58CC0 8014A8C0 A035050C */  jal        func_8014D680
    /* 58CC4 8014A8C4 00000000 */   nop
    /* 58CC8 8014A8C8 6F02050C */  jal        func_801409BC
    /* 58CCC 8014A8CC 00000000 */   nop
    /* 58CD0 8014A8D0 3A2A050C */  jal        func_8014A8E8
    /* 58CD4 8014A8D4 00000000 */   nop
    /* 58CD8 8014A8D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58CDC 8014A8DC 00000000 */  nop
    /* 58CE0 8014A8E0 0800E003 */  jr         $ra
    /* 58CE4 8014A8E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A8B8
