nonmatching func_800FE8B4, 0xC4

glabel func_800FE8B4
    /* CCB4 800FE8B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CCB8 800FE8B8 21200000 */  addu       $a0, $zero, $zero
    /* CCBC 800FE8BC 1400BFAF */  sw         $ra, 0x14($sp)
    /* CCC0 800FE8C0 0FCF030C */  jal        func_800F3C3C
    /* CCC4 800FE8C4 1000B0AF */   sw        $s0, 0x10($sp)
    /* CCC8 800FE8C8 C1CE030C */  jal        func_800F3B04
    /* CCCC 800FE8CC 21200000 */   addu      $a0, $zero, $zero
    /* CCD0 800FE8D0 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CCD4 800FE8D4 21804000 */  addu       $s0, $v0, $zero
    /* CCD8 800FE8D8 000060A4 */  sh         $zero, 0x0($v1)
    /* CCDC 800FE8DC 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* CCE0 800FE8E0 F0000224 */  addiu      $v0, $zero, 0xF0
    /* CCE4 800FE8E4 000082A0 */  sb         $v0, 0x0($a0)
  .L800FE8E8:
    /* CCE8 800FE8E8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CCEC 800FE8EC 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* CCF0 800FE8F0 00006294 */  lhu        $v0, 0x0($v1)
    /* CCF4 800FE8F4 00008590 */  lbu        $a1, 0x0($a0)
    /* CCF8 800FE8F8 21105000 */  addu       $v0, $v0, $s0
    /* CCFC 800FE8FC 010345A0 */  sb         $a1, 0x301($v0)
    /* CD00 800FE900 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CD04 800FE904 00000000 */  nop
    /* CD08 800FE908 00006294 */  lhu        $v0, 0x0($v1)
    /* CD0C 800FE90C 00000000 */  nop
    /* CD10 800FE910 04004224 */  addiu      $v0, $v0, 0x4
    /* CD14 800FE914 000062A4 */  sh         $v0, 0x0($v1)
    /* CD18 800FE918 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* CD1C 800FE91C 00000000 */  nop
    /* CD20 800FE920 00008394 */  lhu        $v1, 0x0($a0)
    /* CD24 800FE924 00010224 */  addiu      $v0, $zero, 0x100
    /* CD28 800FE928 EFFF6214 */  bne        $v1, $v0, .L800FE8E8
    /* CD2C 800FE92C 00000000 */   nop
    /* CD30 800FE930 000080A4 */  sh         $zero, 0x0($a0)
  .L800FE934:
    /* CD34 800FE934 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CD38 800FE938 00000000 */  nop
    /* CD3C 800FE93C 00006294 */  lhu        $v0, 0x0($v1)
    /* CD40 800FE940 00000000 */  nop
    /* CD44 800FE944 21105000 */  addu       $v0, $v0, $s0
    /* CD48 800FE948 D9D8030C */  jal        func_800F6364
    /* CD4C 800FE94C 000540A0 */   sb        $zero, 0x500($v0)
    /* CD50 800FE950 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* CD54 800FE954 00000000 */  nop
    /* CD58 800FE958 00004494 */  lhu        $a0, 0x0($v0)
    /* CD5C 800FE95C 20000324 */  addiu      $v1, $zero, 0x20
    /* CD60 800FE960 F4FF8314 */  bne        $a0, $v1, .L800FE934
    /* CD64 800FE964 00000000 */   nop
    /* CD68 800FE968 1400BF8F */  lw         $ra, 0x14($sp)
    /* CD6C 800FE96C 1000B08F */  lw         $s0, 0x10($sp)
    /* CD70 800FE970 0800E003 */  jr         $ra
    /* CD74 800FE974 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE8B4
