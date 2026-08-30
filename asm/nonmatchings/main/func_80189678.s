nonmatching func_80189678, 0x20

glabel func_80189678
    /* 97A78 80189678 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97A7C 8018967C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 97A80 80189680 9822060C */  jal        func_80188A60
    /* 97A84 80189684 01000424 */   addiu     $a0, $zero, 0x1
    /* 97A88 80189688 1000BF8F */  lw         $ra, 0x10($sp)
    /* 97A8C 8018968C 00000000 */  nop
    /* 97A90 80189690 0800E003 */  jr         $ra
    /* 97A94 80189694 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189678
