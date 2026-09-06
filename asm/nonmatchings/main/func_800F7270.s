nonmatching func_800F7270, 0x38

glabel func_800F7270
    /* 5670 800F7270 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5674 800F7274 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5678 800F7278 0FCF030C */  jal        func_800F3C3C
    /* 567C 800F727C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 5680 800F7280 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 5684 800F7284 00004390 */  lbu        $v1, 0x0($v0)
    /* 5688 800F7288 1000BF8F */  lw         $ra, 0x10($sp)
    /* 568C 800F728C 000083A0 */  sb         $v1, 0x0($a0)
    /* 5690 800F7290 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 5694 800F7294 01004390 */  lbu        $v1, 0x1($v0)
    /* 5698 800F7298 00000000 */  nop
    /* 569C 800F729C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 56A0 800F72A0 0800E003 */  jr         $ra
    /* 56A4 800F72A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7270
