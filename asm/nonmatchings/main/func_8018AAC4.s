nonmatching func_8018AAC4, 0x44

glabel func_8018AAC4
    /* 98EC4 8018AAC4 0700C014 */  bnez       $a2, .L8018AAE4
    /* 98EC8 8018AAC8 40100400 */   sll       $v0, $a0, 1
    /* 98ECC 8018AACC 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 98ED0 8018AAD0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 98ED4 8018AAD4 00000000 */  nop
    /* 98ED8 8018AAD8 21104300 */  addu       $v0, $v0, $v1
    /* 98EDC 8018AADC C02A0608 */  j          .L8018AB00
    /* 98EE0 8018AAE0 000045A4 */   sh        $a1, 0x0($v0)
  .L8018AAE4:
    /* 98EE4 8018AAE4 1A80043C */  lui        $a0, %hi(D_8019B114)
    /* 98EE8 8018AAE8 14B1848C */  lw         $a0, %lo(D_8019B114)($a0)
    /* 98EEC 8018AAEC 1A80033C */  lui        $v1, %hi(D_8019B13C)
    /* 98EF0 8018AAF0 3CB1638C */  lw         $v1, %lo(D_8019B13C)($v1)
    /* 98EF4 8018AAF4 21104400 */  addu       $v0, $v0, $a0
    /* 98EF8 8018AAF8 06186500 */  srlv       $v1, $a1, $v1
    /* 98EFC 8018AAFC 000043A4 */  sh         $v1, 0x0($v0)
  .L8018AB00:
    /* 98F00 8018AB00 0800E003 */  jr         $ra
    /* 98F04 8018AB04 00000000 */   nop
endlabel func_8018AAC4
