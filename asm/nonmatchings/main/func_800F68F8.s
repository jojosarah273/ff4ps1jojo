nonmatching func_800F68F8, 0x48

glabel func_800F68F8
    /* 4CF8 800F68F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CFC 800F68FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4D00 800F6900 0FCF030C */  jal        func_800F3C3C
    /* 4D04 800F6904 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4D08 800F6908 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 4D0C 800F690C 00000000 */  nop
    /* 4D10 800F6910 00006490 */  lbu        $a0, 0x0($v1)
    /* 4D14 800F6914 00000000 */  nop
    /* 4D18 800F6918 21104400 */  addu       $v0, $v0, $a0
    /* 4D1C 800F691C 00004494 */  lhu        $a0, 0x0($v0)
    /* 4D20 800F6920 C1CE030C */  jal        func_800F3B04
    /* 4D24 800F6924 00000000 */   nop
    /* 4D28 800F6928 00004390 */  lbu        $v1, 0x0($v0)
    /* 4D2C 800F692C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D30 800F6930 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4D34 800F6934 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4D38 800F6938 0800E003 */  jr         $ra
    /* 4D3C 800F693C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F68F8
