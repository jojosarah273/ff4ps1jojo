nonmatching func_800F4F4C, 0x60

glabel func_800F4F4C
    /* 334C 800F4F4C 6C00848F */  lw         $a0, %gp_rel(D_8019ED68)($gp)
    /* 3350 800F4F50 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 3354 800F4F54 00008390 */  lbu        $v1, 0x0($a0)
    /* 3358 800F4F58 0000A28C */  lw         $v0, 0x0($a1)
    /* 335C 800F4F5C 00000000 */  nop
    /* 3360 800F4F60 00014230 */  andi       $v0, $v0, 0x100
    /* 3364 800F4F64 03004010 */  beqz       $v0, .L800F4F74
    /* 3368 800F4F68 7C006630 */   andi      $a2, $v1, 0x7C
    /* 336C 800F4F6C DED30308 */  j          .L800F4F78
    /* 3370 800F4F70 0100C334 */   ori       $v1, $a2, 0x1
  .L800F4F74:
    /* 3374 800F4F74 FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F4F78:
    /* 3378 800F4F78 0000A290 */  lbu        $v0, 0x0($a1)
    /* 337C 800F4F7C 00000000 */  nop
    /* 3380 800F4F80 80004230 */  andi       $v0, $v0, 0x80
    /* 3384 800F4F84 25106200 */  or         $v0, $v1, $v0
    /* 3388 800F4F88 0000A390 */  lbu        $v1, 0x0($a1)
    /* 338C 800F4F8C 00000000 */  nop
    /* 3390 800F4F90 03006014 */  bnez       $v1, .L800F4FA0
    /* 3394 800F4F94 FF004630 */   andi      $a2, $v0, 0xFF
    /* 3398 800F4F98 E9D30308 */  j          .L800F4FA4
    /* 339C 800F4F9C 0200C234 */   ori       $v0, $a2, 0x2
  .L800F4FA0:
    /* 33A0 800F4FA0 FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F4FA4:
    /* 33A4 800F4FA4 0800E003 */  jr         $ra
    /* 33A8 800F4FA8 000082A0 */   sb        $v0, 0x0($a0)
endlabel func_800F4F4C
