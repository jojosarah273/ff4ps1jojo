nonmatching func_8016BE1C, 0xB8

glabel func_8016BE1C
    /* 7A21C 8016BE1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A220 8016BE20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A224 8016BE24 91E5030C */  jal        func_800F9644
    /* 7A228 8016BE28 20000424 */   addiu     $a0, $zero, 0x20
    /* 7A22C 8016BE2C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 7A230 8016BE30 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 7A234 8016BE34 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7A238 8016BE38 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7A23C 8016BE3C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7A240 8016BE40 04D5030C */  jal        func_800F5410
    /* 7A244 8016BE44 000082A4 */   sh        $v0, 0x0($a0)
    /* 7A248 8016BE48 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7A24C 8016BE4C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7A250 8016BE50 00000000 */  nop
    /* 7A254 8016BE54 00004494 */  lhu        $a0, 0x0($v0)
    /* 7A258 8016BE58 C1CE030C */  jal        func_800F3B04
    /* 7A25C 8016BE5C 00208424 */   addiu     $a0, $a0, 0x2000
    /* 7A260 8016BE60 E5CF030C */  jal        func_800F3F94
    /* 7A264 8016BE64 21204000 */   addu      $a0, $v0, $zero
    /* 7A268 8016BE68 F7E1030C */  jal        func_800F87DC
    /* 7A26C 8016BE6C 00200424 */   addiu     $a0, $zero, 0x2000
    /* 7A270 8016BE70 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 7A274 8016BE74 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 7A278 8016BE78 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7A27C 8016BE7C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7A280 8016BE80 00006294 */  lhu        $v0, 0x0($v1)
    /* 7A284 8016BE84 04D5030C */  jal        func_800F5410
    /* 7A288 8016BE88 000082A4 */   sh        $v0, 0x0($a0)
    /* 7A28C 8016BE8C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7A290 8016BE90 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7A294 8016BE94 00000000 */  nop
    /* 7A298 8016BE98 00004494 */  lhu        $a0, 0x0($v0)
    /* 7A29C 8016BE9C C1CE030C */  jal        func_800F3B04
    /* 7A2A0 8016BEA0 40208424 */   addiu     $a0, $a0, 0x2040
    /* 7A2A4 8016BEA4 E5CF030C */  jal        func_800F3F94
    /* 7A2A8 8016BEA8 21204000 */   addu      $a0, $v0, $zero
    /* 7A2AC 8016BEAC F7E1030C */  jal        func_800F87DC
    /* 7A2B0 8016BEB0 40200424 */   addiu     $a0, $zero, 0x2040
    /* 7A2B4 8016BEB4 C7E5030C */  jal        func_800F971C
    /* 7A2B8 8016BEB8 00000000 */   nop
    /* 7A2BC 8016BEBC 98E5030C */  jal        func_800F9660
    /* 7A2C0 8016BEC0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7A2C4 8016BEC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A2C8 8016BEC8 00000000 */  nop
    /* 7A2CC 8016BECC 0800E003 */  jr         $ra
    /* 7A2D0 8016BED0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BE1C
