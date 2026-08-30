nonmatching func_80198208, 0x24

glabel func_80198208
    /* A6608 80198208 2138C000 */  addu       $a3, $a2, $zero
    /* A660C 8019820C 2130A000 */  addu       $a2, $a1, $zero
    /* A6610 80198210 21288000 */  addu       $a1, $a0, $zero
    /* A6614 80198214 CD410000 */  break      0, 263
    /* A6618 80198218 02004010 */  beqz       $v0, .L80198224
    /* A661C 8019821C 21106000 */   addu      $v0, $v1, $zero
    /* A6620 80198220 FFFF0224 */  addiu      $v0, $zero, -0x1
  .L80198224:
    /* A6624 80198224 0800E003 */  jr         $ra
    /* A6628 80198228 00000000 */   nop
endlabel func_80198208
