nonmatching func_80102414, 0x30

glabel func_80102414
    /* 10814 80102414 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 10818 80102418 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1081C 8010241C EEE3030C */  jal        func_800F8FB8
    /* 10820 80102420 79000424 */   addiu     $a0, $zero, 0x79
    /* 10824 80102424 EEE3030C */  jal        func_800F8FB8
    /* 10828 80102428 B5000424 */   addiu     $a0, $zero, 0xB5
    /* 1082C 8010242C 1109040C */  jal        func_80102444
    /* 10830 80102430 00000000 */   nop
    /* 10834 80102434 1000BF8F */  lw         $ra, 0x10($sp)
    /* 10838 80102438 00000000 */  nop
    /* 1083C 8010243C 0800E003 */  jr         $ra
    /* 10840 80102440 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80102414
