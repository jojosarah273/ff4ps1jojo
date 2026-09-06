nonmatching func_800F8FD8, 0x24

glabel func_800F8FD8
    /* 73D8 800F8FD8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 73DC 800F8FDC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 73E0 800F8FE0 0FCF030C */  jal        func_800F3C3C
    /* 73E4 800F8FE4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 73E8 800F8FE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 73EC 800F8FEC 000040A0 */  sb         $zero, 0x0($v0)
    /* 73F0 800F8FF0 010040A0 */  sb         $zero, 0x1($v0)
    /* 73F4 800F8FF4 0800E003 */  jr         $ra
    /* 73F8 800F8FF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8FD8
