nonmatching func_80129D64, 0x98

glabel func_80129D64
    /* 38164 80129D64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38168 80129D68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3816C 80129D6C 77DC030C */  jal        func_800F71DC
    /* 38170 80129D70 04000424 */   addiu     $a0, $zero, 0x4
  .L80129D74:
    /* 38174 80129D74 AFD8030C */  jal        func_800F62BC
    /* 38178 80129D78 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 3817C 80129D7C B299040C */  jal        func_801266C8
    /* 38180 80129D80 00000000 */   nop
    /* 38184 80129D84 92D7030C */  jal        func_800F5E48
    /* 38188 80129D88 00000000 */   nop
    /* 3818C 80129D8C 19D7030C */  jal        func_800F5C64
    /* 38190 80129D90 02020424 */   addiu     $a0, $zero, 0x202
    /* 38194 80129D94 F7FF4014 */  bnez       $v0, .L80129D74
    /* 38198 80129D98 00000000 */   nop
    /* 3819C 80129D9C 9CDC030C */  jal        func_800F7270
    /* 381A0 80129DA0 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 381A4 80129DA4 5BE3030C */  jal        func_800F8D6C
    /* 381A8 80129DA8 90000424 */   addiu     $a0, $zero, 0x90
    /* 381AC 80129DAC 53D9030C */  jal        func_800F654C
    /* 381B0 80129DB0 19000424 */   addiu     $a0, $zero, 0x19
    /* 381B4 80129DB4 7AE0030C */  jal        func_800F81E8
    /* 381B8 80129DB8 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 381BC 80129DBC 77DC030C */  jal        func_800F71DC
    /* 381C0 80129DC0 04000424 */   addiu     $a0, $zero, 0x4
  .L80129DC4:
    /* 381C4 80129DC4 68D7030C */  jal        func_800F5DA0
    /* 381C8 80129DC8 90000424 */   addiu     $a0, $zero, 0x90
    /* 381CC 80129DCC B299040C */  jal        func_801266C8
    /* 381D0 80129DD0 00000000 */   nop
    /* 381D4 80129DD4 92D7030C */  jal        func_800F5E48
    /* 381D8 80129DD8 00000000 */   nop
    /* 381DC 80129DDC 19D7030C */  jal        func_800F5C64
    /* 381E0 80129DE0 02020424 */   addiu     $a0, $zero, 0x202
    /* 381E4 80129DE4 F7FF4014 */  bnez       $v0, .L80129DC4
    /* 381E8 80129DE8 00000000 */   nop
    /* 381EC 80129DEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 381F0 80129DF0 00000000 */  nop
    /* 381F4 80129DF4 0800E003 */  jr         $ra
    /* 381F8 80129DF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129D64
