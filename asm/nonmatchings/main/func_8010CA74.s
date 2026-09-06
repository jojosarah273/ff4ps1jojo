nonmatching func_8010CA74, 0x94

glabel func_8010CA74
    /* 1AE74 8010CA74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1AE78 8010CA78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1AE7C 8010CA7C EEE3030C */  jal        func_800F8FB8
    /* 1AE80 8010CA80 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1AE84 8010CA84 84DC030C */  jal        func_800F7210
    /* 1AE88 8010CA88 D1090424 */   addiu     $a0, $zero, 0x9D1
    /* 1AE8C 8010CA8C 40E3030C */  jal        func_800F8D00
    /* 1AE90 8010CA90 CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1AE94 8010CA94 1300043C */  lui        $a0, (0x138300 >> 16)
  .L8010CA98:
    /* 1AE98 8010CA98 1ADB030C */  jal        func_800F6C68
    /* 1AE9C 8010CA9C 00838434 */   ori       $a0, $a0, (0x138300 & 0xFFFF)
    /* 1AEA0 8010CAA0 8735040C */  jal        func_8010D61C
    /* 1AEA4 8010CAA4 00000000 */   nop
    /* 1AEA8 8010CAA8 84DC030C */  jal        func_800F7210
    /* 1AEAC 8010CAAC CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1AEB0 8010CAB0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1AEB4 8010CAB4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1AEB8 8010CAB8 00000000 */  nop
    /* 1AEBC 8010CABC 00006294 */  lhu        $v0, 0x0($v1)
    /* 1AEC0 8010CAC0 CF090424 */  addiu      $a0, $zero, 0x9CF
    /* 1AEC4 8010CAC4 04004224 */  addiu      $v0, $v0, 0x4
    /* 1AEC8 8010CAC8 40E3030C */  jal        func_800F8D00
    /* 1AECC 8010CACC 000062A4 */   sh        $v0, 0x0($v1)
    /* 1AED0 8010CAD0 AFD8030C */  jal        func_800F62BC
    /* 1AED4 8010CAD4 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1AED8 8010CAD8 8CD9030C */  jal        func_800F6630
    /* 1AEDC 8010CADC AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1AEE0 8010CAE0 5DD5030C */  jal        func_800F5574
    /* 1AEE4 8010CAE4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1AEE8 8010CAE8 F5D4030C */  jal        func_800F53D4
    /* 1AEEC 8010CAEC 00000000 */   nop
    /* 1AEF0 8010CAF0 E9FF4010 */  beqz       $v0, .L8010CA98
    /* 1AEF4 8010CAF4 1300043C */   lui       $a0, (0x138300 >> 16)
    /* 1AEF8 8010CAF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1AEFC 8010CAFC 00000000 */  nop
    /* 1AF00 8010CB00 0800E003 */  jr         $ra
    /* 1AF04 8010CB04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010CA74
