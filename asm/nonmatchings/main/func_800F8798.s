nonmatching func_800F8798, 0x44

glabel func_800F8798
    /* 6B98 800F8798 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 6B9C 800F879C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6BA0 800F87A0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6BA4 800F87A4 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6BA8 800F87A8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6BAC 800F87AC 00004390 */  lbu        $v1, 0x0($v0)
    /* 6BB0 800F87B0 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6BB4 800F87B4 C1CE030C */  jal        func_800F3B04
    /* 6BB8 800F87B8 21208300 */   addu      $a0, $a0, $v1
    /* 6BBC 800F87BC 08000492 */  lbu        $a0, 0x8($s0)
    /* 6BC0 800F87C0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6BC4 800F87C4 000044A0 */  sb         $a0, 0x0($v0)
    /* 6BC8 800F87C8 09000392 */  lbu        $v1, 0x9($s0)
    /* 6BCC 800F87CC 1000B08F */  lw         $s0, 0x10($sp)
    /* 6BD0 800F87D0 010043A0 */  sb         $v1, 0x1($v0)
    /* 6BD4 800F87D4 0800E003 */  jr         $ra
    /* 6BD8 800F87D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8798
