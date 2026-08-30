nonmatching func_801183B0, 0x28

glabel func_801183B0
    /* 267B0 801183B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 267B4 801183B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 267B8 801183B8 53D9030C */  jal        func_800F654C
    /* 267BC 801183BC 21200000 */   addu      $a0, $zero, $zero
    /* 267C0 801183C0 0A61040C */  jal        func_80118428
    /* 267C4 801183C4 00000000 */   nop
    /* 267C8 801183C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 267CC 801183CC 00000000 */  nop
    /* 267D0 801183D0 0800E003 */  jr         $ra
    /* 267D4 801183D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801183B0
