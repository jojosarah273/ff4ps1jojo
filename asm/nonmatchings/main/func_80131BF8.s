nonmatching func_80131BF8, 0x58

glabel func_80131BF8
    /* 3FFF8 80131BF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FFFC 80131BFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40000 80131C00 53D9030C */  jal        func_800F654C
    /* 40004 80131C04 21200000 */   addu      $a0, $zero, $zero
    /* 40008 80131C08 62E0030C */  jal        func_800F8188
    /* 4000C 80131C0C BD1B0424 */   addiu     $a0, $zero, 0x1BBD
  .L80131C10:
    /* 40010 80131C10 36C7040C */  jal        func_80131CD8
    /* 40014 80131C14 00000000 */   nop
    /* 40018 80131C18 7AD8030C */  jal        func_800F61E8
    /* 4001C 80131C1C 00000000 */   nop
    /* 40020 80131C20 5DD5030C */  jal        func_800F5574
    /* 40024 80131C24 05000424 */   addiu     $a0, $zero, 0x5
    /* 40028 80131C28 F5D4030C */  jal        func_800F53D4
    /* 4002C 80131C2C 00000000 */   nop
    /* 40030 80131C30 F7FF4010 */  beqz       $v0, .L80131C10
    /* 40034 80131C34 00000000 */   nop
    /* 40038 80131C38 14C7040C */  jal        func_80131C50
    /* 4003C 80131C3C 00000000 */   nop
    /* 40040 80131C40 1000BF8F */  lw         $ra, 0x10($sp)
    /* 40044 80131C44 00000000 */  nop
    /* 40048 80131C48 0800E003 */  jr         $ra
    /* 4004C 80131C4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131BF8
