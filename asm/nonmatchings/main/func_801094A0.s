nonmatching func_801094A0, 0x38

glabel func_801094A0
    /* 178A0 801094A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 178A4 801094A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 178A8 801094A8 84DC030C */  jal        func_800F7210
    /* 178AC 801094AC 72070424 */   addiu     $a0, $zero, 0x772
    /* 178B0 801094B0 D9D8030C */  jal        func_800F6364
    /* 178B4 801094B4 00000000 */   nop
    /* 178B8 801094B8 40E3030C */  jal        func_800F8D00
    /* 178BC 801094BC 72070424 */   addiu     $a0, $zero, 0x772
    /* 178C0 801094C0 3625040C */  jal        func_801094D8
    /* 178C4 801094C4 00000000 */   nop
    /* 178C8 801094C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 178CC 801094CC 00000000 */  nop
    /* 178D0 801094D0 0800E003 */  jr         $ra
    /* 178D4 801094D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801094A0
