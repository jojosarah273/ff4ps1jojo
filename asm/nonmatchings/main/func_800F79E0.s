nonmatching func_800F79E0, 0x60

glabel func_800F79E0
    /* 5DE0 800F79E0 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 5DE4 800F79E4 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 5DE8 800F79E8 0000C590 */  lbu        $a1, 0x0($a2)
    /* 5DEC 800F79EC 01006290 */  lbu        $v0, 0x1($v1)
    /* 5DF0 800F79F0 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 5DF4 800F79F4 7D00A530 */  andi       $a1, $a1, 0x7D
    /* 5DF8 800F79F8 80004230 */  andi       $v0, $v0, 0x80
    /* 5DFC 800F79FC 2510A200 */  or         $v0, $a1, $v0
    /* 5E00 800F7A00 FF004530 */  andi       $a1, $v0, 0xFF
    /* 5E04 800F7A04 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E08 800F7A08 00000000 */  nop
    /* 5E0C 800F7A0C 03004014 */  bnez       $v0, .L800F7A1C
    /* 5E10 800F7A10 00000000 */   nop
    /* 5E14 800F7A14 88DE0308 */  j          .L800F7A20
    /* 5E18 800F7A18 0200A234 */   ori       $v0, $a1, 0x2
  .L800F7A1C:
    /* 5E1C 800F7A1C FF00A230 */  andi       $v0, $a1, 0xFF
  .L800F7A20:
    /* 5E20 800F7A20 21284000 */  addu       $a1, $v0, $zero
    /* 5E24 800F7A24 0000C5A0 */  sb         $a1, 0x0($a2)
    /* 5E28 800F7A28 FF008230 */  andi       $v0, $a0, 0xFF
    /* 5E2C 800F7A2C 2428A200 */  and        $a1, $a1, $v0
    /* 5E30 800F7A30 03120400 */  sra        $v0, $a0, 8
    /* 5E34 800F7A34 2610A200 */  xor        $v0, $a1, $v0
    /* 5E38 800F7A38 0800E003 */  jr         $ra
    /* 5E3C 800F7A3C FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F79E0
