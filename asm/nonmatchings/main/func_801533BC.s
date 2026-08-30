nonmatching func_801533BC, 0x40

glabel func_801533BC
    /* 617BC 801533BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 617C0 801533C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 617C4 801533C4 77DC030C */  jal        func_800F71DC
    /* 617C8 801533C8 67FE0434 */   ori       $a0, $zero, 0xFE67
    /* 617CC 801533CC 5BE3030C */  jal        func_800F8D6C
    /* 617D0 801533D0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 617D4 801533D4 53D9030C */  jal        func_800F654C
    /* 617D8 801533D8 13000424 */   addiu     $a0, $zero, 0x13
    /* 617DC 801533DC 93E0030C */  jal        func_800F824C
    /* 617E0 801533E0 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 617E4 801533E4 FF4C050C */  jal        func_801533FC
    /* 617E8 801533E8 00000000 */   nop
    /* 617EC 801533EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 617F0 801533F0 00000000 */  nop
    /* 617F4 801533F4 0800E003 */  jr         $ra
    /* 617F8 801533F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801533BC
