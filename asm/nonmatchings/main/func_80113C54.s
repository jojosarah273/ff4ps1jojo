nonmatching func_80113C54, 0x78

glabel func_80113C54
    /* 22054 80113C54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22058 80113C58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2205C 80113C5C 9CDC030C */  jal        func_800F7270
    /* 22060 80113C60 22000424 */   addiu     $a0, $zero, 0x22
    /* 22064 80113C64 56D6030C */  jal        func_800F5958
    /* 22068 80113C68 F03F0424 */   addiu     $a0, $zero, 0x3FF0
    /* 2206C 80113C6C F0D4030C */  jal        func_800F53C0
    /* 22070 80113C70 00000000 */   nop
    /* 22074 80113C74 0D004014 */  bnez       $v0, .L80113CAC
    /* 22078 80113C78 00000000 */   nop
    /* 2207C 80113C7C 56D6030C */  jal        func_800F5958
    /* 22080 80113C80 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 22084 80113C84 F0D4030C */  jal        func_800F53C0
    /* 22088 80113C88 00000000 */   nop
    /* 2208C 80113C8C 07004010 */  beqz       $v0, .L80113CAC
    /* 22090 80113C90 00000000 */   nop
    /* 22094 80113C94 53D9030C */  jal        func_800F654C
    /* 22098 80113C98 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 2209C 80113C9C 58E2030C */  jal        func_800F8960
    /* 220A0 80113CA0 01030424 */   addiu     $a0, $zero, 0x301
    /* 220A4 80113CA4 2F4F0408 */  j          .L80113CBC
    /* 220A8 80113CA8 00000000 */   nop
  .L80113CAC:
    /* 220AC 80113CAC 8CD9030C */  jal        func_800F6630
    /* 220B0 80113CB0 22000424 */   addiu     $a0, $zero, 0x22
    /* 220B4 80113CB4 58E2030C */  jal        func_800F8960
    /* 220B8 80113CB8 01030424 */   addiu     $a0, $zero, 0x301
  .L80113CBC:
    /* 220BC 80113CBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 220C0 80113CC0 00000000 */  nop
    /* 220C4 80113CC4 0800E003 */  jr         $ra
    /* 220C8 80113CC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113C54
