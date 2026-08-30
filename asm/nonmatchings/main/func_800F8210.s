nonmatching func_800F8210, 0x3C

glabel func_800F8210
    /* 6610 800F8210 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6614 800F8214 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6618 800F8218 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 661C 800F821C C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6620 800F8220 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6624 800F8224 E7CE030C */  jal        func_800F3B9C
    /* 6628 800F8228 21280000 */   addu      $a1, $zero, $zero
    /* 662C 800F822C 08000492 */  lbu        $a0, 0x8($s0)
    /* 6630 800F8230 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6634 800F8234 000044A0 */  sb         $a0, 0x0($v0)
    /* 6638 800F8238 09000392 */  lbu        $v1, 0x9($s0)
    /* 663C 800F823C 1000B08F */  lw         $s0, 0x10($sp)
    /* 6640 800F8240 010043A0 */  sb         $v1, 0x1($v0)
    /* 6644 800F8244 0800E003 */  jr         $ra
    /* 6648 800F8248 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8210
