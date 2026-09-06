nonmatching func_80103F40, 0x54

glabel func_80103F40
    /* 12340 80103F40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 12344 80103F44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 12348 80103F48 77DC030C */  jal        func_800F71DC
    /* 1234C 80103F4C 21200000 */   addu      $a0, $zero, $zero
    /* 12350 80103F50 1400043C */  lui        $a0, (0x14FAE6 >> 16)
  .L80103F54:
    /* 12354 80103F54 1ADB030C */  jal        func_800F6C68
    /* 12358 80103F58 E6FA8434 */   ori       $a0, $a0, (0x14FAE6 & 0xFFFF)
    /* 1235C 80103F5C DAE1030C */  jal        func_800F8768
    /* 12360 80103F60 00030424 */   addiu     $a0, $zero, 0x300
    /* 12364 80103F64 D9D8030C */  jal        func_800F6364
    /* 12368 80103F68 00000000 */   nop
    /* 1236C 80103F6C 56D6030C */  jal        func_800F5958
    /* 12370 80103F70 10000424 */   addiu     $a0, $zero, 0x10
    /* 12374 80103F74 F5D4030C */  jal        func_800F53D4
    /* 12378 80103F78 00000000 */   nop
    /* 1237C 80103F7C F5FF4010 */  beqz       $v0, .L80103F54
    /* 12380 80103F80 1400043C */   lui       $a0, (0x14FAE6 >> 16)
    /* 12384 80103F84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 12388 80103F88 00000000 */  nop
    /* 1238C 80103F8C 0800E003 */  jr         $ra
    /* 12390 80103F90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103F40
