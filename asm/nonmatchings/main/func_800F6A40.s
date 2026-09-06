nonmatching func_800F6A40, 0x38

glabel func_800F6A40
    /* 4E40 800F6A40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E44 800F6A44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E48 800F6A48 0FCF030C */  jal        func_800F3C3C
    /* 4E4C 800F6A4C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4E50 800F6A50 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 4E54 800F6A54 00000000 */  nop
    /* 4E58 800F6A58 00006490 */  lbu        $a0, 0x0($v1)
    /* 4E5C 800F6A5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E60 800F6A60 21104400 */  addu       $v0, $v0, $a0
    /* 4E64 800F6A64 00004390 */  lbu        $v1, 0x0($v0)
    /* 4E68 800F6A68 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4E6C 800F6A6C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4E70 800F6A70 0800E003 */  jr         $ra
    /* 4E74 800F6A74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6A40
