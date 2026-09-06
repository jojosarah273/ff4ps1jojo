nonmatching func_801408E4, 0x60

glabel func_801408E4
    /* 4ECE4 801408E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ECE8 801408E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4ECEC 801408EC 62E0030C */  jal        func_800F8188
    /* 4ECF0 801408F0 88EF0434 */   ori       $a0, $zero, 0xEF88
    /* 4ECF4 801408F4 53D9030C */  jal        func_800F654C
    /* 4ECF8 801408F8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 4ECFC 801408FC 62E0030C */  jal        func_800F8188
    /* 4ED00 80140900 33F40434 */   ori       $a0, $zero, 0xF433
    /* 4ED04 80140904 62E0030C */  jal        func_800F8188
    /* 4ED08 80140908 35F40434 */   ori       $a0, $zero, 0xF435
    /* 4ED0C 8014090C 62E0030C */  jal        func_800F8188
    /* 4ED10 80140910 34F40434 */   ori       $a0, $zero, 0xF434
    /* 4ED14 80140914 53D9030C */  jal        func_800F654C
    /* 4ED18 80140918 01000424 */   addiu     $a0, $zero, 0x1
    /* 4ED1C 8014091C 62E0030C */  jal        func_800F8188
    /* 4ED20 80140920 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 4ED24 80140924 DDE3030C */  jal        func_800F8F74
    /* 4ED28 80140928 89EF0434 */   ori       $a0, $zero, 0xEF89
    /* 4ED2C 8014092C DDE3030C */  jal        func_800F8F74
    /* 4ED30 80140930 8AEF0434 */   ori       $a0, $zero, 0xEF8A
    /* 4ED34 80140934 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ED38 80140938 00000000 */  nop
    /* 4ED3C 8014093C 0800E003 */  jr         $ra
    /* 4ED40 80140940 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801408E4
