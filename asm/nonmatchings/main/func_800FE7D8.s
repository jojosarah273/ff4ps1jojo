nonmatching func_800FE7D8, 0x98

glabel func_800FE7D8
    /* CBD8 800FE7D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CBDC 800FE7DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* CBE0 800FE7E0 ECF9030C */  jal        func_800FE7B0
    /* CBE4 800FE7E4 00000000 */   nop
    /* CBE8 800FE7E8 59D9030C */  jal        func_800F6564
    /* CBEC 800FE7EC 00170424 */   addiu     $a0, $zero, 0x1700
    /* CBF0 800FE7F0 0DD9030C */  jal        func_800F6434
    /* CBF4 800FE7F4 02020424 */   addiu     $a0, $zero, 0x202
    /* CBF8 800FE7F8 07004014 */  bnez       $v0, .L800FE818
    /* CBFC 800FE7FC 00000000 */   nop
    /* CC00 800FE800 44F8030C */  jal        func_800FE110
    /* CC04 800FE804 00000000 */   nop
    /* CC08 800FE808 EFF6030C */  jal        func_800FDBBC
    /* CC0C 800FE80C 00000000 */   nop
    /* CC10 800FE810 12FA0308 */  j          .L800FE848
    /* CC14 800FE814 00000000 */   nop
  .L800FE818:
    /* CC18 800FE818 5DD5030C */  jal        func_800F5574
    /* CC1C 800FE81C 01000424 */   addiu     $a0, $zero, 0x1
    /* CC20 800FE820 F5D4030C */  jal        func_800F53D4
    /* CC24 800FE824 00000000 */   nop
    /* CC28 800FE828 07004010 */  beqz       $v0, .L800FE848
    /* CC2C 800FE82C 00000000 */   nop
    /* CC30 800FE830 63F7030C */  jal        func_800FDD8C
    /* CC34 800FE834 00000000 */   nop
    /* CC38 800FE838 CDF7030C */  jal        func_800FDF34
    /* CC3C 800FE83C 00000000 */   nop
    /* CC40 800FE840 25D5050C */  jal        func_80175494
    /* CC44 800FE844 00000000 */   nop
  .L800FE848:
    /* CC48 800FE848 6DDA050C */  jal        func_801769B4
    /* CC4C 800FE84C 00000000 */   nop
    /* CC50 800FE850 D9D3050C */  jal        func_80174F64
    /* CC54 800FE854 00000000 */   nop
    /* CC58 800FE858 01D4050C */  jal        func_80175004
    /* CC5C 800FE85C 00000000 */   nop
    /* CC60 800FE860 1000BF8F */  lw         $ra, 0x10($sp)
    /* CC64 800FE864 00000000 */  nop
    /* CC68 800FE868 0800E003 */  jr         $ra
    /* CC6C 800FE86C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE7D8
