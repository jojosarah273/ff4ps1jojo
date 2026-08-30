nonmatching func_8012B0B0, 0x28

glabel func_8012B0B0
    /* 394B0 8012B0B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 394B4 8012B0B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 394B8 8012B0B8 DDE3030C */  jal        func_800F8F74
    /* 394BC 8012B0BC 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 394C0 8012B0C0 36AC040C */  jal        func_8012B0D8
    /* 394C4 8012B0C4 00000000 */   nop
    /* 394C8 8012B0C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 394CC 8012B0CC 00000000 */  nop
    /* 394D0 8012B0D0 0800E003 */  jr         $ra
    /* 394D4 8012B0D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B0B0
