nonmatching func_80189AE8, 0x40

glabel func_80189AE8
    /* 97EE8 80189AE8 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 97EEC 80189AEC 0F000224 */  addiu      $v0, $zero, 0xF
    /* 97EF0 80189AF0 C0210400 */  sll        $a0, $a0, 7
    /* 97EF4 80189AF4 C0290500 */  sll        $a1, $a1, 7
    /* 97EF8 80189AF8 1400A4A7 */  sh         $a0, 0x14($sp)
    /* 97EFC 80189AFC 1000A427 */  addiu      $a0, $sp, 0x10
    /* 97F00 80189B00 3800BFAF */  sw         $ra, 0x38($sp)
    /* 97F04 80189B04 1000A2AF */  sw         $v0, 0x10($sp)
    /* 97F08 80189B08 1600A5A7 */  sh         $a1, 0x16($sp)
    /* 97F0C 80189B0C 1800A0A7 */  sh         $zero, 0x18($sp)
    /* 97F10 80189B10 3A3B060C */  jal        func_8018ECE8
    /* 97F14 80189B14 1A00A0A7 */   sh        $zero, 0x1A($sp)
    /* 97F18 80189B18 3800BF8F */  lw         $ra, 0x38($sp)
    /* 97F1C 80189B1C 00000000 */  nop
    /* 97F20 80189B20 0800E003 */  jr         $ra
    /* 97F24 80189B24 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_80189AE8
