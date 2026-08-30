nonmatching func_8014C9CC, 0x58

glabel func_8014C9CC
    /* 5ADCC 8014C9CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5ADD0 8014C9D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5ADD4 8014C9D4 59D9030C */  jal        func_800F6564
    /* 5ADD8 8014C9D8 4EF20434 */   ori       $a0, $zero, 0xF24E
    /* 5ADDC 8014C9DC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5ADE0 8014C9E0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5ADE4 8014C9E4 00000000 */  nop
    /* 5ADE8 8014C9E8 00006290 */  lbu        $v0, 0x0($v1)
    /* 5ADEC 8014C9EC 00000000 */  nop
    /* 5ADF0 8014C9F0 C0100200 */  sll        $v0, $v0, 3
    /* 5ADF4 8014C9F4 04D5030C */  jal        func_800F5410
    /* 5ADF8 8014C9F8 000062A0 */   sb        $v0, 0x0($v1)
    /* 5ADFC 8014C9FC 0FCF030C */  jal        func_800F3C3C
    /* 5AE00 8014CA00 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5AE04 8014CA04 CECF030C */  jal        func_800F3F38
    /* 5AE08 8014CA08 21204000 */   addu      $a0, $v0, $zero
    /* 5AE0C 8014CA0C 93E0030C */  jal        func_800F824C
    /* 5AE10 8014CA10 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5AE14 8014CA14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AE18 8014CA18 00000000 */  nop
    /* 5AE1C 8014CA1C 0800E003 */  jr         $ra
    /* 5AE20 8014CA20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C9CC
