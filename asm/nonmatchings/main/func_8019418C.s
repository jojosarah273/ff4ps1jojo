nonmatching func_8019418C, 0x5C

glabel func_8019418C
    /* A258C 8019418C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A2590 80194190 1A80033C */  lui        $v1, %hi(D_8019DB56)
    /* A2594 80194194 56DB6324 */  addiu      $v1, $v1, %lo(D_8019DB56)
    /* A2598 80194198 1400BFAF */  sw         $ra, 0x14($sp)
    /* A259C 8019419C 1000B0AF */  sw         $s0, 0x10($sp)
    /* A25A0 801941A0 00007090 */  lbu        $s0, 0x0($v1)
    /* A25A4 801941A4 000064A0 */  sb         $a0, 0x0($v1)
    /* A25A8 801941A8 FF008430 */  andi       $a0, $a0, 0xFF
    /* A25AC 801941AC 0A008010 */  beqz       $a0, .L801941D8
    /* A25B0 801941B0 21100002 */   addu      $v0, $s0, $zero
    /* A25B4 801941B4 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A25B8 801941B8 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A25BC 801941BC 00006590 */  lbu        $a1, 0x0($v1)
    /* A25C0 801941C0 FEFF6690 */  lbu        $a2, -0x2($v1)
    /* A25C4 801941C4 01006790 */  lbu        $a3, 0x1($v1)
    /* A25C8 801941C8 0F80043C */  lui        $a0, %hi(D_800F388C)
    /* A25CC 801941CC 09F84000 */  jalr       $v0
    /* A25D0 801941D0 8C388424 */   addiu     $a0, $a0, %lo(D_800F388C)
    /* A25D4 801941D4 21100002 */  addu       $v0, $s0, $zero
  .L801941D8:
    /* A25D8 801941D8 1400BF8F */  lw         $ra, 0x14($sp)
    /* A25DC 801941DC 1000B08F */  lw         $s0, 0x10($sp)
    /* A25E0 801941E0 0800E003 */  jr         $ra
    /* A25E4 801941E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8019418C
