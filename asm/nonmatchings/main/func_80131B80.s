nonmatching func_80131B80, 0x78

glabel func_80131B80
    /* 3FF80 80131B80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FF84 80131B84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FF88 80131B88 80E4030C */  jal        func_800F9200
    /* 3FF8C 80131B8C 00000000 */   nop
    /* 3FF90 80131B90 3489040C */  jal        func_801224D0
    /* 3FF94 80131B94 00000000 */   nop
    /* 3FF98 80131B98 DADA030C */  jal        func_800F6B68
    /* 3FF9C 80131B9C 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 3FFA0 80131BA0 0DD9030C */  jal        func_800F6434
    /* 3FFA4 80131BA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FFA8 80131BA8 0D004014 */  bnez       $v0, .L80131BE0
    /* 3FFAC 80131BAC 00000000 */   nop
    /* 3FFB0 80131BB0 6DC8040C */  jal        func_801321B4
    /* 3FFB4 80131BB4 00000000 */   nop
    /* 3FFB8 80131BB8 91E5030C */  jal        func_800F9644
    /* 3FFBC 80131BBC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FFC0 80131BC0 F8DA030C */  jal        func_800F6BE0
    /* 3FFC4 80131BC4 03000424 */   addiu     $a0, $zero, 0x3
    /* 3FFC8 80131BC8 99D0030C */  jal        func_800F4264
    /* 3FFCC 80131BCC 807C0424 */   addiu     $a0, $zero, 0x7C80
    /* 3FFD0 80131BD0 F7E1030C */  jal        func_800F87DC
    /* 3FFD4 80131BD4 03000424 */   addiu     $a0, $zero, 0x3
    /* 3FFD8 80131BD8 98E5030C */  jal        func_800F9660
    /* 3FFDC 80131BDC 20000424 */   addiu     $a0, $zero, 0x20
  .L80131BE0:
    /* 3FFE0 80131BE0 F7E4030C */  jal        func_800F93DC
    /* 3FFE4 80131BE4 00000000 */   nop
    /* 3FFE8 80131BE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FFEC 80131BEC 00000000 */  nop
    /* 3FFF0 80131BF0 0800E003 */  jr         $ra
    /* 3FFF4 80131BF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131B80
