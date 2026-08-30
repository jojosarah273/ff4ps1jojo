nonmatching func_8014ED10, 0x30

glabel func_8014ED10
    /* 5D110 8014ED10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D114 8014ED14 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D118 8014ED18 8CD9030C */  jal        func_800F6630
    /* 5D11C 8014ED1C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D120 8014ED20 93E0030C */  jal        func_800F824C
    /* 5D124 8014ED24 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D128 8014ED28 EEE3030C */  jal        func_800F8FB8
    /* 5D12C 8014ED2C 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D130 8014ED30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D134 8014ED34 00000000 */  nop
    /* 5D138 8014ED38 0800E003 */  jr         $ra
    /* 5D13C 8014ED3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ED10
