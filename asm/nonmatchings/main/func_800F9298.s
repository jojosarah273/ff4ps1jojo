nonmatching func_800F9298, 0x40

glabel func_800F9298
    /* 7698 800F9298 0C80053C */  lui        $a1, (0x800C8000 >> 16)
    /* 769C 800F929C 0080A534 */  ori        $a1, $a1, (0x800C8000 & 0xFFFF)
    /* 76A0 800F92A0 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 76A4 800F92A4 5000868F */  lw         $a2, %gp_rel(D_8019ED4C)($gp)
    /* 76A8 800F92A8 4C00878F */  lw         $a3, %gp_rel(D_8019ED48)($gp)
    /* 76AC 800F92AC 0000C494 */  lhu        $a0, 0x0($a2)
    /* 76B0 800F92B0 0000E294 */  lhu        $v0, 0x0($a3)
    /* 76B4 800F92B4 21188300 */  addu       $v1, $a0, $v1
    /* 76B8 800F92B8 21288500 */  addu       $a1, $a0, $a1
    /* 76BC 800F92BC 000062A0 */  sb         $v0, %lo(D_800D0000)($v1)
    /* 76C0 800F92C0 02120200 */  srl        $v0, $v0, 8
    /* 76C4 800F92C4 FF7FA2A0 */  sb         $v0, 0x7FFF($a1)
    /* 76C8 800F92C8 5000838F */  lw         $v1, %gp_rel(D_8019ED4C)($gp)
    /* 76CC 800F92CC FEFF8424 */  addiu      $a0, $a0, -0x2
    /* 76D0 800F92D0 0800E003 */  jr         $ra
    /* 76D4 800F92D4 000064A4 */   sh        $a0, 0x0($v1)
endlabel func_800F9298
