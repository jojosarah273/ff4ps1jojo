nonmatching func_8018F2DC, 0x2C

glabel func_8018F2DC
    /* 9D6DC 8018F2DC 0A006F94 */  lhu        $t7, 0xA($v1)
    /* 9D6E0 8018F2E0 0000083C */  lui        $t0, (0x0 >> 16)
    /* 9D6E4 8018F2E4 25C0E201 */  or         $t8, $t7, $v0
    /* 9D6E8 8018F2E8 12001937 */  ori        $t9, $t8, 0x12
    /* 9D6EC 8018F2EC 0A0079A4 */  sh         $t9, 0xA($v1)
    /* 9D6F0 8018F2F0 28000824 */  addiu      $t0, $zero, 0x28
  .L8018F2F4:
    /* 9D6F4 8018F2F4 FFFF0825 */  addiu      $t0, $t0, -0x1
    /* 9D6F8 8018F2F8 FEFF0015 */  bnez       $t0, .L8018F2F4
    /* 9D6FC 8018F2FC 00000000 */   nop
    /* 9D700 8018F300 0800E003 */  jr         $ra
    /* 9D704 8018F304 00000000 */   nop
endlabel func_8018F2DC
