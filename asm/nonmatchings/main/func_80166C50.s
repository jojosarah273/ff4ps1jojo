nonmatching func_80166C50, 0x58

glabel func_80166C50
    /* 75050 80166C50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75054 80166C54 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75058 80166C58 CCE4030C */  jal        func_800F9330
    /* 7505C 80166C5C 00000000 */   nop
    /* 75060 80166C60 2A9B050C */  jal        func_80166CA8
    /* 75064 80166C64 00000000 */   nop
    /* 75068 80166C68 DADA030C */  jal        func_800F6B68
    /* 7506C 80166C6C C5EF0434 */   ori       $a0, $zero, 0xEFC5
    /* 75070 80166C70 04D5030C */  jal        func_800F5410
    /* 75074 80166C74 00000000 */   nop
    /* 75078 80166C78 0FCF030C */  jal        func_800F3C3C
    /* 7507C 80166C7C 21200000 */   addu      $a0, $zero, $zero
    /* 75080 80166C80 CECF030C */  jal        func_800F3F38
    /* 75084 80166C84 21204000 */   addu      $a0, $v0, $zero
    /* 75088 80166C88 DAE1030C */  jal        func_800F8768
    /* 7508C 80166C8C C5EF0434 */   ori       $a0, $zero, 0xEFC5
    /* 75090 80166C90 68E5030C */  jal        func_800F95A0
    /* 75094 80166C94 00000000 */   nop
    /* 75098 80166C98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7509C 80166C9C 00000000 */  nop
    /* 750A0 80166CA0 0800E003 */  jr         $ra
    /* 750A4 80166CA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80166C50
