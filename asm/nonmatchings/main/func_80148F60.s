nonmatching func_80148F60, 0x40

glabel func_80148F60
    /* 57360 80148F60 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57364 80148F64 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57368 80148F68 DADA030C */  jal        func_800F6B68
    /* 5736C 80148F6C B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 57370 80148F70 50D4030C */  jal        func_800F5140
    /* 57374 80148F74 00000000 */   nop
    /* 57378 80148F78 93E0030C */  jal        func_800F824C
    /* 5737C 80148F7C 28000424 */   addiu     $a0, $zero, 0x28
    /* 57380 80148F80 DADA030C */  jal        func_800F6B68
    /* 57384 80148F84 33F10434 */   ori       $a0, $zero, 0xF133
    /* 57388 80148F88 F023050C */  jal        func_80148FC0
    /* 5738C 80148F8C 00000000 */   nop
    /* 57390 80148F90 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57394 80148F94 00000000 */  nop
    /* 57398 80148F98 0800E003 */  jr         $ra
    /* 5739C 80148F9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148F60
