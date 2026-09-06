nonmatching func_8013D690, 0x90

glabel func_8013D690
    /* 4BA90 8013D690 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4BA94 8013D694 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4BA98 8013D698 40DD030C */  jal        func_800F7500
    /* 4BA9C 8013D69C 40000424 */   addiu     $a0, $zero, 0x40
    /* 4BAA0 8013D6A0 91E5030C */  jal        func_800F9644
    /* 4BAA4 8013D6A4 20000424 */   addiu     $a0, $zero, 0x20
  .L8013D6A8:
    /* 4BAA8 8013D6A8 7ADB030C */  jal        func_800F6DE8
    /* 4BAAC 8013D6AC 40030424 */   addiu     $a0, $zero, 0x340
    /* 4BAB0 8013D6B0 75E2030C */  jal        func_800F89D4
    /* 4BAB4 8013D6B4 44030424 */   addiu     $a0, $zero, 0x344
    /* 4BAB8 8013D6B8 7ADB030C */  jal        func_800F6DE8
    /* 4BABC 8013D6BC 42030424 */   addiu     $a0, $zero, 0x342
    /* 4BAC0 8013D6C0 75E2030C */  jal        func_800F89D4
    /* 4BAC4 8013D6C4 46030424 */   addiu     $a0, $zero, 0x346
    /* 4BAC8 8013D6C8 A8D7030C */  jal        func_800F5EA0
    /* 4BACC 8013D6CC 00000000 */   nop
    /* 4BAD0 8013D6D0 A8D7030C */  jal        func_800F5EA0
    /* 4BAD4 8013D6D4 00000000 */   nop
    /* 4BAD8 8013D6D8 A8D7030C */  jal        func_800F5EA0
    /* 4BADC 8013D6DC 00000000 */   nop
    /* 4BAE0 8013D6E0 A8D7030C */  jal        func_800F5EA0
    /* 4BAE4 8013D6E4 00000000 */   nop
    /* 4BAE8 8013D6E8 A4D6030C */  jal        func_800F5A90
    /* 4BAEC 8013D6EC FCFF0434 */   ori       $a0, $zero, 0xFFFC
    /* 4BAF0 8013D6F0 F5D4030C */  jal        func_800F53D4
    /* 4BAF4 8013D6F4 00000000 */   nop
    /* 4BAF8 8013D6F8 EBFF4010 */  beqz       $v0, .L8013D6A8
    /* 4BAFC 8013D6FC 00000000 */   nop
    /* 4BB00 8013D700 C7E5030C */  jal        func_800F971C
    /* 4BB04 8013D704 00000000 */   nop
    /* 4BB08 8013D708 98E5030C */  jal        func_800F9660
    /* 4BB0C 8013D70C 20000424 */   addiu     $a0, $zero, 0x20
    /* 4BB10 8013D710 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4BB14 8013D714 00000000 */  nop
    /* 4BB18 8013D718 0800E003 */  jr         $ra
    /* 4BB1C 8013D71C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D690
