nonmatching func_800F65F0, 0x40

glabel func_800F65F0
    /* 49F0 800F65F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49F4 800F65F4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 49F8 800F65F8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 49FC 800F65FC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4A00 800F6600 E7CE030C */  jal        func_800F3B9C
    /* 4A04 800F6604 21280000 */   addu      $a1, $zero, $zero
    /* 4A08 800F6608 00004490 */  lbu        $a0, 0x0($v0)
    /* 4A0C 800F660C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4A10 800F6610 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 4A14 800F6614 080004A2 */  sb         $a0, 0x8($s0)
    /* 4A18 800F6618 01004390 */  lbu        $v1, 0x1($v0)
    /* 4A1C 800F661C 00000000 */  nop
    /* 4A20 800F6620 090003A2 */  sb         $v1, 0x9($s0)
    /* 4A24 800F6624 1000B08F */  lw         $s0, 0x10($sp)
    /* 4A28 800F6628 0800E003 */  jr         $ra
    /* 4A2C 800F662C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F65F0
