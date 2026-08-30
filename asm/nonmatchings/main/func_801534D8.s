nonmatching func_801534D8, 0x40

glabel func_801534D8
    /* 618D8 801534D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 618DC 801534DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 618E0 801534E0 77DC030C */  jal        func_800F71DC
    /* 618E4 801534E4 76FE0434 */   ori       $a0, $zero, 0xFE76
    /* 618E8 801534E8 5BE3030C */  jal        func_800F8D6C
    /* 618EC 801534EC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 618F0 801534F0 53D9030C */  jal        func_800F654C
    /* 618F4 801534F4 13000424 */   addiu     $a0, $zero, 0x13
    /* 618F8 801534F8 93E0030C */  jal        func_800F824C
    /* 618FC 801534FC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 61900 80153500 FF4C050C */  jal        func_801533FC
    /* 61904 80153504 00000000 */   nop
    /* 61908 80153508 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6190C 8015350C 00000000 */  nop
    /* 61910 80153510 0800E003 */  jr         $ra
    /* 61914 80153514 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801534D8
