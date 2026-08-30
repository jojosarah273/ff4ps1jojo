nonmatching func_800F8FB8, 0x20

glabel func_800F8FB8
    /* 73B8 800F8FB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 73BC 800F8FBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 73C0 800F8FC0 0FCF030C */  jal        func_800F3C3C
    /* 73C4 800F8FC4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 73C8 800F8FC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 73CC 800F8FCC 000040A0 */  sb         $zero, 0x0($v0)
    /* 73D0 800F8FD0 0800E003 */  jr         $ra
    /* 73D4 800F8FD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8FB8
