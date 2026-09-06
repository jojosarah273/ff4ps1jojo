nonmatching func_800F7BE8, 0x84

glabel func_800F7BE8
    /* 5FE8 800F7BE8 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 5FEC 800F7BEC 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5FF0 800F7BF0 0000C290 */  lbu        $v0, 0x0($a2)
    /* 5FF4 800F7BF4 0000A38C */  lw         $v1, 0x0($a1)
    /* 5FF8 800F7BF8 7C004730 */  andi       $a3, $v0, 0x7C
    /* 5FFC 800F7BFC 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 6000 800F7C00 24186200 */  and        $v1, $v1, $v0
    /* 6004 800F7C04 02006014 */  bnez       $v1, .L800F7C10
    /* 6008 800F7C08 0100E334 */   ori       $v1, $a3, 0x1
    /* 600C 800F7C0C FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F7C10:
    /* 6010 800F7C10 0000A28C */  lw         $v0, 0x0($a1)
    /* 6014 800F7C14 00000000 */  nop
    /* 6018 800F7C18 00804230 */  andi       $v0, $v0, 0x8000
    /* 601C 800F7C1C 03004010 */  beqz       $v0, .L800F7C2C
    /* 6020 800F7C20 21386000 */   addu      $a3, $v1, $zero
    /* 6024 800F7C24 0CDF0308 */  j          .L800F7C30
    /* 6028 800F7C28 8000E334 */   ori       $v1, $a3, 0x80
  .L800F7C2C:
    /* 602C 800F7C2C FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F7C30:
    /* 6030 800F7C30 0000A294 */  lhu        $v0, 0x0($a1)
    /* 6034 800F7C34 00000000 */  nop
    /* 6038 800F7C38 03004014 */  bnez       $v0, .L800F7C48
    /* 603C 800F7C3C 21386000 */   addu      $a3, $v1, $zero
    /* 6040 800F7C40 13DF0308 */  j          .L800F7C4C
    /* 6044 800F7C44 0200E234 */   ori       $v0, $a3, 0x2
  .L800F7C48:
    /* 6048 800F7C48 FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F7C4C:
    /* 604C 800F7C4C 21384000 */  addu       $a3, $v0, $zero
    /* 6050 800F7C50 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 6054 800F7C54 FF008230 */  andi       $v0, $a0, 0xFF
    /* 6058 800F7C58 2438E200 */  and        $a3, $a3, $v0
    /* 605C 800F7C5C 03120400 */  sra        $v0, $a0, 8
    /* 6060 800F7C60 2610E200 */  xor        $v0, $a3, $v0
    /* 6064 800F7C64 0800E003 */  jr         $ra
    /* 6068 800F7C68 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F7BE8
