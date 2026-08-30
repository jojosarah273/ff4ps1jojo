nonmatching func_80197EE8, 0x3C

glabel func_80197EE8
    /* A62E8 80197EE8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A62EC 80197EEC 05008004 */  bltz       $a0, .L80197F04
    /* A62F0 80197EF0 1000BFAF */   sw        $ra, 0x10($sp)
    /* A62F4 80197EF4 C95F060C */  jal        func_80197F24
    /* A62F8 80197EF8 FF0F8430 */   andi      $a0, $a0, 0xFFF
    /* A62FC 80197EFC C55F0608 */  j          .L80197F14
    /* A6300 80197F00 00000000 */   nop
  .L80197F04:
    /* A6304 80197F04 23200400 */  negu       $a0, $a0
    /* A6308 80197F08 C95F060C */  jal        func_80197F24
    /* A630C 80197F0C FF0F8430 */   andi      $a0, $a0, 0xFFF
    /* A6310 80197F10 23100200 */  negu       $v0, $v0
  .L80197F14:
    /* A6314 80197F14 1000BF8F */  lw         $ra, 0x10($sp)
    /* A6318 80197F18 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A631C 80197F1C 0800E003 */  jr         $ra
    /* A6320 80197F20 00000000 */   nop
endlabel func_80197EE8
