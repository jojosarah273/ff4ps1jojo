nonmatching func_80123FEC, 0x38

glabel func_80123FEC
    /* 323EC 80123FEC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 323F0 80123FF0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 323F4 80123FF4 5BE3030C */  jal        func_800F8D6C
    /* 323F8 80123FF8 73000424 */   addiu     $a0, $zero, 0x73
    /* 323FC 80123FFC 91E5030C */  jal        func_800F9644
    /* 32400 80124000 20000424 */   addiu     $a0, $zero, 0x20
    /* 32404 80124004 56D9030C */  jal        func_800F6558
    /* 32408 80124008 00200424 */   addiu     $a0, $zero, 0x2000
    /* 3240C 8012400C 0990040C */  jal        func_80124024
    /* 32410 80124010 00000000 */   nop
    /* 32414 80124014 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32418 80124018 00000000 */  nop
    /* 3241C 8012401C 0800E003 */  jr         $ra
    /* 32420 80124020 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123FEC
