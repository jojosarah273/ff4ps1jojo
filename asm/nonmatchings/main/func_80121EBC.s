nonmatching func_80121EBC, 0x58

glabel func_80121EBC
    /* 302BC 80121EBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 302C0 80121EC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 302C4 80121EC4 8CD9030C */  jal        func_800F6630
    /* 302C8 80121EC8 65000424 */   addiu     $a0, $zero, 0x65
    /* 302CC 80121ECC 20D5030C */  jal        func_800F5480
    /* 302D0 80121ED0 00000000 */   nop
    /* 302D4 80121ED4 0FCF030C */  jal        func_800F3C3C
    /* 302D8 80121ED8 63000424 */   addiu     $a0, $zero, 0x63
    /* 302DC 80121EDC D2DF030C */  jal        func_800F7F48
    /* 302E0 80121EE0 21204000 */   addu      $a0, $v0, $zero
    /* 302E4 80121EE4 7AD8030C */  jal        func_800F61E8
    /* 302E8 80121EE8 00000000 */   nop
    /* 302EC 80121EEC 93E0030C */  jal        func_800F824C
    /* 302F0 80121EF0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 302F4 80121EF4 C7E5030C */  jal        func_800F971C
    /* 302F8 80121EF8 00000000 */   nop
    /* 302FC 80121EFC C587040C */  jal        func_80121F14
    /* 30300 80121F00 00000000 */   nop
    /* 30304 80121F04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30308 80121F08 00000000 */  nop
    /* 3030C 80121F0C 0800E003 */  jr         $ra
    /* 30310 80121F10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121EBC
