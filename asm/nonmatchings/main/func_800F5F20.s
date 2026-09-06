nonmatching func_800F5F20, 0x50

glabel func_800F5F20
    /* 4320 800F5F20 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 4324 800F5F24 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 4328 800F5F28 0000C390 */  lbu        $v1, 0x0($a2)
    /* 432C 800F5F2C 00004590 */  lbu        $a1, 0x0($v0)
    /* 4330 800F5F30 7D006330 */  andi       $v1, $v1, 0x7D
    /* 4334 800F5F34 8000A230 */  andi       $v0, $a1, 0x80
    /* 4338 800F5F38 25106200 */  or         $v0, $v1, $v0
    /* 433C 800F5F3C 0300A014 */  bnez       $a1, .L800F5F4C
    /* 4340 800F5F40 FF004330 */   andi      $v1, $v0, 0xFF
    /* 4344 800F5F44 D4D70308 */  j          .L800F5F50
    /* 4348 800F5F48 02006234 */   ori       $v0, $v1, 0x2
  .L800F5F4C:
    /* 434C 800F5F4C FF006230 */  andi       $v0, $v1, 0xFF
  .L800F5F50:
    /* 4350 800F5F50 21184000 */  addu       $v1, $v0, $zero
    /* 4354 800F5F54 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 4358 800F5F58 FF008230 */  andi       $v0, $a0, 0xFF
    /* 435C 800F5F5C 24186200 */  and        $v1, $v1, $v0
    /* 4360 800F5F60 03120400 */  sra        $v0, $a0, 8
    /* 4364 800F5F64 26106200 */  xor        $v0, $v1, $v0
    /* 4368 800F5F68 0800E003 */  jr         $ra
    /* 436C 800F5F6C FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F5F20
