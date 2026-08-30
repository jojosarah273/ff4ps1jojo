nonmatching func_800FDA9C, 0x60

glabel func_800FDA9C
    /* BE9C 800FDA9C FFFF8630 */  andi       $a2, $a0, 0xFFFF
    /* BEA0 800FDAA0 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* BEA4 800FDAA4 68FD4824 */  addiu      $t0, $v0, %lo(D_801CFD68)
    /* BEA8 800FDAA8 0E80033C */  lui        $v1, (0x800E7C00 >> 16)
    /* BEAC 800FDAAC 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* BEB0 800FDAB0 007C6334 */  ori        $v1, $v1, (0x800E7C00 & 0xFFFF)
    /* BEB4 800FDAB4 00004494 */  lhu        $a0, 0x0($v0)
    /* BEB8 800FDAB8 07000724 */  addiu      $a3, $zero, 0x7
    /* BEBC 800FDABC 21288300 */  addu       $a1, $a0, $v1
  .L800FDAC0:
    /* BEC0 800FDAC0 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* BEC4 800FDAC4 40200600 */  sll        $a0, $a2, 1
    /* BEC8 800FDAC8 21208800 */  addu       $a0, $a0, $t0
    /* BECC 800FDACC 0100C224 */  addiu      $v0, $a2, 0x1
    /* BED0 800FDAD0 00008390 */  lbu        $v1, 0x0($a0)
    /* BED4 800FDAD4 FFFF4630 */  andi       $a2, $v0, 0xFFFF
    /* BED8 800FDAD8 000083A4 */  sh         $v1, 0x0($a0)
    /* BEDC 800FDADC 0000A290 */  lbu        $v0, 0x0($a1)
    /* BEE0 800FDAE0 0100A524 */  addiu      $a1, $a1, 0x1
    /* BEE4 800FDAE4 00120200 */  sll        $v0, $v0, 8
    /* BEE8 800FDAE8 25186200 */  or         $v1, $v1, $v0
    /* BEEC 800FDAEC F4FFE104 */  bgez       $a3, .L800FDAC0
    /* BEF0 800FDAF0 000083A4 */   sh        $v1, 0x0($a0)
    /* BEF4 800FDAF4 0800E003 */  jr         $ra
    /* BEF8 800FDAF8 00000000 */   nop
endlabel func_800FDA9C
