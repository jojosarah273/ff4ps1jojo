nonmatching func_8015E84C, 0xC4

glabel func_8015E84C
    /* 6CC4C 8015E84C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CC50 8015E850 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CC54 8015E854 53D9030C */  jal        func_800F654C
    /* 6CC58 8015E858 14000424 */   addiu     $a0, $zero, 0x14
    /* 6CC5C 8015E85C 0E43050C */  jal        func_80150C38
    /* 6CC60 8015E860 00000000 */   nop
    /* 6CC64 8015E864 77DC030C */  jal        func_800F71DC
    /* 6CC68 8015E868 80020424 */   addiu     $a0, $zero, 0x280
    /* 6CC6C 8015E86C C7E5030C */  jal        func_800F971C
    /* 6CC70 8015E870 00000000 */   nop
    /* 6CC74 8015E874 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6CC78 8015E878 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6CC7C 8015E87C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6CC80 8015E880 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6CC84 8015E884 00004394 */  lhu        $v1, 0x0($v0)
    /* 6CC88 8015E888 00000000 */  nop
    /* 6CC8C 8015E88C 000083A4 */  sh         $v1, 0x0($a0)
  .L8015E890:
    /* 6CC90 8015E890 DADA030C */  jal        func_800F6B68
    /* 6CC94 8015E894 01200424 */   addiu     $a0, $zero, 0x2001
    /* 6CC98 8015E898 92D0030C */  jal        func_800F4248
    /* 6CC9C 8015E89C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6CCA0 8015E8A0 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 6CCA4 8015E8A4 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 6CCA8 8015E8A8 00000000 */  nop
    /* 6CCAC 8015E8AC 00004494 */  lhu        $a0, 0x0($v0)
    /* 6CCB0 8015E8B0 C1CE030C */  jal        func_800F3B04
    /* 6CCB4 8015E8B4 EB358424 */   addiu     $a0, $a0, 0x35EB
    /* 6CCB8 8015E8B8 31DE030C */  jal        func_800F78C4
    /* 6CCBC 8015E8BC 21204000 */   addu      $a0, $v0, $zero
    /* 6CCC0 8015E8C0 DAE1030C */  jal        func_800F8768
    /* 6CCC4 8015E8C4 01200424 */   addiu     $a0, $zero, 0x2001
    /* 6CCC8 8015E8C8 C34C050C */  jal        func_8015330C
    /* 6CCCC 8015E8CC 00000000 */   nop
    /* 6CCD0 8015E8D0 EFD8030C */  jal        func_800F63BC
    /* 6CCD4 8015E8D4 00000000 */   nop
    /* 6CCD8 8015E8D8 A4D6030C */  jal        func_800F5A90
    /* 6CCDC 8015E8DC 08000424 */   addiu     $a0, $zero, 0x8
    /* 6CCE0 8015E8E0 F5D4030C */  jal        func_800F53D4
    /* 6CCE4 8015E8E4 00000000 */   nop
    /* 6CCE8 8015E8E8 E9FF4010 */  beqz       $v0, .L8015E890
    /* 6CCEC 8015E8EC 00000000 */   nop
    /* 6CCF0 8015E8F0 DDE3030C */  jal        func_800F8F74
    /* 6CCF4 8015E8F4 0A390424 */   addiu     $a0, $zero, 0x390A
    /* 6CCF8 8015E8F8 5561010C */  jal        func_80058554
    /* 6CCFC 8015E8FC 00000000 */   nop
    /* 6CD00 8015E900 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CD04 8015E904 00000000 */  nop
    /* 6CD08 8015E908 0800E003 */  jr         $ra
    /* 6CD0C 8015E90C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E84C
