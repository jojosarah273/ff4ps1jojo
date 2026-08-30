nonmatching func_80148BE0, 0x48

glabel func_80148BE0
    /* 56FE0 80148BE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 56FE4 80148BE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 56FE8 80148BE8 77DC030C */  jal        func_800F71DC
    /* 56FEC 80148BEC 20000424 */   addiu     $a0, $zero, 0x20
  .L80148BF0:
    /* 56FF0 80148BF0 DADA030C */  jal        func_800F6B68
    /* 56FF4 80148BF4 3F030424 */   addiu     $a0, $zero, 0x33F
    /* 56FF8 80148BF8 DAE1030C */  jal        func_800F8768
    /* 56FFC 80148BFC 43030424 */   addiu     $a0, $zero, 0x343
    /* 57000 80148C00 92D7030C */  jal        func_800F5E48
    /* 57004 80148C04 00000000 */   nop
    /* 57008 80148C08 19D7030C */  jal        func_800F5C64
    /* 5700C 80148C0C 02020424 */   addiu     $a0, $zero, 0x202
    /* 57010 80148C10 F7FF4014 */  bnez       $v0, .L80148BF0
    /* 57014 80148C14 00000000 */   nop
    /* 57018 80148C18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5701C 80148C1C 00000000 */  nop
    /* 57020 80148C20 0800E003 */  jr         $ra
    /* 57024 80148C24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148BE0
