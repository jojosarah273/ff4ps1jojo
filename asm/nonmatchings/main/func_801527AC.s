nonmatching func_801527AC, 0x5C

glabel func_801527AC
    /* 60BAC 801527AC 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 60BB0 801527B0 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 60BB4 801527B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 60BB8 801527B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 60BBC 801527BC 00006290 */  lbu        $v0, 0x0($v1)
    /* 60BC0 801527C0 00000000 */  nop
    /* 60BC4 801527C4 20004230 */  andi       $v0, $v0, 0x20
    /* 60BC8 801527C8 07004010 */  beqz       $v0, .L801527E8
    /* 60BCC 801527CC 00000000 */   nop
    /* 60BD0 801527D0 50D4030C */  jal        func_800F5140
    /* 60BD4 801527D4 00000000 */   nop
    /* 60BD8 801527D8 D3D3030C */  jal        func_800F4F4C
    /* 60BDC 801527DC 00000000 */   nop
    /* 60BE0 801527E0 FE490508 */  j          .L801527F8
    /* 60BE4 801527E4 00000000 */   nop
  .L801527E8:
    /* 60BE8 801527E8 5BD4030C */  jal        func_800F516C
    /* 60BEC 801527EC 00000000 */   nop
    /* 60BF0 801527F0 14D4030C */  jal        func_800F5050
    /* 60BF4 801527F4 00000000 */   nop
  .L801527F8:
    /* 60BF8 801527F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 60BFC 801527FC 00000000 */  nop
    /* 60C00 80152800 0800E003 */  jr         $ra
    /* 60C04 80152804 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801527AC
