nonmatching func_80131294, 0x28

glabel func_80131294
    /* 3F694 80131294 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3F698 80131298 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3F69C 8013129C 36AC040C */  jal        func_8012B0D8
    /* 3F6A0 801312A0 00000000 */   nop
    /* 3F6A4 801312A4 5AAC040C */  jal        func_8012B168
    /* 3F6A8 801312A8 00000000 */   nop
    /* 3F6AC 801312AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3F6B0 801312B0 00000000 */  nop
    /* 3F6B4 801312B4 0800E003 */  jr         $ra
    /* 3F6B8 801312B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131294
