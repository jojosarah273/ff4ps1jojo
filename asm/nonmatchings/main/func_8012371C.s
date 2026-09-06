nonmatching func_8012371C, 0x8C

glabel func_8012371C
    /* 31B1C 8012371C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31B20 80123720 1000BFAF */  sw         $ra, 0x10($sp)
  .L80123724:
    /* 31B24 80123724 0F00043C */  lui        $a0, (0xFA764 >> 16)
    /* 31B28 80123728 1ADB030C */  jal        func_800F6C68
    /* 31B2C 8012372C 64A78434 */   ori       $a0, $a0, (0xFA764 & 0xFFFF)
    /* 31B30 80123730 6D91040C */  jal        func_801245B4
    /* 31B34 80123734 00000000 */   nop
    /* 31B38 80123738 58E2030C */  jal        func_800F8960
    /* 31B3C 8012373C 21200000 */   addu      $a0, $zero, $zero
    /* 31B40 80123740 52CF030C */  jal        func_800F3D48
    /* 31B44 80123744 00000000 */   nop
    /* 31B48 80123748 58E2030C */  jal        func_800F8960
    /* 31B4C 8012374C 40000424 */   addiu     $a0, $zero, 0x40
    /* 31B50 80123750 EFD8030C */  jal        func_800F63BC
    /* 31B54 80123754 00000000 */   nop
    /* 31B58 80123758 8CD9030C */  jal        func_800F6630
    /* 31B5C 8012375C 34000424 */   addiu     $a0, $zero, 0x34
    /* 31B60 80123760 58E2030C */  jal        func_800F8960
    /* 31B64 80123764 21200000 */   addu      $a0, $zero, $zero
    /* 31B68 80123768 58E2030C */  jal        func_800F8960
    /* 31B6C 8012376C 40000424 */   addiu     $a0, $zero, 0x40
    /* 31B70 80123770 EFD8030C */  jal        func_800F63BC
    /* 31B74 80123774 00000000 */   nop
    /* 31B78 80123778 D9D8030C */  jal        func_800F6364
    /* 31B7C 8012377C 00000000 */   nop
    /* 31B80 80123780 68D7030C */  jal        func_800F5DA0
    /* 31B84 80123784 45000424 */   addiu     $a0, $zero, 0x45
    /* 31B88 80123788 E3D6030C */  jal        func_800F5B8C
    /* 31B8C 8012378C 02020424 */   addiu     $a0, $zero, 0x202
    /* 31B90 80123790 E4FF4014 */  bnez       $v0, .L80123724
    /* 31B94 80123794 00000000 */   nop
    /* 31B98 80123798 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31B9C 8012379C 00000000 */  nop
    /* 31BA0 801237A0 0800E003 */  jr         $ra
    /* 31BA4 801237A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012371C
