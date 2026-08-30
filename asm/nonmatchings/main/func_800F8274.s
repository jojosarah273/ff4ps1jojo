nonmatching func_800F8274, 0x3C

glabel func_800F8274
    /* 6674 800F8274 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6678 800F8278 1000B0AF */  sw         $s0, 0x10($sp)
    /* 667C 800F827C 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6680 800F8280 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6684 800F8284 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6688 800F8288 0FCF030C */  jal        func_800F3C3C
    /* 668C 800F828C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6690 800F8290 08000492 */  lbu        $a0, 0x8($s0)
    /* 6694 800F8294 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6698 800F8298 000044A0 */  sb         $a0, 0x0($v0)
    /* 669C 800F829C 09000392 */  lbu        $v1, 0x9($s0)
    /* 66A0 800F82A0 1000B08F */  lw         $s0, 0x10($sp)
    /* 66A4 800F82A4 010043A0 */  sb         $v1, 0x1($v0)
    /* 66A8 800F82A8 0800E003 */  jr         $ra
    /* 66AC 800F82AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8274
