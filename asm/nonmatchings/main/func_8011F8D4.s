nonmatching func_8011F8D4, 0xF0

glabel func_8011F8D4
    /* 2DCD4 8011F8D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DCD8 8011F8D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DCDC 8011F8DC 9BE4030C */  jal        func_800F926C
    /* 2DCE0 8011F8E0 00000000 */   nop
    /* 2DCE4 8011F8E4 A6E4030C */  jal        func_800F9298
    /* 2DCE8 8011F8E8 00000000 */   nop
    /* 2DCEC 8011F8EC CCE4030C */  jal        func_800F9330
    /* 2DCF0 8011F8F0 00000000 */   nop
    /* 2DCF4 8011F8F4 CCE4030C */  jal        func_800F9330
    /* 2DCF8 8011F8F8 00000000 */   nop
    /* 2DCFC 8011F8FC 77DC030C */  jal        func_800F71DC
    /* 2DD00 8011F900 00010424 */   addiu     $a0, $zero, 0x100
    /* 2DD04 8011F904 CCE4030C */  jal        func_800F9330
    /* 2DD08 8011F908 00000000 */   nop
    /* 2DD0C 8011F90C 2EE5030C */  jal        func_800F94B8
    /* 2DD10 8011F910 00000000 */   nop
    /* 2DD14 8011F914 68E5030C */  jal        func_800F95A0
    /* 2DD18 8011F918 00000000 */   nop
    /* 2DD1C 8011F91C 1A80023C */  lui        $v0, %hi(D_8019ED4C)
    /* 2DD20 8011F920 4CED428C */  lw         $v0, %lo(D_8019ED4C)($v0)
    /* 2DD24 8011F924 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 2DD28 8011F928 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DD2C 8011F92C 01000224 */  addiu      $v0, $zero, 0x1
    /* 2DD30 8011F930 21186400 */  addu       $v1, $v1, $a0
    /* 2DD34 8011F934 000062A0 */  sb         $v0, %lo(D_800D0000)($v1)
    /* 2DD38 8011F938 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 2DD3C 8011F93C 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 2DD40 8011F940 00000000 */  nop
    /* 2DD44 8011F944 00008294 */  lhu        $v0, 0x0($a0)
    /* 2DD48 8011F948 00000000 */  nop
    /* 2DD4C 8011F94C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 2DD50 8011F950 12E5030C */  jal        func_800F9448
    /* 2DD54 8011F954 000082A4 */   sh        $v0, 0x0($a0)
    /* 2DD58 8011F958 91E5030C */  jal        func_800F9644
    /* 2DD5C 8011F95C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2DD60 8011F960 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2DD64 8011F964 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2DD68 8011F968 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2DD6C 8011F96C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2DD70 8011F970 00006294 */  lhu        $v0, 0x0($v1)
    /* 2DD74 8011F974 04D5030C */  jal        func_800F5410
    /* 2DD78 8011F978 000082A4 */   sh        $v0, 0x0($a0)
    /* 2DD7C 8011F97C 0FCF030C */  jal        func_800F3C3C
    /* 2DD80 8011F980 29000424 */   addiu     $a0, $zero, 0x29
    /* 2DD84 8011F984 E5CF030C */  jal        func_800F3F94
    /* 2DD88 8011F988 21204000 */   addu      $a0, $v0, $zero
    /* 2DD8C 8011F98C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2DD90 8011F990 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2DD94 8011F994 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2DD98 8011F998 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2DD9C 8011F99C 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DDA0 8011F9A0 20000424 */  addiu      $a0, $zero, 0x20
    /* 2DDA4 8011F9A4 98E5030C */  jal        func_800F9660
    /* 2DDA8 8011F9A8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2DDAC 8011F9AC 4D7F040C */  jal        func_8011FD34
    /* 2DDB0 8011F9B0 00000000 */   nop
    /* 2DDB4 8011F9B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DDB8 8011F9B8 00000000 */  nop
    /* 2DDBC 8011F9BC 0800E003 */  jr         $ra
    /* 2DDC0 8011F9C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F8D4
