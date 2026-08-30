nonmatching func_80189F6C, 0x28

glabel func_80189F6C
    /* 9836C 80189F6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 98370 80189F70 FF00053C */  lui        $a1, (0xFFFFFF >> 16)
    /* 98374 80189F74 FFFFA534 */  ori        $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* 98378 80189F78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9837C 80189F7C 8231060C */  jal        func_8018C608
    /* 98380 80189F80 21200000 */   addu      $a0, $zero, $zero
    /* 98384 80189F84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 98388 80189F88 00000000 */  nop
    /* 9838C 80189F8C 0800E003 */  jr         $ra
    /* 98390 80189F90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189F6C
