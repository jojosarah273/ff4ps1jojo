nonmatching func_8017668C, 0x24

glabel func_8017668C
    /* 84A8C 8017668C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 84A90 80176690 0D80043C */  lui        $a0, (0x800D0CDB >> 16)
    /* 84A94 80176694 1000BFAF */  sw         $ra, 0x10($sp)
    /* 84A98 80176698 70FD050C */  jal        func_8017F5C0
    /* 84A9C 8017669C DB0C8434 */   ori       $a0, $a0, (0x800D0CDB & 0xFFFF)
    /* 84AA0 801766A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 84AA4 801766A4 00000000 */  nop
    /* 84AA8 801766A8 0800E003 */  jr         $ra
    /* 84AAC 801766AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017668C
