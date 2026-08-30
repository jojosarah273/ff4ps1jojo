nonmatching func_80188A60, 0x88

glabel func_80188A60
    /* 96E60 80188A60 4402828F */  lw         $v0, %gp_rel(D_8019EF40)($gp)
    /* 96E64 80188A64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96E68 80188A68 0C004004 */  bltz       $v0, .L80188A9C
    /* 96E6C 80188A6C 1000BFAF */   sw        $ra, 0x10($sp)
    /* 96E70 80188A70 01004524 */  addiu      $a1, $v0, 0x1
    /* 96E74 80188A74 9002828F */  lw         $v0, %gp_rel(D_8019EF8C)($gp)
    /* 96E78 80188A78 2C00838F */  lw         $v1, %gp_rel(D_8019ED28)($gp)
    /* 96E7C 80188A7C 00110200 */  sll        $v0, $v0, 4
    /* 96E80 80188A80 21184300 */  addu       $v1, $v0, $v1
    /* 96E84 80188A84 FFFFA524 */  addiu      $a1, $a1, -0x1
  .L80188A88:
    /* 96E88 80188A88 FFFFA014 */  bnez       $a1, .L80188A88
    /* 96E8C 80188A8C FFFFA524 */   addiu     $a1, $a1, -0x1
    /* 96E90 80188A90 0100A524 */  addiu      $a1, $a1, 0x1
    /* 96E94 80188A94 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 96E98 80188A98 000062A4 */  sh         $v0, 0x0($v1)
  .L80188A9C:
    /* 96E9C 80188A9C 01000224 */  addiu      $v0, $zero, 0x1
    /* 96EA0 80188AA0 8C0280AF */  sw         $zero, %gp_rel(D_8019EF88)($gp)
    /* 96EA4 80188AA4 900280AF */  sw         $zero, %gp_rel(D_8019EF8C)($gp)
    /* 96EA8 80188AA8 0B008214 */  bne        $a0, $v0, .L80188AD8
    /* 96EAC 80188AAC 00000000 */   nop
    /* 96EB0 80188AB0 EE45060C */  jal        func_801917B8
    /* 96EB4 80188AB4 00000000 */   nop
    /* 96EB8 80188AB8 D245060C */  jal        func_80191748
    /* 96EBC 80188ABC 21200000 */   addu      $a0, $zero, $zero
    /* 96EC0 80188AC0 03000324 */  addiu      $v1, $zero, 0x3
    /* 96EC4 80188AC4 480283A3 */  sb         $v1, %gp_rel(D_8019EF44)($gp)
    /* 96EC8 80188AC8 0E000424 */  addiu      $a0, $zero, 0xE
    /* 96ECC 80188ACC 48028527 */  addiu      $a1, $gp, %gp_rel(D_8019EF44)
    /* 96ED0 80188AD0 1E46060C */  jal        func_80191878
    /* 96ED4 80188AD4 21300000 */   addu      $a2, $zero, $zero
  .L80188AD8:
    /* 96ED8 80188AD8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96EDC 80188ADC 00000000 */  nop
    /* 96EE0 80188AE0 0800E003 */  jr         $ra
    /* 96EE4 80188AE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80188A60
