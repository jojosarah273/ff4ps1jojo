nonmatching func_801240F8, 0x38

glabel func_801240F8
    /* 324F8 801240F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 324FC 801240FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32500 80124100 5BE3030C */  jal        func_800F8D6C
    /* 32504 80124104 73000424 */   addiu     $a0, $zero, 0x73
    /* 32508 80124108 91E5030C */  jal        func_800F9644
    /* 3250C 8012410C 20000424 */   addiu     $a0, $zero, 0x20
    /* 32510 80124110 96D9030C */  jal        func_800F6658
    /* 32514 80124114 41000424 */   addiu     $a0, $zero, 0x41
    /* 32518 80124118 0990040C */  jal        func_80124024
    /* 3251C 8012411C 00000000 */   nop
    /* 32520 80124120 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32524 80124124 00000000 */  nop
    /* 32528 80124128 0800E003 */  jr         $ra
    /* 3252C 8012412C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801240F8
