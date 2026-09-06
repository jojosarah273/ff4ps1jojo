nonmatching func_801896C0, 0x90

glabel func_801896C0
    /* 97AC0 801896C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97AC4 801896C4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 97AC8 801896C8 21808000 */  addu       $s0, $a0, $zero
    /* 97ACC 801896CC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 97AD0 801896D0 2C0085AF */  sw         $a1, %gp_rel(D_8019ED28)($gp)
    /* 97AD4 801896D4 0E46060C */  jal        func_80191838
    /* 97AD8 801896D8 21200000 */   addu      $a0, $zero, $zero
    /* 97ADC 801896DC 540282AF */  sw         $v0, %gp_rel(D_8019EF50)($gp)
    /* 97AE0 801896E0 2A4A060C */  jal        func_801928A8
    /* 97AE4 801896E4 21200000 */   addu      $a0, $zero, $zero
    /* 97AE8 801896E8 1980043C */  lui        $a0, %hi(func_8018960C)
    /* 97AEC 801896EC 5C0282AF */  sw         $v0, %gp_rel(D_8019EF58)($gp)
    /* 97AF0 801896F0 1646060C */  jal        func_80191858
    /* 97AF4 801896F4 0C968424 */   addiu     $a0, $a0, %lo(func_8018960C)
    /* 97AF8 801896F8 580282AF */  sw         $v0, %gp_rel(D_8019EF54)($gp)
    /* 97AFC 801896FC 0700001A */  blez       $s0, .L8018971C
    /* 97B00 80189700 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 97B04 80189704 2C00838F */  lw         $v1, %gp_rel(D_8019ED28)($gp)
    /* 97B08 80189708 21100002 */  addu       $v0, $s0, $zero
  .L8018970C:
    /* 97B0C 8018970C 000064A4 */  sh         $a0, 0x0($v1)
    /* 97B10 80189710 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 97B14 80189714 FDFF4014 */  bnez       $v0, .L8018970C
    /* 97B18 80189718 10006324 */   addiu     $v1, $v1, 0x10
  .L8018971C:
    /* 97B1C 8018971C 21100002 */  addu       $v0, $s0, $zero
    /* 97B20 80189720 FFFF0326 */  addiu      $v1, $s0, -0x1
    /* 97B24 80189724 440283AF */  sw         $v1, %gp_rel(D_8019EF40)($gp)
    /* 97B28 80189728 03000324 */  addiu      $v1, $zero, 0x3
    /* 97B2C 8018972C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 97B30 80189730 1000B08F */  lw         $s0, 0x10($sp)
    /* 97B34 80189734 1F80043C */  lui        $a0, %hi(D_801F6678)
    /* 97B38 80189738 8C0280AF */  sw         $zero, %gp_rel(D_8019EF88)($gp)
    /* 97B3C 8018973C 900280AF */  sw         $zero, %gp_rel(D_8019EF8C)($gp)
    /* 97B40 80189740 480283A3 */  sb         $v1, %gp_rel(D_8019EF44)($gp)
    /* 97B44 80189744 786680AC */  sw         $zero, %lo(D_801F6678)($a0)
    /* 97B48 80189748 0800E003 */  jr         $ra
    /* 97B4C 8018974C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801896C0
