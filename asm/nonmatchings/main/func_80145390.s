nonmatching func_80145390, 0x78

glabel func_80145390
    /* 53790 80145390 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 53794 80145394 1000BFAF */  sw         $ra, 0x10($sp)
    /* 53798 80145398 77DC030C */  jal        func_800F71DC
    /* 5379C 8014539C 08000424 */   addiu     $a0, $zero, 0x8
  .L801453A0:
    /* 537A0 801453A0 5601050C */  jal        func_80140558
    /* 537A4 801453A4 00000000 */   nop
    /* 537A8 801453A8 90D8030C */  jal        func_800F6240
    /* 537AC 801453AC 21F30434 */   ori       $a0, $zero, 0xF321
    /* 537B0 801453B0 90D8030C */  jal        func_800F6240
    /* 537B4 801453B4 21F30434 */   ori       $a0, $zero, 0xF321
    /* 537B8 801453B8 59D9030C */  jal        func_800F6564
    /* 537BC 801453BC 26F30434 */   ori       $a0, $zero, 0xF326
    /* 537C0 801453C0 04D5030C */  jal        func_800F5410
    /* 537C4 801453C4 00000000 */   nop
    /* 537C8 801453C8 02D0030C */  jal        func_800F4008
    /* 537CC 801453CC 04000424 */   addiu     $a0, $zero, 0x4
    /* 537D0 801453D0 62E0030C */  jal        func_800F8188
    /* 537D4 801453D4 26F30434 */   ori       $a0, $zero, 0xF326
    /* 537D8 801453D8 92D7030C */  jal        func_800F5E48
    /* 537DC 801453DC 00000000 */   nop
    /* 537E0 801453E0 19D7030C */  jal        func_800F5C64
    /* 537E4 801453E4 02020424 */   addiu     $a0, $zero, 0x202
    /* 537E8 801453E8 EDFF4014 */  bnez       $v0, .L801453A0
    /* 537EC 801453EC 00000000 */   nop
    /* 537F0 801453F0 DDE3030C */  jal        func_800F8F74
    /* 537F4 801453F4 26F30434 */   ori       $a0, $zero, 0xF326
    /* 537F8 801453F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 537FC 801453FC 00000000 */  nop
    /* 53800 80145400 0800E003 */  jr         $ra
    /* 53804 80145404 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80145390
