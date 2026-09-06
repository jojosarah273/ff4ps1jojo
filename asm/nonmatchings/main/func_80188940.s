nonmatching func_80188940, 0xCC

glabel func_80188940
    /* 96D40 80188940 2C00828F */  lw         $v0, %gp_rel(D_8019ED28)($gp)
    /* 96D44 80188944 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 96D48 80188948 1400B1AF */  sw         $s1, 0x14($sp)
    /* 96D4C 8018894C 21888000 */  addu       $s1, $a0, $zero
    /* 96D50 80188950 1000B0AF */  sw         $s0, 0x10($sp)
    /* 96D54 80188954 2180A000 */  addu       $s0, $a1, $zero
    /* 96D58 80188958 03004010 */  beqz       $v0, .L80188968
    /* 96D5C 8018895C 1800BFAF */   sw        $ra, 0x18($sp)
    /* 96D60 80188960 7E220608 */  j          .L801889F8
    /* 96D64 80188964 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L80188968:
    /* 96D68 80188968 4E3D060C */  jal        func_8018F538
    /* 96D6C 8018896C 00000000 */   nop
    /* 96D70 80188970 F645060C */  jal        func_801917D8
    /* 96D74 80188974 21200000 */   addu      $a0, $zero, $zero
    /* 96D78 80188978 2C0090AF */  sw         $s0, %gp_rel(D_8019ED28)($gp)
    /* 96D7C 8018897C 0E46060C */  jal        func_80191838
    /* 96D80 80188980 21200000 */   addu      $a0, $zero, $zero
    /* 96D84 80188984 540282AF */  sw         $v0, %gp_rel(D_8019EF50)($gp)
    /* 96D88 80188988 2A4A060C */  jal        func_801928A8
    /* 96D8C 8018898C 21200000 */   addu      $a0, $zero, $zero
    /* 96D90 80188990 1980043C */  lui        $a0, %hi(func_8018960C)
    /* 96D94 80188994 5C0282AF */  sw         $v0, %gp_rel(D_8019EF58)($gp)
    /* 96D98 80188998 1646060C */  jal        func_80191858
    /* 96D9C 8018899C 0C968424 */   addiu     $a0, $a0, %lo(func_8018960C)
    /* 96DA0 801889A0 580282AF */  sw         $v0, %gp_rel(D_8019EF54)($gp)
    /* 96DA4 801889A4 0800201A */  blez       $s1, .L801889C8
    /* 96DA8 801889A8 FFFF2526 */   addiu     $a1, $s1, -0x1
    /* 96DAC 801889AC FFFF0424 */  addiu      $a0, $zero, -0x1
    /* 96DB0 801889B0 2C00838F */  lw         $v1, %gp_rel(D_8019ED28)($gp)
    /* 96DB4 801889B4 21102002 */  addu       $v0, $s1, $zero
  .L801889B8:
    /* 96DB8 801889B8 000064A4 */  sh         $a0, 0x0($v1)
    /* 96DBC 801889BC FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 96DC0 801889C0 FDFF4014 */  bnez       $v0, .L801889B8
    /* 96DC4 801889C4 10006324 */   addiu     $v1, $v1, 0x10
  .L801889C8:
    /* 96DC8 801889C8 0E000424 */  addiu      $a0, $zero, 0xE
    /* 96DCC 801889CC 03000224 */  addiu      $v0, $zero, 0x3
    /* 96DD0 801889D0 440285AF */  sw         $a1, %gp_rel(D_8019EF40)($gp)
    /* 96DD4 801889D4 48028527 */  addiu      $a1, $gp, %gp_rel(D_8019EF44)
    /* 96DD8 801889D8 8C0280AF */  sw         $zero, %gp_rel(D_8019EF88)($gp)
    /* 96DDC 801889DC 900280AF */  sw         $zero, %gp_rel(D_8019EF8C)($gp)
    /* 96DE0 801889E0 480282A3 */  sb         $v0, %gp_rel(D_8019EF44)($gp)
    /* 96DE4 801889E4 1E46060C */  jal        func_80191878
    /* 96DE8 801889E8 21300000 */   addu      $a2, $zero, $zero
    /* 96DEC 801889EC 21102002 */  addu       $v0, $s1, $zero
    /* 96DF0 801889F0 1F80033C */  lui        $v1, %hi(D_801F6678)
    /* 96DF4 801889F4 786660AC */  sw         $zero, %lo(D_801F6678)($v1)
  .L801889F8:
    /* 96DF8 801889F8 1800BF8F */  lw         $ra, 0x18($sp)
    /* 96DFC 801889FC 1400B18F */  lw         $s1, 0x14($sp)
    /* 96E00 80188A00 1000B08F */  lw         $s0, 0x10($sp)
    /* 96E04 80188A04 0800E003 */  jr         $ra
    /* 96E08 80188A08 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80188940
