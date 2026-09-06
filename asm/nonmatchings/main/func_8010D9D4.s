nonmatching func_8010D9D4, 0xB4

glabel func_8010D9D4
    /* 1BDD4 8010D9D4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1BDD8 8010D9D8 21200000 */  addu       $a0, $zero, $zero
    /* 1BDDC 8010D9DC 1800BFAF */  sw         $ra, 0x18($sp)
    /* 1BDE0 8010D9E0 1400B1AF */  sw         $s1, 0x14($sp)
    /* 1BDE4 8010D9E4 0FCF030C */  jal        func_800F3C3C
    /* 1BDE8 8010D9E8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 1BDEC 8010D9EC 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* 1BDF0 8010D9F0 00EE8434 */  ori        $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 1BDF4 8010D9F4 21884000 */  addu       $s1, $v0, $zero
    /* 1BDF8 8010D9F8 E7CE030C */  jal        func_800F3B9C
    /* 1BDFC 8010D9FC 21280000 */   addu      $a1, $zero, $zero
    /* 1BE00 8010DA00 CCE4030C */  jal        func_800F9330
    /* 1BE04 8010DA04 21804000 */   addu      $s0, $v0, $zero
    /* 1BE08 8010DA08 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1BE0C 8010DA0C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1BE10 8010DA10 78002292 */  lbu        $v0, 0x78($s1)
    /* 1BE14 8010DA14 00000000 */  nop
    /* 1BE18 8010DA18 000062A0 */  sb         $v0, 0x0($v1)
    /* 1BE1C 8010DA1C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1BE20 8010DA20 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1BE24 8010DA24 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1BE28 8010DA28 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1BE2C 8010DA2C 00008294 */  lhu        $v0, 0x0($a0)
    /* 1BE30 8010DA30 00000000 */  nop
    /* 1BE34 8010DA34 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 1BE38 8010DA38 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1BE3C 8010DA3C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1BE40 8010DA40 00000000 */  nop
    /* 1BE44 8010DA44 00006294 */  lhu        $v0, 0x0($v1)
    /* 1BE48 8010DA48 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 1BE4C 8010DA4C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 1BE50 8010DA50 21800202 */  addu       $s0, $s0, $v0
    /* 1BE54 8010DA54 00000392 */  lbu        $v1, 0x0($s0)
    /* 1BE58 8010DA58 00000000 */  nop
    /* 1BE5C 8010DA5C 000083A0 */  sb         $v1, 0x0($a0)
    /* 1BE60 8010DA60 78002292 */  lbu        $v0, 0x78($s1)
    /* 1BE64 8010DA64 00000000 */  nop
    /* 1BE68 8010DA68 01004224 */  addiu      $v0, $v0, 0x1
    /* 1BE6C 8010DA6C 68E5030C */  jal        func_800F95A0
    /* 1BE70 8010DA70 780022A2 */   sb        $v0, 0x78($s1)
    /* 1BE74 8010DA74 1800BF8F */  lw         $ra, 0x18($sp)
    /* 1BE78 8010DA78 1400B18F */  lw         $s1, 0x14($sp)
    /* 1BE7C 8010DA7C 1000B08F */  lw         $s0, 0x10($sp)
    /* 1BE80 8010DA80 0800E003 */  jr         $ra
    /* 1BE84 8010DA84 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010D9D4
