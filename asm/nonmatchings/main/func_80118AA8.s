nonmatching func_80118AA8, 0xD8

glabel func_80118AA8
    /* 26EA8 80118AA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26EAC 80118AAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26EB0 80118AB0 D9D8030C */  jal        func_800F6364
    /* 26EB4 80118AB4 00000000 */   nop
    /* 26EB8 80118AB8 DADA030C */  jal        func_800F6B68
    /* 26EBC 80118ABC D5090424 */   addiu     $a0, $zero, 0x9D5
    /* 26EC0 80118AC0 91E5030C */  jal        func_800F9644
    /* 26EC4 80118AC4 20000424 */   addiu     $a0, $zero, 0x20
    /* 26EC8 80118AC8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 26ECC 80118ACC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 26ED0 80118AD0 00000000 */  nop
    /* 26ED4 80118AD4 00006294 */  lhu        $v0, 0x0($v1)
    /* 26ED8 80118AD8 18000424 */  addiu      $a0, $zero, 0x18
    /* 26EDC 80118ADC C0100200 */  sll        $v0, $v0, 3
    /* 26EE0 80118AE0 9DE0030C */  jal        func_800F8274
    /* 26EE4 80118AE4 000062A4 */   sh        $v0, 0x0($v1)
    /* 26EE8 80118AE8 5BD4030C */  jal        func_800F516C
    /* 26EEC 80118AEC 00000000 */   nop
    /* 26EF0 80118AF0 04D5030C */  jal        func_800F5410
    /* 26EF4 80118AF4 00000000 */   nop
    /* 26EF8 80118AF8 0FCF030C */  jal        func_800F3C3C
    /* 26EFC 80118AFC 18000424 */   addiu     $a0, $zero, 0x18
    /* 26F00 80118B00 E5CF030C */  jal        func_800F3F94
    /* 26F04 80118B04 21204000 */   addu      $a0, $v0, $zero
    /* 26F08 80118B08 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 26F0C 80118B0C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 26F10 80118B10 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 26F14 80118B14 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 26F18 80118B18 00004394 */  lhu        $v1, 0x0($v0)
    /* 26F1C 80118B1C 21200000 */  addu       $a0, $zero, $zero
    /* 26F20 80118B20 56D9030C */  jal        func_800F6558
    /* 26F24 80118B24 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 26F28 80118B28 98E5030C */  jal        func_800F9660
    /* 26F2C 80118B2C 20000424 */   addiu     $a0, $zero, 0x20
  .L80118B30:
    /* 26F30 80118B30 5CDB030C */  jal        func_800F6D70
    /* 26F34 80118B34 60150424 */   addiu     $a0, $zero, 0x1560
    /* 26F38 80118B38 0DD9030C */  jal        func_800F6434
    /* 26F3C 80118B3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 26F40 80118B40 05004014 */  bnez       $v0, .L80118B58
    /* 26F44 80118B44 00000000 */   nop
    /* 26F48 80118B48 EFD8030C */  jal        func_800F63BC
    /* 26F4C 80118B4C 00000000 */   nop
    /* 26F50 80118B50 CC620408 */  j          .L80118B30
    /* 26F54 80118B54 00000000 */   nop
  .L80118B58:
    /* 26F58 80118B58 655D040C */  jal        func_80117594
    /* 26F5C 80118B5C 00000000 */   nop
    /* 26F60 80118B60 58E2030C */  jal        func_800F8960
    /* 26F64 80118B64 60150424 */   addiu     $a0, $zero, 0x1560
    /* 26F68 80118B68 977A040C */  jal        func_8011EA5C
    /* 26F6C 80118B6C 00000000 */   nop
    /* 26F70 80118B70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26F74 80118B74 00000000 */  nop
    /* 26F78 80118B78 0800E003 */  jr         $ra
    /* 26F7C 80118B7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118AA8
