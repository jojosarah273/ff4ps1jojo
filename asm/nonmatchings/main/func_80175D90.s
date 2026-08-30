nonmatching func_80175D90, 0x78

glabel func_80175D90
    /* 84190 80175D90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 84194 80175D94 1000BFAF */  sw         $ra, 0x10($sp)
    /* 84198 80175D98 59D9030C */  jal        func_800F6564
    /* 8419C 80175D9C 04170424 */   addiu     $a0, $zero, 0x1704
    /* 841A0 80175DA0 0DD9030C */  jal        func_800F6434
    /* 841A4 80175DA4 02020424 */   addiu     $a0, $zero, 0x202
    /* 841A8 80175DA8 13004014 */  bnez       $v0, .L80175DF8
    /* 841AC 80175DAC 00000000 */   nop
    /* 841B0 80175DB0 8CD9030C */  jal        func_800F6630
    /* 841B4 80175DB4 02000424 */   addiu     $a0, $zero, 0x2
    /* 841B8 80175DB8 92D0030C */  jal        func_800F4248
    /* 841BC 80175DBC 10000424 */   addiu     $a0, $zero, 0x10
    /* 841C0 80175DC0 48D0030C */  jal        func_800F4120
    /* 841C4 80175DC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 841C8 80175DC8 0B004014 */  bnez       $v0, .L80175DF8
    /* 841CC 80175DCC 00000000 */   nop
    /* 841D0 80175DD0 8CD9030C */  jal        func_800F6630
    /* 841D4 80175DD4 53000424 */   addiu     $a0, $zero, 0x53
    /* 841D8 80175DD8 0DD9030C */  jal        func_800F6434
    /* 841DC 80175DDC 02000424 */   addiu     $a0, $zero, 0x2
    /* 841E0 80175DE0 05004010 */  beqz       $v0, .L80175DF8
    /* 841E4 80175DE4 00000000 */   nop
    /* 841E8 80175DE8 AFD8030C */  jal        func_800F62BC
    /* 841EC 80175DEC 53000424 */   addiu     $a0, $zero, 0x53
    /* 841F0 80175DF0 82D7050C */  jal        func_80175E08
    /* 841F4 80175DF4 00000000 */   nop
  .L80175DF8:
    /* 841F8 80175DF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 841FC 80175DFC 00000000 */  nop
    /* 84200 80175E00 0800E003 */  jr         $ra
    /* 84204 80175E04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80175D90
