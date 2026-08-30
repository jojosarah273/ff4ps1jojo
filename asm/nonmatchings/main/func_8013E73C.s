nonmatching func_8013E73C, 0x248

glabel func_8013E73C
    /* 4CB3C 8013E73C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CB40 8013E740 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4CB44 8013E744 59D9030C */  jal        func_800F6564
    /* 4CB48 8013E748 58F40434 */   ori       $a0, $zero, 0xF458
    /* 4CB4C 8013E74C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CB50 8013E750 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CB54 8013E754 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4CB58 8013E758 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4CB5C 8013E75C 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CB60 8013E760 CCE4030C */  jal        func_800F9330
    /* 4CB64 8013E764 000082A4 */   sh        $v0, 0x0($a0)
    /* 4CB68 8013E768 1300043C */  lui        $a0, (0x13F900 >> 16)
    /* 4CB6C 8013E76C 1ADB030C */  jal        func_800F6C68
    /* 4CB70 8013E770 00F98434 */   ori       $a0, $a0, (0x13F900 & 0xFFFF)
    /* 4CB74 8013E774 93E0030C */  jal        func_800F824C
    /* 4CB78 8013E778 04000424 */   addiu     $a0, $zero, 0x4
    /* 4CB7C 8013E77C 74F9040C */  jal        func_8013E5D0
    /* 4CB80 8013E780 00000000 */   nop
    /* 4CB84 8013E784 68E5030C */  jal        func_800F95A0
    /* 4CB88 8013E788 00000000 */   nop
    /* 4CB8C 8013E78C CCE4030C */  jal        func_800F9330
    /* 4CB90 8013E790 00000000 */   nop
    /* 4CB94 8013E794 1600043C */  lui        $a0, (0x16FB00 >> 16)
    /* 4CB98 8013E798 1ADB030C */  jal        func_800F6C68
    /* 4CB9C 8013E79C 00FB8434 */   ori       $a0, $a0, (0x16FB00 & 0xFFFF)
    /* 4CBA0 8013E7A0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CBA4 8013E7A4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CBA8 8013E7A8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4CBAC 8013E7AC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4CBB0 8013E7B0 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CBB4 8013E7B4 C7E5030C */  jal        func_800F971C
    /* 4CBB8 8013E7B8 000082A4 */   sh        $v0, 0x0($a0)
    /* 4CBBC 8013E7BC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CBC0 8013E7C0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CBC4 8013E7C4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4CBC8 8013E7C8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4CBCC 8013E7CC 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CBD0 8013E7D0 00000000 */  nop
    /* 4CBD4 8013E7D4 000082A4 */  sh         $v0, 0x0($a0)
  .L8013E7D8:
    /* 4CBD8 8013E7D8 1600043C */  lui        $a0, (0x16FB09 >> 16)
    /* 4CBDC 8013E7DC 1ADB030C */  jal        func_800F6C68
    /* 4CBE0 8013E7E0 09FB8434 */   ori       $a0, $a0, (0x16FB09 & 0xFFFF)
    /* 4CBE4 8013E7E4 58E2030C */  jal        func_800F8960
    /* 4CBE8 8013E7E8 B0F30434 */   ori       $a0, $zero, 0xF3B0
    /* 4CBEC 8013E7EC D9D8030C */  jal        func_800F6364
    /* 4CBF0 8013E7F0 00000000 */   nop
    /* 4CBF4 8013E7F4 EFD8030C */  jal        func_800F63BC
    /* 4CBF8 8013E7F8 00000000 */   nop
    /* 4CBFC 8013E7FC A4D6030C */  jal        func_800F5A90
    /* 4CC00 8013E800 12000424 */   addiu     $a0, $zero, 0x12
    /* 4CC04 8013E804 F5D4030C */  jal        func_800F53D4
    /* 4CC08 8013E808 00000000 */   nop
    /* 4CC0C 8013E80C F2FF4010 */  beqz       $v0, .L8013E7D8
    /* 4CC10 8013E810 00000000 */   nop
    /* 4CC14 8013E814 68E5030C */  jal        func_800F95A0
    /* 4CC18 8013E818 00000000 */   nop
    /* 4CC1C 8013E81C 1600043C */  lui        $a0, (0x16FAA6 >> 16)
    /* 4CC20 8013E820 1ADB030C */  jal        func_800F6C68
    /* 4CC24 8013E824 A6FA8434 */   ori       $a0, $a0, (0x16FAA6 & 0xFFFF)
    /* 4CC28 8013E828 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CC2C 8013E82C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CC30 8013E830 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4CC34 8013E834 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4CC38 8013E838 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CC3C 8013E83C C7E5030C */  jal        func_800F971C
    /* 4CC40 8013E840 000082A4 */   sh        $v0, 0x0($a0)
    /* 4CC44 8013E844 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CC48 8013E848 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CC4C 8013E84C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4CC50 8013E850 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4CC54 8013E854 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CC58 8013E858 00000000 */  nop
    /* 4CC5C 8013E85C 000082A4 */  sh         $v0, 0x0($a0)
    /* 4CC60 8013E860 1600043C */  lui        $a0, (0x16FAAF >> 16)
  .L8013E864:
    /* 4CC64 8013E864 1ADB030C */  jal        func_800F6C68
    /* 4CC68 8013E868 AFFA8434 */   ori       $a0, $a0, (0x16FAAF & 0xFFFF)
    /* 4CC6C 8013E86C 50D4030C */  jal        func_800F5140
    /* 4CC70 8013E870 00000000 */   nop
    /* 4CC74 8013E874 CCE4030C */  jal        func_800F9330
    /* 4CC78 8013E878 00000000 */   nop
    /* 4CC7C 8013E87C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4CC80 8013E880 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4CC84 8013E884 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4CC88 8013E888 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4CC8C 8013E88C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4CC90 8013E890 B0F30434 */  ori        $a0, $zero, 0xF3B0
    /* 4CC94 8013E894 5CDB030C */  jal        func_800F6D70
    /* 4CC98 8013E898 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4CC9C 8013E89C 04D5030C */  jal        func_800F5410
    /* 4CCA0 8013E8A0 00000000 */   nop
    /* 4CCA4 8013E8A4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4CCA8 8013E8A8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4CCAC 8013E8AC 00000000 */  nop
    /* 4CCB0 8013E8B0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4CCB4 8013E8B4 59F40434 */  ori        $a0, $zero, 0xF459
    /* 4CCB8 8013E8B8 C1CE030C */  jal        func_800F3B04
    /* 4CCBC 8013E8BC 21206400 */   addu      $a0, $v1, $a0
    /* 4CCC0 8013E8C0 CECF030C */  jal        func_800F3F38
    /* 4CCC4 8013E8C4 21204000 */   addu      $a0, $v0, $zero
    /* 4CCC8 8013E8C8 58E2030C */  jal        func_800F8960
    /* 4CCCC 8013E8CC B0F30434 */   ori       $a0, $zero, 0xF3B0
    /* 4CCD0 8013E8D0 5CDB030C */  jal        func_800F6D70
    /* 4CCD4 8013E8D4 B1F30434 */   ori       $a0, $zero, 0xF3B1
    /* 4CCD8 8013E8D8 04D5030C */  jal        func_800F5410
    /* 4CCDC 8013E8DC 00000000 */   nop
    /* 4CCE0 8013E8E0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4CCE4 8013E8E4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4CCE8 8013E8E8 00000000 */  nop
    /* 4CCEC 8013E8EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4CCF0 8013E8F0 5AF40434 */  ori        $a0, $zero, 0xF45A
    /* 4CCF4 8013E8F4 C1CE030C */  jal        func_800F3B04
    /* 4CCF8 8013E8F8 21206400 */   addu      $a0, $v1, $a0
    /* 4CCFC 8013E8FC CECF030C */  jal        func_800F3F38
    /* 4CD00 8013E900 21204000 */   addu      $a0, $v0, $zero
    /* 4CD04 8013E904 58E2030C */  jal        func_800F8960
    /* 4CD08 8013E908 B1F30434 */   ori       $a0, $zero, 0xF3B1
    /* 4CD0C 8013E90C 68E5030C */  jal        func_800F95A0
    /* 4CD10 8013E910 00000000 */   nop
    /* 4CD14 8013E914 D9D8030C */  jal        func_800F6364
    /* 4CD18 8013E918 00000000 */   nop
    /* 4CD1C 8013E91C EFD8030C */  jal        func_800F63BC
    /* 4CD20 8013E920 00000000 */   nop
    /* 4CD24 8013E924 EFD8030C */  jal        func_800F63BC
    /* 4CD28 8013E928 00000000 */   nop
    /* 4CD2C 8013E92C A4D6030C */  jal        func_800F5A90
    /* 4CD30 8013E930 12000424 */   addiu     $a0, $zero, 0x12
    /* 4CD34 8013E934 F5D4030C */  jal        func_800F53D4
    /* 4CD38 8013E938 00000000 */   nop
    /* 4CD3C 8013E93C C9FF4010 */  beqz       $v0, .L8013E864
    /* 4CD40 8013E940 1600043C */   lui       $a0, (0x16FAAF >> 16)
    /* 4CD44 8013E944 90D8030C */  jal        func_800F6240
    /* 4CD48 8013E948 58F40434 */   ori       $a0, $zero, 0xF458
    /* 4CD4C 8013E94C 59D9030C */  jal        func_800F6564
    /* 4CD50 8013E950 58F40434 */   ori       $a0, $zero, 0xF458
    /* 4CD54 8013E954 5DD5030C */  jal        func_800F5574
    /* 4CD58 8013E958 09000424 */   addiu     $a0, $zero, 0x9
    /* 4CD5C 8013E95C F5D4030C */  jal        func_800F53D4
    /* 4CD60 8013E960 00000000 */   nop
    /* 4CD64 8013E964 03004010 */  beqz       $v0, .L8013E974
    /* 4CD68 8013E968 00000000 */   nop
    /* 4CD6C 8013E96C DDE3030C */  jal        func_800F8F74
    /* 4CD70 8013E970 58F40434 */   ori       $a0, $zero, 0xF458
  .L8013E974:
    /* 4CD74 8013E974 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4CD78 8013E978 00000000 */  nop
    /* 4CD7C 8013E97C 0800E003 */  jr         $ra
    /* 4CD80 8013E980 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E73C
