nonmatching func_8010D458, 0x94

glabel func_8010D458
    /* 1B858 8010D458 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1B85C 8010D45C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1B860 8010D460 CCE4030C */  jal        func_800F9330
    /* 1B864 8010D464 00000000 */   nop
    /* 1B868 8010D468 8CD9030C */  jal        func_800F6630
    /* 1B86C 8010D46C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1B870 8010D470 5DD5030C */  jal        func_800F5574
    /* 1B874 8010D474 20000424 */   addiu     $a0, $zero, 0x20
    /* 1B878 8010D478 F0D4030C */  jal        func_800F53C0
    /* 1B87C 8010D47C 00000000 */   nop
    /* 1B880 8010D480 12004014 */  bnez       $v0, .L8010D4CC
    /* 1B884 8010D484 00000000 */   nop
    /* 1B888 8010D488 8CD9030C */  jal        func_800F6630
    /* 1B88C 8010D48C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1B890 8010D490 5DD5030C */  jal        func_800F5574
    /* 1B894 8010D494 20000424 */   addiu     $a0, $zero, 0x20
    /* 1B898 8010D498 F0D4030C */  jal        func_800F53C0
    /* 1B89C 8010D49C 00000000 */   nop
    /* 1B8A0 8010D4A0 0A004014 */  bnez       $v0, .L8010D4CC
    /* 1B8A4 8010D4A4 00000000 */   nop
    /* 1B8A8 8010D4A8 5335040C */  jal        func_8010D54C
    /* 1B8AC 8010D4AC 00000000 */   nop
    /* 1B8B0 8010D4B0 9CDC030C */  jal        func_800F7270
    /* 1B8B4 8010D4B4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B8B8 8010D4B8 7F00043C */  lui        $a0, (0x7F4C00 >> 16)
    /* 1B8BC 8010D4BC 1ADB030C */  jal        func_800F6C68
    /* 1B8C0 8010D4C0 004C8434 */   ori       $a0, $a0, (0x7F4C00 & 0xFFFF)
    /* 1B8C4 8010D4C4 35350408 */  j          .L8010D4D4
    /* 1B8C8 8010D4C8 00000000 */   nop
  .L8010D4CC:
    /* 1B8CC 8010D4CC 53D9030C */  jal        func_800F654C
    /* 1B8D0 8010D4D0 21200000 */   addu      $a0, $zero, $zero
  .L8010D4D4:
    /* 1B8D4 8010D4D4 68E5030C */  jal        func_800F95A0
    /* 1B8D8 8010D4D8 00000000 */   nop
    /* 1B8DC 8010D4DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1B8E0 8010D4E0 00000000 */  nop
    /* 1B8E4 8010D4E4 0800E003 */  jr         $ra
    /* 1B8E8 8010D4E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D458
