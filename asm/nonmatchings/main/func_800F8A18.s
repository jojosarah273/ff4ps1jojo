nonmatching func_800F8A18, 0x30

glabel func_800F8A18
    /* 6E18 800F8A18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E1C 800F8A1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E20 800F8A20 9CCE030C */  jal        func_800F3A70
    /* 6E24 800F8A24 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6E28 800F8A28 C1CE030C */  jal        func_800F3B04
    /* 6E2C 800F8A2C 21204000 */   addu      $a0, $v0, $zero
    /* 6E30 800F8A30 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6E34 800F8A34 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6E38 800F8A38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E3C 800F8A3C 000043A0 */  sb         $v1, 0x0($v0)
    /* 6E40 800F8A40 0800E003 */  jr         $ra
    /* 6E44 800F8A44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8A18
