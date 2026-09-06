nonmatching func_8018B9A8, 0x8C

glabel func_8018B9A8
    /* 99DA8 8018B9A8 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 99DAC 8018B9AC 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 99DB0 8018B9B0 1A80033C */  lui        $v1, %hi(D_8019B17C)
    /* 99DB4 8018B9B4 7CB1638C */  lw         $v1, %lo(D_8019B17C)($v1)
    /* 99DB8 8018B9B8 00000000 */  nop
    /* 99DBC 8018B9BC 03006014 */  bnez       $v1, .L8018B9CC
    /* 99DC0 8018B9C0 04204400 */   sllv      $a0, $a0, $v0
    /* 99DC4 8018B9C4 8B2E0608 */  j          .L8018BA2C
    /* 99DC8 8018B9C8 21100000 */   addu      $v0, $zero, $zero
  .L8018B9CC:
    /* 99DCC 8018B9CC 0080083C */  lui        $t0, (0x80000000 >> 16)
    /* 99DD0 8018B9D0 0040073C */  lui        $a3, (0x40000000 >> 16)
    /* 99DD4 8018B9D4 FF0F063C */  lui        $a2, (0xFFFFFFF >> 16)
    /* 99DD8 8018B9D8 FFFFC634 */  ori        $a2, $a2, (0xFFFFFFF & 0xFFFF)
    /* 99DDC 8018B9DC 21286000 */  addu       $a1, $v1, $zero
  .L8018B9E0:
    /* 99DE0 8018B9E0 0000A38C */  lw         $v1, 0x0($a1)
    /* 99DE4 8018B9E4 00000000 */  nop
    /* 99DE8 8018B9E8 24106800 */  and        $v0, $v1, $t0
    /* 99DEC 8018B9EC 0C004014 */  bnez       $v0, .L8018BA20
    /* 99DF0 8018B9F0 24106700 */   and       $v0, $v1, $a3
    /* 99DF4 8018B9F4 0C004014 */  bnez       $v0, .L8018BA28
    /* 99DF8 8018B9F8 24186600 */   and       $v1, $v1, $a2
    /* 99DFC 8018B9FC 2B106400 */  sltu       $v0, $v1, $a0
    /* 99E00 8018BA00 0A004010 */  beqz       $v0, .L8018BA2C
    /* 99E04 8018BA04 01000224 */   addiu     $v0, $zero, 0x1
    /* 99E08 8018BA08 0400A28C */  lw         $v0, 0x4($a1)
    /* 99E0C 8018BA0C 00000000 */  nop
    /* 99E10 8018BA10 21106200 */  addu       $v0, $v1, $v0
    /* 99E14 8018BA14 2B108200 */  sltu       $v0, $a0, $v0
    /* 99E18 8018BA18 04004014 */  bnez       $v0, .L8018BA2C
    /* 99E1C 8018BA1C 01000224 */   addiu     $v0, $zero, 0x1
  .L8018BA20:
    /* 99E20 8018BA20 782E0608 */  j          .L8018B9E0
    /* 99E24 8018BA24 0800A524 */   addiu     $a1, $a1, 0x8
  .L8018BA28:
    /* 99E28 8018BA28 21100000 */  addu       $v0, $zero, $zero
  .L8018BA2C:
    /* 99E2C 8018BA2C 0800E003 */  jr         $ra
    /* 99E30 8018BA30 00000000 */   nop
endlabel func_8018B9A8
    /* 99E34 8018BA34 00000000 */  nop
