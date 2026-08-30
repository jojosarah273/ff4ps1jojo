nonmatching func_8018CA48, 0x88

glabel func_8018CA48
    /* 9AE48 8018CA48 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 9AE4C 8018CA4C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9AE50 8018CA50 2188A000 */  addu       $s1, $a1, $zero
    /* 9AE54 8018CA54 0700023C */  lui        $v0, (0x7EFF0 >> 16)
    /* 9AE58 8018CA58 F0EF4234 */  ori        $v0, $v0, (0x7EFF0 & 0xFFFF)
    /* 9AE5C 8018CA5C 2B105100 */  sltu       $v0, $v0, $s1
    /* 9AE60 8018CA60 1800BFAF */  sw         $ra, 0x18($sp)
    /* 9AE64 8018CA64 03004010 */  beqz       $v0, .L8018CA74
    /* 9AE68 8018CA68 1000B0AF */   sw        $s0, 0x10($sp)
    /* 9AE6C 8018CA6C 0700113C */  lui        $s1, (0x7EFF0 >> 16)
    /* 9AE70 8018CA70 F0EF3136 */  ori        $s1, $s1, (0x7EFF0 & 0xFFFF)
  .L8018CA74:
    /* 9AE74 8018CA74 1A80103C */  lui        $s0, %hi(D_8019B12C)
    /* 9AE78 8018CA78 2CB11096 */  lhu        $s0, %lo(D_8019B12C)($s0)
    /* 9AE7C 8018CA7C 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 9AE80 8018CA80 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 9AE84 8018CA84 21282002 */  addu       $a1, $s1, $zero
    /* 9AE88 8018CA88 772A060C */  jal        func_8018A9DC
    /* 9AE8C 8018CA8C 04805000 */   sllv      $s0, $s0, $v0
    /* 9AE90 8018CA90 FFFF0424 */  addiu      $a0, $zero, -0x1
    /* 9AE94 8018CA94 C22A060C */  jal        func_8018AB08
    /* 9AE98 8018CA98 21281102 */   addu      $a1, $s0, $s1
    /* 9AE9C 8018CA9C 1A80033C */  lui        $v1, %hi(D_8019B14C)
    /* 9AEA0 8018CAA0 4CB1638C */  lw         $v1, %lo(D_8019B14C)($v1)
    /* 9AEA4 8018CAA4 1A80013C */  lui        $at, %hi(D_8019B12C)
    /* 9AEA8 8018CAA8 2CB122A4 */  sh         $v0, %lo(D_8019B12C)($at)
    /* 9AEAC 8018CAAC 03006014 */  bnez       $v1, .L8018CABC
    /* 9AEB0 8018CAB0 21102002 */   addu      $v0, $s1, $zero
    /* 9AEB4 8018CAB4 1A80013C */  lui        $at, %hi(D_8019B148)
    /* 9AEB8 8018CAB8 48B120AC */  sw         $zero, %lo(D_8019B148)($at)
  .L8018CABC:
    /* 9AEBC 8018CABC 1800BF8F */  lw         $ra, 0x18($sp)
    /* 9AEC0 8018CAC0 1400B18F */  lw         $s1, 0x14($sp)
    /* 9AEC4 8018CAC4 1000B08F */  lw         $s0, 0x10($sp)
    /* 9AEC8 8018CAC8 0800E003 */  jr         $ra
    /* 9AECC 8018CACC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018CA48
    /* 9AED0 8018CAD0 00000000 */  nop
    /* 9AED4 8018CAD4 00000000 */  nop
