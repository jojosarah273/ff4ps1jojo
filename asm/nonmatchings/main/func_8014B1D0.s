nonmatching func_8014B1D0, 0x78

glabel func_8014B1D0
    /* 595D0 8014B1D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 595D4 8014B1D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 595D8 8014B1D8 59D9030C */  jal        func_800F6564
    /* 595DC 8014B1DC C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 595E0 8014B1E0 0DD9030C */  jal        func_800F6434
    /* 595E4 8014B1E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 595E8 8014B1E8 05004014 */  bnez       $v0, .L8014B200
    /* 595EC 8014B1EC 00000000 */   nop
    /* 595F0 8014B1F0 7F09050C */  jal        func_801425FC
    /* 595F4 8014B1F4 00000000 */   nop
    /* 595F8 8014B1F8 8E2C0508 */  j          .L8014B238
    /* 595FC 8014B1FC 00000000 */   nop
  .L8014B200:
    /* 59600 8014B200 59D9030C */  jal        func_800F6564
    /* 59604 8014B204 22350424 */   addiu     $a0, $zero, 0x3522
    /* 59608 8014B208 0DD9030C */  jal        func_800F6434
    /* 5960C 8014B20C 02000424 */   addiu     $a0, $zero, 0x2
    /* 59610 8014B210 09004014 */  bnez       $v0, .L8014B238
    /* 59614 8014B214 00000000 */   nop
    /* 59618 8014B218 6D2E050C */  jal        func_8014B9B4
    /* 5961C 8014B21C 00000000 */   nop
    /* 59620 8014B220 B12B050C */  jal        func_8014AEC4
    /* 59624 8014B224 00000000 */   nop
    /* 59628 8014B228 7F09050C */  jal        func_801425FC
    /* 5962C 8014B22C 00000000 */   nop
    /* 59630 8014B230 CF2B050C */  jal        func_8014AF3C
    /* 59634 8014B234 00000000 */   nop
  .L8014B238:
    /* 59638 8014B238 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5963C 8014B23C 00000000 */  nop
    /* 59640 8014B240 0800E003 */  jr         $ra
    /* 59644 8014B244 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B1D0
