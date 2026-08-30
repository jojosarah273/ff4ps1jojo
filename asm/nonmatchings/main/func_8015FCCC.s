nonmatching func_8015FCCC, 0x20

glabel func_8015FCCC
    /* 6E0CC 8015FCCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E0D0 8015FCD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E0D4 8015FCD4 90D8030C */  jal        func_800F6240
    /* 6E0D8 8015FCD8 81380424 */   addiu     $a0, $zero, 0x3881
    /* 6E0DC 8015FCDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E0E0 8015FCE0 00000000 */  nop
    /* 6E0E4 8015FCE4 0800E003 */  jr         $ra
    /* 6E0E8 8015FCE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FCCC
