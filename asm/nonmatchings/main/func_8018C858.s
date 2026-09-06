nonmatching func_8018C858, 0x158

glabel func_8018C858
    /* 9AC58 8018C858 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9AC5C 8018C85C 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 9AC60 8018C860 21888000 */  addu       $s1, $a0, $zero
    /* 9AC64 8018C864 3000B6AF */  sw         $s6, 0x30($sp)
    /* 9AC68 8018C868 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 9AC6C 8018C86C 1A80153C */  lui        $s5, %hi(D_8019B130)
    /* 9AC70 8018C870 30B1B58E */  lw         $s5, %lo(D_8019B130)($s5)
    /* 9AC74 8018C874 01000224 */  addiu      $v0, $zero, 0x1
    /* 9AC78 8018C878 3400BFAF */  sw         $ra, 0x34($sp)
    /* 9AC7C 8018C87C 2800B4AF */  sw         $s4, 0x28($sp)
    /* 9AC80 8018C880 2400B3AF */  sw         $s3, 0x24($sp)
    /* 9AC84 8018C884 2000B2AF */  sw         $s2, 0x20($sp)
    /* 9AC88 8018C888 1800B0AF */  sw         $s0, 0x18($sp)
    /* 9AC8C 8018C88C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 9AC90 8018C890 0400A216 */  bne        $s5, $v0, .L8018C8A4
    /* 9AC94 8018C894 21B00000 */   addu      $s6, $zero, $zero
    /* 9AC98 8018C898 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9AC9C 8018C89C 30B120AC */  sw         $zero, %lo(D_8019B130)($at)
    /* 9ACA0 8018C8A0 01001624 */  addiu      $s6, $zero, 0x1
  .L8018C8A4:
    /* 9ACA4 8018C8A4 01001424 */  addiu      $s4, $zero, 0x1
    /* 9ACA8 8018C8A8 1A80023C */  lui        $v0, %hi(D_8019B12C)
    /* 9ACAC 8018C8AC 2CB14294 */  lhu        $v0, %lo(D_8019B12C)($v0)
    /* 9ACB0 8018C8B0 1A80033C */  lui        $v1, %hi(D_8019B13C)
    /* 9ACB4 8018C8B4 3CB1638C */  lw         $v1, %lo(D_8019B13C)($v1)
    /* 9ACB8 8018C8B8 1A80043C */  lui        $a0, %hi(D_8019B14C)
    /* 9ACBC 8018C8BC 4CB1848C */  lw         $a0, %lo(D_8019B14C)($a0)
    /* 9ACC0 8018C8C0 00000000 */  nop
    /* 9ACC4 8018C8C4 07008010 */  beqz       $a0, .L8018C8E4
    /* 9ACC8 8018C8C8 04906200 */   sllv      $s2, $v0, $v1
    /* 9ACCC 8018C8CC 1A80023C */  lui        $v0, %hi(D_8019B14C)
    /* 9ACD0 8018C8D0 4CB1428C */  lw         $v0, %lo(D_8019B14C)($v0)
    /* 9ACD4 8018C8D4 00000000 */  nop
    /* 9ACD8 8018C8D8 1000A2AF */  sw         $v0, 0x10($sp)
    /* 9ACDC 8018C8DC 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 9ACE0 8018C8E0 4CB120AC */  sw         $zero, %lo(D_8019B14C)($at)
  .L8018C8E4:
    /* 9ACE4 8018C8E4 21980000 */  addu       $s3, $zero, $zero
    /* 9ACE8 8018C8E8 0104222E */  sltiu      $v0, $s1, 0x401
  .L8018C8EC:
    /* 9ACEC 8018C8EC 03004014 */  bnez       $v0, .L8018C8FC
    /* 9ACF0 8018C8F0 82111100 */   srl       $v0, $s1, 6
    /* 9ACF4 8018C8F4 44320608 */  j          .L8018C910
    /* 9ACF8 8018C8F8 00041024 */   addiu     $s0, $zero, 0x400
  .L8018C8FC:
    /* 9ACFC 8018C8FC 80810200 */  sll        $s0, $v0, 6
    /* 9AD00 8018C900 2B101102 */  sltu       $v0, $s0, $s1
    /* 9AD04 8018C904 02004010 */  beqz       $v0, .L8018C910
    /* 9AD08 8018C908 21A00000 */   addu      $s4, $zero, $zero
    /* 9AD0C 8018C90C 40001026 */  addiu      $s0, $s0, 0x40
  .L8018C910:
    /* 9AD10 8018C910 02000424 */  addiu      $a0, $zero, 0x2
    /* 9AD14 8018C914 D729060C */  jal        func_8018A75C
    /* 9AD18 8018C918 21284002 */   addu      $a1, $s2, $zero
    /* 9AD1C 8018C91C D729060C */  jal        func_8018A75C
    /* 9AD20 8018C920 01000424 */   addiu     $a0, $zero, 0x1
    /* 9AD24 8018C924 03000424 */  addiu      $a0, $zero, 0x3
    /* 9AD28 8018C928 1A80053C */  lui        $a1, %hi(D_8019B184)
    /* 9AD2C 8018C92C 84B1A524 */  addiu      $a1, $a1, %lo(D_8019B184)
    /* 9AD30 8018C930 D729060C */  jal        func_8018A75C
    /* 9AD34 8018C934 21300002 */   addu      $a2, $s0, $zero
    /* 9AD38 8018C938 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 9AD3C 8018C93C 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9AD40 8018C940 00FC3126 */  addiu      $s1, $s1, -0x400
    /* 9AD44 8018C944 00045226 */  addiu      $s2, $s2, 0x400
    /* 9AD48 8018C948 9E5D060C */  jal        func_80197678
    /* 9AD4C 8018C94C 21987002 */   addu      $s3, $s3, $s0
    /* 9AD50 8018C950 E6FF8016 */  bnez       $s4, .L8018C8EC
    /* 9AD54 8018C954 0104222E */   sltiu     $v0, $s1, 0x401
    /* 9AD58 8018C958 0300C012 */  beqz       $s6, .L8018C968
    /* 9AD5C 8018C95C 00000000 */   nop
    /* 9AD60 8018C960 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9AD64 8018C964 30B135AC */  sw         $s5, %lo(D_8019B130)($at)
  .L8018C968:
    /* 9AD68 8018C968 1000A28F */  lw         $v0, 0x10($sp)
    /* 9AD6C 8018C96C 00000000 */  nop
    /* 9AD70 8018C970 05004010 */  beqz       $v0, .L8018C988
    /* 9AD74 8018C974 21106002 */   addu      $v0, $s3, $zero
    /* 9AD78 8018C978 1000A28F */  lw         $v0, 0x10($sp)
    /* 9AD7C 8018C97C 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 9AD80 8018C980 4CB122AC */  sw         $v0, %lo(D_8019B14C)($at)
    /* 9AD84 8018C984 21106002 */  addu       $v0, $s3, $zero
  .L8018C988:
    /* 9AD88 8018C988 3400BF8F */  lw         $ra, 0x34($sp)
    /* 9AD8C 8018C98C 3000B68F */  lw         $s6, 0x30($sp)
    /* 9AD90 8018C990 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 9AD94 8018C994 2800B48F */  lw         $s4, 0x28($sp)
    /* 9AD98 8018C998 2400B38F */  lw         $s3, 0x24($sp)
    /* 9AD9C 8018C99C 2000B28F */  lw         $s2, 0x20($sp)
    /* 9ADA0 8018C9A0 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 9ADA4 8018C9A4 1800B08F */  lw         $s0, 0x18($sp)
    /* 9ADA8 8018C9A8 0800E003 */  jr         $ra
    /* 9ADAC 8018C9AC 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8018C858
    /* 9ADB0 8018C9B0 00000000 */  nop
    /* 9ADB4 8018C9B4 00000000 */  nop
