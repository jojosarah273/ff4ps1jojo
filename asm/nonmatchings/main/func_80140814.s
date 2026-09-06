nonmatching func_80140814, 0x58

glabel func_80140814
    /* 4EC14 80140814 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EC18 80140818 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EC1C 8014081C 62E0030C */  jal        func_800F8188
    /* 4EC20 80140820 88EF0434 */   ori       $a0, $zero, 0xEF88
    /* 4EC24 80140824 DDE3030C */  jal        func_800F8F74
    /* 4EC28 80140828 33F40434 */   ori       $a0, $zero, 0xF433
    /* 4EC2C 8014082C DDE3030C */  jal        func_800F8F74
    /* 4EC30 80140830 35F40434 */   ori       $a0, $zero, 0xF435
    /* 4EC34 80140834 DDE3030C */  jal        func_800F8F74
    /* 4EC38 80140838 34F40434 */   ori       $a0, $zero, 0xF434
    /* 4EC3C 8014083C 53D9030C */  jal        func_800F654C
    /* 4EC40 80140840 02000424 */   addiu     $a0, $zero, 0x2
    /* 4EC44 80140844 62E0030C */  jal        func_800F8188
    /* 4EC48 80140848 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 4EC4C 8014084C DDE3030C */  jal        func_800F8F74
    /* 4EC50 80140850 89EF0434 */   ori       $a0, $zero, 0xEF89
    /* 4EC54 80140854 DDE3030C */  jal        func_800F8F74
    /* 4EC58 80140858 8AEF0434 */   ori       $a0, $zero, 0xEF8A
    /* 4EC5C 8014085C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EC60 80140860 00000000 */  nop
    /* 4EC64 80140864 0800E003 */  jr         $ra
    /* 4EC68 80140868 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140814
