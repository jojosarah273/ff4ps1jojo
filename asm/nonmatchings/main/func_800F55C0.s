nonmatching func_800F55C0, 0x4C

glabel func_800F55C0
    /* 39C0 800F55C0 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 39C4 800F55C4 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 39C8 800F55C8 4800858F */  lw         $a1, %gp_rel(D_8019ED44)($gp)
    /* 39CC 800F55CC 21304000 */  addu       $a2, $v0, $zero
    /* 39D0 800F55D0 00004390 */  lbu        $v1, 0x0($v0)
    /* 39D4 800F55D4 0000A594 */  lhu        $a1, 0x0($a1)
    /* 39D8 800F55D8 00000000 */  nop
    /* 39DC 800F55DC 0300A414 */  bne        $a1, $a0, .L800F55EC
    /* 39E0 800F55E0 7C006330 */   andi      $v1, $v1, 0x7C
    /* 39E4 800F55E4 81D50308 */  j          .L800F5604
    /* 39E8 800F55E8 03006334 */   ori       $v1, $v1, 0x3
  .L800F55EC:
    /* 39EC 800F55EC 2B10A400 */  sltu       $v0, $a1, $a0
    /* 39F0 800F55F0 03004010 */  beqz       $v0, .L800F5600
    /* 39F4 800F55F4 00000000 */   nop
    /* 39F8 800F55F8 81D50308 */  j          .L800F5604
    /* 39FC 800F55FC 80006334 */   ori       $v1, $v1, 0x80
  .L800F5600:
    /* 3A00 800F5600 01006334 */  ori        $v1, $v1, 0x1
  .L800F5604:
    /* 3A04 800F5604 0800E003 */  jr         $ra
    /* 3A08 800F5608 0000C3A0 */   sb        $v1, 0x0($a2)
endlabel func_800F55C0
