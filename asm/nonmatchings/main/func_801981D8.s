nonmatching func_801981D8, 0x20

glabel func_801981D8
    /* A65D8 801981D8 2130A000 */  addu       $a2, $a1, $zero
    /* A65DC 801981DC 21288000 */  addu       $a1, $a0, $zero
    /* A65E0 801981E0 CD400000 */  break      0, 259
    /* A65E4 801981E4 02004010 */  beqz       $v0, .L801981F0
    /* A65E8 801981E8 21106000 */   addu      $v0, $v1, $zero
    /* A65EC 801981EC FFFF0224 */  addiu      $v0, $zero, -0x1
  .L801981F0:
    /* A65F0 801981F0 0800E003 */  jr         $ra
    /* A65F4 801981F4 00000000 */   nop
endlabel func_801981D8
