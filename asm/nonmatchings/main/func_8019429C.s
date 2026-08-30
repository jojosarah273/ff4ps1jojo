nonmatching func_8019429C, 0x60

glabel func_8019429C
    /* A269C 8019429C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A26A0 801942A0 1000B0AF */  sw         $s0, 0x10($sp)
    /* A26A4 801942A4 1A80103C */  lui        $s0, %hi(D_8019DB56)
    /* A26A8 801942A8 56DB1026 */  addiu      $s0, $s0, %lo(D_8019DB56)
    /* A26AC 801942AC 1800BFAF */  sw         $ra, 0x18($sp)
    /* A26B0 801942B0 1400B1AF */  sw         $s1, 0x14($sp)
    /* A26B4 801942B4 00000292 */  lbu        $v0, 0x0($s0)
    /* A26B8 801942B8 00000000 */  nop
    /* A26BC 801942BC 0200422C */  sltiu      $v0, $v0, 0x2
    /* A26C0 801942C0 07004014 */  bnez       $v0, .L801942E0
    /* A26C4 801942C4 21888000 */   addu      $s1, $a0, $zero
    /* A26C8 801942C8 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A26CC 801942CC 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A26D0 801942D0 0F80043C */  lui        $a0, %hi(D_800F38CC)
    /* A26D4 801942D4 CC388424 */  addiu      $a0, $a0, %lo(D_800F38CC)
    /* A26D8 801942D8 09F84000 */  jalr       $v0
    /* A26DC 801942DC 21282002 */   addu      $a1, $s1, $zero
  .L801942E0:
    /* A26E0 801942E0 0A00028E */  lw         $v0, 0xA($s0)
    /* A26E4 801942E4 0A0011AE */  sw         $s1, 0xA($s0)
    /* A26E8 801942E8 1800BF8F */  lw         $ra, 0x18($sp)
    /* A26EC 801942EC 1400B18F */  lw         $s1, 0x14($sp)
    /* A26F0 801942F0 1000B08F */  lw         $s0, 0x10($sp)
    /* A26F4 801942F4 0800E003 */  jr         $ra
    /* A26F8 801942F8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8019429C
