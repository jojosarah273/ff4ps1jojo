nonmatching func_80124180, 0x38

glabel func_80124180
    /* 32580 80124180 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 32584 80124184 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32588 80124188 5BE3030C */  jal        func_800F8D6C
    /* 3258C 8012418C 73000424 */   addiu     $a0, $zero, 0x73
    /* 32590 80124190 91E5030C */  jal        func_800F9644
    /* 32594 80124194 20000424 */   addiu     $a0, $zero, 0x20
    /* 32598 80124198 56D9030C */  jal        func_800F6558
    /* 3259C 8012419C 00200424 */   addiu     $a0, $zero, 0x2000
    /* 325A0 801241A0 0990040C */  jal        func_80124024
    /* 325A4 801241A4 00000000 */   nop
    /* 325A8 801241A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 325AC 801241AC 00000000 */  nop
    /* 325B0 801241B0 0800E003 */  jr         $ra
    /* 325B4 801241B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124180
