nonmatching func_8015D450, 0x78

glabel func_8015D450
    /* 6B850 8015D450 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B854 8015D454 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B858 8015D458 9CDC030C */  jal        func_800F7270
    /* 6B85C 8015D45C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6B860 8015D460 DADA030C */  jal        func_800F6B68
    /* 6B864 8015D464 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6B868 8015D468 92D0030C */  jal        func_800F4248
    /* 6B86C 8015D46C BF000424 */   addiu     $a0, $zero, 0xBF
    /* 6B870 8015D470 DAE1030C */  jal        func_800F8768
    /* 6B874 8015D474 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6B878 8015D478 8CD9030C */  jal        func_800F6630
    /* 6B87C 8015D47C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6B880 8015D480 50D4030C */  jal        func_800F5140
    /* 6B884 8015D484 00000000 */   nop
    /* 6B888 8015D488 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B88C 8015D48C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B890 8015D490 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B894 8015D494 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B898 8015D498 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B89C 8015D49C EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6B8A0 8015D4A0 DADA030C */  jal        func_800F6B68
    /* 6B8A4 8015D4A4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B8A8 8015D4A8 92D0030C */  jal        func_800F4248
    /* 6B8AC 8015D4AC DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6B8B0 8015D4B0 DAE1030C */  jal        func_800F8768
    /* 6B8B4 8015D4B4 EB290424 */   addiu     $a0, $zero, 0x29EB
    /* 6B8B8 8015D4B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B8BC 8015D4BC 00000000 */  nop
    /* 6B8C0 8015D4C0 0800E003 */  jr         $ra
    /* 6B8C4 8015D4C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D450
