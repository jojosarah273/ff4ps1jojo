nonmatching func_800F91A4, 0x5C

glabel func_800F91A4
    /* 75A4 800F91A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75A8 800F91A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75AC 800F91AC 9CCE030C */  jal        func_800F3A70
    /* 75B0 800F91B0 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 75B4 800F91B4 C1CE030C */  jal        func_800F3B04
    /* 75B8 800F91B8 21204000 */   addu      $a0, $v0, $zero
    /* 75BC 800F91BC 0C80053C */  lui        $a1, (0x800C8000 >> 16)
    /* 75C0 800F91C0 0080A534 */  ori        $a1, $a1, (0x800C8000 & 0xFFFF)
    /* 75C4 800F91C4 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 75C8 800F91C8 5000868F */  lw         $a2, %gp_rel(D_8019ED4C)($gp)
    /* 75CC 800F91CC 00004790 */  lbu        $a3, 0x0($v0)
    /* 75D0 800F91D0 0000C494 */  lhu        $a0, 0x0($a2)
    /* 75D4 800F91D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75D8 800F91D8 21188300 */  addu       $v1, $a0, $v1
    /* 75DC 800F91DC 000067A0 */  sb         $a3, %lo(D_800D0000)($v1)
    /* 75E0 800F91E0 01004690 */  lbu        $a2, 0x1($v0)
    /* 75E4 800F91E4 21288500 */  addu       $a1, $a0, $a1
    /* 75E8 800F91E8 FF7FA6A0 */  sb         $a2, 0x7FFF($a1)
    /* 75EC 800F91EC 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 75F0 800F91F0 FEFF8424 */  addiu      $a0, $a0, -0x2
    /* 75F4 800F91F4 000044A4 */  sh         $a0, 0x0($v0)
    /* 75F8 800F91F8 0800E003 */  jr         $ra
    /* 75FC 800F91FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F91A4
