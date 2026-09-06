nonmatching func_80120F94, 0x28

glabel func_80120F94
    /* 2F394 80120F94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F398 80120F98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F39C 80120F9C 3490040C */  jal        func_801240D0
    /* 2F3A0 80120FA0 00000000 */   nop
    /* 2F3A4 80120FA4 EF83040C */  jal        func_80120FBC
    /* 2F3A8 80120FA8 00000000 */   nop
    /* 2F3AC 80120FAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F3B0 80120FB0 00000000 */  nop
    /* 2F3B4 80120FB4 0800E003 */  jr         $ra
    /* 2F3B8 80120FB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120F94
