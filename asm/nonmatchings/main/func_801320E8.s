nonmatching func_801320E8, 0x48

glabel func_801320E8
    /* 404E8 801320E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 404EC 801320EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 404F0 801320F0 91E5030C */  jal        func_800F9644
    /* 404F4 801320F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 404F8 801320F8 56D9030C */  jal        func_800F6558
    /* 404FC 801320FC 57020424 */   addiu     $a0, $zero, 0x257
    /* 40500 80132100 77DC030C */  jal        func_800F71DC
    /* 40504 80132104 00030424 */   addiu     $a0, $zero, 0x300
    /* 40508 80132108 40DD030C */  jal        func_800F7500
    /* 4050C 8013210C 00A20434 */   ori       $a0, $zero, 0xA200
    /* 40510 80132110 59CF030C */  jal        func_800F3D64
    /* 40514 80132114 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 40518 80132118 98E5030C */  jal        func_800F9660
    /* 4051C 8013211C 20000424 */   addiu     $a0, $zero, 0x20
    /* 40520 80132120 1000BF8F */  lw         $ra, 0x10($sp)
    /* 40524 80132124 00000000 */  nop
    /* 40528 80132128 0800E003 */  jr         $ra
    /* 4052C 8013212C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801320E8
