nonmatching func_800F6B98, 0x48

glabel func_800F6B98
    /* 4F98 800F6B98 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 4F9C 800F6B9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4FA0 800F6BA0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4FA4 800F6BA4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 4FA8 800F6BA8 00004390 */  lbu        $v1, 0x0($v0)
    /* 4FAC 800F6BAC 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 4FB0 800F6BB0 C1CE030C */  jal        func_800F3B04
    /* 4FB4 800F6BB4 21208300 */   addu      $a0, $a0, $v1
    /* 4FB8 800F6BB8 00004490 */  lbu        $a0, 0x0($v0)
    /* 4FBC 800F6BBC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4FC0 800F6BC0 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 4FC4 800F6BC4 080004A2 */  sb         $a0, 0x8($s0)
    /* 4FC8 800F6BC8 01004390 */  lbu        $v1, 0x1($v0)
    /* 4FCC 800F6BCC 00000000 */  nop
    /* 4FD0 800F6BD0 090003A2 */  sb         $v1, 0x9($s0)
    /* 4FD4 800F6BD4 1000B08F */  lw         $s0, 0x10($sp)
    /* 4FD8 800F6BD8 0800E003 */  jr         $ra
    /* 4FDC 800F6BDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6B98
