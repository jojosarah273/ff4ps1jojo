nonmatching func_8016E870, 0x12C

glabel func_8016E870
    /* 7CC70 8016E870 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CC74 8016E874 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CC78 8016E878 40DD030C */  jal        func_800F7500
    /* 7CC7C 8016E87C 05000424 */   addiu     $a0, $zero, 0x5
    /* 7CC80 8016E880 C7E5030C */  jal        func_800F971C
    /* 7CC84 8016E884 00000000 */   nop
    /* 7CC88 8016E888 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7CC8C 8016E88C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7CC90 8016E890 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7CC94 8016E894 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7CC98 8016E898 00004394 */  lhu        $v1, 0x0($v0)
    /* 7CC9C 8016E89C 00000000 */  nop
    /* 7CCA0 8016E8A0 000083A4 */  sh         $v1, 0x0($a0)
  .L8016E8A4:
    /* 7CCA4 8016E8A4 DADA030C */  jal        func_800F6B68
    /* 7CCA8 8016E8A8 00200424 */   addiu     $a0, $zero, 0x2000
    /* 7CCAC 8016E8AC 92D0030C */  jal        func_800F4248
    /* 7CCB0 8016E8B0 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 7CCB4 8016E8B4 5DD5030C */  jal        func_800F5574
    /* 7CCB8 8016E8B8 13000424 */   addiu     $a0, $zero, 0x13
    /* 7CCBC 8016E8BC F5D4030C */  jal        func_800F53D4
    /* 7CCC0 8016E8C0 00000000 */   nop
    /* 7CCC4 8016E8C4 17004010 */  beqz       $v0, .L8016E924
    /* 7CCC8 8016E8C8 00000000 */   nop
    /* 7CCCC 8016E8CC DADA030C */  jal        func_800F6B68
    /* 7CCD0 8016E8D0 03200424 */   addiu     $a0, $zero, 0x2003
    /* 7CCD4 8016E8D4 92D0030C */  jal        func_800F4248
    /* 7CCD8 8016E8D8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 7CCDC 8016E8DC 48D0030C */  jal        func_800F4120
    /* 7CCE0 8016E8E0 02020424 */   addiu     $a0, $zero, 0x202
    /* 7CCE4 8016E8E4 09004014 */  bnez       $v0, .L8016E90C
    /* 7CCE8 8016E8E8 00000000 */   nop
    /* 7CCEC 8016E8EC DADA030C */  jal        func_800F6B68
    /* 7CCF0 8016E8F0 04200424 */   addiu     $a0, $zero, 0x2004
    /* 7CCF4 8016E8F4 92D0030C */  jal        func_800F4248
    /* 7CCF8 8016E8F8 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7CCFC 8016E8FC 48D0030C */  jal        func_800F4120
    /* 7CD00 8016E900 02000424 */   addiu     $a0, $zero, 0x2
    /* 7CD04 8016E904 21004014 */  bnez       $v0, .L8016E98C
    /* 7CD08 8016E908 00000000 */   nop
  .L8016E90C:
    /* 7CD0C 8016E90C 53D9030C */  jal        func_800F654C
    /* 7CD10 8016E910 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 7CD14 8016E914 62E0030C */  jal        func_800F8188
    /* 7CD18 8016E918 7C350424 */   addiu     $a0, $zero, 0x357C
    /* 7CD1C 8016E91C 63BA0508 */  j          .L8016E98C
    /* 7CD20 8016E920 00000000 */   nop
  .L8016E924:
    /* 7CD24 8016E924 91E5030C */  jal        func_800F9644
    /* 7CD28 8016E928 20000424 */   addiu     $a0, $zero, 0x20
    /* 7CD2C 8016E92C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 7CD30 8016E930 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7CD34 8016E934 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7CD38 8016E938 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7CD3C 8016E93C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7CD40 8016E940 04D5030C */  jal        func_800F5410
    /* 7CD44 8016E944 000082A4 */   sh        $v0, 0x0($a0)
    /* 7CD48 8016E948 19D0030C */  jal        func_800F4064
    /* 7CD4C 8016E94C 80000424 */   addiu     $a0, $zero, 0x80
    /* 7CD50 8016E950 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7CD54 8016E954 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7CD58 8016E958 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7CD5C 8016E95C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7CD60 8016E960 00006294 */  lhu        $v0, 0x0($v1)
    /* 7CD64 8016E964 C7E5030C */  jal        func_800F971C
    /* 7CD68 8016E968 000082A4 */   sh        $v0, 0x0($a0)
    /* 7CD6C 8016E96C 98E5030C */  jal        func_800F9660
    /* 7CD70 8016E970 20000424 */   addiu     $a0, $zero, 0x20
    /* 7CD74 8016E974 A8D7030C */  jal        func_800F5EA0
    /* 7CD78 8016E978 00000000 */   nop
    /* 7CD7C 8016E97C 19D7030C */  jal        func_800F5C64
    /* 7CD80 8016E980 02020424 */   addiu     $a0, $zero, 0x202
    /* 7CD84 8016E984 C7FF4014 */  bnez       $v0, .L8016E8A4
    /* 7CD88 8016E988 00000000 */   nop
  .L8016E98C:
    /* 7CD8C 8016E98C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CD90 8016E990 00000000 */  nop
    /* 7CD94 8016E994 0800E003 */  jr         $ra
    /* 7CD98 8016E998 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E870
