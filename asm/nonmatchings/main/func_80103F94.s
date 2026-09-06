nonmatching func_80103F94, 0x54

glabel func_80103F94
    /* 12394 80103F94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 12398 80103F98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1239C 80103F9C 77DC030C */  jal        func_800F71DC
    /* 123A0 80103FA0 21200000 */   addu      $a0, $zero, $zero
    /* 123A4 80103FA4 1400043C */  lui        $a0, (0x14FAD6 >> 16)
  .L80103FA8:
    /* 123A8 80103FA8 1ADB030C */  jal        func_800F6C68
    /* 123AC 80103FAC D6FA8434 */   ori       $a0, $a0, (0x14FAD6 & 0xFFFF)
    /* 123B0 80103FB0 DAE1030C */  jal        func_800F8768
    /* 123B4 80103FB4 00030424 */   addiu     $a0, $zero, 0x300
    /* 123B8 80103FB8 D9D8030C */  jal        func_800F6364
    /* 123BC 80103FBC 00000000 */   nop
    /* 123C0 80103FC0 56D6030C */  jal        func_800F5958
    /* 123C4 80103FC4 10000424 */   addiu     $a0, $zero, 0x10
    /* 123C8 80103FC8 F5D4030C */  jal        func_800F53D4
    /* 123CC 80103FCC 00000000 */   nop
    /* 123D0 80103FD0 F5FF4010 */  beqz       $v0, .L80103FA8
    /* 123D4 80103FD4 1400043C */   lui       $a0, (0x14FAD6 >> 16)
    /* 123D8 80103FD8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 123DC 80103FDC 00000000 */  nop
    /* 123E0 80103FE0 0800E003 */  jr         $ra
    /* 123E4 80103FE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103F94
