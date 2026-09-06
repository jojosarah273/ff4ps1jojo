nonmatching func_80152640, 0xB8

glabel func_80152640
    /* 60A40 80152640 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 60A44 80152644 1000BFAF */  sw         $ra, 0x10($sp)
    /* 60A48 80152648 93E0030C */  jal        func_800F824C
    /* 60A4C 8015264C 82000424 */   addiu     $a0, $zero, 0x82
    /* 60A50 80152650 AFE3030C */  jal        func_800F8EBC
    /* 60A54 80152654 80000424 */   addiu     $a0, $zero, 0x80
    /* 60A58 80152658 C7E5030C */  jal        func_800F971C
    /* 60A5C 8015265C 00000000 */   nop
    /* 60A60 80152660 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 60A64 80152664 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 60A68 80152668 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 60A6C 8015266C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 60A70 80152670 00004394 */  lhu        $v1, 0x0($v0)
    /* 60A74 80152674 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 60A78 80152678 8CD9030C */  jal        func_800F6630
    /* 60A7C 8015267C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 60A80 80152680 0DD9030C */  jal        func_800F6434
    /* 60A84 80152684 02000424 */   addiu     $a0, $zero, 0x2
    /* 60A88 80152688 17004014 */  bnez       $v0, .L801526E8
    /* 60A8C 8015268C 00000000 */   nop
  .L80152690:
    /* 60A90 80152690 FFD9030C */  jal        func_800F67FC
    /* 60A94 80152694 80000424 */   addiu     $a0, $zero, 0x80
    /* 60A98 80152698 5DD5030C */  jal        func_800F5574
    /* 60A9C 8015269C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 60AA0 801526A0 F5D4030C */  jal        func_800F53D4
    /* 60AA4 801526A4 00000000 */   nop
    /* 60AA8 801526A8 09004010 */  beqz       $v0, .L801526D0
    /* 60AAC 801526AC 00000000 */   nop
    /* 60AB0 801526B0 68D7030C */  jal        func_800F5DA0
    /* 60AB4 801526B4 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 60AB8 801526B8 8CD9030C */  jal        func_800F6630
    /* 60ABC 801526BC E5000424 */   addiu     $a0, $zero, 0xE5
    /* 60AC0 801526C0 0DD9030C */  jal        func_800F6434
    /* 60AC4 801526C4 02000424 */   addiu     $a0, $zero, 0x2
    /* 60AC8 801526C8 05004014 */  bnez       $v0, .L801526E0
    /* 60ACC 801526CC 00000000 */   nop
  .L801526D0:
    /* 60AD0 801526D0 EFD8030C */  jal        func_800F63BC
    /* 60AD4 801526D4 00000000 */   nop
    /* 60AD8 801526D8 A4490508 */  j          .L80152690
    /* 60ADC 801526DC 00000000 */   nop
  .L801526E0:
    /* 60AE0 801526E0 EFD8030C */  jal        func_800F63BC
    /* 60AE4 801526E4 00000000 */   nop
  .L801526E8:
    /* 60AE8 801526E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 60AEC 801526EC 00000000 */  nop
    /* 60AF0 801526F0 0800E003 */  jr         $ra
    /* 60AF4 801526F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80152640
