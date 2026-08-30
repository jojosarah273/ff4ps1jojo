nonmatching func_8014BAA4, 0x68

glabel func_8014BAA4
    /* 59EA4 8014BAA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59EA8 8014BAA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59EAC 8014BAAC 59D9030C */  jal        func_800F6564
    /* 59EB0 8014BAB0 4EF20434 */   ori       $a0, $zero, 0xF24E
    /* 59EB4 8014BAB4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 59EB8 8014BAB8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 59EBC 8014BABC 00000000 */  nop
    /* 59EC0 8014BAC0 00006290 */  lbu        $v0, 0x0($v1)
    /* 59EC4 8014BAC4 26000424 */  addiu      $a0, $zero, 0x26
    /* 59EC8 8014BAC8 C0100200 */  sll        $v0, $v0, 3
    /* 59ECC 8014BACC 93E0030C */  jal        func_800F824C
    /* 59ED0 8014BAD0 000062A0 */   sb        $v0, 0x0($v1)
    /* 59ED4 8014BAD4 8CD9030C */  jal        func_800F6630
    /* 59ED8 8014BAD8 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 59EDC 8014BADC 20D5030C */  jal        func_800F5480
    /* 59EE0 8014BAE0 00000000 */   nop
    /* 59EE4 8014BAE4 0FCF030C */  jal        func_800F3C3C
    /* 59EE8 8014BAE8 26000424 */   addiu     $a0, $zero, 0x26
    /* 59EEC 8014BAEC D2DF030C */  jal        func_800F7F48
    /* 59EF0 8014BAF0 21204000 */   addu      $a0, $v0, $zero
    /* 59EF4 8014BAF4 93E0030C */  jal        func_800F824C
    /* 59EF8 8014BAF8 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 59EFC 8014BAFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59F00 8014BB00 00000000 */  nop
    /* 59F04 8014BB04 0800E003 */  jr         $ra
    /* 59F08 8014BB08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BAA4
