nonmatching func_800F6DE8, 0x48

glabel func_800F6DE8
    /* 51E8 800F6DE8 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 51EC 800F6DEC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 51F0 800F6DF0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 51F4 800F6DF4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 51F8 800F6DF8 00004394 */  lhu        $v1, 0x0($v0)
    /* 51FC 800F6DFC 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 5200 800F6E00 C1CE030C */  jal        func_800F3B04
    /* 5204 800F6E04 21208300 */   addu      $a0, $a0, $v1
    /* 5208 800F6E08 00004490 */  lbu        $a0, 0x0($v0)
    /* 520C 800F6E0C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5210 800F6E10 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 5214 800F6E14 080004A2 */  sb         $a0, 0x8($s0)
    /* 5218 800F6E18 01004390 */  lbu        $v1, 0x1($v0)
    /* 521C 800F6E1C 00000000 */  nop
    /* 5220 800F6E20 090003A2 */  sb         $v1, 0x9($s0)
    /* 5224 800F6E24 1000B08F */  lw         $s0, 0x10($sp)
    /* 5228 800F6E28 0800E003 */  jr         $ra
    /* 522C 800F6E2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6DE8
