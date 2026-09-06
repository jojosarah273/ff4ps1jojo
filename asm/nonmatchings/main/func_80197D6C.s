nonmatching func_80197D6C, 0x14

glabel func_80197D6C
    /* A616C 80197D6C 2080093C */  lui        $t1, %hi(jtbl_801FEC04)
    /* A6170 80197D70 04EC298D */  lw         $t1, %lo(jtbl_801FEC04)($t1)
    /* A6174 80197D74 00000000 */  nop
    /* A6178 80197D78 08002001 */  jr         $t1
    /* A617C 80197D7C 00000000 */   nop
endlabel func_80197D6C
