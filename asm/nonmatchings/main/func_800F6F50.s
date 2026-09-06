nonmatching func_800F6F50, 0x3C

glabel func_800F6F50
    /* 5350 800F6F50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5354 800F6F54 1000B0AF */  sw         $s0, 0x10($sp)
    /* 5358 800F6F58 1400BFAF */  sw         $ra, 0x14($sp)
    /* 535C 800F6F5C 25CF030C */  jal        func_800F3C94
    /* 5360 800F6F60 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 5364 800F6F64 00004490 */  lbu        $a0, 0x0($v0)
    /* 5368 800F6F68 1400BF8F */  lw         $ra, 0x14($sp)
    /* 536C 800F6F6C C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 5370 800F6F70 080004A2 */  sb         $a0, 0x8($s0)
    /* 5374 800F6F74 01004390 */  lbu        $v1, 0x1($v0)
    /* 5378 800F6F78 00000000 */  nop
    /* 537C 800F6F7C 090003A2 */  sb         $v1, 0x9($s0)
    /* 5380 800F6F80 1000B08F */  lw         $s0, 0x10($sp)
    /* 5384 800F6F84 0800E003 */  jr         $ra
    /* 5388 800F6F88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6F50
