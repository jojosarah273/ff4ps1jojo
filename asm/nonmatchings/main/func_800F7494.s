nonmatching func_800F7494, 0x60

glabel func_800F7494
    /* 5894 800F7494 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 5898 800F7498 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 589C 800F749C 0000C590 */  lbu        $a1, 0x0($a2)
    /* 58A0 800F74A0 01006290 */  lbu        $v0, 0x1($v1)
    /* 58A4 800F74A4 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 58A8 800F74A8 7D00A530 */  andi       $a1, $a1, 0x7D
    /* 58AC 800F74AC 80004230 */  andi       $v0, $v0, 0x80
    /* 58B0 800F74B0 2510A200 */  or         $v0, $a1, $v0
    /* 58B4 800F74B4 FF004530 */  andi       $a1, $v0, 0xFF
    /* 58B8 800F74B8 00006294 */  lhu        $v0, 0x0($v1)
    /* 58BC 800F74BC 00000000 */  nop
    /* 58C0 800F74C0 03004014 */  bnez       $v0, .L800F74D0
    /* 58C4 800F74C4 00000000 */   nop
    /* 58C8 800F74C8 35DD0308 */  j          .L800F74D4
    /* 58CC 800F74CC 0200A234 */   ori       $v0, $a1, 0x2
  .L800F74D0:
    /* 58D0 800F74D0 FF00A230 */  andi       $v0, $a1, 0xFF
  .L800F74D4:
    /* 58D4 800F74D4 21284000 */  addu       $a1, $v0, $zero
    /* 58D8 800F74D8 0000C5A0 */  sb         $a1, 0x0($a2)
    /* 58DC 800F74DC FF008230 */  andi       $v0, $a0, 0xFF
    /* 58E0 800F74E0 2428A200 */  and        $a1, $a1, $v0
    /* 58E4 800F74E4 03120400 */  sra        $v0, $a0, 8
    /* 58E8 800F74E8 2610A200 */  xor        $v0, $a1, $v0
    /* 58EC 800F74EC 0800E003 */  jr         $ra
    /* 58F0 800F74F0 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F7494
