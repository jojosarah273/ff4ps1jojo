nonmatching func_80140D94, 0x6C

glabel func_80140D94
    /* 4F194 80140D94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F198 80140D98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F19C 80140D9C C7E5030C */  jal        func_800F971C
    /* 4F1A0 80140DA0 00000000 */   nop
    /* 4F1A4 80140DA4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4F1A8 80140DA8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4F1AC 80140DAC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4F1B0 80140DB0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4F1B4 80140DB4 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F1B8 80140DB8 00000000 */  nop
    /* 4F1BC 80140DBC 000083A4 */  sh         $v1, 0x0($a0)
  .L80140DC0:
    /* 4F1C0 80140DC0 DADA030C */  jal        func_800F6B68
    /* 4F1C4 80140DC4 76F40434 */   ori       $a0, $zero, 0xF476
    /* 4F1C8 80140DC8 DAE1030C */  jal        func_800F8768
    /* 4F1CC 80140DCC C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 4F1D0 80140DD0 D9D8030C */  jal        func_800F6364
    /* 4F1D4 80140DD4 00000000 */   nop
    /* 4F1D8 80140DD8 56D6030C */  jal        func_800F5958
    /* 4F1DC 80140DDC 08000424 */   addiu     $a0, $zero, 0x8
    /* 4F1E0 80140DE0 F5D4030C */  jal        func_800F53D4
    /* 4F1E4 80140DE4 00000000 */   nop
    /* 4F1E8 80140DE8 F5FF4010 */  beqz       $v0, .L80140DC0
    /* 4F1EC 80140DEC 00000000 */   nop
    /* 4F1F0 80140DF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F1F4 80140DF4 00000000 */  nop
    /* 4F1F8 80140DF8 0800E003 */  jr         $ra
    /* 4F1FC 80140DFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140D94
