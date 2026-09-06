nonmatching func_800F6BE0, 0x48

glabel func_800F6BE0
    /* 4FE0 800F6BE0 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 4FE4 800F6BE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4FE8 800F6BE8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4FEC 800F6BEC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 4FF0 800F6BF0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FF4 800F6BF4 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 4FF8 800F6BF8 C1CE030C */  jal        func_800F3B04
    /* 4FFC 800F6BFC 21208300 */   addu      $a0, $a0, $v1
    /* 5000 800F6C00 00004490 */  lbu        $a0, 0x0($v0)
    /* 5004 800F6C04 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5008 800F6C08 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 500C 800F6C0C 080004A2 */  sb         $a0, 0x8($s0)
    /* 5010 800F6C10 01004390 */  lbu        $v1, 0x1($v0)
    /* 5014 800F6C14 00000000 */  nop
    /* 5018 800F6C18 090003A2 */  sb         $v1, 0x9($s0)
    /* 501C 800F6C1C 1000B08F */  lw         $s0, 0x10($sp)
    /* 5020 800F6C20 0800E003 */  jr         $ra
    /* 5024 800F6C24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6BE0
