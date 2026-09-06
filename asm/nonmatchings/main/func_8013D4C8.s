nonmatching func_8013D4C8, 0xD0

glabel func_8013D4C8
    /* 4B8C8 8013D4C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B8CC 8013D4CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B8D0 8013D4D0 58E2030C */  jal        func_800F8960
    /* 4B8D4 8013D4D4 42030424 */   addiu     $a0, $zero, 0x342
    /* 4B8D8 8013D4D8 8CD9030C */  jal        func_800F6630
    /* 4B8DC 8013D4DC 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B8E0 8013D4E0 58E2030C */  jal        func_800F8960
    /* 4B8E4 8013D4E4 41030424 */   addiu     $a0, $zero, 0x341
    /* 4B8E8 8013D4E8 59D9030C */  jal        func_800F6564
    /* 4B8EC 8013D4EC C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4B8F0 8013D4F0 0DD9030C */  jal        func_800F6434
    /* 4B8F4 8013D4F4 02020424 */   addiu     $a0, $zero, 0x202
    /* 4B8F8 8013D4F8 09004014 */  bnez       $v0, .L8013D520
    /* 4B8FC 8013D4FC 00000000 */   nop
    /* 4B900 8013D500 8CD9030C */  jal        func_800F6630
    /* 4B904 8013D504 21200000 */   addu      $a0, $zero, $zero
    /* 4B908 8013D508 58E2030C */  jal        func_800F8960
    /* 4B90C 8013D50C 40030424 */   addiu     $a0, $zero, 0x340
    /* 4B910 8013D510 53D9030C */  jal        func_800F654C
    /* 4B914 8013D514 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 4B918 8013D518 54F50408 */  j          .L8013D550
    /* 4B91C 8013D51C 00000000 */   nop
  .L8013D520:
    /* 4B920 8013D520 8CD9030C */  jal        func_800F6630
    /* 4B924 8013D524 21200000 */   addu      $a0, $zero, $zero
    /* 4B928 8013D528 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4B92C 8013D52C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4B930 8013D530 00000000 */  nop
    /* 4B934 8013D534 00006290 */  lbu        $v0, 0x0($v1)
    /* 4B938 8013D538 40030424 */  addiu      $a0, $zero, 0x340
    /* 4B93C 8013D53C 27100200 */  nor        $v0, $zero, $v0
    /* 4B940 8013D540 58E2030C */  jal        func_800F8960
    /* 4B944 8013D544 000062A0 */   sb        $v0, 0x0($v1)
    /* 4B948 8013D548 53D9030C */  jal        func_800F654C
    /* 4B94C 8013D54C 7F000424 */   addiu     $a0, $zero, 0x7F
  .L8013D550:
    /* 4B950 8013D550 C1CE030C */  jal        func_800F3B04
    /* 4B954 8013D554 84F40434 */   ori       $a0, $zero, 0xF484
    /* 4B958 8013D558 B3D7030C */  jal        func_800F5ECC
    /* 4B95C 8013D55C 21204000 */   addu      $a0, $v0, $zero
    /* 4B960 8013D560 58E2030C */  jal        func_800F8960
    /* 4B964 8013D564 43030424 */   addiu     $a0, $zero, 0x343
    /* 4B968 8013D568 EFD8030C */  jal        func_800F63BC
    /* 4B96C 8013D56C 00000000 */   nop
    /* 4B970 8013D570 EFD8030C */  jal        func_800F63BC
    /* 4B974 8013D574 00000000 */   nop
    /* 4B978 8013D578 EFD8030C */  jal        func_800F63BC
    /* 4B97C 8013D57C 00000000 */   nop
    /* 4B980 8013D580 EFD8030C */  jal        func_800F63BC
    /* 4B984 8013D584 00000000 */   nop
    /* 4B988 8013D588 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B98C 8013D58C 00000000 */  nop
    /* 4B990 8013D590 0800E003 */  jr         $ra
    /* 4B994 8013D594 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D4C8
