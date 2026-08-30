nonmatching func_80192888, 0x20

glabel func_80192888
    /* A0C88 80192888 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0C8C 8019288C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0C90 80192890 F244060C */  jal        func_801913C8
    /* A0C94 80192894 00000000 */   nop
    /* A0C98 80192898 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0C9C 8019289C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0CA0 801928A0 0800E003 */  jr         $ra
    /* A0CA4 801928A4 00000000 */   nop
endlabel func_80192888
