nonmatching func_80117754, 0x28

glabel func_80117754
    /* 25B54 80117754 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 25B58 80117758 1000BFAF */  sw         $ra, 0x10($sp)
    /* 25B5C 8011775C BAF5030C */  jal        func_800FD6E8
    /* 25B60 80117760 00000000 */   nop
    /* 25B64 80117764 DEF9030C */  jal        func_800FE778
    /* 25B68 80117768 00000000 */   nop
    /* 25B6C 8011776C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 25B70 80117770 00000000 */  nop
    /* 25B74 80117774 0800E003 */  jr         $ra
    /* 25B78 80117778 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117754
