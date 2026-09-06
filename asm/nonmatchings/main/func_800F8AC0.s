nonmatching func_800F8AC0, 0x48

glabel func_800F8AC0
    /* 6EC0 800F8AC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EC4 800F8AC4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6EC8 800F8AC8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6ECC 800F8ACC C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6ED0 800F8AD0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6ED4 800F8AD4 ADCE030C */  jal        func_800F3AB4
    /* 6ED8 800F8AD8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6EDC 800F8ADC 21204000 */  addu       $a0, $v0, $zero
    /* 6EE0 800F8AE0 E7CE030C */  jal        func_800F3B9C
    /* 6EE4 800F8AE4 21280000 */   addu      $a1, $zero, $zero
    /* 6EE8 800F8AE8 08000492 */  lbu        $a0, 0x8($s0)
    /* 6EEC 800F8AEC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6EF0 800F8AF0 000044A0 */  sb         $a0, 0x0($v0)
    /* 6EF4 800F8AF4 09000392 */  lbu        $v1, 0x9($s0)
    /* 6EF8 800F8AF8 1000B08F */  lw         $s0, 0x10($sp)
    /* 6EFC 800F8AFC 010043A0 */  sb         $v1, 0x1($v0)
    /* 6F00 800F8B00 0800E003 */  jr         $ra
    /* 6F04 800F8B04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8AC0
