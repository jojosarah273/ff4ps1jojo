nonmatching func_8014D43C, 0x54

glabel func_8014D43C
    /* 5B83C 8014D43C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B840 8014D440 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B844 8014D444 59D9030C */  jal        func_800F6564
    /* 5B848 8014D448 13180424 */   addiu     $a0, $zero, 0x1813
    /* 5B84C 8014D44C 92D0030C */  jal        func_800F4248
    /* 5B850 8014D450 07000424 */   addiu     $a0, $zero, 0x7
    /* 5B854 8014D454 0D00043C */  lui        $a0, (0xDFFDD >> 16)
    /* 5B858 8014D458 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5B85C 8014D45C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5B860 8014D460 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5B864 8014D464 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5B868 8014D468 00004394 */  lhu        $v1, 0x0($v0)
    /* 5B86C 8014D46C DDFF8434 */  ori        $a0, $a0, (0xDFFDD & 0xFFFF)
    /* 5B870 8014D470 1ADB030C */  jal        func_800F6C68
    /* 5B874 8014D474 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5B878 8014D478 A533050C */  jal        func_8014CE94
    /* 5B87C 8014D47C 00000000 */   nop
    /* 5B880 8014D480 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B884 8014D484 00000000 */  nop
    /* 5B888 8014D488 0800E003 */  jr         $ra
    /* 5B88C 8014D48C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D43C
