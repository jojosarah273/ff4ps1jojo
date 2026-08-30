nonmatching func_8018C468, 0x194

glabel func_8018C468
    /* 9A868 8018C468 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9A86C 8018C46C 1800B0AF */  sw         $s0, 0x18($sp)
    /* 9A870 8018C470 21808000 */  addu       $s0, $a0, $zero
    /* 9A874 8018C474 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 9A878 8018C478 0A00022E */  sltiu      $v0, $s0, 0xA
    /* 9A87C 8018C47C 3000BFAF */  sw         $ra, 0x30($sp)
    /* 9A880 8018C480 2800B4AF */  sw         $s4, 0x28($sp)
    /* 9A884 8018C484 2400B3AF */  sw         $s3, 0x24($sp)
    /* 9A888 8018C488 2000B2AF */  sw         $s2, 0x20($sp)
    /* 9A88C 8018C48C 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 9A890 8018C490 1000A0AF */  sw         $zero, 0x10($sp)
    /* 9A894 8018C494 0A004010 */  beqz       $v0, .L8018C4C0
    /* 9A898 8018C498 21A80000 */   addu      $s5, $zero, $zero
    /* 9A89C 8018C49C 1A80033C */  lui        $v1, %hi(D_8019B6D4)
    /* 9A8A0 8018C4A0 D4B66324 */  addiu      $v1, $v1, %lo(D_8019B6D4)
    /* 9A8A4 8018C4A4 80101000 */  sll        $v0, $s0, 2
    /* 9A8A8 8018C4A8 21884300 */  addu       $s1, $v0, $v1
    /* 9A8AC 8018C4AC 0000248E */  lw         $a0, 0x0($s1)
    /* 9A8B0 8018C4B0 6A2E060C */  jal        func_8018B9A8
    /* 9A8B4 8018C4B4 00000000 */   nop
    /* 9A8B8 8018C4B8 03004010 */  beqz       $v0, .L8018C4C8
    /* 9A8BC 8018C4BC 00000000 */   nop
  .L8018C4C0:
    /* 9A8C0 8018C4C0 76310608 */  j          .L8018C5D8
    /* 9A8C4 8018C4C4 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L8018C4C8:
    /* 9A8C8 8018C4C8 08000016 */  bnez       $s0, .L8018C4EC
    /* 9A8CC 8018C4CC 0100023C */   lui       $v0, (0x10000 >> 16)
    /* 9A8D0 8018C4D0 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 9A8D4 8018C4D4 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 9A8D8 8018C4D8 10000324 */  addiu      $v1, $zero, 0x10
    /* 9A8DC 8018C4DC 04884300 */  sllv       $s1, $v1, $v0
    /* 9A8E0 8018C4E0 F0FF0334 */  ori        $v1, $zero, 0xFFF0
    /* 9A8E4 8018C4E4 41310608 */  j          .L8018C504
    /* 9A8E8 8018C4E8 04904300 */   sllv      $s2, $v1, $v0
  .L8018C4EC:
    /* 9A8EC 8018C4EC 0000248E */  lw         $a0, 0x0($s1)
    /* 9A8F0 8018C4F0 1A80033C */  lui        $v1, %hi(D_8019B13C)
    /* 9A8F4 8018C4F4 3CB1638C */  lw         $v1, %lo(D_8019B13C)($v1)
    /* 9A8F8 8018C4F8 23104400 */  subu       $v0, $v0, $a0
    /* 9A8FC 8018C4FC 04886200 */  sllv       $s1, $v0, $v1
    /* 9A900 8018C500 04906400 */  sllv       $s2, $a0, $v1
  .L8018C504:
    /* 9A904 8018C504 1A80143C */  lui        $s4, %hi(D_8019B130)
    /* 9A908 8018C508 30B1948E */  lw         $s4, %lo(D_8019B130)($s4)
    /* 9A90C 8018C50C 01000224 */  addiu      $v0, $zero, 0x1
    /* 9A910 8018C510 04008216 */  bne        $s4, $v0, .L8018C524
    /* 9A914 8018C514 00000000 */   nop
    /* 9A918 8018C518 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9A91C 8018C51C 30B120AC */  sw         $zero, %lo(D_8019B130)($at)
    /* 9A920 8018C520 01001524 */  addiu      $s5, $zero, 0x1
  .L8018C524:
    /* 9A924 8018C524 1A80023C */  lui        $v0, %hi(D_8019B14C)
    /* 9A928 8018C528 4CB1428C */  lw         $v0, %lo(D_8019B14C)($v0)
    /* 9A92C 8018C52C 00000000 */  nop
    /* 9A930 8018C530 07004010 */  beqz       $v0, .L8018C550
    /* 9A934 8018C534 01001324 */   addiu     $s3, $zero, 0x1
    /* 9A938 8018C538 1A80023C */  lui        $v0, %hi(D_8019B14C)
    /* 9A93C 8018C53C 4CB1428C */  lw         $v0, %lo(D_8019B14C)($v0)
    /* 9A940 8018C540 00000000 */  nop
    /* 9A944 8018C544 1000A2AF */  sw         $v0, 0x10($sp)
    /* 9A948 8018C548 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 9A94C 8018C54C 4CB120AC */  sw         $zero, %lo(D_8019B14C)($at)
  .L8018C550:
    /* 9A950 8018C550 0104222E */  sltiu      $v0, $s1, 0x401
  .L8018C554:
    /* 9A954 8018C554 03004010 */  beqz       $v0, .L8018C564
    /* 9A958 8018C558 00041024 */   addiu     $s0, $zero, 0x400
    /* 9A95C 8018C55C 21802002 */  addu       $s0, $s1, $zero
    /* 9A960 8018C560 21980000 */  addu       $s3, $zero, $zero
  .L8018C564:
    /* 9A964 8018C564 02000424 */  addiu      $a0, $zero, 0x2
    /* 9A968 8018C568 D729060C */  jal        func_8018A75C
    /* 9A96C 8018C56C 21284002 */   addu      $a1, $s2, $zero
    /* 9A970 8018C570 D729060C */  jal        func_8018A75C
    /* 9A974 8018C574 01000424 */   addiu     $a0, $zero, 0x1
    /* 9A978 8018C578 03000424 */  addiu      $a0, $zero, 0x3
    /* 9A97C 8018C57C 1A80053C */  lui        $a1, %hi(D_8019B184)
    /* 9A980 8018C580 84B1A524 */  addiu      $a1, $a1, %lo(D_8019B184)
    /* 9A984 8018C584 D729060C */  jal        func_8018A75C
    /* 9A988 8018C588 21300002 */   addu      $a2, $s0, $zero
    /* 9A98C 8018C58C 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 9A990 8018C590 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9A994 8018C594 00FC3126 */  addiu      $s1, $s1, -0x400
    /* 9A998 8018C598 9E5D060C */  jal        func_80197678
    /* 9A99C 8018C59C 00045226 */   addiu     $s2, $s2, 0x400
    /* 9A9A0 8018C5A0 ECFF6016 */  bnez       $s3, .L8018C554
    /* 9A9A4 8018C5A4 0104222E */   sltiu     $v0, $s1, 0x401
    /* 9A9A8 8018C5A8 0300A012 */  beqz       $s5, .L8018C5B8
    /* 9A9AC 8018C5AC 00000000 */   nop
    /* 9A9B0 8018C5B0 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9A9B4 8018C5B4 30B134AC */  sw         $s4, %lo(D_8019B130)($at)
  .L8018C5B8:
    /* 9A9B8 8018C5B8 1000A28F */  lw         $v0, 0x10($sp)
    /* 9A9BC 8018C5BC 00000000 */  nop
    /* 9A9C0 8018C5C0 05004010 */  beqz       $v0, .L8018C5D8
    /* 9A9C4 8018C5C4 21100000 */   addu      $v0, $zero, $zero
    /* 9A9C8 8018C5C8 1000A28F */  lw         $v0, 0x10($sp)
    /* 9A9CC 8018C5CC 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 9A9D0 8018C5D0 4CB122AC */  sw         $v0, %lo(D_8019B14C)($at)
    /* 9A9D4 8018C5D4 21100000 */  addu       $v0, $zero, $zero
  .L8018C5D8:
    /* 9A9D8 8018C5D8 3000BF8F */  lw         $ra, 0x30($sp)
    /* 9A9DC 8018C5DC 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 9A9E0 8018C5E0 2800B48F */  lw         $s4, 0x28($sp)
    /* 9A9E4 8018C5E4 2400B38F */  lw         $s3, 0x24($sp)
    /* 9A9E8 8018C5E8 2000B28F */  lw         $s2, 0x20($sp)
    /* 9A9EC 8018C5EC 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 9A9F0 8018C5F0 1800B08F */  lw         $s0, 0x18($sp)
    /* 9A9F4 8018C5F4 0800E003 */  jr         $ra
    /* 9A9F8 8018C5F8 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8018C468
    /* 9A9FC 8018C5FC 00000000 */  nop
    /* 9AA00 8018C600 00000000 */  nop
    /* 9AA04 8018C604 00000000 */  nop
