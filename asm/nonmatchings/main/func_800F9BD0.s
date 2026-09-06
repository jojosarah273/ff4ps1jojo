nonmatching func_800F9BD0, 0xC0

glabel func_800F9BD0
    /* 7FD0 800F9BD0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7FD4 800F9BD4 801F0B3C */  lui        $t3, (0x1F8003C0 >> 16)
    /* 7FD8 800F9BD8 C0036B35 */  ori        $t3, $t3, (0x1F8003C0 & 0xFFFF)
    /* 7FDC 800F9BDC 801F0A3C */  lui        $t2, (0x1F8003C4 >> 16)
    /* 7FE0 800F9BE0 C4034A35 */  ori        $t2, $t2, (0x1F8003C4 & 0xFFFF)
    /* 7FE4 800F9BE4 801F043C */  lui        $a0, (0x1F8003C8 >> 16)
    /* 7FE8 800F9BE8 C8038434 */  ori        $a0, $a0, (0x1F8003C8 & 0xFFFF)
    /* 7FEC 800F9BEC 801F053C */  lui        $a1, (0x1F8003CA >> 16)
    /* 7FF0 800F9BF0 CA03A534 */  ori        $a1, $a1, (0x1F8003CA & 0xFFFF)
    /* 7FF4 800F9BF4 801F063C */  lui        $a2, (0x1F8003CC >> 16)
    /* 7FF8 800F9BF8 CC03C634 */  ori        $a2, $a2, (0x1F8003CC & 0xFFFF)
    /* 7FFC 800F9BFC 801F093C */  lui        $t1, (0x1F8003CE >> 16)
    /* 8000 800F9C00 CE032935 */  ori        $t1, $t1, (0x1F8003CE & 0xFFFF)
    /* 8004 800F9C04 801F083C */  lui        $t0, (0x1F8003D0 >> 16)
    /* 8008 800F9C08 D0030835 */  ori        $t0, $t0, (0x1F8003D0 & 0xFFFF)
    /* 800C 800F9C0C 801F073C */  lui        $a3, (0x1F8003D2 >> 16)
    /* 8010 800F9C10 D203E734 */  ori        $a3, $a3, (0x1F8003D2 & 0xFFFF)
    /* 8014 800F9C14 801F033C */  lui        $v1, (0x1F8003D3 >> 16)
    /* 8018 800F9C18 D3036334 */  ori        $v1, $v1, (0x1F8003D3 & 0xFFFF)
    /* 801C 800F9C1C 801F023C */  lui        $v0, (0x1F8003D4 >> 16)
    /* 8020 800F9C20 D4034234 */  ori        $v0, $v0, (0x1F8003D4 & 0xFFFF)
    /* 8024 800F9C24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8028 800F9C28 70008BAF */  sw         $t3, %gp_rel(D_8019ED6C)($gp)
    /* 802C 800F9C2C 54008AAF */  sw         $t2, %gp_rel(D_8019ED50)($gp)
    /* 8030 800F9C30 440084AF */  sw         $a0, %gp_rel(D_8019ED40)($gp)
    /* 8034 800F9C34 480084AF */  sw         $a0, %gp_rel(D_8019ED44)($gp)
    /* 8038 800F9C38 600085AF */  sw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 803C 800F9C3C 580085AF */  sw         $a1, %gp_rel(D_8019ED54)($gp)
    /* 8040 800F9C40 640086AF */  sw         $a2, %gp_rel(D_8019ED60)($gp)
    /* 8044 800F9C44 5C0086AF */  sw         $a2, %gp_rel(D_8019ED58)($gp)
    /* 8048 800F9C48 500089AF */  sw         $t1, %gp_rel(D_8019ED4C)($gp)
    /* 804C 800F9C4C 4C0088AF */  sw         $t0, %gp_rel(D_8019ED48)($gp)
    /* 8050 800F9C50 740087AF */  sw         $a3, %gp_rel(D_8019ED70)($gp)
    /* 8054 800F9C54 6C0083AF */  sw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 8058 800F9C58 680082AF */  sw         $v0, %gp_rel(D_8019ED64)($gp)
    /* 805C 800F9C5C 26E7030C */  jal        func_800F9C98
    /* 8060 800F9C60 00000000 */   nop
    /* 8064 800F9C64 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 8068 800F9C68 04000224 */  addiu      $v0, $zero, 0x4
    /* 806C 800F9C6C 000062A0 */  sb         $v0, 0x0($v1)
    /* 8070 800F9C70 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 8074 800F9C74 FF010224 */  addiu      $v0, $zero, 0x1FF
    /* 8078 800F9C78 3AE7030C */  jal        func_800F9CE8
    /* 807C 800F9C7C 000082A4 */   sh        $v0, 0x0($a0)
    /* 8080 800F9C80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8084 800F9C84 00000000 */  nop
    /* 8088 800F9C88 0800E003 */  jr         $ra
    /* 808C 800F9C8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F9BD0
