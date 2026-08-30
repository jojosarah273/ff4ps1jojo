nonmatching func_8014ED40, 0x48

glabel func_8014ED40
    /* 5D140 8014ED40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D144 8014ED44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D148 8014ED48 C7E5030C */  jal        func_800F971C
    /* 5D14C 8014ED4C 00000000 */   nop
    /* 5D150 8014ED50 20D5030C */  jal        func_800F5480
    /* 5D154 8014ED54 00000000 */   nop
    /* 5D158 8014ED58 0FCF030C */  jal        func_800F3C3C
    /* 5D15C 8014ED5C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D160 8014ED60 D2DF030C */  jal        func_800F7F48
    /* 5D164 8014ED64 21204000 */   addu      $a0, $v0, $zero
    /* 5D168 8014ED68 93E0030C */  jal        func_800F824C
    /* 5D16C 8014ED6C 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D170 8014ED70 93E0030C */  jal        func_800F824C
    /* 5D174 8014ED74 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D178 8014ED78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D17C 8014ED7C 00000000 */  nop
    /* 5D180 8014ED80 0800E003 */  jr         $ra
    /* 5D184 8014ED84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ED40
