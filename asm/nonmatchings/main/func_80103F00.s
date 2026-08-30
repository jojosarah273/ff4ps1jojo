nonmatching func_80103F00, 0x40

glabel func_80103F00
    /* 12300 80103F00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 12304 80103F04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 12308 80103F08 8CD9030C */  jal        func_800F6630
    /* 1230C 80103F0C 79000424 */   addiu     $a0, $zero, 0x79
    /* 12310 80103F10 5DD5030C */  jal        func_800F5574
    /* 12314 80103F14 10000424 */   addiu     $a0, $zero, 0x10
    /* 12318 80103F18 F0D4030C */  jal        func_800F53C0
    /* 1231C 80103F1C 00000000 */   nop
    /* 12320 80103F20 03004014 */  bnez       $v0, .L80103F30
    /* 12324 80103F24 00000000 */   nop
    /* 12328 80103F28 62E0030C */  jal        func_800F8188
    /* 1232C 80103F2C 00210424 */   addiu     $a0, $zero, 0x2100
  .L80103F30:
    /* 12330 80103F30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 12334 80103F34 00000000 */  nop
    /* 12338 80103F38 0800E003 */  jr         $ra
    /* 1233C 80103F3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103F00
