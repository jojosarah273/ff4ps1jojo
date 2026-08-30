nonmatching func_800F4FAC, 0x78

glabel func_800F4FAC
    /* 33AC 800F4FAC 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 33B0 800F4FB0 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 33B4 800F4FB4 0000C390 */  lbu        $v1, 0x0($a2)
    /* 33B8 800F4FB8 0000A28C */  lw         $v0, 0x0($a1)
    /* 33BC 800F4FBC 00000000 */  nop
    /* 33C0 800F4FC0 00014230 */  andi       $v0, $v0, 0x100
    /* 33C4 800F4FC4 03004010 */  beqz       $v0, .L800F4FD4
    /* 33C8 800F4FC8 7C006730 */   andi      $a3, $v1, 0x7C
    /* 33CC 800F4FCC F6D30308 */  j          .L800F4FD8
    /* 33D0 800F4FD0 0100E334 */   ori       $v1, $a3, 0x1
  .L800F4FD4:
    /* 33D4 800F4FD4 FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F4FD8:
    /* 33D8 800F4FD8 0000A290 */  lbu        $v0, 0x0($a1)
    /* 33DC 800F4FDC 00000000 */  nop
    /* 33E0 800F4FE0 80004230 */  andi       $v0, $v0, 0x80
    /* 33E4 800F4FE4 25106200 */  or         $v0, $v1, $v0
    /* 33E8 800F4FE8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 33EC 800F4FEC 00000000 */  nop
    /* 33F0 800F4FF0 03006014 */  bnez       $v1, .L800F5000
    /* 33F4 800F4FF4 FF004730 */   andi      $a3, $v0, 0xFF
    /* 33F8 800F4FF8 01D40308 */  j          .L800F5004
    /* 33FC 800F4FFC 0200E234 */   ori       $v0, $a3, 0x2
  .L800F5000:
    /* 3400 800F5000 FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F5004:
    /* 3404 800F5004 21384000 */  addu       $a3, $v0, $zero
    /* 3408 800F5008 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 340C 800F500C FF008230 */  andi       $v0, $a0, 0xFF
    /* 3410 800F5010 2438E200 */  and        $a3, $a3, $v0
    /* 3414 800F5014 03120400 */  sra        $v0, $a0, 8
    /* 3418 800F5018 2610E200 */  xor        $v0, $a3, $v0
    /* 341C 800F501C 0800E003 */  jr         $ra
    /* 3420 800F5020 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F4FAC
