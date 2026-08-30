nonmatching func_8015D8F0, 0xB8

glabel func_8015D8F0
    /* 6BCF0 8015D8F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6BCF4 8015D8F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6BCF8 8015D8F8 9CDC030C */  jal        func_800F7270
    /* 6BCFC 8015D8FC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6BD00 8015D900 DADA030C */  jal        func_800F6B68
    /* 6BD04 8015D904 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6BD08 8015D908 92D0030C */  jal        func_800F4248
    /* 6BD0C 8015D90C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6BD10 8015D910 48D0030C */  jal        func_800F4120
    /* 6BD14 8015D914 02020424 */   addiu     $a0, $zero, 0x202
    /* 6BD18 8015D918 1F004014 */  bnez       $v0, .L8015D998
    /* 6BD1C 8015D91C 00000000 */   nop
    /* 6BD20 8015D920 DADA030C */  jal        func_800F6B68
    /* 6BD24 8015D924 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6BD28 8015D928 0DD9030C */  jal        func_800F6434
    /* 6BD2C 8015D92C 80000424 */   addiu     $a0, $zero, 0x80
    /* 6BD30 8015D930 19004014 */  bnez       $v0, .L8015D998
    /* 6BD34 8015D934 00000000 */   nop
    /* 6BD38 8015D938 9CDC030C */  jal        func_800F7270
    /* 6BD3C 8015D93C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6BD40 8015D940 DADA030C */  jal        func_800F6B68
    /* 6BD44 8015D944 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6BD48 8015D948 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6BD4C 8015D94C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6BD50 8015D950 00000000 */  nop
    /* 6BD54 8015D954 00006290 */  lbu        $v0, 0x0($v1)
    /* 6BD58 8015D958 03200424 */  addiu      $a0, $zero, 0x2003
    /* 6BD5C 8015D95C 80004234 */  ori        $v0, $v0, 0x80
    /* 6BD60 8015D960 DAE1030C */  jal        func_800F8768
    /* 6BD64 8015D964 000062A0 */   sb        $v0, 0x0($v1)
    /* 6BD68 8015D968 8CD9030C */  jal        func_800F6630
    /* 6BD6C 8015D96C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6BD70 8015D970 50D4030C */  jal        func_800F5140
    /* 6BD74 8015D974 00000000 */   nop
    /* 6BD78 8015D978 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6BD7C 8015D97C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6BD80 8015D980 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6BD84 8015D984 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6BD88 8015D988 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BD8C 8015D98C EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6BD90 8015D990 3BE4030C */  jal        func_800F90EC
    /* 6BD94 8015D994 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015D998:
    /* 6BD98 8015D998 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6BD9C 8015D99C 00000000 */  nop
    /* 6BDA0 8015D9A0 0800E003 */  jr         $ra
    /* 6BDA4 8015D9A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D8F0
