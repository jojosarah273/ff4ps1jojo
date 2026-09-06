nonmatching func_8014A488, 0x54

glabel func_8014A488
    /* 58888 8014A488 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5888C 8014A48C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58890 8014A490 5DD5030C */  jal        func_800F5574
    /* 58894 8014A494 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 58898 8014A498 F5D4030C */  jal        func_800F53D4
    /* 5889C 8014A49C 00000000 */   nop
    /* 588A0 8014A4A0 0A004014 */  bnez       $v0, .L8014A4CC
    /* 588A4 8014A4A4 00000000 */   nop
    /* 588A8 8014A4A8 50D4030C */  jal        func_800F5140
    /* 588AC 8014A4AC 00000000 */   nop
    /* 588B0 8014A4B0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 588B4 8014A4B4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 588B8 8014A4B8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 588BC 8014A4BC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 588C0 8014A4C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 588C4 8014A4C4 3729050C */  jal        func_8014A4DC
    /* 588C8 8014A4C8 000083A4 */   sh        $v1, 0x0($a0)
  .L8014A4CC:
    /* 588CC 8014A4CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 588D0 8014A4D0 00000000 */  nop
    /* 588D4 8014A4D4 0800E003 */  jr         $ra
    /* 588D8 8014A4D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A488
