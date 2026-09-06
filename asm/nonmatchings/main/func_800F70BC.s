nonmatching func_800F70BC, 0x50

glabel func_800F70BC
    /* 54BC 800F70BC 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 54C0 800F70C0 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 54C4 800F70C4 0000C390 */  lbu        $v1, 0x0($a2)
    /* 54C8 800F70C8 00004590 */  lbu        $a1, 0x0($v0)
    /* 54CC 800F70CC 7D006330 */  andi       $v1, $v1, 0x7D
    /* 54D0 800F70D0 8000A230 */  andi       $v0, $a1, 0x80
    /* 54D4 800F70D4 25106200 */  or         $v0, $v1, $v0
    /* 54D8 800F70D8 0300A014 */  bnez       $a1, .L800F70E8
    /* 54DC 800F70DC FF004330 */   andi      $v1, $v0, 0xFF
    /* 54E0 800F70E0 3BDC0308 */  j          .L800F70EC
    /* 54E4 800F70E4 02006234 */   ori       $v0, $v1, 0x2
  .L800F70E8:
    /* 54E8 800F70E8 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F70EC:
    /* 54EC 800F70EC 21184000 */  addu       $v1, $v0, $zero
    /* 54F0 800F70F0 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 54F4 800F70F4 FF008230 */  andi       $v0, $a0, 0xFF
    /* 54F8 800F70F8 24186200 */  and        $v1, $v1, $v0
    /* 54FC 800F70FC 03120400 */  sra        $v0, $a0, 8
    /* 5500 800F7100 26106200 */  xor        $v0, $v1, $v0
    /* 5504 800F7104 0800E003 */  jr         $ra
    /* 5508 800F7108 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F70BC
