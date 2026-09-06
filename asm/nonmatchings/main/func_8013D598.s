nonmatching func_8013D598, 0x30

glabel func_8013D598
    /* 4B998 8013D598 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B99C 8013D59C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B9A0 8013D5A0 DDE3030C */  jal        func_800F8F74
    /* 4B9A4 8013D5A4 84F40434 */   ori       $a0, $zero, 0xF484
    /* 4B9A8 8013D5A8 53D9030C */  jal        func_800F654C
    /* 4B9AC 8013D5AC 82000424 */   addiu     $a0, $zero, 0x82
    /* 4B9B0 8013D5B0 32F5040C */  jal        func_8013D4C8
    /* 4B9B4 8013D5B4 00000000 */   nop
    /* 4B9B8 8013D5B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B9BC 8013D5BC 00000000 */  nop
    /* 4B9C0 8013D5C0 0800E003 */  jr         $ra
    /* 4B9C4 8013D5C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D598
