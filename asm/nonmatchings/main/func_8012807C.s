nonmatching func_8012807C, 0x58

glabel func_8012807C
    /* 3647C 8012807C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 36480 80128080 1000BFAF */  sw         $ra, 0x10($sp)
    /* 36484 80128084 91E5030C */  jal        func_800F9644
    /* 36488 80128088 20000424 */   addiu     $a0, $zero, 0x20
    /* 3648C 8012808C 77DC030C */  jal        func_800F71DC
    /* 36490 80128090 28FE0434 */   ori       $a0, $zero, 0xFE28
    /* 36494 80128094 40DD030C */  jal        func_800F7500
    /* 36498 80128098 60A10434 */   ori       $a0, $zero, 0xA160
    /* 3649C 8012809C 56D9030C */  jal        func_800F6558
    /* 364A0 801280A0 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 364A4 801280A4 59CF030C */  jal        func_800F3D64
    /* 364A8 801280A8 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 364AC 801280AC 98E5030C */  jal        func_800F9660
    /* 364B0 801280B0 20000424 */   addiu     $a0, $zero, 0x20
    /* 364B4 801280B4 C87C040C */  jal        func_8011F320
    /* 364B8 801280B8 00000000 */   nop
    /* 364BC 801280BC C37B040C */  jal        func_8011EF0C
    /* 364C0 801280C0 00000000 */   nop
    /* 364C4 801280C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 364C8 801280C8 00000000 */  nop
    /* 364CC 801280CC 0800E003 */  jr         $ra
    /* 364D0 801280D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012807C
