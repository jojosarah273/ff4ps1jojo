nonmatching func_8011EF0C, 0x24

glabel func_8011EF0C
    /* 2D30C 8011EF0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D310 8011EF10 0D80043C */  lui        $a0, (0x800DC400 >> 16)
    /* 2D314 8011EF14 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D318 8011EF18 70FD050C */  jal        func_8017F5C0
    /* 2D31C 8011EF1C 00C48434 */   ori       $a0, $a0, (0x800DC400 & 0xFFFF)
    /* 2D320 8011EF20 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D324 8011EF24 00000000 */  nop
    /* 2D328 8011EF28 0800E003 */  jr         $ra
    /* 2D32C 8011EF2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EF0C
