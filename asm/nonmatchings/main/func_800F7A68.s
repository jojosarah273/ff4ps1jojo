nonmatching func_800F7A68, 0x60

glabel func_800F7A68
    /* 5E68 800F7A68 6C00848F */  lw         $a0, %gp_rel(D_8019ED68)($gp)
    /* 5E6C 800F7A6C 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5E70 800F7A70 00008390 */  lbu        $v1, 0x0($a0)
    /* 5E74 800F7A74 0000A28C */  lw         $v0, 0x0($a1)
    /* 5E78 800F7A78 00000000 */  nop
    /* 5E7C 800F7A7C 00014230 */  andi       $v0, $v0, 0x100
    /* 5E80 800F7A80 03004010 */  beqz       $v0, .L800F7A90
    /* 5E84 800F7A84 7C006630 */   andi      $a2, $v1, 0x7C
    /* 5E88 800F7A88 A5DE0308 */  j          .L800F7A94
    /* 5E8C 800F7A8C 0100C334 */   ori       $v1, $a2, 0x1
  .L800F7A90:
    /* 5E90 800F7A90 FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F7A94:
    /* 5E94 800F7A94 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5E98 800F7A98 00000000 */  nop
    /* 5E9C 800F7A9C 80004230 */  andi       $v0, $v0, 0x80
    /* 5EA0 800F7AA0 25106200 */  or         $v0, $v1, $v0
    /* 5EA4 800F7AA4 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5EA8 800F7AA8 00000000 */  nop
    /* 5EAC 800F7AAC 03006014 */  bnez       $v1, .L800F7ABC
    /* 5EB0 800F7AB0 FF004630 */   andi      $a2, $v0, 0xFF
    /* 5EB4 800F7AB4 B0DE0308 */  j          .L800F7AC0
    /* 5EB8 800F7AB8 0200C234 */   ori       $v0, $a2, 0x2
  .L800F7ABC:
    /* 5EBC 800F7ABC FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F7AC0:
    /* 5EC0 800F7AC0 0800E003 */  jr         $ra
    /* 5EC4 800F7AC4 000082A0 */   sb        $v0, 0x0($a0)
endlabel func_800F7A68
