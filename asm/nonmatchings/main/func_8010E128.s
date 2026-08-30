nonmatching func_8010E128, 0x30

glabel func_8010E128
    /* 1C528 8010E128 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C52C 8010E12C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C530 8010E130 53D9030C */  jal        func_800F654C
    /* 1C534 8010E134 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C538 8010E138 62E0030C */  jal        func_800F8188
    /* 1C53C 8010E13C 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 1C540 8010E140 4AA4050C */  jal        func_80169128
    /* 1C544 8010E144 00000000 */   nop
    /* 1C548 8010E148 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C54C 8010E14C 00000000 */  nop
    /* 1C550 8010E150 0800E003 */  jr         $ra
    /* 1C554 8010E154 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E128
