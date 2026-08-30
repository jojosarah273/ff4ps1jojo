nonmatching func_800F7D68, 0x74

glabel func_800F7D68
    /* 6168 800F7D68 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 616C 800F7D6C 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 6170 800F7D70 0000C390 */  lbu        $v1, 0x0($a2)
    /* 6174 800F7D74 0000A290 */  lbu        $v0, 0x0($a1)
    /* 6178 800F7D78 7C006730 */  andi       $a3, $v1, 0x7C
    /* 617C 800F7D7C 01004230 */  andi       $v0, $v0, 0x1
    /* 6180 800F7D80 0000A38C */  lw         $v1, 0x0($a1)
    /* 6184 800F7D84 00000000 */  nop
    /* 6188 800F7D88 00016330 */  andi       $v1, $v1, 0x100
    /* 618C 800F7D8C 03006010 */  beqz       $v1, .L800F7D9C
    /* 6190 800F7D90 2538E200 */   or        $a3, $a3, $v0
    /* 6194 800F7D94 68DF0308 */  j          .L800F7DA0
    /* 6198 800F7D98 8000E334 */   ori       $v1, $a3, 0x80
  .L800F7D9C:
    /* 619C 800F7D9C FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F7DA0:
    /* 61A0 800F7DA0 0000A290 */  lbu        $v0, 0x0($a1)
    /* 61A4 800F7DA4 00000000 */  nop
    /* 61A8 800F7DA8 03004014 */  bnez       $v0, .L800F7DB8
    /* 61AC 800F7DAC 21386000 */   addu      $a3, $v1, $zero
    /* 61B0 800F7DB0 6FDF0308 */  j          .L800F7DBC
    /* 61B4 800F7DB4 0200E234 */   ori       $v0, $a3, 0x2
  .L800F7DB8:
    /* 61B8 800F7DB8 FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F7DBC:
    /* 61BC 800F7DBC 21384000 */  addu       $a3, $v0, $zero
    /* 61C0 800F7DC0 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 61C4 800F7DC4 FF008230 */  andi       $v0, $a0, 0xFF
    /* 61C8 800F7DC8 2438E200 */  and        $a3, $a3, $v0
    /* 61CC 800F7DCC 03120400 */  sra        $v0, $a0, 8
    /* 61D0 800F7DD0 2610E200 */  xor        $v0, $a3, $v0
    /* 61D4 800F7DD4 0800E003 */  jr         $ra
    /* 61D8 800F7DD8 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F7D68
