nonmatching func_800F3CC4, 0x84

glabel func_800F3CC4
    /* 20C4 800F3CC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 20C8 800F3CC8 FC7F063C */  lui        $a2, (0x7FFC8000 >> 16)
    /* 20CC 800F3CCC 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 20D0 800F3CD0 0080C634 */  ori        $a2, $a2, (0x7FFC8000 & 0xFFFF)
    /* 20D4 800F3CD4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 20D8 800F3CD8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 20DC 800F3CDC 00004394 */  lhu        $v1, 0x0($v0)
    /* 20E0 800F3CE0 FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 20E4 800F3CE4 21186400 */  addu       $v1, $v1, $a0
    /* 20E8 800F3CE8 2A104300 */  slt        $v0, $v0, $v1
    /* 20EC 800F3CEC 02004014 */  bnez       $v0, .L800F3CF8
    /* 20F0 800F3CF0 2180A000 */   addu      $s0, $a1, $zero
    /* 20F4 800F3CF4 0D80063C */  lui        $a2, (0x800D0000 >> 16)
  .L800F3CF8:
    /* 20F8 800F3CF8 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 20FC 800F3CFC 0000C290 */  lbu        $v0, 0x0($a2)
    /* 2100 800F3D00 00000000 */  nop
    /* 2104 800F3D04 000062AC */  sw         $v0, 0x0($v1)
    /* 2108 800F3D08 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 210C 800F3D0C 0100C290 */  lbu        $v0, 0x1($a2)
    /* 2110 800F3D10 0000838C */  lw         $v1, 0x0($a0)
    /* 2114 800F3D14 00120200 */  sll        $v0, $v0, 8
    /* 2118 800F3D18 25186200 */  or         $v1, $v1, $v0
    /* 211C 800F3D1C 000083AC */  sw         $v1, 0x0($a0)
    /* 2120 800F3D20 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 2124 800F3D24 00000000 */  nop
    /* 2128 800F3D28 0000448C */  lw         $a0, 0x0($v0)
    /* 212C 800F3D2C C1CE030C */  jal        func_800F3B04
    /* 2130 800F3D30 00000000 */   nop
    /* 2134 800F3D34 21105000 */  addu       $v0, $v0, $s0
    /* 2138 800F3D38 1400BF8F */  lw         $ra, 0x14($sp)
    /* 213C 800F3D3C 1000B08F */  lw         $s0, 0x10($sp)
    /* 2140 800F3D40 0800E003 */  jr         $ra
    /* 2144 800F3D44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F3CC4
