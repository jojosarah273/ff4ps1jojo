nonmatching func_800F8508, 0x48

glabel func_800F8508
    /* 6908 800F8508 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 690C 800F850C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6910 800F8510 0FCF030C */  jal        func_800F3C3C
    /* 6914 800F8514 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6918 800F8518 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 691C 800F851C 00000000 */  nop
    /* 6920 800F8520 00006490 */  lbu        $a0, 0x0($v1)
    /* 6924 800F8524 00000000 */  nop
    /* 6928 800F8528 21104400 */  addu       $v0, $v0, $a0
    /* 692C 800F852C 00004494 */  lhu        $a0, 0x0($v0)
    /* 6930 800F8530 C1CE030C */  jal        func_800F3B04
    /* 6934 800F8534 00000000 */   nop
    /* 6938 800F8538 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 693C 800F853C C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6940 800F8540 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6944 800F8544 000043A0 */  sb         $v1, 0x0($v0)
    /* 6948 800F8548 0800E003 */  jr         $ra
    /* 694C 800F854C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8508
