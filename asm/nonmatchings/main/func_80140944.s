nonmatching func_80140944, 0x28

glabel func_80140944
    /* 4ED44 80140944 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ED48 80140948 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4ED4C 8014094C 53D9030C */  jal        func_800F654C
    /* 4ED50 80140950 60000424 */   addiu     $a0, $zero, 0x60
    /* 4ED54 80140954 3902050C */  jal        func_801408E4
    /* 4ED58 80140958 00000000 */   nop
    /* 4ED5C 8014095C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ED60 80140960 00000000 */  nop
    /* 4ED64 80140964 0800E003 */  jr         $ra
    /* 4ED68 80140968 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140944
