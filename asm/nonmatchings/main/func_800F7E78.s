nonmatching func_800F7E78, 0x70

glabel func_800F7E78
    /* 6278 800F7E78 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 627C 800F7E7C 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 6280 800F7E80 0000C390 */  lbu        $v1, 0x0($a2)
    /* 6284 800F7E84 0000A290 */  lbu        $v0, 0x0($a1)
    /* 6288 800F7E88 7C006730 */  andi       $a3, $v1, 0x7C
    /* 628C 800F7E8C 01004230 */  andi       $v0, $v0, 0x1
    /* 6290 800F7E90 2538E200 */  or         $a3, $a3, $v0
    /* 6294 800F7E94 0000A38C */  lw         $v1, 0x0($a1)
    /* 6298 800F7E98 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 629C 800F7E9C 24186200 */  and        $v1, $v1, $v0
    /* 62A0 800F7EA0 02006014 */  bnez       $v1, .L800F7EAC
    /* 62A4 800F7EA4 8000E334 */   ori       $v1, $a3, 0x80
    /* 62A8 800F7EA8 FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F7EAC:
    /* 62AC 800F7EAC 0000A294 */  lhu        $v0, 0x0($a1)
    /* 62B0 800F7EB0 00000000 */  nop
    /* 62B4 800F7EB4 03004014 */  bnez       $v0, .L800F7EC4
    /* 62B8 800F7EB8 21386000 */   addu      $a3, $v1, $zero
    /* 62BC 800F7EBC B2DF0308 */  j          .L800F7EC8
    /* 62C0 800F7EC0 0200E234 */   ori       $v0, $a3, 0x2
  .L800F7EC4:
    /* 62C4 800F7EC4 FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F7EC8:
    /* 62C8 800F7EC8 21384000 */  addu       $a3, $v0, $zero
    /* 62CC 800F7ECC 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 62D0 800F7ED0 FF008230 */  andi       $v0, $a0, 0xFF
    /* 62D4 800F7ED4 2438E200 */  and        $a3, $a3, $v0
    /* 62D8 800F7ED8 03120400 */  sra        $v0, $a0, 8
    /* 62DC 800F7EDC 2610E200 */  xor        $v0, $a3, $v0
    /* 62E0 800F7EE0 0800E003 */  jr         $ra
    /* 62E4 800F7EE4 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F7E78
