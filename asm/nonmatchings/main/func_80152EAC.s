nonmatching func_80152EAC, 0x60

glabel func_80152EAC
    /* 612AC 80152EAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 612B0 80152EB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 612B4 80152EB4 77DC030C */  jal        func_800F71DC
    /* 612B8 80152EB8 21200000 */   addu      $a0, $zero, $zero
    /* 612BC 80152EBC 40DD030C */  jal        func_800F7500
    /* 612C0 80152EC0 08000424 */   addiu     $a0, $zero, 0x8
  .L80152EC4:
    /* 612C4 80152EC4 50D4030C */  jal        func_800F5140
    /* 612C8 80152EC8 00000000 */   nop
    /* 612CC 80152ECC EBD3030C */  jal        func_800F4FAC
    /* 612D0 80152ED0 01010424 */   addiu     $a0, $zero, 0x101
    /* 612D4 80152ED4 03004014 */  bnez       $v0, .L80152EE4
    /* 612D8 80152ED8 00000000 */   nop
    /* 612DC 80152EDC D9D8030C */  jal        func_800F6364
    /* 612E0 80152EE0 00000000 */   nop
  .L80152EE4:
    /* 612E4 80152EE4 A8D7030C */  jal        func_800F5EA0
    /* 612E8 80152EE8 00000000 */   nop
    /* 612EC 80152EEC 19D7030C */  jal        func_800F5C64
    /* 612F0 80152EF0 02020424 */   addiu     $a0, $zero, 0x202
    /* 612F4 80152EF4 F3FF4014 */  bnez       $v0, .L80152EC4
    /* 612F8 80152EF8 00000000 */   nop
    /* 612FC 80152EFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61300 80152F00 00000000 */  nop
    /* 61304 80152F04 0800E003 */  jr         $ra
    /* 61308 80152F08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80152EAC
