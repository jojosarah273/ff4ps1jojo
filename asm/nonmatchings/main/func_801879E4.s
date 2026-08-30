nonmatching func_801879E4, 0x2C

glabel func_801879E4
    /* 95DE4 801879E4 0E028487 */  lh         $a0, %gp_rel(D_8019EF0A)($gp)
    /* 95DE8 801879E8 10000224 */  addiu      $v0, $zero, 0x10
    /* 95DEC 801879EC 05008210 */  beq        $a0, $v0, .L80187A04
    /* 95DF0 801879F0 01000324 */   addiu     $v1, $zero, 0x1
    /* 95DF4 801879F4 04008310 */  beq        $a0, $v1, .L80187A08
    /* 95DF8 801879F8 21100000 */   addu      $v0, $zero, $zero
    /* 95DFC 801879FC 0800E003 */  jr         $ra
    /* 95E00 80187A00 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L80187A04:
    /* 95E04 80187A04 01000224 */  addiu      $v0, $zero, 0x1
  .L80187A08:
    /* 95E08 80187A08 0800E003 */  jr         $ra
    /* 95E0C 80187A0C 00000000 */   nop
endlabel func_801879E4
