nonmatching func_8012C7E4, 0x48

glabel func_8012C7E4
    /* 3ABE4 8012C7E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3ABE8 8012C7E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3ABEC 8012C7EC 91E5030C */  jal        func_800F9644
    /* 3ABF0 8012C7F0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3ABF4 8012C7F4 40DD030C */  jal        func_800F7500
    /* 3ABF8 8012C7F8 09000424 */   addiu     $a0, $zero, 0x9
    /* 3ABFC 8012C7FC D9D9030C */  jal        func_800F6764
    /* 3AC00 8012C800 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AC04 8012C804 04D5030C */  jal        func_800F5410
    /* 3AC08 8012C808 00000000 */   nop
    /* 3AC0C 8012C80C 19D0030C */  jal        func_800F4064
    /* 3AC10 8012C810 32000424 */   addiu     $a0, $zero, 0x32
    /* 3AC14 8012C814 E5B1040C */  jal        func_8012C794
    /* 3AC18 8012C818 00000000 */   nop
    /* 3AC1C 8012C81C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3AC20 8012C820 00000000 */  nop
    /* 3AC24 8012C824 0800E003 */  jr         $ra
    /* 3AC28 8012C828 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C7E4
