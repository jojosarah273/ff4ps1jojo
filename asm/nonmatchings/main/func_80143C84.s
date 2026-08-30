nonmatching func_80143C84, 0x48

glabel func_80143C84
    /* 52084 80143C84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52088 80143C88 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5208C 80143C8C 9E14050C */  jal        func_80145278
    /* 52090 80143C90 00000000 */   nop
    /* 52094 80143C94 53D9030C */  jal        func_800F654C
    /* 52098 80143C98 08000424 */   addiu     $a0, $zero, 0x8
    /* 5209C 80143C9C 62E0030C */  jal        func_800F8188
    /* 520A0 80143CA0 26F30434 */   ori       $a0, $zero, 0xF326
    /* 520A4 80143CA4 C7E5030C */  jal        func_800F971C
    /* 520A8 80143CA8 00000000 */   nop
    /* 520AC 80143CAC 2229050C */  jal        func_8014A488
    /* 520B0 80143CB0 00000000 */   nop
    /* 520B4 80143CB4 B214050C */  jal        func_801452C8
    /* 520B8 80143CB8 00000000 */   nop
    /* 520BC 80143CBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 520C0 80143CC0 00000000 */  nop
    /* 520C4 80143CC4 0800E003 */  jr         $ra
    /* 520C8 80143CC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143C84
