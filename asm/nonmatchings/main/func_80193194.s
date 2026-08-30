nonmatching func_80193194, 0x24

glabel func_80193194
    /* A1594 80193194 0600A010 */  beqz       $a1, .L801931B0
    /* A1598 80193198 FFFFA224 */   addiu     $v0, $a1, -0x1
    /* A159C 8019319C FFFF0324 */  addiu      $v1, $zero, -0x1
  .L801931A0:
    /* A15A0 801931A0 000080AC */  sw         $zero, 0x0($a0)
    /* A15A4 801931A4 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A15A8 801931A8 FDFF4314 */  bne        $v0, $v1, .L801931A0
    /* A15AC 801931AC 04008424 */   addiu     $a0, $a0, 0x4
  .L801931B0:
    /* A15B0 801931B0 0800E003 */  jr         $ra
    /* A15B4 801931B4 00000000 */   nop
endlabel func_80193194
