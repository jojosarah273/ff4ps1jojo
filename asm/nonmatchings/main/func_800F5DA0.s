nonmatching func_800F5DA0, 0x34

glabel func_800F5DA0
    /* 41A0 800F5DA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 41A4 800F5DA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 41A8 800F5DA8 0FCF030C */  jal        func_800F3C3C
    /* 41AC 800F5DAC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 41B0 800F5DB0 00004390 */  lbu        $v1, 0x0($v0)
    /* 41B4 800F5DB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 41B8 800F5DB8 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 41BC 800F5DBC 000043A0 */  sb         $v1, 0x0($v0)
    /* 41C0 800F5DC0 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 41C4 800F5DC4 FF006330 */  andi       $v1, $v1, 0xFF
    /* 41C8 800F5DC8 000083AC */  sw         $v1, 0x0($a0)
    /* 41CC 800F5DCC 0800E003 */  jr         $ra
    /* 41D0 800F5DD0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F5DA0
