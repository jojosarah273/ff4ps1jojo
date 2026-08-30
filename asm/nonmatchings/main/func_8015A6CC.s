nonmatching func_8015A6CC, 0xB8

glabel func_8015A6CC
    /* 68ACC 8015A6CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68AD0 8015A6D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68AD4 8015A6D4 92D0030C */  jal        func_800F4248
    /* 68AD8 8015A6D8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 68ADC 8015A6DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 68AE0 8015A6E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 68AE4 8015A6E4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 68AE8 8015A6E8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 68AEC 8015A6EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 68AF0 8015A6F0 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 68AF4 8015A6F4 5BE3030C */  jal        func_800F8D6C
    /* 68AF8 8015A6F8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 68AFC 8015A6FC 0FCF030C */  jal        func_800F3C3C
    /* 68B00 8015A700 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 68B04 8015A704 CAD3030C */  jal        func_800F4F28
    /* 68B08 8015A708 21204000 */   addu      $a0, $v0, $zero
    /* 68B0C 8015A70C D3D3030C */  jal        func_800F4F4C
    /* 68B10 8015A710 00000000 */   nop
    /* 68B14 8015A714 0FCF030C */  jal        func_800F3C3C
    /* 68B18 8015A718 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 68B1C 8015A71C 90DE030C */  jal        func_800F7A40
    /* 68B20 8015A720 21204000 */   addu      $a0, $v0, $zero
    /* 68B24 8015A724 59D9030C */  jal        func_800F6564
    /* 68B28 8015A728 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 68B2C 8015A72C 0DD9030C */  jal        func_800F6434
    /* 68B30 8015A730 02000424 */   addiu     $a0, $zero, 0x2
    /* 68B34 8015A734 0B004014 */  bnez       $v0, .L8015A764
    /* 68B38 8015A738 00000000 */   nop
    /* 68B3C 8015A73C C7E5030C */  jal        func_800F971C
    /* 68B40 8015A740 00000000 */   nop
    /* 68B44 8015A744 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 68B48 8015A748 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 68B4C 8015A74C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 68B50 8015A750 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 68B54 8015A754 00004394 */  lhu        $v1, 0x0($v0)
    /* 68B58 8015A758 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 68B5C 8015A75C 5BE3030C */  jal        func_800F8D6C
    /* 68B60 8015A760 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015A764:
    /* 68B64 8015A764 FB6A050C */  jal        func_8015ABEC
    /* 68B68 8015A768 00000000 */   nop
    /* 68B6C 8015A76C 5B69050C */  jal        func_8015A56C
    /* 68B70 8015A770 00000000 */   nop
    /* 68B74 8015A774 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68B78 8015A778 00000000 */  nop
    /* 68B7C 8015A77C 0800E003 */  jr         $ra
    /* 68B80 8015A780 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A6CC
