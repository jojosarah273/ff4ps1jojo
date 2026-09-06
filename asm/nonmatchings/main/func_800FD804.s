nonmatching func_800FD804, 0x58

glabel func_800FD804
    /* BC04 800FD804 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BC08 800FD808 1000BFAF */  sw         $ra, 0x10($sp)
    /* BC0C 800FD80C 62E0030C */  jal        func_800F8188
    /* BC10 800FD810 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* BC14 800FD814 53D9030C */  jal        func_800F654C
    /* BC18 800FD818 80000424 */   addiu     $a0, $zero, 0x80
    /* BC1C 800FD81C 62E0030C */  jal        func_800F8188
    /* BC20 800FD820 021E0424 */   addiu     $a0, $zero, 0x1E02
    /* BC24 800FD824 53D9030C */  jal        func_800F654C
    /* BC28 800FD828 FF000424 */   addiu     $a0, $zero, 0xFF
    /* BC2C 800FD82C 62E0030C */  jal        func_800F8188
    /* BC30 800FD830 031E0424 */   addiu     $a0, $zero, 0x1E03
    /* BC34 800FD834 53D9030C */  jal        func_800F654C
    /* BC38 800FD838 02000424 */   addiu     $a0, $zero, 0x2
    /* BC3C 800FD83C 62E0030C */  jal        func_800F8188
    /* BC40 800FD840 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* BC44 800FD844 4AA4050C */  jal        func_80169128
    /* BC48 800FD848 00000000 */   nop
    /* BC4C 800FD84C 1000BF8F */  lw         $ra, 0x10($sp)
    /* BC50 800FD850 00000000 */  nop
    /* BC54 800FD854 0800E003 */  jr         $ra
    /* BC58 800FD858 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD804
