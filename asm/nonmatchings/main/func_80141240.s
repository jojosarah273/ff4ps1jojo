nonmatching func_80141240, 0x50

glabel func_80141240
    /* 4F640 80141240 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F644 80141244 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F648 80141248 5BE3030C */  jal        func_800F8D6C
    /* 4F64C 8014124C 21200000 */   addu      $a0, $zero, $zero
    /* 4F650 80141250 40DD030C */  jal        func_800F7500
    /* 4F654 80141254 21200000 */   addu      $a0, $zero, $zero
    /* 4F658 80141258 A404050C */  jal        func_80141290
    /* 4F65C 8014125C 00000000 */   nop
    /* 4F660 80141260 40DD030C */  jal        func_800F7500
    /* 4F664 80141264 40000424 */   addiu     $a0, $zero, 0x40
    /* 4F668 80141268 A404050C */  jal        func_80141290
    /* 4F66C 8014126C 00000000 */   nop
    /* 4F670 80141270 40DD030C */  jal        func_800F7500
    /* 4F674 80141274 80000424 */   addiu     $a0, $zero, 0x80
    /* 4F678 80141278 A404050C */  jal        func_80141290
    /* 4F67C 8014127C 00000000 */   nop
    /* 4F680 80141280 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F684 80141284 00000000 */  nop
    /* 4F688 80141288 0800E003 */  jr         $ra
    /* 4F68C 8014128C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141240
