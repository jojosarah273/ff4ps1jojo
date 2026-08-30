nonmatching func_8014D490, 0x44

glabel func_8014D490
    /* 5B890 8014D490 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B894 8014D494 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B898 8014D498 59D9030C */  jal        func_800F6564
    /* 5B89C 8014D49C 13180424 */   addiu     $a0, $zero, 0x1813
    /* 5B8A0 8014D4A0 92D0030C */  jal        func_800F4248
    /* 5B8A4 8014D4A4 07000424 */   addiu     $a0, $zero, 0x7
    /* 5B8A8 8014D4A8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5B8AC 8014D4AC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5B8B0 8014D4B0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5B8B4 8014D4B4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5B8B8 8014D4B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 5B8BC 8014D4BC 3535050C */  jal        func_8014D4D4
    /* 5B8C0 8014D4C0 000083A4 */   sh        $v1, 0x0($a0)
    /* 5B8C4 8014D4C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B8C8 8014D4C8 00000000 */  nop
    /* 5B8CC 8014D4CC 0800E003 */  jr         $ra
    /* 5B8D0 8014D4D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D490
