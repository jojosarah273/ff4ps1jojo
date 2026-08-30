nonmatching func_801608C4, 0xB8

glabel func_801608C4
    /* 6ECC4 801608C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6ECC8 801608C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6ECCC 801608CC 59D9030C */  jal        func_800F6564
    /* 6ECD0 801608D0 54350424 */   addiu     $a0, $zero, 0x3554
    /* 6ECD4 801608D4 0DD9030C */  jal        func_800F6434
    /* 6ECD8 801608D8 02020424 */   addiu     $a0, $zero, 0x202
    /* 6ECDC 801608DC 13004014 */  bnez       $v0, .L8016092C
    /* 6ECE0 801608E0 00000000 */   nop
    /* 6ECE4 801608E4 8CD9030C */  jal        func_800F6630
    /* 6ECE8 801608E8 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6ECEC 801608EC 92D0030C */  jal        func_800F4248
    /* 6ECF0 801608F0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6ECF4 801608F4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6ECF8 801608F8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6ECFC 801608FC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6ED00 80160900 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6ED04 80160904 00004394 */  lhu        $v1, 0x0($v0)
    /* 6ED08 80160908 50350424 */  addiu      $a0, $zero, 0x3550
    /* 6ED0C 8016090C 59D9030C */  jal        func_800F6564
    /* 6ED10 80160910 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6ED14 80160914 1D4C050C */  jal        func_80153074
    /* 6ED18 80160918 00000000 */   nop
    /* 6ED1C 8016091C 62E0030C */  jal        func_800F8188
    /* 6ED20 80160920 50350424 */   addiu     $a0, $zero, 0x3550
    /* 6ED24 80160924 5B820508 */  j          .L8016096C
    /* 6ED28 80160928 00000000 */   nop
  .L8016092C:
    /* 6ED2C 8016092C 8CD9030C */  jal        func_800F6630
    /* 6ED30 80160930 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6ED34 80160934 92D0030C */  jal        func_800F4248
    /* 6ED38 80160938 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6ED3C 8016093C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6ED40 80160940 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6ED44 80160944 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6ED48 80160948 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6ED4C 8016094C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6ED50 80160950 23350424 */  addiu      $a0, $zero, 0x3523
    /* 6ED54 80160954 59D9030C */  jal        func_800F6564
    /* 6ED58 80160958 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6ED5C 8016095C 1D4C050C */  jal        func_80153074
    /* 6ED60 80160960 00000000 */   nop
    /* 6ED64 80160964 62E0030C */  jal        func_800F8188
    /* 6ED68 80160968 23350424 */   addiu     $a0, $zero, 0x3523
  .L8016096C:
    /* 6ED6C 8016096C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6ED70 80160970 00000000 */  nop
    /* 6ED74 80160974 0800E003 */  jr         $ra
    /* 6ED78 80160978 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801608C4
