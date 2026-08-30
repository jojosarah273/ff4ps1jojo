nonmatching func_8016AA84, 0x48

glabel func_8016AA84
    /* 78E84 8016AA84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 78E88 8016AA88 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78E8C 8016AA8C 77DC030C */  jal        func_800F71DC
    /* 78E90 8016AA90 08000424 */   addiu     $a0, $zero, 0x8
    /* 78E94 8016AA94 40E3030C */  jal        func_800F8D00
    /* 78E98 8016AA98 80200424 */   addiu     $a0, $zero, 0x2080
    /* 78E9C 8016AA9C 40E3030C */  jal        func_800F8D00
    /* 78EA0 8016AAA0 82200424 */   addiu     $a0, $zero, 0x2082
    /* 78EA4 8016AAA4 77DC030C */  jal        func_800F71DC
    /* 78EA8 8016AAA8 10000424 */   addiu     $a0, $zero, 0x10
    /* 78EAC 8016AAAC 40E3030C */  jal        func_800F8D00
    /* 78EB0 8016AAB0 C0200424 */   addiu     $a0, $zero, 0x20C0
    /* 78EB4 8016AAB4 40E3030C */  jal        func_800F8D00
    /* 78EB8 8016AAB8 C2200424 */   addiu     $a0, $zero, 0x20C2
    /* 78EBC 8016AABC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78EC0 8016AAC0 00000000 */  nop
    /* 78EC4 8016AAC4 0800E003 */  jr         $ra
    /* 78EC8 8016AAC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AA84
