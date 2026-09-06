nonmatching func_801208C8, 0x144

glabel func_801208C8
    /* 2ECC8 801208C8 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2ECCC 801208CC 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2ECD0 801208D0 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 2ECD4 801208D4 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 2ECD8 801208D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2ECDC 801208DC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2ECE0 801208E0 0D80103C */  lui        $s0, %hi(D_800D0000)
    /* 2ECE4 801208E4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2ECE8 801208E8 00006294 */  lhu        $v0, 0x0($v1)
    /* 2ECEC 801208EC 00008590 */  lbu        $a1, 0x0($a0)
    /* 2ECF0 801208F0 21105000 */  addu       $v0, $v0, $s0
    /* 2ECF4 801208F4 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 2ECF8 801208F8 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2ECFC 801208FC 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2ED00 80120900 00000000 */  nop
    /* 2ED04 80120904 00006294 */  lhu        $v0, 0x0($v1)
    /* 2ED08 80120908 00000000 */  nop
    /* 2ED0C 8012090C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 2ED10 80120910 CCE4030C */  jal        func_800F9330
    /* 2ED14 80120914 000062A4 */   sh        $v0, 0x0($v1)
    /* 2ED18 80120918 98E5030C */  jal        func_800F9660
    /* 2ED1C 8012091C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2ED20 80120920 E7E4030C */  jal        func_800F939C
    /* 2ED24 80120924 00000000 */   nop
    /* 2ED28 80120928 FE7C040C */  jal        func_8011F3F8
    /* 2ED2C 8012092C 00000000 */   nop
    /* 2ED30 80120930 91E5030C */  jal        func_800F9644
    /* 2ED34 80120934 20000424 */   addiu     $a0, $zero, 0x20
    /* 2ED38 80120938 04E5030C */  jal        func_800F9410
    /* 2ED3C 8012093C 00000000 */   nop
    /* 2ED40 80120940 04D5030C */  jal        func_800F5410
    /* 2ED44 80120944 00000000 */   nop
    /* 2ED48 80120948 0FCF030C */  jal        func_800F3C3C
    /* 2ED4C 8012094C 29000424 */   addiu     $a0, $zero, 0x29
    /* 2ED50 80120950 E5CF030C */  jal        func_800F3F94
    /* 2ED54 80120954 21204000 */   addu      $a0, $v0, $zero
    /* 2ED58 80120958 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2ED5C 8012095C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2ED60 80120960 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2ED64 80120964 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2ED68 80120968 00004394 */  lhu        $v1, 0x0($v0)
    /* 2ED6C 8012096C 20000424 */  addiu      $a0, $zero, 0x20
    /* 2ED70 80120970 98E5030C */  jal        func_800F9660
    /* 2ED74 80120974 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2ED78 80120978 8CD9030C */  jal        func_800F6630
    /* 2ED7C 8012097C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2ED80 80120980 58E2030C */  jal        func_800F8960
    /* 2ED84 80120984 21200000 */   addu      $a0, $zero, $zero
    /* 2ED88 80120988 8CD9030C */  jal        func_800F6630
    /* 2ED8C 8012098C 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 2ED90 80120990 58E2030C */  jal        func_800F8960
    /* 2ED94 80120994 02000424 */   addiu     $a0, $zero, 0x2
    /* 2ED98 80120998 8CD9030C */  jal        func_800F6630
    /* 2ED9C 8012099C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 2EDA0 801209A0 58E2030C */  jal        func_800F8960
    /* 2EDA4 801209A4 04000424 */   addiu     $a0, $zero, 0x4
    /* 2EDA8 801209A8 8CD9030C */  jal        func_800F6630
    /* 2EDAC 801209AC 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2EDB0 801209B0 58E2030C */  jal        func_800F8960
    /* 2EDB4 801209B4 06000424 */   addiu     $a0, $zero, 0x6
    /* 2EDB8 801209B8 68E5030C */  jal        func_800F95A0
    /* 2EDBC 801209BC 00000000 */   nop
    /* 2EDC0 801209C0 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 2EDC4 801209C4 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 2EDC8 801209C8 00000000 */  nop
    /* 2EDCC 801209CC 00008294 */  lhu        $v0, 0x0($a0)
    /* 2EDD0 801209D0 00000000 */  nop
    /* 2EDD4 801209D4 01004224 */  addiu      $v0, $v0, 0x1
    /* 2EDD8 801209D8 000082A4 */  sh         $v0, 0x0($a0)
    /* 2EDDC 801209DC 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2EDE0 801209E0 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2EDE4 801209E4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2EDE8 801209E8 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EDEC 801209EC 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 2EDF0 801209F0 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 2EDF4 801209F4 21105000 */  addu       $v0, $v0, $s0
    /* 2EDF8 801209F8 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 2EDFC 801209FC 1000B08F */  lw         $s0, 0x10($sp)
    /* 2EE00 80120A00 000083A0 */  sb         $v1, 0x0($a0)
    /* 2EE04 80120A04 0800E003 */  jr         $ra
    /* 2EE08 80120A08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801208C8
