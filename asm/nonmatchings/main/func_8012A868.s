nonmatching func_8012A868, 0x40

glabel func_8012A868
    /* 38C68 8012A868 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38C6C 8012A86C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38C70 8012A870 77DC030C */  jal        func_800F71DC
    /* 38C74 8012A874 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 38C78 8012A878 5BE3030C */  jal        func_800F8D6C
    /* 38C7C 8012A87C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38C80 8012A880 53D9030C */  jal        func_800F654C
    /* 38C84 8012A884 08000424 */   addiu     $a0, $zero, 0x8
    /* 38C88 8012A888 93E0030C */  jal        func_800F824C
    /* 38C8C 8012A88C E1000424 */   addiu     $a0, $zero, 0xE1
    /* 38C90 8012A890 2AAA040C */  jal        func_8012A8A8
    /* 38C94 8012A894 00000000 */   nop
    /* 38C98 8012A898 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38C9C 8012A89C 00000000 */  nop
    /* 38CA0 8012A8A0 0800E003 */  jr         $ra
    /* 38CA4 8012A8A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012A868
