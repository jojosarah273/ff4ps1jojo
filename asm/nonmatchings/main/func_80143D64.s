nonmatching func_80143D64, 0x50

glabel func_80143D64
    /* 52164 80143D64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52168 80143D68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5216C 80143D6C CCE4030C */  jal        func_800F9330
    /* 52170 80143D70 00000000 */   nop
    /* 52174 80143D74 DADA030C */  jal        func_800F6B68
    /* 52178 80143D78 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 5217C 80143D7C 50D4030C */  jal        func_800F5140
    /* 52180 80143D80 00000000 */   nop
    /* 52184 80143D84 93E0030C */  jal        func_800F824C
    /* 52188 80143D88 28000424 */   addiu     $a0, $zero, 0x28
    /* 5218C 80143D8C DADA030C */  jal        func_800F6B68
    /* 52190 80143D90 73F10434 */   ori       $a0, $zero, 0xF173
    /* 52194 80143D94 E823050C */  jal        func_80148FA0
    /* 52198 80143D98 00000000 */   nop
    /* 5219C 80143D9C 68E5030C */  jal        func_800F95A0
    /* 521A0 80143DA0 00000000 */   nop
    /* 521A4 80143DA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 521A8 80143DA8 00000000 */  nop
    /* 521AC 80143DAC 0800E003 */  jr         $ra
    /* 521B0 80143DB0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143D64
