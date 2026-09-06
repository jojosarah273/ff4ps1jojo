nonmatching func_8013B88C, 0x48

glabel func_8013B88C
    /* 49C8C 8013B88C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49C90 8013B890 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49C94 8013B894 40DD030C */  jal        func_800F7500
    /* 49C98 8013B898 1FB80434 */   ori       $a0, $zero, 0xB81F
    /* 49C9C 8013B89C 4BEE040C */  jal        func_8013B92C
    /* 49CA0 8013B8A0 00000000 */   nop
    /* 49CA4 8013B8A4 40DD030C */  jal        func_800F7500
    /* 49CA8 8013B8A8 9FB80434 */   ori       $a0, $zero, 0xB89F
    /* 49CAC 8013B8AC 53D9030C */  jal        func_800F654C
    /* 49CB0 8013B8B0 04000424 */   addiu     $a0, $zero, 0x4
    /* 49CB4 8013B8B4 77DC030C */  jal        func_800F71DC
    /* 49CB8 8013B8B8 06000424 */   addiu     $a0, $zero, 0x6
    /* 49CBC 8013B8BC 35EE040C */  jal        func_8013B8D4
    /* 49CC0 8013B8C0 00000000 */   nop
    /* 49CC4 8013B8C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49CC8 8013B8C8 00000000 */  nop
    /* 49CCC 8013B8CC 0800E003 */  jr         $ra
    /* 49CD0 8013B8D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B88C
