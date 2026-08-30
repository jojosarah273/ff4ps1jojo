nonmatching func_8010E878, 0x114

glabel func_8010E878
    /* 1CC78 8010E878 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1CC7C 8010E87C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1CC80 8010E880 D00F040C */  jal        func_80103F40
    /* 1CC84 8010E884 00000000 */   nop
    /* 1CC88 8010E888 40DD030C */  jal        func_800F7500
    /* 1CC8C 8010E88C 10000424 */   addiu     $a0, $zero, 0x10
    /* 1CC90 8010E890 77DC030C */  jal        func_800F71DC
    /* 1CC94 8010E894 21200000 */   addu      $a0, $zero, $zero
  .L8010E898:
    /* 1CC98 8010E898 7536040C */  jal        func_8010D9D4
    /* 1CC9C 8010E89C 00000000 */   nop
    /* 1CCA0 8010E8A0 19DE030C */  jal        func_800F7864
    /* 1CCA4 8010E8A4 00000000 */   nop
    /* 1CCA8 8010E8A8 04D5030C */  jal        func_800F5410
    /* 1CCAC 8010E8AC 00000000 */   nop
    /* 1CCB0 8010E8B0 02D0030C */  jal        func_800F4008
    /* 1CCB4 8010E8B4 40000424 */   addiu     $a0, $zero, 0x40
    /* 1CCB8 8010E8B8 58E2030C */  jal        func_800F8960
    /* 1CCBC 8010E8BC 00030424 */   addiu     $a0, $zero, 0x300
    /* 1CCC0 8010E8C0 7536040C */  jal        func_8010D9D4
    /* 1CCC4 8010E8C4 00000000 */   nop
    /* 1CCC8 8010E8C8 19DE030C */  jal        func_800F7864
    /* 1CCCC 8010E8CC 00000000 */   nop
    /* 1CCD0 8010E8D0 04D5030C */  jal        func_800F5410
    /* 1CCD4 8010E8D4 00000000 */   nop
    /* 1CCD8 8010E8D8 02D0030C */  jal        func_800F4008
    /* 1CCDC 8010E8DC 40000424 */   addiu     $a0, $zero, 0x40
    /* 1CCE0 8010E8E0 58E2030C */  jal        func_800F8960
    /* 1CCE4 8010E8E4 01030424 */   addiu     $a0, $zero, 0x301
    /* 1CCE8 8010E8E8 53D9030C */  jal        func_800F654C
    /* 1CCEC 8010E8EC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1CCF0 8010E8F0 58E2030C */  jal        func_800F8960
    /* 1CCF4 8010E8F4 02030424 */   addiu     $a0, $zero, 0x302
    /* 1CCF8 8010E8F8 7536040C */  jal        func_8010D9D4
    /* 1CCFC 8010E8FC 00000000 */   nop
    /* 1CD00 8010E900 92D0030C */  jal        func_800F4248
    /* 1CD04 8010E904 07000424 */   addiu     $a0, $zero, 0x7
    /* 1CD08 8010E908 50D4030C */  jal        func_800F5140
    /* 1CD0C 8010E90C 00000000 */   nop
    /* 1CD10 8010E910 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1CD14 8010E914 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1CD18 8010E918 00000000 */  nop
    /* 1CD1C 8010E91C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1CD20 8010E920 03030424 */  addiu      $a0, $zero, 0x303
    /* 1CD24 8010E924 01004234 */  ori        $v0, $v0, 0x1
    /* 1CD28 8010E928 58E2030C */  jal        func_800F8960
    /* 1CD2C 8010E92C 000062A0 */   sb        $v0, 0x0($v1)
    /* 1CD30 8010E930 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1CD34 8010E934 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1CD38 8010E938 00000000 */  nop
    /* 1CD3C 8010E93C 00006294 */  lhu        $v0, 0x0($v1)
    /* 1CD40 8010E940 00000000 */  nop
    /* 1CD44 8010E944 02004224 */  addiu      $v0, $v0, 0x2
    /* 1CD48 8010E948 000062A4 */  sh         $v0, 0x0($v1)
    /* 1CD4C 8010E94C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 1CD50 8010E950 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 1CD54 8010E954 00000000 */  nop
    /* 1CD58 8010E958 0000A294 */  lhu        $v0, 0x0($a1)
    /* 1CD5C 8010E95C 00020424 */  addiu      $a0, $zero, 0x200
    /* 1CD60 8010E960 04004224 */  addiu      $v0, $v0, 0x4
    /* 1CD64 8010E964 A4D6030C */  jal        func_800F5A90
    /* 1CD68 8010E968 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 1CD6C 8010E96C F5D4030C */  jal        func_800F53D4
    /* 1CD70 8010E970 00000000 */   nop
    /* 1CD74 8010E974 C8FF4010 */  beqz       $v0, .L8010E898
    /* 1CD78 8010E978 00000000 */   nop
    /* 1CD7C 8010E97C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1CD80 8010E980 00000000 */  nop
    /* 1CD84 8010E984 0800E003 */  jr         $ra
    /* 1CD88 8010E988 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E878
