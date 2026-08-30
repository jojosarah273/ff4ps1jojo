nonmatching func_80161C48, 0x40

glabel func_80161C48
    /* 70048 80161C48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7004C 80161C4C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70050 80161C50 53D9030C */  jal        func_800F654C
    /* 70054 80161C54 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 70058 80161C58 62E0030C */  jal        func_800F8188
    /* 7005C 80161C5C 7B350424 */   addiu     $a0, $zero, 0x357B
    /* 70060 80161C60 53D9030C */  jal        func_800F654C
    /* 70064 80161C64 11000424 */   addiu     $a0, $zero, 0x11
    /* 70068 80161C68 62E0030C */  jal        func_800F8188
    /* 7006C 80161C6C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70070 80161C70 A74C050C */  jal        func_8015329C
    /* 70074 80161C74 00000000 */   nop
    /* 70078 80161C78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7007C 80161C7C 00000000 */  nop
    /* 70080 80161C80 0800E003 */  jr         $ra
    /* 70084 80161C84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80161C48
