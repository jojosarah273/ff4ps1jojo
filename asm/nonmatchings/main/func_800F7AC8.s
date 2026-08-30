nonmatching func_800F7AC8, 0x78

glabel func_800F7AC8
    /* 5EC8 800F7AC8 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 5ECC 800F7ACC 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5ED0 800F7AD0 0000C390 */  lbu        $v1, 0x0($a2)
    /* 5ED4 800F7AD4 0000A28C */  lw         $v0, 0x0($a1)
    /* 5ED8 800F7AD8 00000000 */  nop
    /* 5EDC 800F7ADC 00014230 */  andi       $v0, $v0, 0x100
    /* 5EE0 800F7AE0 03004010 */  beqz       $v0, .L800F7AF0
    /* 5EE4 800F7AE4 7C006730 */   andi      $a3, $v1, 0x7C
    /* 5EE8 800F7AE8 BDDE0308 */  j          .L800F7AF4
    /* 5EEC 800F7AEC 0100E334 */   ori       $v1, $a3, 0x1
  .L800F7AF0:
    /* 5EF0 800F7AF0 FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F7AF4:
    /* 5EF4 800F7AF4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5EF8 800F7AF8 00000000 */  nop
    /* 5EFC 800F7AFC 80004230 */  andi       $v0, $v0, 0x80
    /* 5F00 800F7B00 25106200 */  or         $v0, $v1, $v0
    /* 5F04 800F7B04 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5F08 800F7B08 00000000 */  nop
    /* 5F0C 800F7B0C 03006014 */  bnez       $v1, .L800F7B1C
    /* 5F10 800F7B10 FF004730 */   andi      $a3, $v0, 0xFF
    /* 5F14 800F7B14 C8DE0308 */  j          .L800F7B20
    /* 5F18 800F7B18 0200E234 */   ori       $v0, $a3, 0x2
  .L800F7B1C:
    /* 5F1C 800F7B1C FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F7B20:
    /* 5F20 800F7B20 21384000 */  addu       $a3, $v0, $zero
    /* 5F24 800F7B24 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 5F28 800F7B28 FF008230 */  andi       $v0, $a0, 0xFF
    /* 5F2C 800F7B2C 2438E200 */  and        $a3, $a3, $v0
    /* 5F30 800F7B30 03120400 */  sra        $v0, $a0, 8
    /* 5F34 800F7B34 2610E200 */  xor        $v0, $a3, $v0
    /* 5F38 800F7B38 0800E003 */  jr         $ra
    /* 5F3C 800F7B3C FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F7AC8
