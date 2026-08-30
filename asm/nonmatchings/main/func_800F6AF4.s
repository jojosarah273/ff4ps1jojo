nonmatching func_800F6AF4, 0x44

glabel func_800F6AF4
    /* 4EF4 800F6AF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EF8 800F6AF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EFC 800F6AFC 0FCF030C */  jal        func_800F3C3C
    /* 4F00 800F6B00 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4F04 800F6B04 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 4F08 800F6B08 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4F0C 800F6B0C 00006594 */  lhu        $a1, 0x0($v1)
    /* 4F10 800F6B10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F14 800F6B14 21104500 */  addu       $v0, $v0, $a1
    /* 4F18 800F6B18 00004690 */  lbu        $a2, 0x0($v0)
    /* 4F1C 800F6B1C C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4F20 800F6B20 080086A0 */  sb         $a2, 0x8($a0)
    /* 4F24 800F6B24 01004390 */  lbu        $v1, 0x1($v0)
    /* 4F28 800F6B28 00000000 */  nop
    /* 4F2C 800F6B2C 090083A0 */  sb         $v1, 0x9($a0)
    /* 4F30 800F6B30 0800E003 */  jr         $ra
    /* 4F34 800F6B34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6AF4
