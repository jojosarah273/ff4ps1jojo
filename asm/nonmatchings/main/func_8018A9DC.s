nonmatching func_8018A9DC, 0x84

glabel func_8018A9DC
    /* 98DDC 8018A9DC 1A80023C */  lui        $v0, %hi(D_8019B130)
    /* 98DE0 8018A9E0 30B1428C */  lw         $v0, %lo(D_8019B130)($v0)
    /* 98DE4 8018A9E4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 98DE8 8018A9E8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 98DEC 8018A9EC 21888000 */  addu       $s1, $a0, $zero
    /* 98DF0 8018A9F0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 98DF4 8018A9F4 2180A000 */  addu       $s0, $a1, $zero
    /* 98DF8 8018A9F8 10004014 */  bnez       $v0, .L8018AA3C
    /* 98DFC 8018A9FC 1800BFAF */   sw        $ra, 0x18($sp)
    /* 98E00 8018AA00 1A80023C */  lui        $v0, %hi(D_8019B12C)
    /* 98E04 8018AA04 2CB14294 */  lhu        $v0, %lo(D_8019B12C)($v0)
    /* 98E08 8018AA08 1A80053C */  lui        $a1, %hi(D_8019B13C)
    /* 98E0C 8018AA0C 3CB1A58C */  lw         $a1, %lo(D_8019B13C)($a1)
    /* 98E10 8018AA10 02000424 */  addiu      $a0, $zero, 0x2
    /* 98E14 8018AA14 D729060C */  jal        func_8018A75C
    /* 98E18 8018AA18 0428A200 */   sllv      $a1, $v0, $a1
    /* 98E1C 8018AA1C D729060C */  jal        func_8018A75C
    /* 98E20 8018AA20 01000424 */   addiu     $a0, $zero, 0x1
    /* 98E24 8018AA24 03000424 */  addiu      $a0, $zero, 0x3
    /* 98E28 8018AA28 21282002 */  addu       $a1, $s1, $zero
    /* 98E2C 8018AA2C D729060C */  jal        func_8018A75C
    /* 98E30 8018AA30 21300002 */   addu      $a2, $s0, $zero
    /* 98E34 8018AA34 932A0608 */  j          .L8018AA4C
    /* 98E38 8018AA38 21100002 */   addu      $v0, $s0, $zero
  .L8018AA3C:
    /* 98E3C 8018AA3C 21202002 */  addu       $a0, $s1, $zero
    /* 98E40 8018AA40 0E29060C */  jal        func_8018A438
    /* 98E44 8018AA44 21280002 */   addu      $a1, $s0, $zero
    /* 98E48 8018AA48 21100002 */  addu       $v0, $s0, $zero
  .L8018AA4C:
    /* 98E4C 8018AA4C 1800BF8F */  lw         $ra, 0x18($sp)
    /* 98E50 8018AA50 1400B18F */  lw         $s1, 0x14($sp)
    /* 98E54 8018AA54 1000B08F */  lw         $s0, 0x10($sp)
    /* 98E58 8018AA58 0800E003 */  jr         $ra
    /* 98E5C 8018AA5C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018A9DC
