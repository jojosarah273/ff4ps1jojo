nonmatching func_80140E78, 0x30

glabel func_80140E78
    /* 4F278 80140E78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F27C 80140E7C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F280 80140E80 DDE3030C */  jal        func_800F8F74
    /* 4F284 80140E84 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F288 80140E88 DDE3030C */  jal        func_800F8F74
    /* 4F28C 80140E8C 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F290 80140E90 AA03050C */  jal        func_80140EA8
    /* 4F294 80140E94 00000000 */   nop
    /* 4F298 80140E98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F29C 80140E9C 00000000 */  nop
    /* 4F2A0 80140EA0 0800E003 */  jr         $ra
    /* 4F2A4 80140EA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140E78
