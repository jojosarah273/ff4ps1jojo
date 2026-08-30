nonmatching func_800F6EDC, 0x4C

glabel func_800F6EDC
    /* 52DC 800F6EDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52E0 800F6EE0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 52E4 800F6EE4 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 52E8 800F6EE8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 52EC 800F6EEC ADCE030C */  jal        func_800F3AB4
    /* 52F0 800F6EF0 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 52F4 800F6EF4 21204000 */  addu       $a0, $v0, $zero
    /* 52F8 800F6EF8 E7CE030C */  jal        func_800F3B9C
    /* 52FC 800F6EFC 21280000 */   addu      $a1, $zero, $zero
    /* 5300 800F6F00 00004490 */  lbu        $a0, 0x0($v0)
    /* 5304 800F6F04 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5308 800F6F08 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 530C 800F6F0C 080004A2 */  sb         $a0, 0x8($s0)
    /* 5310 800F6F10 01004390 */  lbu        $v1, 0x1($v0)
    /* 5314 800F6F14 00000000 */  nop
    /* 5318 800F6F18 090003A2 */  sb         $v1, 0x9($s0)
    /* 531C 800F6F1C 1000B08F */  lw         $s0, 0x10($sp)
    /* 5320 800F6F20 0800E003 */  jr         $ra
    /* 5324 800F6F24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6EDC
