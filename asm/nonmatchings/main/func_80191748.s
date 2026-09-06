nonmatching func_80191748, 0x6C

glabel func_80191748
    /* 9FB48 80191748 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9FB4C 8019174C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9FB50 80191750 21808000 */  addu       $s0, $a0, $zero
    /* 9FB54 80191754 02000224 */  addiu      $v0, $zero, 0x2
    /* 9FB58 80191758 05000216 */  bne        $s0, $v0, .L80191770
    /* 9FB5C 8019175C 1400BFAF */   sw        $ra, 0x14($sp)
    /* 9FB60 80191760 6744060C */  jal        func_8019119C
    /* 9FB64 80191764 00000000 */   nop
    /* 9FB68 80191768 E9450608 */  j          .L801917A4
    /* 9FB6C 8019176C 01000224 */   addiu     $v0, $zero, 0x1
  .L80191770:
    /* 9FB70 80191770 7A44060C */  jal        func_801911E8
    /* 9FB74 80191774 00000000 */   nop
    /* 9FB78 80191778 0A004014 */  bnez       $v0, .L801917A4
    /* 9FB7C 8019177C 21100000 */   addu      $v0, $zero, $zero
    /* 9FB80 80191780 01000224 */  addiu      $v0, $zero, 0x1
    /* 9FB84 80191784 07000216 */  bne        $s0, $v0, .L801917A4
    /* 9FB88 80191788 00000000 */   nop
    /* 9FB8C 8019178C 2B44060C */  jal        func_801910AC
    /* 9FB90 80191790 00000000 */   nop
    /* 9FB94 80191794 21184000 */  addu       $v1, $v0, $zero
    /* 9FB98 80191798 02006014 */  bnez       $v1, .L801917A4
    /* 9FB9C 8019179C 21100000 */   addu      $v0, $zero, $zero
    /* 9FBA0 801917A0 01000224 */  addiu      $v0, $zero, 0x1
  .L801917A4:
    /* 9FBA4 801917A4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9FBA8 801917A8 1000B08F */  lw         $s0, 0x10($sp)
    /* 9FBAC 801917AC 0800E003 */  jr         $ra
    /* 9FBB0 801917B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80191748
    /* 9FBB4 801917B4 00000000 */  nop
