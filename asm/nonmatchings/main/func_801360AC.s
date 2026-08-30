nonmatching func_801360AC, 0x40

glabel func_801360AC
    /* 444AC 801360AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 444B0 801360B0 C6008387 */  lh         $v1, %gp_rel(D_8019EDC2)($gp)
    /* 444B4 801360B4 08000224 */  addiu      $v0, $zero, 0x8
    /* 444B8 801360B8 08006214 */  bne        $v1, $v0, .L801360DC
    /* 444BC 801360BC 1000BFAF */   sw        $ra, 0x10($sp)
    /* 444C0 801360C0 DFD7040C */  jal        func_80135F7C
    /* 444C4 801360C4 00000000 */   nop
    /* 444C8 801360C8 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 444CC 801360CC D80082AF */  sw         $v0, %gp_rel(D_8019EDD4)($gp)
    /* 444D0 801360D0 D40082AF */  sw         $v0, %gp_rel(D_8019EDD0)($gp)
    /* 444D4 801360D4 DC0080AF */  sw         $zero, %gp_rel(D_8019EDD8)($gp)
    /* 444D8 801360D8 E00080AF */  sw         $zero, %gp_rel(D_8019EDDC)($gp)
  .L801360DC:
    /* 444DC 801360DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 444E0 801360E0 00000000 */  nop
    /* 444E4 801360E4 0800E003 */  jr         $ra
    /* 444E8 801360E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801360AC
