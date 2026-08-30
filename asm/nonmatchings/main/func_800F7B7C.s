nonmatching func_800F7B7C, 0x6C

glabel func_800F7B7C
    /* 5F7C 800F7B7C 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5F80 800F7B80 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 5F84 800F7B84 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5F88 800F7B88 0000838C */  lw         $v1, 0x0($a0)
    /* 5F8C 800F7B8C 7C004630 */  andi       $a2, $v0, 0x7C
    /* 5F90 800F7B90 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 5F94 800F7B94 24186200 */  and        $v1, $v1, $v0
    /* 5F98 800F7B98 02006014 */  bnez       $v1, .L800F7BA4
    /* 5F9C 800F7B9C 0100C334 */   ori       $v1, $a2, 0x1
    /* 5FA0 800F7BA0 FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F7BA4:
    /* 5FA4 800F7BA4 0000828C */  lw         $v0, 0x0($a0)
    /* 5FA8 800F7BA8 00000000 */  nop
    /* 5FAC 800F7BAC 00804230 */  andi       $v0, $v0, 0x8000
    /* 5FB0 800F7BB0 03004010 */  beqz       $v0, .L800F7BC0
    /* 5FB4 800F7BB4 21306000 */   addu      $a2, $v1, $zero
    /* 5FB8 800F7BB8 F1DE0308 */  j          .L800F7BC4
    /* 5FBC 800F7BBC 8000C334 */   ori       $v1, $a2, 0x80
  .L800F7BC0:
    /* 5FC0 800F7BC0 FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F7BC4:
    /* 5FC4 800F7BC4 00008294 */  lhu        $v0, 0x0($a0)
    /* 5FC8 800F7BC8 00000000 */  nop
    /* 5FCC 800F7BCC 03004014 */  bnez       $v0, .L800F7BDC
    /* 5FD0 800F7BD0 21306000 */   addu      $a2, $v1, $zero
    /* 5FD4 800F7BD4 F8DE0308 */  j          .L800F7BE0
    /* 5FD8 800F7BD8 0200C234 */   ori       $v0, $a2, 0x2
  .L800F7BDC:
    /* 5FDC 800F7BDC FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F7BE0:
    /* 5FE0 800F7BE0 0800E003 */  jr         $ra
    /* 5FE4 800F7BE4 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F7B7C
