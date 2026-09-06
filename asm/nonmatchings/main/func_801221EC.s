nonmatching func_801221EC, 0x60

glabel func_801221EC
    /* 305EC 801221EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 305F0 801221F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 305F4 801221F4 53D9030C */  jal        func_800F654C
    /* 305F8 801221F8 58000424 */   addiu     $a0, $zero, 0x58
    /* 305FC 801221FC 62E0030C */  jal        func_800F8188
    /* 30600 80122200 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 30604 80122204 53D9030C */  jal        func_800F654C
    /* 30608 80122208 02000424 */   addiu     $a0, $zero, 0x2
    /* 3060C 8012220C 62E0030C */  jal        func_800F8188
    /* 30610 80122210 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 30614 80122214 53D9030C */  jal        func_800F654C
    /* 30618 80122218 80000424 */   addiu     $a0, $zero, 0x80
    /* 3061C 8012221C 62E0030C */  jal        func_800F8188
    /* 30620 80122220 021E0424 */   addiu     $a0, $zero, 0x1E02
    /* 30624 80122224 53D9030C */  jal        func_800F654C
    /* 30628 80122228 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3062C 8012222C 62E0030C */  jal        func_800F8188
    /* 30630 80122230 031E0424 */   addiu     $a0, $zero, 0x1E03
    /* 30634 80122234 4AA4050C */  jal        func_80169128
    /* 30638 80122238 00000000 */   nop
    /* 3063C 8012223C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30640 80122240 00000000 */  nop
    /* 30644 80122244 0800E003 */  jr         $ra
    /* 30648 80122248 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801221EC
