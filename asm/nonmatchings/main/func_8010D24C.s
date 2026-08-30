nonmatching func_8010D24C, 0x54

glabel func_8010D24C
    /* 1B64C 8010D24C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1B650 8010D250 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1B654 8010D254 77DC030C */  jal        func_800F71DC
    /* 1B658 8010D258 21200000 */   addu      $a0, $zero, $zero
    /* 1B65C 8010D25C 53D9030C */  jal        func_800F654C
    /* 1B660 8010D260 21200000 */   addu      $a0, $zero, $zero
    /* 1B664 8010D264 7F00043C */  lui        $a0, (0x7F4C00 >> 16)
  .L8010D268:
    /* 1B668 8010D268 17E2030C */  jal        func_800F885C
    /* 1B66C 8010D26C 004C8434 */   ori       $a0, $a0, (0x7F4C00 & 0xFFFF)
    /* 1B670 8010D270 D9D8030C */  jal        func_800F6364
    /* 1B674 8010D274 00000000 */   nop
    /* 1B678 8010D278 56D6030C */  jal        func_800F5958
    /* 1B67C 8010D27C 00040424 */   addiu     $a0, $zero, 0x400
    /* 1B680 8010D280 F5D4030C */  jal        func_800F53D4
    /* 1B684 8010D284 00000000 */   nop
    /* 1B688 8010D288 F7FF4010 */  beqz       $v0, .L8010D268
    /* 1B68C 8010D28C 7F00043C */   lui       $a0, (0x7F4C00 >> 16)
    /* 1B690 8010D290 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1B694 8010D294 00000000 */  nop
    /* 1B698 8010D298 0800E003 */  jr         $ra
    /* 1B69C 8010D29C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D24C
