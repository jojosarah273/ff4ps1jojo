nonmatching func_80141F84, 0x40

glabel func_80141F84
    /* 50384 80141F84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50388 80141F88 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5038C 80141F8C 9E14050C */  jal        func_80145278
    /* 50390 80141F90 00000000 */   nop
    /* 50394 80141F94 7007050C */  jal        func_80141DC0
    /* 50398 80141F98 00000000 */   nop
    /* 5039C 80141F9C DEFB040C */  jal        func_8013EF78
    /* 503A0 80141FA0 00000000 */   nop
    /* 503A4 80141FA4 D507050C */  jal        func_80141F54
    /* 503A8 80141FA8 00000000 */   nop
    /* 503AC 80141FAC B214050C */  jal        func_801452C8
    /* 503B0 80141FB0 00000000 */   nop
    /* 503B4 80141FB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 503B8 80141FB8 00000000 */  nop
    /* 503BC 80141FBC 0800E003 */  jr         $ra
    /* 503C0 80141FC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141F84
