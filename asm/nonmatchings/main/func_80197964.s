nonmatching func_80197964, 0x100

glabel func_80197964
    /* A5D64 80197964 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* A5D68 80197968 1800B2AF */  sw         $s2, 0x18($sp)
    /* A5D6C 8019796C 21908000 */  addu       $s2, $a0, $zero
    /* A5D70 80197970 2000B4AF */  sw         $s4, 0x20($sp)
    /* A5D74 80197974 21A0A000 */  addu       $s4, $a1, $zero
    /* A5D78 80197978 2800BFAF */  sw         $ra, 0x28($sp)
    /* A5D7C 8019797C 2400B5AF */  sw         $s5, 0x24($sp)
    /* A5D80 80197980 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A5D84 80197984 1400B1AF */  sw         $s1, 0x14($sp)
    /* A5D88 80197988 1000B0AF */  sw         $s0, 0x10($sp)
    /* A5D8C 8019798C 0000428E */  lw         $v0, 0x0($s2)
    /* A5D90 80197990 00000000 */  nop
    /* A5D94 80197994 03004014 */  bnez       $v0, .L801979A4
    /* A5D98 80197998 21A8C000 */   addu      $s5, $a2, $zero
    /* A5D9C 8019799C 01000224 */  addiu      $v0, $zero, 0x1
    /* A5DA0 801979A0 000042AE */  sw         $v0, 0x0($s2)
  .L801979A4:
    /* A5DA4 801979A4 5401038C */  lw         $v1, 0x154($zero)
    /* A5DA8 801979A8 CCCC023C */  lui        $v0, (0xCCCCCCCD >> 16)
    /* A5DAC 801979AC CDCC4234 */  ori        $v0, $v0, (0xCCCCCCCD & 0xFFFF)
    /* A5DB0 801979B0 19006200 */  multu      $v1, $v0
    /* A5DB4 801979B4 5001108C */  lw         $s0, 0x150($zero)
    /* A5DB8 801979B8 2080133C */  lui        $s3, %hi(D_801FEBB8)
    /* A5DBC 801979BC B8EB738E */  lw         $s3, %lo(D_801FEBB8)($s3)
    /* A5DC0 801979C0 10380000 */  mfhi       $a3
    /* A5DC4 801979C4 82190700 */  srl        $v1, $a3, 6
    /* A5DC8 801979C8 80100300 */  sll        $v0, $v1, 2
    /* A5DCC 801979CC 21104300 */  addu       $v0, $v0, $v1
    /* A5DD0 801979D0 00110200 */  sll        $v0, $v0, 4
    /* A5DD4 801979D4 21180202 */  addu       $v1, $s0, $v0
    /* A5DD8 801979D8 2B100302 */  sltu       $v0, $s0, $v1
    /* A5DDC 801979DC 12004010 */  beqz       $v0, .L80197A28
    /* A5DE0 801979E0 21204002 */   addu      $a0, $s2, $zero
    /* A5DE4 801979E4 21886000 */  addu       $s1, $v1, $zero
  .L801979E8:
    /* A5DE8 801979E8 0000048E */  lw         $a0, 0x0($s0)
    /* A5DEC 801979EC 00000000 */  nop
    /* A5DF0 801979F0 08008010 */  beqz       $a0, .L80197A14
    /* A5DF4 801979F4 00000000 */   nop
    /* A5DF8 801979F8 2080053C */  lui        $a1, %hi(D_801FEBC0)
    /* A5DFC 801979FC 1E3C060C */  jal        func_8018F078
    /* A5E00 80197A00 C0EBA524 */   addiu     $a1, $a1, %lo(D_801FEBC0)
    /* A5E04 80197A04 03004014 */  bnez       $v0, .L80197A14
    /* A5E08 80197A08 00000000 */   nop
    /* A5E0C 80197A0C 895E0608 */  j          .L80197A24
    /* A5E10 80197A10 340013AE */   sw        $s3, 0x34($s0)
  .L80197A14:
    /* A5E14 80197A14 50001026 */  addiu      $s0, $s0, 0x50
    /* A5E18 80197A18 2B101102 */  sltu       $v0, $s0, $s1
    /* A5E1C 80197A1C F2FF4014 */  bnez       $v0, .L801979E8
    /* A5E20 80197A20 00000000 */   nop
  .L80197A24:
    /* A5E24 80197A24 21204002 */  addu       $a0, $s2, $zero
  .L80197A28:
    /* A5E28 80197A28 21288002 */  addu       $a1, $s4, $zero
    /* A5E2C 80197A2C 2080023C */  lui        $v0, %hi(D_801FEBB8)
    /* A5E30 80197A30 B8EB428C */  lw         $v0, %lo(D_801FEBB8)($v0)
    /* A5E34 80197A34 00000000 */  nop
    /* A5E38 80197A38 09F84000 */  jalr       $v0
    /* A5E3C 80197A3C 2130A002 */   addu      $a2, $s5, $zero
    /* A5E40 80197A40 2800BF8F */  lw         $ra, 0x28($sp)
    /* A5E44 80197A44 2400B58F */  lw         $s5, 0x24($sp)
    /* A5E48 80197A48 2000B48F */  lw         $s4, 0x20($sp)
    /* A5E4C 80197A4C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A5E50 80197A50 1800B28F */  lw         $s2, 0x18($sp)
    /* A5E54 80197A54 1400B18F */  lw         $s1, 0x14($sp)
    /* A5E58 80197A58 1000B08F */  lw         $s0, 0x10($sp)
    /* A5E5C 80197A5C 0800E003 */  jr         $ra
    /* A5E60 80197A60 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_80197964
    /* A5E64 80197A64 00000000 */  nop
