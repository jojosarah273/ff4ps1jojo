nonmatching func_80187AA0, 0x4C

glabel func_80187AA0
    /* 95EA0 80187AA0 1F80033C */  lui        $v1, %hi(D_801F6230)
    /* 95EA4 80187AA4 1A80023C */  lui        $v0, %hi(D_8019B074)
    /* 95EA8 80187AA8 74B04724 */  addiu      $a3, $v0, %lo(D_8019B074)
    /* 95EAC 80187AAC 30626624 */  addiu      $a2, $v1, %lo(D_801F6230)
    /* 95EB0 80187AB0 0300E488 */  lwl        $a0, 0x3($a3)
    /* 95EB4 80187AB4 0000E498 */  lwr        $a0, 0x0($a3)
    /* 95EB8 80187AB8 00000000 */  nop
    /* 95EBC 80187ABC 0300C4A8 */  swl        $a0, 0x3($a2)
    /* 95EC0 80187AC0 0000C4B8 */  swr        $a0, 0x0($a2)
    /* 95EC4 80187AC4 30626324 */  addiu      $v1, $v1, %lo(D_801F6230)
    /* 95EC8 80187AC8 74B04224 */  addiu      $v0, $v0, %lo(D_8019B074)
    /* 95ECC 80187ACC 13004488 */  lwl        $a0, 0x13($v0)
    /* 95ED0 80187AD0 10004498 */  lwr        $a0, 0x10($v0)
    /* 95ED4 80187AD4 00000000 */  nop
    /* 95ED8 80187AD8 1B0064A8 */  swl        $a0, 0x1B($v1)
    /* 95EDC 80187ADC 180064B8 */  swr        $a0, 0x18($v1)
    /* 95EE0 80187AE0 0E0280A7 */  sh         $zero, %gp_rel(D_8019EF0A)($gp)
    /* 95EE4 80187AE4 0800E003 */  jr         $ra
    /* 95EE8 80187AE8 00000000 */   nop
endlabel func_80187AA0
