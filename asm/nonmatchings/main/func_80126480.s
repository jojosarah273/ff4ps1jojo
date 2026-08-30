nonmatching func_80126480, 0x40

glabel func_80126480
    /* 34880 80126480 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34884 80126484 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34888 80126488 CCE4030C */  jal        func_800F9330
    /* 3488C 8012648C 00000000 */   nop
    /* 34890 80126490 E7E4030C */  jal        func_800F939C
    /* 34894 80126494 00000000 */   nop
    /* 34898 80126498 77DC030C */  jal        func_800F71DC
    /* 3489C 8012649C 00600424 */   addiu     $a0, $zero, 0x6000
    /* 348A0 801264A0 40DD030C */  jal        func_800F7500
    /* 348A4 801264A4 00B60434 */   ori       $a0, $zero, 0xB600
    /* 348A8 801264A8 DA98040C */  jal        func_80126368
    /* 348AC 801264AC 00000000 */   nop
    /* 348B0 801264B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 348B4 801264B4 00000000 */  nop
    /* 348B8 801264B8 0800E003 */  jr         $ra
    /* 348BC 801264BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126480
