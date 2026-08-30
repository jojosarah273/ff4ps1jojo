nonmatching func_80130884, 0x30

glabel func_80130884
    /* 3EC84 80130884 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3EC88 80130888 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3EC8C 8013088C 59D9030C */  jal        func_800F6564
    /* 3EC90 80130890 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3EC94 80130894 3489040C */  jal        func_801224D0
    /* 3EC98 80130898 00000000 */   nop
    /* 3EC9C 8013089C DADA030C */  jal        func_800F6B68
    /* 3ECA0 801308A0 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3ECA4 801308A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3ECA8 801308A8 00000000 */  nop
    /* 3ECAC 801308AC 0800E003 */  jr         $ra
    /* 3ECB0 801308B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130884
