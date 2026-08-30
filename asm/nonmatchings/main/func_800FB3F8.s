nonmatching func_800FB3F8, 0x38

glabel func_800FB3F8
    /* 97F8 800FB3F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97FC 800FB3FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9800 800FB400 53D9030C */  jal        func_800F654C
    /* 9804 800FB404 80000424 */   addiu     $a0, $zero, 0x80
    /* 9808 800FB408 62E0030C */  jal        func_800F8188
    /* 980C 800FB40C 00210424 */   addiu     $a0, $zero, 0x2100
    /* 9810 800FB410 53D9030C */  jal        func_800F654C
    /* 9814 800FB414 21200000 */   addu      $a0, $zero, $zero
    /* 9818 800FB418 62E0030C */  jal        func_800F8188
    /* 981C 800FB41C 00420424 */   addiu     $a0, $zero, 0x4200
    /* 9820 800FB420 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9824 800FB424 00000000 */  nop
    /* 9828 800FB428 0800E003 */  jr         $ra
    /* 982C 800FB42C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB3F8
