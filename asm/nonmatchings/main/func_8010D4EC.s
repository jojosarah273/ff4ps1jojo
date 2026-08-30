nonmatching func_8010D4EC, 0x60

glabel func_8010D4EC
    /* 1B8EC 8010D4EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1B8F0 8010D4F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1B8F4 8010D4F4 CCE4030C */  jal        func_800F9330
    /* 1B8F8 8010D4F8 00000000 */   nop
    /* 1B8FC 8010D4FC 5335040C */  jal        func_8010D54C
    /* 1B900 8010D500 00000000 */   nop
    /* 1B904 8010D504 9CDC030C */  jal        func_800F7270
    /* 1B908 8010D508 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B90C 8010D50C 8CD9030C */  jal        func_800F6630
    /* 1B910 8010D510 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B914 8010D514 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1B918 8010D518 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1B91C 8010D51C 7F00043C */  lui        $a0, (0x7F4C00 >> 16)
    /* 1B920 8010D520 00006290 */  lbu        $v0, 0x0($v1)
    /* 1B924 8010D524 004C8434 */  ori        $a0, $a0, (0x7F4C00 & 0xFFFF)
    /* 1B928 8010D528 80004234 */  ori        $v0, $v0, 0x80
    /* 1B92C 8010D52C 17E2030C */  jal        func_800F885C
    /* 1B930 8010D530 000062A0 */   sb        $v0, 0x0($v1)
    /* 1B934 8010D534 68E5030C */  jal        func_800F95A0
    /* 1B938 8010D538 00000000 */   nop
    /* 1B93C 8010D53C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1B940 8010D540 00000000 */  nop
    /* 1B944 8010D544 0800E003 */  jr         $ra
    /* 1B948 8010D548 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D4EC
