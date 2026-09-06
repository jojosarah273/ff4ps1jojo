nonmatching func_800F6658, 0x40

glabel func_800F6658
    /* 4A58 800F6658 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A5C 800F665C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 4A60 800F6660 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 4A64 800F6664 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4A68 800F6668 0FCF030C */  jal        func_800F3C3C
    /* 4A6C 800F666C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4A70 800F6670 00004490 */  lbu        $a0, 0x0($v0)
    /* 4A74 800F6674 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4A78 800F6678 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 4A7C 800F667C 080004A2 */  sb         $a0, 0x8($s0)
    /* 4A80 800F6680 01004390 */  lbu        $v1, 0x1($v0)
    /* 4A84 800F6684 00000000 */  nop
    /* 4A88 800F6688 090003A2 */  sb         $v1, 0x9($s0)
    /* 4A8C 800F668C 1000B08F */  lw         $s0, 0x10($sp)
    /* 4A90 800F6690 0800E003 */  jr         $ra
    /* 4A94 800F6694 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6658
