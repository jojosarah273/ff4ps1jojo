nonmatching func_80149EE0, 0x40

glabel func_80149EE0
    /* 582E0 80149EE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 582E4 80149EE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 582E8 80149EE8 DDE3030C */  jal        func_800F8F74
    /* 582EC 80149EEC D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 582F0 80149EF0 8CDB030C */  jal        func_800F6E30
    /* 582F4 80149EF4 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 582F8 80149EF8 0DD9030C */  jal        func_800F6434
    /* 582FC 80149EFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 58300 80149F00 03004010 */  beqz       $v0, .L80149F10
    /* 58304 80149F04 00000000 */   nop
    /* 58308 80149F08 C827050C */  jal        func_80149F20
    /* 5830C 80149F0C 00000000 */   nop
  .L80149F10:
    /* 58310 80149F10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58314 80149F14 00000000 */  nop
    /* 58318 80149F18 0800E003 */  jr         $ra
    /* 5831C 80149F1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80149EE0
