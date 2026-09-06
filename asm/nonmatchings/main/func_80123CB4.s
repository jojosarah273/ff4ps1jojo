nonmatching func_80123CB4, 0x88

glabel func_80123CB4
    /* 320B4 80123CB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 320B8 80123CB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 320BC 80123CBC 80E4030C */  jal        func_800F9200
    /* 320C0 80123CC0 00000000 */   nop
    /* 320C4 80123CC4 59D9030C */  jal        func_800F6564
    /* 320C8 80123CC8 B7160424 */   addiu     $a0, $zero, 0x16B7
    /* 320CC 80123CCC 0DD9030C */  jal        func_800F6434
    /* 320D0 80123CD0 02020424 */   addiu     $a0, $zero, 0x202
    /* 320D4 80123CD4 13004014 */  bnez       $v0, .L80123D24
    /* 320D8 80123CD8 00000000 */   nop
    /* 320DC 80123CDC 77DC030C */  jal        func_800F71DC
    /* 320E0 80123CE0 EB000424 */   addiu     $a0, $zero, 0xEB
    /* 320E4 80123CE4 65DD030C */  jal        func_800F7594
    /* 320E8 80123CE8 41000424 */   addiu     $a0, $zero, 0x41
    /* 320EC 80123CEC C7E5030C */  jal        func_800F971C
    /* 320F0 80123CF0 00000000 */   nop
  .L80123CF4:
    /* 320F4 80123CF4 58E2030C */  jal        func_800F8960
    /* 320F8 80123CF8 001B0424 */   addiu     $a0, $zero, 0x1B00
    /* 320FC 80123CFC EFD8030C */  jal        func_800F63BC
    /* 32100 80123D00 00000000 */   nop
    /* 32104 80123D04 92D7030C */  jal        func_800F5E48
    /* 32108 80123D08 00000000 */   nop
    /* 3210C 80123D0C 19D7030C */  jal        func_800F5C64
    /* 32110 80123D10 02020424 */   addiu     $a0, $zero, 0x202
    /* 32114 80123D14 F7FF4014 */  bnez       $v0, .L80123CF4
    /* 32118 80123D18 00000000 */   nop
    /* 3211C 80123D1C 529B040C */  jal        func_80126D48
    /* 32120 80123D20 00000000 */   nop
  .L80123D24:
    /* 32124 80123D24 F7E4030C */  jal        func_800F93DC
    /* 32128 80123D28 00000000 */   nop
    /* 3212C 80123D2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32130 80123D30 00000000 */  nop
    /* 32134 80123D34 0800E003 */  jr         $ra
    /* 32138 80123D38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123CB4
