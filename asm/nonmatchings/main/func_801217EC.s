nonmatching func_801217EC, 0x100

glabel func_801217EC
    /* 2FBEC 801217EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FBF0 801217F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FBF4 801217F4 F0D4030C */  jal        func_800F53C0
    /* 2FBF8 801217F8 00000000 */   nop
    /* 2FBFC 801217FC 07004010 */  beqz       $v0, .L8012181C
    /* 2FC00 80121800 00000000 */   nop
    /* 2FC04 80121804 9B87040C */  jal        func_80121E6C
    /* 2FC08 80121808 00000000 */   nop
    /* 2FC0C 8012180C 68D7030C */  jal        func_800F5DA0
    /* 2FC10 80121810 64000424 */   addiu     $a0, $zero, 0x64
    /* 2FC14 80121814 0B860408 */  j          .L8012182C
    /* 2FC18 80121818 00000000 */   nop
  .L8012181C:
    /* 2FC1C 8012181C D987040C */  jal        func_80121F64
    /* 2FC20 80121820 00000000 */   nop
    /* 2FC24 80121824 AFD8030C */  jal        func_800F62BC
    /* 2FC28 80121828 64000424 */   addiu     $a0, $zero, 0x64
  .L8012182C:
    /* 2FC2C 8012182C 0387040C */  jal        func_80121C0C
    /* 2FC30 80121830 00000000 */   nop
    /* 2FC34 80121834 8CD9030C */  jal        func_800F6630
    /* 2FC38 80121838 65000424 */   addiu     $a0, $zero, 0x65
    /* 2FC3C 8012183C 20D5030C */  jal        func_800F5480
    /* 2FC40 80121840 00000000 */   nop
    /* 2FC44 80121844 0FCF030C */  jal        func_800F3C3C
    /* 2FC48 80121848 63000424 */   addiu     $a0, $zero, 0x63
    /* 2FC4C 8012184C D2DF030C */  jal        func_800F7F48
    /* 2FC50 80121850 21204000 */   addu      $a0, $v0, $zero
    /* 2FC54 80121854 33D7030C */  jal        func_800F5CCC
    /* 2FC58 80121858 00000000 */   nop
    /* 2FC5C 8012185C 93E0030C */  jal        func_800F824C
    /* 2FC60 80121860 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FC64 80121864 53D9030C */  jal        func_800F654C
    /* 2FC68 80121868 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 2FC6C 8012186C DAE1030C */  jal        func_800F8768
    /* 2FC70 80121870 21200000 */   addu      $a0, $zero, $zero
    /* 2FC74 80121874 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FC78 80121878 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FC7C 8012187C 00000000 */  nop
    /* 2FC80 80121880 00006294 */  lhu        $v0, 0x0($v1)
    /* 2FC84 80121884 F8000424 */  addiu      $a0, $zero, 0xF8
    /* 2FC88 80121888 02004224 */  addiu      $v0, $v0, 0x2
    /* 2FC8C 8012188C 53D9030C */  jal        func_800F654C
    /* 2FC90 80121890 000062A4 */   sh        $v0, 0x0($v1)
  .L80121894:
    /* 2FC94 80121894 DAE1030C */  jal        func_800F8768
    /* 2FC98 80121898 21200000 */   addu      $a0, $zero, $zero
    /* 2FC9C 8012189C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FCA0 801218A0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FCA4 801218A4 00000000 */  nop
    /* 2FCA8 801218A8 00006294 */  lhu        $v0, 0x0($v1)
    /* 2FCAC 801218AC 1D000424 */  addiu      $a0, $zero, 0x1D
    /* 2FCB0 801218B0 02004224 */  addiu      $v0, $v0, 0x2
    /* 2FCB4 801218B4 68D7030C */  jal        func_800F5DA0
    /* 2FCB8 801218B8 000062A4 */   sh        $v0, 0x0($v1)
    /* 2FCBC 801218BC E3D6030C */  jal        func_800F5B8C
    /* 2FCC0 801218C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 2FCC4 801218C4 F3FF4014 */  bnez       $v0, .L80121894
    /* 2FCC8 801218C8 00000000 */   nop
    /* 2FCCC 801218CC 53D9030C */  jal        func_800F654C
    /* 2FCD0 801218D0 F9000424 */   addiu     $a0, $zero, 0xF9
    /* 2FCD4 801218D4 DAE1030C */  jal        func_800F8768
    /* 2FCD8 801218D8 21200000 */   addu      $a0, $zero, $zero
    /* 2FCDC 801218DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FCE0 801218E0 00000000 */  nop
    /* 2FCE4 801218E4 0800E003 */  jr         $ra
    /* 2FCE8 801218E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801217EC
