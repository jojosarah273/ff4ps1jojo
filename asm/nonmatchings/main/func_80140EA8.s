nonmatching func_80140EA8, 0x38

glabel func_80140EA8
    /* 4F2A8 80140EA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F2AC 80140EAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F2B0 80140EB0 D4D2010C */  jal        func_80074B50
    /* 4F2B4 80140EB4 00000000 */   nop
    /* 4F2B8 80140EB8 49FC040C */  jal        func_8013F124
    /* 4F2BC 80140EBC 00000000 */   nop
    /* 4F2C0 80140EC0 DDE3030C */  jal        func_800F8F74
    /* 4F2C4 80140EC4 E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 4F2C8 80140EC8 0668020C */  jal        func_8009A018
    /* 4F2CC 80140ECC 00000000 */   nop
    /* 4F2D0 80140ED0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F2D4 80140ED4 00000000 */  nop
    /* 4F2D8 80140ED8 0800E003 */  jr         $ra
    /* 4F2DC 80140EDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140EA8
