nonmatching func_8014AE1C, 0xA8

glabel func_8014AE1C
    /* 5921C 8014AE1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59220 8014AE20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59224 8014AE24 59D9030C */  jal        func_800F6564
    /* 59228 8014AE28 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 5922C 8014AE2C 0DD9030C */  jal        func_800F6434
    /* 59230 8014AE30 02000424 */   addiu     $a0, $zero, 0x2
    /* 59234 8014AE34 09004014 */  bnez       $v0, .L8014AE5C
    /* 59238 8014AE38 00000000 */   nop
    /* 5923C 8014AE3C 752B050C */  jal        func_8014ADD4
    /* 59240 8014AE40 00000000 */   nop
    /* 59244 8014AE44 6532050C */  jal        func_8014C994
    /* 59248 8014AE48 00000000 */   nop
    /* 5924C 8014AE4C DDE3030C */  jal        func_800F8F74
    /* 59250 8014AE50 2EF40434 */   ori       $a0, $zero, 0xF42E
    /* 59254 8014AE54 AD2B0508 */  j          .L8014AEB4
    /* 59258 8014AE58 00000000 */   nop
  .L8014AE5C:
    /* 5925C 8014AE5C 59D9030C */  jal        func_800F6564
    /* 59260 8014AE60 22350424 */   addiu     $a0, $zero, 0x3522
    /* 59264 8014AE64 0DD9030C */  jal        func_800F6434
    /* 59268 8014AE68 02000424 */   addiu     $a0, $zero, 0x2
    /* 5926C 8014AE6C 11004014 */  bnez       $v0, .L8014AEB4
    /* 59270 8014AE70 00000000 */   nop
    /* 59274 8014AE74 6D2E050C */  jal        func_8014B9B4
    /* 59278 8014AE78 00000000 */   nop
    /* 5927C 8014AE7C B12B050C */  jal        func_8014AEC4
    /* 59280 8014AE80 00000000 */   nop
    /* 59284 8014AE84 752B050C */  jal        func_8014ADD4
    /* 59288 8014AE88 00000000 */   nop
    /* 5928C 8014AE8C 5B32050C */  jal        func_8014C96C
    /* 59290 8014AE90 00000000 */   nop
    /* 59294 8014AE94 90D8030C */  jal        func_800F6240
    /* 59298 8014AE98 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5929C 8014AE9C CF2B050C */  jal        func_8014AF3C
    /* 592A0 8014AEA0 00000000 */   nop
    /* 592A4 8014AEA4 8D2E050C */  jal        func_8014BA34
    /* 592A8 8014AEA8 00000000 */   nop
    /* 592AC 8014AEAC DDE3030C */  jal        func_800F8F74
    /* 592B0 8014AEB0 2EF40434 */   ori       $a0, $zero, 0xF42E
  .L8014AEB4:
    /* 592B4 8014AEB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 592B8 8014AEB8 00000000 */  nop
    /* 592BC 8014AEBC 0800E003 */  jr         $ra
    /* 592C0 8014AEC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AE1C
