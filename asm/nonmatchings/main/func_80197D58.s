nonmatching func_80197D58, 0x14

glabel func_80197D58
    /* A6158 80197D58 2080093C */  lui        $t1, %hi(jtbl_801FEC00)
    /* A615C 80197D5C 00EC298D */  lw         $t1, %lo(jtbl_801FEC00)($t1)
    /* A6160 80197D60 00000000 */  nop
    /* A6164 80197D64 08002001 */  jr         $t1
    /* A6168 80197D68 00000000 */   nop
endlabel func_80197D58
