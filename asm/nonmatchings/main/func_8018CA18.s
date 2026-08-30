nonmatching func_8018CA18, 0x30

glabel func_8018CA18
    /* 9AE18 8018CA18 05008010 */  beqz       $a0, .L8018CA30
    /* 9AE1C 8018CA1C 01000224 */   addiu     $v0, $zero, 0x1
    /* 9AE20 8018CA20 04008214 */  bne        $a0, $v0, .L8018CA34
    /* 9AE24 8018CA24 21100000 */   addu      $v0, $zero, $zero
    /* 9AE28 8018CA28 8D320608 */  j          .L8018CA34
    /* 9AE2C 8018CA2C 01000224 */   addiu     $v0, $zero, 0x1
  .L8018CA30:
    /* 9AE30 8018CA30 21100000 */  addu       $v0, $zero, $zero
  .L8018CA34:
    /* 9AE34 8018CA34 1A80013C */  lui        $at, %hi(D_8019B0A4)
    /* 9AE38 8018CA38 A4B024AC */  sw         $a0, %lo(D_8019B0A4)($at)
    /* 9AE3C 8018CA3C 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9AE40 8018CA40 0800E003 */  jr         $ra
    /* 9AE44 8018CA44 30B122AC */   sw        $v0, %lo(D_8019B130)($at)
endlabel func_8018CA18
