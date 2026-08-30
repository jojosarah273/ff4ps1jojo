nonmatching func_801982E8, 0x18

glabel func_801982E8
    /* A66E8 801982E8 4D410000 */  break      0, 261
    /* A66EC 801982EC 02004010 */  beqz       $v0, .L801982F8
    /* A66F0 801982F0 21106000 */   addu      $v0, $v1, $zero
    /* A66F4 801982F4 FFFF0224 */  addiu      $v0, $zero, -0x1
  .L801982F8:
    /* A66F8 801982F8 0800E003 */  jr         $ra
    /* A66FC 801982FC 00000000 */   nop
endlabel func_801982E8
