nonmatching func_800F5B8C, 0x5C

glabel func_800F5B8C
    /* 3F8C 800F5B8C 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 3F90 800F5B90 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 3F94 800F5B94 0000C390 */  lbu        $v1, 0x0($a2)
    /* 3F98 800F5B98 0000A290 */  lbu        $v0, 0x0($a1)
    /* 3F9C 800F5B9C 7D006330 */  andi       $v1, $v1, 0x7D
    /* 3FA0 800F5BA0 80004230 */  andi       $v0, $v0, 0x80
    /* 3FA4 800F5BA4 25106200 */  or         $v0, $v1, $v0
    /* 3FA8 800F5BA8 FF004330 */  andi       $v1, $v0, 0xFF
    /* 3FAC 800F5BAC 0000A290 */  lbu        $v0, 0x0($a1)
    /* 3FB0 800F5BB0 00000000 */  nop
    /* 3FB4 800F5BB4 03004014 */  bnez       $v0, .L800F5BC4
    /* 3FB8 800F5BB8 00000000 */   nop
    /* 3FBC 800F5BBC F2D60308 */  j          .L800F5BC8
    /* 3FC0 800F5BC0 02006234 */   ori       $v0, $v1, 0x2
  .L800F5BC4:
    /* 3FC4 800F5BC4 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F5BC8:
    /* 3FC8 800F5BC8 21184000 */  addu       $v1, $v0, $zero
    /* 3FCC 800F5BCC 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3FD0 800F5BD0 FF008230 */  andi       $v0, $a0, 0xFF
    /* 3FD4 800F5BD4 24186200 */  and        $v1, $v1, $v0
    /* 3FD8 800F5BD8 03120400 */  sra        $v0, $a0, 8
    /* 3FDC 800F5BDC 26106200 */  xor        $v0, $v1, $v0
    /* 3FE0 800F5BE0 0800E003 */  jr         $ra
    /* 3FE4 800F5BE4 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F5B8C
