nonmatching func_800F6E60, 0x48

glabel func_800F6E60
    /* 5260 800F6E60 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5264 800F6E64 1000B0AF */  sw         $s0, 0x10($sp)
    /* 5268 800F6E68 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 526C 800F6E6C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 5270 800F6E70 9CCE030C */  jal        func_800F3A70
    /* 5274 800F6E74 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 5278 800F6E78 C1CE030C */  jal        func_800F3B04
    /* 527C 800F6E7C 21204000 */   addu      $a0, $v0, $zero
    /* 5280 800F6E80 00004490 */  lbu        $a0, 0x0($v0)
    /* 5284 800F6E84 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5288 800F6E88 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 528C 800F6E8C 080004A2 */  sb         $a0, 0x8($s0)
    /* 5290 800F6E90 01004390 */  lbu        $v1, 0x1($v0)
    /* 5294 800F6E94 00000000 */  nop
    /* 5298 800F6E98 090003A2 */  sb         $v1, 0x9($s0)
    /* 529C 800F6E9C 1000B08F */  lw         $s0, 0x10($sp)
    /* 52A0 800F6EA0 0800E003 */  jr         $ra
    /* 52A4 800F6EA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6E60
