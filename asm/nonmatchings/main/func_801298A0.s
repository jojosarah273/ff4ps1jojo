nonmatching func_801298A0, 0x70

glabel func_801298A0
    /* 37CA0 801298A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37CA4 801298A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37CA8 801298A8 59D9030C */  jal        func_800F6564
    /* 37CAC 801298AC 061B0424 */   addiu     $a0, $zero, 0x1B06
    /* 37CB0 801298B0 0DD9030C */  jal        func_800F6434
    /* 37CB4 801298B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 37CB8 801298B8 09004014 */  bnez       $v0, .L801298E0
    /* 37CBC 801298BC 00000000 */   nop
    /* 37CC0 801298C0 33D7030C */  jal        func_800F5CCC
    /* 37CC4 801298C4 00000000 */   nop
    /* 37CC8 801298C8 E3D6030C */  jal        func_800F5B8C
    /* 37CCC 801298CC 02000424 */   addiu     $a0, $zero, 0x2
    /* 37CD0 801298D0 07004014 */  bnez       $v0, .L801298F0
    /* 37CD4 801298D4 00000000 */   nop
    /* 37CD8 801298D8 40A60408 */  j          .L80129900
    /* 37CDC 801298DC 00000000 */   nop
  .L801298E0:
    /* 37CE0 801298E0 9CDC030C */  jal        func_800F7270
    /* 37CE4 801298E4 41000424 */   addiu     $a0, $zero, 0x41
    /* 37CE8 801298E8 3EA60408 */  j          .L801298F8
    /* 37CEC 801298EC 00000000 */   nop
  .L801298F0:
    /* 37CF0 801298F0 77DC030C */  jal        func_800F71DC
    /* 37CF4 801298F4 50000424 */   addiu     $a0, $zero, 0x50
  .L801298F8:
    /* 37CF8 801298F8 44A6040C */  jal        func_80129910
    /* 37CFC 801298FC 00000000 */   nop
  .L80129900:
    /* 37D00 80129900 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37D04 80129904 00000000 */  nop
    /* 37D08 80129908 0800E003 */  jr         $ra
    /* 37D0C 8012990C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801298A0
