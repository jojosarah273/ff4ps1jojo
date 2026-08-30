nonmatching func_80187C9C, 0x1C

glabel func_80187C9C
    /* 9609C 80187C9C 02008014 */  bnez       $a0, .L80187CA8
    /* 960A0 80187CA0 85000224 */   addiu     $v0, $zero, 0x85
    /* 960A4 80187CA4 86000224 */  addiu      $v0, $zero, 0x86
  .L80187CA8:
    /* 960A8 80187CA8 280282AF */  sw         $v0, %gp_rel(D_8019EF24)($gp)
    /* 960AC 80187CAC 2C0280AF */  sw         $zero, %gp_rel(D_8019EF28)($gp)
    /* 960B0 80187CB0 0800E003 */  jr         $ra
    /* 960B4 80187CB4 00000000 */   nop
endlabel func_80187C9C
