nonmatching func_80113DCC, 0x38

glabel func_80113DCC
    /* 221CC 80113DCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 221D0 80113DD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 221D4 80113DD4 53D9030C */  jal        func_800F654C
    /* 221D8 80113DD8 39000424 */   addiu     $a0, $zero, 0x39
    /* 221DC 80113DDC 93E0030C */  jal        func_800F824C
    /* 221E0 80113DE0 91000424 */   addiu     $a0, $zero, 0x91
    /* 221E4 80113DE4 53D9030C */  jal        func_800F654C
    /* 221E8 80113DE8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 221EC 80113DEC 8F4F040C */  jal        func_80113E3C
    /* 221F0 80113DF0 00000000 */   nop
    /* 221F4 80113DF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 221F8 80113DF8 00000000 */  nop
    /* 221FC 80113DFC 0800E003 */  jr         $ra
    /* 22200 80113E00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113DCC
