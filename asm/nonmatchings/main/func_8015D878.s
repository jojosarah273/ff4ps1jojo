nonmatching func_8015D878, 0x78

glabel func_8015D878
    /* 6BC78 8015D878 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6BC7C 8015D87C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6BC80 8015D880 9CDC030C */  jal        func_800F7270
    /* 6BC84 8015D884 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6BC88 8015D888 DADA030C */  jal        func_800F6B68
    /* 6BC8C 8015D88C 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6BC90 8015D890 92D0030C */  jal        func_800F4248
    /* 6BC94 8015D894 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6BC98 8015D898 DAE1030C */  jal        func_800F8768
    /* 6BC9C 8015D89C 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6BCA0 8015D8A0 8CD9030C */  jal        func_800F6630
    /* 6BCA4 8015D8A4 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6BCA8 8015D8A8 50D4030C */  jal        func_800F5140
    /* 6BCAC 8015D8AC 00000000 */   nop
    /* 6BCB0 8015D8B0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6BCB4 8015D8B4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6BCB8 8015D8B8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6BCBC 8015D8BC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6BCC0 8015D8C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BCC4 8015D8C4 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6BCC8 8015D8C8 DADA030C */  jal        func_800F6B68
    /* 6BCCC 8015D8CC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6BCD0 8015D8D0 92D0030C */  jal        func_800F4248
    /* 6BCD4 8015D8D4 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 6BCD8 8015D8D8 DAE1030C */  jal        func_800F8768
    /* 6BCDC 8015D8DC EB290424 */   addiu     $a0, $zero, 0x29EB
    /* 6BCE0 8015D8E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6BCE4 8015D8E4 00000000 */  nop
    /* 6BCE8 8015D8E8 0800E003 */  jr         $ra
    /* 6BCEC 8015D8EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D878
