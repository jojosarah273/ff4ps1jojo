nonmatching func_801048EC, 0x48

glabel func_801048EC
    /* 12CEC 801048EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 12CF0 801048F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 12CF4 801048F4 0FCF030C */  jal        func_800F3C3C
    /* 12CF8 801048F8 21200000 */   addu      $a0, $zero, $zero
    /* 12CFC 801048FC 03004390 */  lbu        $v1, 0x3($v0)
    /* 12D00 80104900 00000000 */  nop
    /* 12D04 80104904 80006330 */  andi       $v1, $v1, 0x80
    /* 12D08 80104908 06006010 */  beqz       $v1, .L80104924
    /* 12D0C 8010490C 00000000 */   nop
    /* 12D10 80104910 34008293 */  lbu        $v0, %gp_rel(D_8019ED30)($gp)
    /* 12D14 80104914 00000000 */  nop
    /* 12D18 80104918 02004014 */  bnez       $v0, .L80104924
    /* 12D1C 8010491C 01000224 */   addiu     $v0, $zero, 0x1
    /* 12D20 80104920 340082A3 */  sb         $v0, %gp_rel(D_8019ED30)($gp)
  .L80104924:
    /* 12D24 80104924 1000BF8F */  lw         $ra, 0x10($sp)
    /* 12D28 80104928 00000000 */  nop
    /* 12D2C 8010492C 0800E003 */  jr         $ra
    /* 12D30 80104930 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801048EC
