nonmatching func_80137B18, 0xA0

glabel func_80137B18
    /* 45F18 80137B18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 45F1C 80137B1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 45F20 80137B20 ED8F040C */  jal        func_80123FB4
    /* 45F24 80137B24 00000000 */   nop
    /* 45F28 80137B28 6E90040C */  jal        func_801241B8
    /* 45F2C 80137B2C 00000000 */   nop
    /* 45F30 80137B30 BC99040C */  jal        func_801266F0
    /* 45F34 80137B34 00000000 */   nop
    /* 45F38 80137B38 A97D040C */  jal        func_8011F6A4
    /* 45F3C 80137B3C 00000000 */   nop
    /* 45F40 80137B40 C7E5030C */  jal        func_800F971C
    /* 45F44 80137B44 00000000 */   nop
    /* 45F48 80137B48 F6E1040C */  jal        func_801387D8
    /* 45F4C 80137B4C 00000000 */   nop
    /* 45F50 80137B50 40E3030C */  jal        func_800F8D00
    /* 45F54 80137B54 FC170424 */   addiu     $a0, $zero, 0x17FC
    /* 45F58 80137B58 CCE1040C */  jal        func_80138730
    /* 45F5C 80137B5C 00000000 */   nop
    /* 45F60 80137B60 029D040C */  jal        func_80127408
    /* 45F64 80137B64 00000000 */   nop
    /* 45F68 80137B68 2B84040C */  jal        func_801210AC
    /* 45F6C 80137B6C 00000000 */   nop
    /* 45F70 80137B70 1A80023C */  lui        $v0, %hi(D_80199230)
    /* 45F74 80137B74 30924494 */  lhu        $a0, %lo(D_80199230)($v0)
    /* 45F78 80137B78 40DD030C */  jal        func_800F7500
    /* 45F7C 80137B7C 00000000 */   nop
    /* 45F80 80137B80 E97E040C */  jal        func_8011FBA4
    /* 45F84 80137B84 00000000 */   nop
    /* 45F88 80137B88 CC98040C */  jal        func_80126330
    /* 45F8C 80137B8C 00000000 */   nop
    /* 45F90 80137B90 6E90040C */  jal        func_801241B8
    /* 45F94 80137B94 00000000 */   nop
    /* 45F98 80137B98 53D9030C */  jal        func_800F654C
    /* 45F9C 80137B9C 01000424 */   addiu     $a0, $zero, 0x1
    /* 45FA0 80137BA0 62E0030C */  jal        func_800F8188
    /* 45FA4 80137BA4 9A1B0424 */   addiu     $a0, $zero, 0x1B9A
    /* 45FA8 80137BA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 45FAC 80137BAC 00000000 */  nop
    /* 45FB0 80137BB0 0800E003 */  jr         $ra
    /* 45FB4 80137BB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80137B18
