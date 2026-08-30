nonmatching func_800FDAFC, 0x60

glabel func_800FDAFC
    /* BEFC 800FDAFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BF00 800FDB00 1000BFAF */  sw         $ra, 0x10($sp)
    /* BF04 800FDB04 59D9030C */  jal        func_800F6564
    /* BF08 800FDB08 00170424 */   addiu     $a0, $zero, 0x1700
    /* BF0C 800FDB0C 0DD9030C */  jal        func_800F6434
    /* BF10 800FDB10 02020424 */   addiu     $a0, $zero, 0x202
    /* BF14 800FDB14 05004014 */  bnez       $v0, .L800FDB2C
    /* BF18 800FDB18 00000000 */   nop
    /* BF1C 800FDB1C 44F8030C */  jal        func_800FE110
    /* BF20 800FDB20 00000000 */   nop
    /* BF24 800FDB24 D3F60308 */  j          .L800FDB4C
    /* BF28 800FDB28 00000000 */   nop
  .L800FDB2C:
    /* BF2C 800FDB2C 5DD5030C */  jal        func_800F5574
    /* BF30 800FDB30 01000424 */   addiu     $a0, $zero, 0x1
    /* BF34 800FDB34 F5D4030C */  jal        func_800F53D4
    /* BF38 800FDB38 00000000 */   nop
    /* BF3C 800FDB3C 03004010 */  beqz       $v0, .L800FDB4C
    /* BF40 800FDB40 00000000 */   nop
    /* BF44 800FDB44 63F7030C */  jal        func_800FDD8C
    /* BF48 800FDB48 00000000 */   nop
  .L800FDB4C:
    /* BF4C 800FDB4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* BF50 800FDB50 00000000 */  nop
    /* BF54 800FDB54 0800E003 */  jr         $ra
    /* BF58 800FDB58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDAFC
