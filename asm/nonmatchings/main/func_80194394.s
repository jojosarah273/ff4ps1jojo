nonmatching func_80194394, 0x68

glabel func_80194394
    /* A2794 80194394 1A80023C */  lui        $v0, %hi(D_8019DB56)
    /* A2798 80194398 56DB4290 */  lbu        $v0, %lo(D_8019DB56)($v0)
    /* A279C 8019439C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A27A0 801943A0 1000B0AF */  sw         $s0, 0x10($sp)
    /* A27A4 801943A4 21808000 */  addu       $s0, $a0, $zero
    /* A27A8 801943A8 0200422C */  sltiu      $v0, $v0, 0x2
    /* A27AC 801943AC 08004014 */  bnez       $v0, .L801943D0
    /* A27B0 801943B0 1400BFAF */   sw        $ra, 0x14($sp)
    /* A27B4 801943B4 0F80043C */  lui        $a0, %hi(D_800F38FC)
    /* A27B8 801943B8 FC388424 */  addiu      $a0, $a0, %lo(D_800F38FC)
    /* A27BC 801943BC 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A27C0 801943C0 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A27C4 801943C4 00000000 */  nop
    /* A27C8 801943C8 09F84000 */  jalr       $v0
    /* A27CC 801943CC 21280002 */   addu      $a1, $s0, $zero
  .L801943D0:
    /* A27D0 801943D0 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A27D4 801943D4 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A27D8 801943D8 00000000 */  nop
    /* A27DC 801943DC 3C00428C */  lw         $v0, 0x3C($v0)
    /* A27E0 801943E0 00000000 */  nop
    /* A27E4 801943E4 09F84000 */  jalr       $v0
    /* A27E8 801943E8 21200002 */   addu      $a0, $s0, $zero
    /* A27EC 801943EC 1400BF8F */  lw         $ra, 0x14($sp)
    /* A27F0 801943F0 1000B08F */  lw         $s0, 0x10($sp)
    /* A27F4 801943F4 0800E003 */  jr         $ra
    /* A27F8 801943F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80194394
