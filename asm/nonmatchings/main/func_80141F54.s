nonmatching func_80141F54, 0x30

glabel func_80141F54
    /* 50354 80141F54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50358 80141F58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5035C 80141F5C 53D9030C */  jal        func_800F654C
    /* 50360 80141F60 20000424 */   addiu     $a0, $zero, 0x20
    /* 50364 80141F64 62E0030C */  jal        func_800F8188
    /* 50368 80141F68 C2F00434 */   ori       $a0, $zero, 0xF0C2
    /* 5036C 80141F6C D739050C */  jal        func_8014E75C
    /* 50370 80141F70 00000000 */   nop
    /* 50374 80141F74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50378 80141F78 00000000 */  nop
    /* 5037C 80141F7C 0800E003 */  jr         $ra
    /* 50380 80141F80 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141F54
