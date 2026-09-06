nonmatching func_8014E7C4, 0x1C0

glabel func_8014E7C4
    /* 5CBC4 8014E7C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CBC8 8014E7C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CBCC 8014E7CC 53D9030C */  jal        func_800F654C
    /* 5CBD0 8014E7D0 08000424 */   addiu     $a0, $zero, 0x8
    /* 5CBD4 8014E7D4 5A35050C */  jal        func_8014D568
    /* 5CBD8 8014E7D8 00000000 */   nop
    /* 5CBDC 8014E7DC 53D9030C */  jal        func_800F654C
    /* 5CBE0 8014E7E0 50000424 */   addiu     $a0, $zero, 0x50
    /* 5CBE4 8014E7E4 62E0030C */  jal        func_800F8188
    /* 5CBE8 8014E7E8 C2F00434 */   ori       $a0, $zero, 0xF0C2
    /* 5CBEC 8014E7EC 53D9030C */  jal        func_800F654C
    /* 5CBF0 8014E7F0 22000424 */   addiu     $a0, $zero, 0x22
    /* 5CBF4 8014E7F4 62E0030C */  jal        func_800F8188
    /* 5CBF8 8014E7F8 C3F00434 */   ori       $a0, $zero, 0xF0C3
    /* 5CBFC 8014E7FC DDE3030C */  jal        func_800F8F74
    /* 5CC00 8014E800 C6F00434 */   ori       $a0, $zero, 0xF0C6
    /* 5CC04 8014E804 53D9030C */  jal        func_800F654C
    /* 5CC08 8014E808 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5CC0C 8014E80C 62E0030C */  jal        func_800F8188
    /* 5CC10 8014E810 C7F00434 */   ori       $a0, $zero, 0xF0C7
    /* 5CC14 8014E814 53D9030C */  jal        func_800F654C
    /* 5CC18 8014E818 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 5CC1C 8014E81C 62E0030C */  jal        func_800F8188
    /* 5CC20 8014E820 C8F00434 */   ori       $a0, $zero, 0xF0C8
    /* 5CC24 8014E824 8CD9030C */  jal        func_800F6630
    /* 5CC28 8014E828 49000424 */   addiu     $a0, $zero, 0x49
    /* 5CC2C 8014E82C 50D4030C */  jal        func_800F5140
    /* 5CC30 8014E830 00000000 */   nop
    /* 5CC34 8014E834 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5CC38 8014E838 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5CC3C 8014E83C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5CC40 8014E840 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5CC44 8014E844 00004394 */  lhu        $v1, 0x0($v0)
    /* 5CC48 8014E848 A1F20434 */  ori        $a0, $zero, 0xF2A1
    /* 5CC4C 8014E84C DADA030C */  jal        func_800F6B68
    /* 5CC50 8014E850 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5CC54 8014E854 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5CC58 8014E858 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5CC5C 8014E85C 00000000 */  nop
    /* 5CC60 8014E860 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CC64 8014E864 21200000 */  addu       $a0, $zero, $zero
    /* 5CC68 8014E868 80100200 */  sll        $v0, $v0, 2
    /* 5CC6C 8014E86C 93E0030C */  jal        func_800F824C
    /* 5CC70 8014E870 000062A0 */   sb        $v0, 0x0($v1)
    /* 5CC74 8014E874 50D4030C */  jal        func_800F5140
    /* 5CC78 8014E878 00000000 */   nop
    /* 5CC7C 8014E87C 613A050C */  jal        func_8014E984
    /* 5CC80 8014E880 00000000 */   nop
    /* 5CC84 8014E884 20D5030C */  jal        func_800F5480
    /* 5CC88 8014E888 00000000 */   nop
    /* 5CC8C 8014E88C 0FCF030C */  jal        func_800F3C3C
    /* 5CC90 8014E890 21200000 */   addu      $a0, $zero, $zero
    /* 5CC94 8014E894 D2DF030C */  jal        func_800F7F48
    /* 5CC98 8014E898 21204000 */   addu      $a0, $v0, $zero
    /* 5CC9C 8014E89C 16E0030C */  jal        func_800F8058
    /* 5CCA0 8014E8A0 08000424 */   addiu     $a0, $zero, 0x8
    /* 5CCA4 8014E8A4 04D5030C */  jal        func_800F5410
    /* 5CCA8 8014E8A8 00000000 */   nop
    /* 5CCAC 8014E8AC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5CCB0 8014E8B0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5CCB4 8014E8B4 00000000 */  nop
    /* 5CCB8 8014E8B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 5CCBC 8014E8BC 43F00434 */  ori        $a0, $zero, 0xF043
    /* 5CCC0 8014E8C0 C1CE030C */  jal        func_800F3B04
    /* 5CCC4 8014E8C4 21206400 */   addu      $a0, $v1, $a0
    /* 5CCC8 8014E8C8 CECF030C */  jal        func_800F3F38
    /* 5CCCC 8014E8CC 21204000 */   addu      $a0, $v0, $zero
    /* 5CCD0 8014E8D0 62E0030C */  jal        func_800F8188
    /* 5CCD4 8014E8D4 C4F00434 */   ori       $a0, $zero, 0xF0C4
    /* 5CCD8 8014E8D8 DADA030C */  jal        func_800F6B68
    /* 5CCDC 8014E8DC A2F20434 */   ori       $a0, $zero, 0xF2A2
    /* 5CCE0 8014E8E0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5CCE4 8014E8E4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5CCE8 8014E8E8 00000000 */  nop
    /* 5CCEC 8014E8EC 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CCF0 8014E8F0 21200000 */  addu       $a0, $zero, $zero
    /* 5CCF4 8014E8F4 80100200 */  sll        $v0, $v0, 2
    /* 5CCF8 8014E8F8 93E0030C */  jal        func_800F824C
    /* 5CCFC 8014E8FC 000062A0 */   sb        $v0, 0x0($v1)
    /* 5CD00 8014E900 50D4030C */  jal        func_800F5140
    /* 5CD04 8014E904 00000000 */   nop
    /* 5CD08 8014E908 613A050C */  jal        func_8014E984
    /* 5CD0C 8014E90C 00000000 */   nop
    /* 5CD10 8014E910 20D5030C */  jal        func_800F5480
    /* 5CD14 8014E914 00000000 */   nop
    /* 5CD18 8014E918 0FCF030C */  jal        func_800F3C3C
    /* 5CD1C 8014E91C 21200000 */   addu      $a0, $zero, $zero
    /* 5CD20 8014E920 D2DF030C */  jal        func_800F7F48
    /* 5CD24 8014E924 21204000 */   addu      $a0, $v0, $zero
    /* 5CD28 8014E928 16E0030C */  jal        func_800F8058
    /* 5CD2C 8014E92C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5CD30 8014E930 04D5030C */  jal        func_800F5410
    /* 5CD34 8014E934 00000000 */   nop
    /* 5CD38 8014E938 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5CD3C 8014E93C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5CD40 8014E940 00000000 */  nop
    /* 5CD44 8014E944 00004394 */  lhu        $v1, 0x0($v0)
    /* 5CD48 8014E948 44F00434 */  ori        $a0, $zero, 0xF044
    /* 5CD4C 8014E94C C1CE030C */  jal        func_800F3B04
    /* 5CD50 8014E950 21206400 */   addu      $a0, $v1, $a0
    /* 5CD54 8014E954 CECF030C */  jal        func_800F3F38
    /* 5CD58 8014E958 21204000 */   addu      $a0, $v0, $zero
    /* 5CD5C 8014E95C 62E0030C */  jal        func_800F8188
    /* 5CD60 8014E960 C5F00434 */   ori       $a0, $zero, 0xF0C5
    /* 5CD64 8014E964 53D9030C */  jal        func_800F654C
    /* 5CD68 8014E968 01000424 */   addiu     $a0, $zero, 0x1
    /* 5CD6C 8014E96C 62E0030C */  jal        func_800F8188
    /* 5CD70 8014E970 C1F00434 */   ori       $a0, $zero, 0xF0C1
    /* 5CD74 8014E974 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CD78 8014E978 00000000 */  nop
    /* 5CD7C 8014E97C 0800E003 */  jr         $ra
    /* 5CD80 8014E980 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E7C4
