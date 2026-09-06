nonmatching func_801932B8, 0x24

glabel func_801932B8
    /* A16B8 801932B8 0600A010 */  beqz       $a1, .L801932D4
    /* A16BC 801932BC FFFFA224 */   addiu     $v0, $a1, -0x1
    /* A16C0 801932C0 FFFF0324 */  addiu      $v1, $zero, -0x1
  .L801932C4:
    /* A16C4 801932C4 000080AC */  sw         $zero, 0x0($a0)
    /* A16C8 801932C8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A16CC 801932CC FDFF4314 */  bne        $v0, $v1, .L801932C4
    /* A16D0 801932D0 04008424 */   addiu     $a0, $a0, 0x4
  .L801932D4:
    /* A16D4 801932D4 0800E003 */  jr         $ra
    /* A16D8 801932D8 00000000 */   nop
endlabel func_801932B8
    /* A16DC 801932DC 00000000 */  nop
    /* A16E0 801932E0 00000000 */  nop
    /* A16E4 801932E4 00000000 */  nop
