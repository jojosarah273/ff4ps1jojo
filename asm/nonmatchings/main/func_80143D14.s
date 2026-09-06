nonmatching func_80143D14, 0x50

glabel func_80143D14
    /* 52114 80143D14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52118 80143D18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5211C 80143D1C CCE4030C */  jal        func_800F9330
    /* 52120 80143D20 00000000 */   nop
    /* 52124 80143D24 DADA030C */  jal        func_800F6B68
    /* 52128 80143D28 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 5212C 80143D2C 50D4030C */  jal        func_800F5140
    /* 52130 80143D30 00000000 */   nop
    /* 52134 80143D34 93E0030C */  jal        func_800F824C
    /* 52138 80143D38 28000424 */   addiu     $a0, $zero, 0x28
    /* 5213C 80143D3C DADA030C */  jal        func_800F6B68
    /* 52140 80143D40 33F10434 */   ori       $a0, $zero, 0xF133
    /* 52144 80143D44 E823050C */  jal        func_80148FA0
    /* 52148 80143D48 00000000 */   nop
    /* 5214C 80143D4C 68E5030C */  jal        func_800F95A0
    /* 52150 80143D50 00000000 */   nop
    /* 52154 80143D54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52158 80143D58 00000000 */  nop
    /* 5215C 80143D5C 0800E003 */  jr         $ra
    /* 52160 80143D60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143D14
