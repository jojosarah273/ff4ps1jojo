nonmatching func_8015E66C, 0x38

glabel func_8015E66C
    /* 6CA6C 8015E66C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CA70 8015E670 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CA74 8015E674 9CDC030C */  jal        func_800F7270
    /* 6CA78 8015E678 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6CA7C 8015E67C 53D9030C */  jal        func_800F654C
    /* 6CA80 8015E680 09000424 */   addiu     $a0, $zero, 0x9
    /* 6CA84 8015E684 DAE1030C */  jal        func_800F8768
    /* 6CA88 8015E688 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6CA8C 8015E68C B779050C */  jal        func_8015E6DC
    /* 6CA90 8015E690 00000000 */   nop
    /* 6CA94 8015E694 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CA98 8015E698 00000000 */  nop
    /* 6CA9C 8015E69C 0800E003 */  jr         $ra
    /* 6CAA0 8015E6A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E66C
