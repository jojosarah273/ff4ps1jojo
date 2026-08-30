nonmatching func_800FE978, 0x80

glabel func_800FE978
    /* CD78 800FE978 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CD7C 800FE97C 1000BFAF */  sw         $ra, 0x10($sp)
    /* CD80 800FE980 80E4030C */  jal        func_800F9200
    /* CD84 800FE984 00000000 */   nop
    /* CD88 800FE988 12E5030C */  jal        func_800F9448
    /* CD8C 800FE98C 00000000 */   nop
    /* CD90 800FE990 40DD030C */  jal        func_800F7500
    /* CD94 800FE994 21200000 */   addu      $a0, $zero, $zero
  .L800FE998:
    /* CD98 800FE998 DADA030C */  jal        func_800F6B68
    /* CD9C 800FE99C 21200000 */   addu      $a0, $zero, $zero
    /* CDA0 800FE9A0 58E2030C */  jal        func_800F8960
    /* CDA4 800FE9A4 DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* CDA8 800FE9A8 D9D8030C */  jal        func_800F6364
    /* CDAC 800FE9AC 00000000 */   nop
    /* CDB0 800FE9B0 EFD8030C */  jal        func_800F63BC
    /* CDB4 800FE9B4 00000000 */   nop
    /* CDB8 800FE9B8 A4D6030C */  jal        func_800F5A90
    /* CDBC 800FE9BC 00010424 */   addiu     $a0, $zero, 0x100
    /* CDC0 800FE9C0 F5D4030C */  jal        func_800F53D4
    /* CDC4 800FE9C4 00000000 */   nop
    /* CDC8 800FE9C8 F3FF4010 */  beqz       $v0, .L800FE998
    /* CDCC 800FE9CC 00000000 */   nop
    /* CDD0 800FE9D0 53D9030C */  jal        func_800F654C
    /* CDD4 800FE9D4 21200000 */   addu      $a0, $zero, $zero
    /* CDD8 800FE9D8 80E4030C */  jal        func_800F9200
    /* CDDC 800FE9DC 00000000 */   nop
    /* CDE0 800FE9E0 12E5030C */  jal        func_800F9448
    /* CDE4 800FE9E4 00000000 */   nop
    /* CDE8 800FE9E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* CDEC 800FE9EC 00000000 */  nop
    /* CDF0 800FE9F0 0800E003 */  jr         $ra
    /* CDF4 800FE9F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE978
