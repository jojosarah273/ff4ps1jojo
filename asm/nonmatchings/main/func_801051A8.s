nonmatching func_801051A8, 0x88

glabel func_801051A8
    /* 135A8 801051A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 135AC 801051AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 135B0 801051B0 8CD9030C */  jal        func_800F6630
    /* 135B4 801051B4 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 135B8 801051B8 92D0030C */  jal        func_800F4248
    /* 135BC 801051BC 04000424 */   addiu     $a0, $zero, 0x4
    /* 135C0 801051C0 48D0030C */  jal        func_800F4120
    /* 135C4 801051C4 02000424 */   addiu     $a0, $zero, 0x2
    /* 135C8 801051C8 0B004014 */  bnez       $v0, .L801051F8
    /* 135CC 801051CC 00000000 */   nop
    /* 135D0 801051D0 8CD9030C */  jal        func_800F6630
    /* 135D4 801051D4 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 135D8 801051D8 92D0030C */  jal        func_800F4248
    /* 135DC 801051DC 03000424 */   addiu     $a0, $zero, 0x3
    /* 135E0 801051E0 DCD0030C */  jal        func_800F4370
    /* 135E4 801051E4 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 135E8 801051E8 48D0030C */  jal        func_800F4120
    /* 135EC 801051EC 02000424 */   addiu     $a0, $zero, 0x2
    /* 135F0 801051F0 0B004014 */  bnez       $v0, .L80105220
    /* 135F4 801051F4 00000000 */   nop
  .L801051F8:
    /* 135F8 801051F8 59D9030C */  jal        func_800F6564
    /* 135FC 801051FC 06170424 */   addiu     $a0, $zero, 0x1706
    /* 13600 80105200 93E0030C */  jal        func_800F824C
    /* 13604 80105204 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13608 80105208 59D9030C */  jal        func_800F6564
    /* 1360C 8010520C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 13610 80105210 93E0030C */  jal        func_800F824C
    /* 13614 80105214 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13618 80105218 A834040C */  jal        func_8010D2A0
    /* 1361C 8010521C 00000000 */   nop
  .L80105220:
    /* 13620 80105220 1000BF8F */  lw         $ra, 0x10($sp)
    /* 13624 80105224 00000000 */  nop
    /* 13628 80105228 0800E003 */  jr         $ra
    /* 1362C 8010522C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801051A8
