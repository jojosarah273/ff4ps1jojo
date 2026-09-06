nonmatching func_8018C9B8, 0x5C

glabel func_8018C9B8
    /* 9ADB8 8018C9B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9ADBC 8018C9BC 21288000 */  addu       $a1, $a0, $zero
    /* 9ADC0 8018C9C0 0700023C */  lui        $v0, (0x7EFE8 >> 16)
    /* 9ADC4 8018C9C4 E8EF4234 */  ori        $v0, $v0, (0x7EFE8 & 0xFFFF)
    /* 9ADC8 8018C9C8 F0EFA324 */  addiu      $v1, $a1, -0x1010
    /* 9ADCC 8018C9CC 2B104300 */  sltu       $v0, $v0, $v1
    /* 9ADD0 8018C9D0 0B004014 */  bnez       $v0, .L8018CA00
    /* 9ADD4 8018C9D4 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9ADD8 8018C9D8 C22A060C */  jal        func_8018AB08
    /* 9ADDC 8018C9DC FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 9ADE0 8018C9E0 1A80013C */  lui        $at, %hi(D_8019B12C)
    /* 9ADE4 8018C9E4 2CB122A4 */  sh         $v0, %lo(D_8019B12C)($at)
    /* 9ADE8 8018C9E8 1A80033C */  lui        $v1, %hi(D_8019B12C)
    /* 9ADEC 8018C9EC 2CB16394 */  lhu        $v1, %lo(D_8019B12C)($v1)
    /* 9ADF0 8018C9F0 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 9ADF4 8018C9F4 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 9ADF8 8018C9F8 81320608 */  j          .L8018CA04
    /* 9ADFC 8018C9FC 04104300 */   sllv      $v0, $v1, $v0
  .L8018CA00:
    /* 9AE00 8018CA00 21100000 */  addu       $v0, $zero, $zero
  .L8018CA04:
    /* 9AE04 8018CA04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9AE08 8018CA08 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9AE0C 8018CA0C 0800E003 */  jr         $ra
    /* 9AE10 8018CA10 00000000 */   nop
endlabel func_8018C9B8
    /* 9AE14 8018CA14 00000000 */  nop
