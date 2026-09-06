nonmatching func_80188A0C, 0x54

glabel func_80188A0C
    /* 96E0C 80188A0C 2C00828F */  lw         $v0, %gp_rel(D_8019ED28)($gp)
    /* 96E10 80188A10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96E14 80188A14 0D004010 */  beqz       $v0, .L80188A4C
    /* 96E18 80188A18 1000BFAF */   sw        $ra, 0x10($sp)
    /* 96E1C 80188A1C 5402848F */  lw         $a0, %gp_rel(D_8019EF50)($gp)
    /* 96E20 80188A20 0E46060C */  jal        func_80191838
    /* 96E24 80188A24 00000000 */   nop
    /* 96E28 80188A28 5C02848F */  lw         $a0, %gp_rel(D_8019EF58)($gp)
    /* 96E2C 80188A2C 2A4A060C */  jal        func_801928A8
    /* 96E30 80188A30 00000000 */   nop
    /* 96E34 80188A34 5802848F */  lw         $a0, %gp_rel(D_8019EF54)($gp)
    /* 96E38 80188A38 1646060C */  jal        func_80191858
    /* 96E3C 80188A3C 00000000 */   nop
    /* 96E40 80188A40 2C0080AF */  sw         $zero, %gp_rel(D_8019ED28)($gp)
    /* 96E44 80188A44 94220608 */  j          .L80188A50
    /* 96E48 80188A48 21100000 */   addu      $v0, $zero, $zero
  .L80188A4C:
    /* 96E4C 80188A4C FFFF0224 */  addiu      $v0, $zero, -0x1
  .L80188A50:
    /* 96E50 80188A50 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96E54 80188A54 00000000 */  nop
    /* 96E58 80188A58 0800E003 */  jr         $ra
    /* 96E5C 80188A5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80188A0C
