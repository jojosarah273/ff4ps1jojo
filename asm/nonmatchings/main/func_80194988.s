nonmatching func_80194988, 0x70

glabel func_80194988
    /* A2D88 80194988 1A80023C */  lui        $v0, %hi(D_8019DB56)
    /* A2D8C 8019498C 56DB4290 */  lbu        $v0, %lo(D_8019DB56)($v0)
    /* A2D90 80194990 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A2D94 80194994 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2D98 80194998 21808000 */  addu       $s0, $a0, $zero
    /* A2D9C 8019499C 0200422C */  sltiu      $v0, $v0, 0x2
    /* A2DA0 801949A0 08004014 */  bnez       $v0, .L801949C4
    /* A2DA4 801949A4 1400BFAF */   sw        $ra, 0x14($sp)
    /* A2DA8 801949A8 0F80043C */  lui        $a0, %hi(D_800F39A0)
    /* A2DAC 801949AC A0398424 */  addiu      $a0, $a0, %lo(D_800F39A0)
    /* A2DB0 801949B0 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A2DB4 801949B4 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A2DB8 801949B8 00000000 */  nop
    /* A2DBC 801949BC 09F84000 */  jalr       $v0
    /* A2DC0 801949C0 21280002 */   addu      $a1, $s0, $zero
  .L801949C4:
    /* A2DC4 801949C4 21280002 */  addu       $a1, $s0, $zero
    /* A2DC8 801949C8 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2DCC 801949CC 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2DD0 801949D0 21300000 */  addu       $a2, $zero, $zero
    /* A2DD4 801949D4 1800448C */  lw         $a0, 0x18($v0)
    /* A2DD8 801949D8 0800428C */  lw         $v0, 0x8($v0)
    /* A2DDC 801949DC 00000000 */  nop
    /* A2DE0 801949E0 09F84000 */  jalr       $v0
    /* A2DE4 801949E4 21380000 */   addu      $a3, $zero, $zero
    /* A2DE8 801949E8 1400BF8F */  lw         $ra, 0x14($sp)
    /* A2DEC 801949EC 1000B08F */  lw         $s0, 0x10($sp)
    /* A2DF0 801949F0 0800E003 */  jr         $ra
    /* A2DF4 801949F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80194988
