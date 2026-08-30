nonmatching func_8012AA80, 0x40

glabel func_8012AA80
    /* 38E80 8012AA80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38E84 8012AA84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38E88 8012AA88 77DC030C */  jal        func_800F71DC
    /* 38E8C 8012AA8C 40130424 */   addiu     $a0, $zero, 0x1340
    /* 38E90 8012AA90 5BE3030C */  jal        func_800F8D6C
    /* 38E94 8012AA94 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38E98 8012AA98 53D9030C */  jal        func_800F654C
    /* 38E9C 8012AA9C 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 38EA0 8012AAA0 93E0030C */  jal        func_800F824C
    /* 38EA4 8012AAA4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 38EA8 8012AAA8 2AAA040C */  jal        func_8012A8A8
    /* 38EAC 8012AAAC 00000000 */   nop
    /* 38EB0 8012AAB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38EB4 8012AAB4 00000000 */  nop
    /* 38EB8 8012AAB8 0800E003 */  jr         $ra
    /* 38EBC 8012AABC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012AA80
