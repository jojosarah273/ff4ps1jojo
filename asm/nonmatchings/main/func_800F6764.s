nonmatching func_800F6764, 0x4C

glabel func_800F6764
    /* 4B64 800F6764 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B68 800F6768 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B6C 800F676C 9CCE030C */  jal        func_800F3A70
    /* 4B70 800F6770 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4B74 800F6774 C1CE030C */  jal        func_800F3B04
    /* 4B78 800F6778 21204000 */   addu      $a0, $v0, $zero
    /* 4B7C 800F677C 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4B80 800F6780 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4B84 800F6784 00006594 */  lhu        $a1, 0x0($v1)
    /* 4B88 800F6788 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B8C 800F678C 21104500 */  addu       $v0, $v0, $a1
    /* 4B90 800F6790 00004690 */  lbu        $a2, 0x0($v0)
    /* 4B94 800F6794 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4B98 800F6798 080086A0 */  sb         $a2, 0x8($a0)
    /* 4B9C 800F679C 01004390 */  lbu        $v1, 0x1($v0)
    /* 4BA0 800F67A0 00000000 */  nop
    /* 4BA4 800F67A4 090083A0 */  sb         $v1, 0x9($a0)
    /* 4BA8 800F67A8 0800E003 */  jr         $ra
    /* 4BAC 800F67AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6764
