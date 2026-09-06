nonmatching func_8014EDD0, 0x50

glabel func_8014EDD0
    /* 5D1D0 8014EDD0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D1D4 8014EDD4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D1D8 8014EDD8 8CD9030C */  jal        func_800F6630
    /* 5D1DC 8014EDDC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D1E0 8014EDE0 93E0030C */  jal        func_800F824C
    /* 5D1E4 8014EDE4 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D1E8 8014EDE8 C7E5030C */  jal        func_800F971C
    /* 5D1EC 8014EDEC 00000000 */   nop
    /* 5D1F0 8014EDF0 20D5030C */  jal        func_800F5480
    /* 5D1F4 8014EDF4 00000000 */   nop
    /* 5D1F8 8014EDF8 0FCF030C */  jal        func_800F3C3C
    /* 5D1FC 8014EDFC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D200 8014EE00 D2DF030C */  jal        func_800F7F48
    /* 5D204 8014EE04 21204000 */   addu      $a0, $v0, $zero
    /* 5D208 8014EE08 93E0030C */  jal        func_800F824C
    /* 5D20C 8014EE0C 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D210 8014EE10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D214 8014EE14 00000000 */  nop
    /* 5D218 8014EE18 0800E003 */  jr         $ra
    /* 5D21C 8014EE1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EDD0
