nonmatching func_8015FAF8, 0x50

glabel func_8015FAF8
    /* 6DEF8 8015FAF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DEFC 8015FAFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DF00 8015FB00 59D9030C */  jal        func_800F6564
    /* 6DF04 8015FB04 07270424 */   addiu     $a0, $zero, 0x2707
    /* 6DF08 8015FB08 62E0030C */  jal        func_800F8188
    /* 6DF0C 8015FB0C 45390424 */   addiu     $a0, $zero, 0x3945
    /* 6DF10 8015FB10 59D9030C */  jal        func_800F6564
    /* 6DF14 8015FB14 08270424 */   addiu     $a0, $zero, 0x2708
    /* 6DF18 8015FB18 62E0030C */  jal        func_800F8188
    /* 6DF1C 8015FB1C 46390424 */   addiu     $a0, $zero, 0x3946
    /* 6DF20 8015FB20 77DC030C */  jal        func_800F71DC
    /* 6DF24 8015FB24 03000424 */   addiu     $a0, $zero, 0x3
    /* 6DF28 8015FB28 40E3030C */  jal        func_800F8D00
    /* 6DF2C 8015FB2C 47390424 */   addiu     $a0, $zero, 0x3947
    /* 6DF30 8015FB30 9C7E050C */  jal        func_8015FA70
    /* 6DF34 8015FB34 00000000 */   nop
    /* 6DF38 8015FB38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DF3C 8015FB3C 00000000 */  nop
    /* 6DF40 8015FB40 0800E003 */  jr         $ra
    /* 6DF44 8015FB44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FAF8
