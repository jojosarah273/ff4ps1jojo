nonmatching func_8018FCC4, 0xA4

glabel func_8018FCC4
    /* 9E0C4 8018FCC4 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 9E0C8 8018FCC8 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 9E0CC 8018FCCC 21988000 */  addu       $s3, $a0, $zero
    /* 9E0D0 8018FCD0 2000B4AF */  sw         $s4, 0x20($sp)
    /* 9E0D4 8018FCD4 21A0A000 */  addu       $s4, $a1, $zero
    /* 9E0D8 8018FCD8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9E0DC 8018FCDC 21800000 */  addu       $s0, $zero, $zero
    /* 9E0E0 8018FCE0 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9E0E4 8018FCE4 1F80123C */  lui        $s2, %hi(D_801F711C)
    /* 9E0E8 8018FCE8 1C715226 */  addiu      $s2, $s2, %lo(D_801F711C)
    /* 9E0EC 8018FCEC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9E0F0 8018FCF0 21880000 */  addu       $s1, $zero, $zero
    /* 9E0F4 8018FCF4 2400BFAF */  sw         $ra, 0x24($sp)
  .L8018FCF8:
    /* 9E0F8 8018FCF8 1F80023C */  lui        $v0, %hi(D_801F7114)
    /* 9E0FC 8018FCFC 21105100 */  addu       $v0, $v0, $s1
    /* 9E100 8018FD00 1471428C */  lw         $v0, %lo(D_801F7114)($v0)
    /* 9E104 8018FD04 00000000 */  nop
    /* 9E108 8018FD08 0E004010 */  beqz       $v0, .L8018FD44
    /* 9E10C 8018FD0C 00000000 */   nop
    /* 9E110 8018FD10 07005314 */  bne        $v0, $s3, .L8018FD30
    /* 9E114 8018FD14 21208002 */   addu      $a0, $s4, $zero
    /* 9E118 8018FD18 1E3C060C */  jal        func_8018F078
    /* 9E11C 8018FD1C 21284002 */   addu      $a1, $s2, $zero
    /* 9E120 8018FD20 04004014 */  bnez       $v0, .L8018FD34
    /* 9E124 8018FD24 2C005226 */   addiu     $s2, $s2, 0x2C
    /* 9E128 8018FD28 523F0608 */  j          .L8018FD48
    /* 9E12C 8018FD2C 01000226 */   addiu     $v0, $s0, 0x1
  .L8018FD30:
    /* 9E130 8018FD30 2C005226 */  addiu      $s2, $s2, 0x2C
  .L8018FD34:
    /* 9E134 8018FD34 01001026 */  addiu      $s0, $s0, 0x1
    /* 9E138 8018FD38 8000022A */  slti       $v0, $s0, 0x80
    /* 9E13C 8018FD3C EEFF4014 */  bnez       $v0, .L8018FCF8
    /* 9E140 8018FD40 2C003126 */   addiu     $s1, $s1, 0x2C
  .L8018FD44:
    /* 9E144 8018FD44 FFFF0224 */  addiu      $v0, $zero, -0x1
  .L8018FD48:
    /* 9E148 8018FD48 2400BF8F */  lw         $ra, 0x24($sp)
    /* 9E14C 8018FD4C 2000B48F */  lw         $s4, 0x20($sp)
    /* 9E150 8018FD50 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 9E154 8018FD54 1800B28F */  lw         $s2, 0x18($sp)
    /* 9E158 8018FD58 1400B18F */  lw         $s1, 0x14($sp)
    /* 9E15C 8018FD5C 1000B08F */  lw         $s0, 0x10($sp)
    /* 9E160 8018FD60 0800E003 */  jr         $ra
    /* 9E164 8018FD64 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8018FCC4
