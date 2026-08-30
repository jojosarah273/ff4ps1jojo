nonmatching func_8012E844, 0x27C

glabel func_8012E844
    /* 3CC44 8012E844 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3CC48 8012E848 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3CC4C 8012E84C 5BE3030C */  jal        func_800F8D6C
    /* 3CC50 8012E850 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CC54 8012E854 5BE3030C */  jal        func_800F8D6C
    /* 3CC58 8012E858 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CC5C 8012E85C 91E5030C */  jal        func_800F9644
    /* 3CC60 8012E860 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CC64 8012E864 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3CC68 8012E868 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3CC6C 8012E86C 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 3CC70 8012E870 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 3CC74 8012E874 00006294 */  lhu        $v0, 0x0($v1)
    /* 3CC78 8012E878 40130424 */  addiu      $a0, $zero, 0x1340
    /* 3CC7C 8012E87C 70D5030C */  jal        func_800F55C0
    /* 3CC80 8012E880 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 3CC84 8012E884 F5D4030C */  jal        func_800F53D4
    /* 3CC88 8012E888 00000000 */   nop
    /* 3CC8C 8012E88C 07004010 */  beqz       $v0, .L8012E8AC
    /* 3CC90 8012E890 00000000 */   nop
    /* 3CC94 8012E894 04D5030C */  jal        func_800F5410
    /* 3CC98 8012E898 00000000 */   nop
    /* 3CC9C 8012E89C 19D0030C */  jal        func_800F4064
    /* 3CCA0 8012E8A0 FA000424 */   addiu     $a0, $zero, 0xFA
    /* 3CCA4 8012E8A4 2FBA0408 */  j          .L8012E8BC
    /* 3CCA8 8012E8A8 00000000 */   nop
  .L8012E8AC:
    /* 3CCAC 8012E8AC 04D5030C */  jal        func_800F5410
    /* 3CCB0 8012E8B0 00000000 */   nop
    /* 3CCB4 8012E8B4 19D0030C */  jal        func_800F4064
    /* 3CCB8 8012E8B8 5E000424 */   addiu     $a0, $zero, 0x5E
  .L8012E8BC:
    /* 3CCBC 8012E8BC 9DE0030C */  jal        func_800F8274
    /* 3CCC0 8012E8C0 21000424 */   addiu     $a0, $zero, 0x21
    /* 3CCC4 8012E8C4 85D8030C */  jal        func_800F6214
    /* 3CCC8 8012E8C8 00000000 */   nop
    /* 3CCCC 8012E8CC 85D8030C */  jal        func_800F6214
    /* 3CCD0 8012E8D0 00000000 */   nop
    /* 3CCD4 8012E8D4 9DE0030C */  jal        func_800F8274
    /* 3CCD8 8012E8D8 25000424 */   addiu     $a0, $zero, 0x25
    /* 3CCDC 8012E8DC 98E5030C */  jal        func_800F9660
    /* 3CCE0 8012E8E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CCE4 8012E8E4 D9D8030C */  jal        func_800F6364
    /* 3CCE8 8012E8E8 00000000 */   nop
  .L8012E8EC:
    /* 3CCEC 8012E8EC 40DD030C */  jal        func_800F7500
    /* 3CCF0 8012E8F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 3CCF4 8012E8F4 9CDC030C */  jal        func_800F7270
    /* 3CCF8 8012E8F8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CCFC 8012E8FC D9D8030C */  jal        func_800F6364
    /* 3CD00 8012E900 00000000 */   nop
    /* 3CD04 8012E904 5BE3030C */  jal        func_800F8D6C
    /* 3CD08 8012E908 23000424 */   addiu     $a0, $zero, 0x23
  .L8012E90C:
    /* 3CD0C 8012E90C 8CDB030C */  jal        func_800F6E30
    /* 3CD10 8012E910 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CD14 8012E914 0DD9030C */  jal        func_800F6434
    /* 3CD18 8012E918 02000424 */   addiu     $a0, $zero, 0x2
    /* 3CD1C 8012E91C 2B004014 */  bnez       $v0, .L8012E9CC
    /* 3CD20 8012E920 00000000 */   nop
    /* 3CD24 8012E924 9CCE030C */  jal        func_800F3A70
    /* 3CD28 8012E928 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CD2C 8012E92C C1CE030C */  jal        func_800F3B04
    /* 3CD30 8012E930 21204000 */   addu      $a0, $v0, $zero
    /* 3CD34 8012E934 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3CD38 8012E938 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3CD3C 8012E93C 00000000 */  nop
    /* 3CD40 8012E940 00006494 */  lhu        $a0, 0x0($v1)
    /* 3CD44 8012E944 35D5030C */  jal        func_800F54D4
    /* 3CD48 8012E948 21204400 */   addu      $a0, $v0, $a0
    /* 3CD4C 8012E94C F5D4030C */  jal        func_800F53D4
    /* 3CD50 8012E950 00000000 */   nop
    /* 3CD54 8012E954 1D004010 */  beqz       $v0, .L8012E9CC
    /* 3CD58 8012E958 00000000 */   nop
    /* 3CD5C 8012E95C EFD8030C */  jal        func_800F63BC
    /* 3CD60 8012E960 00000000 */   nop
    /* 3CD64 8012E964 B6D9030C */  jal        func_800F66D8
    /* 3CD68 8012E968 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CD6C 8012E96C 04D5030C */  jal        func_800F5410
    /* 3CD70 8012E970 00000000 */   nop
    /* 3CD74 8012E974 9CCE030C */  jal        func_800F3A70
    /* 3CD78 8012E978 23000424 */   addiu     $a0, $zero, 0x23
    /* 3CD7C 8012E97C C1CE030C */  jal        func_800F3B04
    /* 3CD80 8012E980 21204000 */   addu      $a0, $v0, $zero
    /* 3CD84 8012E984 CECF030C */  jal        func_800F3F38
    /* 3CD88 8012E988 21204000 */   addu      $a0, $v0, $zero
    /* 3CD8C 8012E98C 5DD5030C */  jal        func_800F5574
    /* 3CD90 8012E990 64000424 */   addiu     $a0, $zero, 0x64
    /* 3CD94 8012E994 F0D4030C */  jal        func_800F53C0
    /* 3CD98 8012E998 00000000 */   nop
    /* 3CD9C 8012E99C 0D004014 */  bnez       $v0, .L8012E9D4
    /* 3CDA0 8012E9A0 00000000 */   nop
    /* 3CDA4 8012E9A4 86E2030C */  jal        func_800F8A18
    /* 3CDA8 8012E9A8 23000424 */   addiu     $a0, $zero, 0x23
    /* 3CDAC 8012E9AC 53D9030C */  jal        func_800F654C
    /* 3CDB0 8012E9B0 21200000 */   addu      $a0, $zero, $zero
    /* 3CDB4 8012E9B4 BBE0030C */  jal        func_800F82EC
    /* 3CDB8 8012E9B8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CDBC 8012E9BC A8D7030C */  jal        func_800F5EA0
    /* 3CDC0 8012E9C0 00000000 */   nop
    /* 3CDC4 8012E9C4 BBE0030C */  jal        func_800F82EC
    /* 3CDC8 8012E9C8 1F000424 */   addiu     $a0, $zero, 0x1F
  .L8012E9CC:
    /* 3CDCC 8012E9CC EFD8030C */  jal        func_800F63BC
    /* 3CDD0 8012E9D0 00000000 */   nop
  .L8012E9D4:
    /* 3CDD4 8012E9D4 EFD8030C */  jal        func_800F63BC
    /* 3CDD8 8012E9D8 00000000 */   nop
    /* 3CDDC 8012E9DC 91E5030C */  jal        func_800F9644
    /* 3CDE0 8012E9E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CDE4 8012E9E4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3CDE8 8012E9E8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3CDEC 8012E9EC 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 3CDF0 8012E9F0 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 3CDF4 8012E9F4 00006294 */  lhu        $v0, 0x0($v1)
    /* 3CDF8 8012E9F8 04D5030C */  jal        func_800F5410
    /* 3CDFC 8012E9FC 000082A4 */   sh        $v0, 0x0($a0)
    /* 3CE00 8012EA00 0FCF030C */  jal        func_800F3C3C
    /* 3CE04 8012EA04 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CE08 8012EA08 E5CF030C */  jal        func_800F3F94
    /* 3CE0C 8012EA0C 21204000 */   addu      $a0, $v0, $zero
    /* 3CE10 8012EA10 0FCF030C */  jal        func_800F3C3C
    /* 3CE14 8012EA14 25000424 */   addiu     $a0, $zero, 0x25
    /* 3CE18 8012EA18 48D5030C */  jal        func_800F5520
    /* 3CE1C 8012EA1C 21204000 */   addu      $a0, $v0, $zero
    /* 3CE20 8012EA20 98E5030C */  jal        func_800F9660
    /* 3CE24 8012EA24 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CE28 8012EA28 F5D4030C */  jal        func_800F53D4
    /* 3CE2C 8012EA2C 00000000 */   nop
    /* 3CE30 8012EA30 B6FF4010 */  beqz       $v0, .L8012E90C
    /* 3CE34 8012EA34 00000000 */   nop
    /* 3CE38 8012EA38 91E5030C */  jal        func_800F9644
    /* 3CE3C 8012EA3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CE40 8012EA40 BCD8030C */  jal        func_800F62F0
    /* 3CE44 8012EA44 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CE48 8012EA48 BCD8030C */  jal        func_800F62F0
    /* 3CE4C 8012EA4C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CE50 8012EA50 98E5030C */  jal        func_800F9660
    /* 3CE54 8012EA54 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CE58 8012EA58 9CDC030C */  jal        func_800F7270
    /* 3CE5C 8012EA5C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3CE60 8012EA60 0FCF030C */  jal        func_800F3C3C
    /* 3CE64 8012EA64 21000424 */   addiu     $a0, $zero, 0x21
    /* 3CE68 8012EA68 ABD5030C */  jal        func_800F56AC
    /* 3CE6C 8012EA6C 21204000 */   addu      $a0, $v0, $zero
    /* 3CE70 8012EA70 F5D4030C */  jal        func_800F53D4
    /* 3CE74 8012EA74 00000000 */   nop
    /* 3CE78 8012EA78 9CFF4010 */  beqz       $v0, .L8012E8EC
    /* 3CE7C 8012EA7C 00000000 */   nop
    /* 3CE80 8012EA80 9CDC030C */  jal        func_800F7270
    /* 3CE84 8012EA84 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CE88 8012EA88 CCE4030C */  jal        func_800F9330
    /* 3CE8C 8012EA8C 00000000 */   nop
    /* 3CE90 8012EA90 B0BA040C */  jal        func_8012EAC0
    /* 3CE94 8012EA94 00000000 */   nop
    /* 3CE98 8012EA98 68E5030C */  jal        func_800F95A0
    /* 3CE9C 8012EA9C 00000000 */   nop
    /* 3CEA0 8012EAA0 5BE3030C */  jal        func_800F8D6C
    /* 3CEA4 8012EAA4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CEA8 8012EAA8 B0BA040C */  jal        func_8012EAC0
    /* 3CEAC 8012EAAC 00000000 */   nop
    /* 3CEB0 8012EAB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3CEB4 8012EAB4 00000000 */  nop
    /* 3CEB8 8012EAB8 0800E003 */  jr         $ra
    /* 3CEBC 8012EABC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E844
