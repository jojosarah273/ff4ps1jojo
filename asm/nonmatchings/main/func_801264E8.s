nonmatching func_801264E8, 0x40

glabel func_801264E8
    /* 348E8 801264E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 348EC 801264EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 348F0 801264F0 CCE4030C */  jal        func_800F9330
    /* 348F4 801264F4 00000000 */   nop
    /* 348F8 801264F8 E7E4030C */  jal        func_800F939C
    /* 348FC 801264FC 00000000 */   nop
    /* 34900 80126500 77DC030C */  jal        func_800F71DC
    /* 34904 80126504 00780424 */   addiu     $a0, $zero, 0x7800
    /* 34908 80126508 40DD030C */  jal        func_800F7500
    /* 3490C 8012650C 00C60434 */   ori       $a0, $zero, 0xC600
    /* 34910 80126510 DA98040C */  jal        func_80126368
    /* 34914 80126514 00000000 */   nop
    /* 34918 80126518 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3491C 8012651C 00000000 */  nop
    /* 34920 80126520 0800E003 */  jr         $ra
    /* 34924 80126524 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801264E8
