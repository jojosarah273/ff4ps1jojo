nonmatching func_80189698, 0x28

glabel func_80189698
    /* 97A98 80189698 FFFF0424 */  addiu      $a0, $zero, -0x1
    /* 97A9C 8018969C 2C00828F */  lw         $v0, %gp_rel(D_8019ED28)($gp)
    /* 97AA0 801896A0 3F000324 */  addiu      $v1, $zero, 0x3F
    /* 97AA4 801896A4 F0034224 */  addiu      $v0, $v0, 0x3F0
  .L801896A8:
    /* 97AA8 801896A8 000044A4 */  sh         $a0, 0x0($v0)
    /* 97AAC 801896AC FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 97AB0 801896B0 FDFF6104 */  bgez       $v1, .L801896A8
    /* 97AB4 801896B4 F0FF4224 */   addiu     $v0, $v0, -0x10
    /* 97AB8 801896B8 0800E003 */  jr         $ra
    /* 97ABC 801896BC 00000000 */   nop
endlabel func_80189698
