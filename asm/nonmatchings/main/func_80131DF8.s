nonmatching func_80131DF8, 0x58

glabel func_80131DF8
    /* 401F8 80131DF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 401FC 80131DFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40200 80131E00 53D9030C */  jal        func_800F654C
    /* 40204 80131E04 21200000 */   addu      $a0, $zero, $zero
    /* 40208 80131E08 62E0030C */  jal        func_800F8188
    /* 4020C 80131E0C BD1B0424 */   addiu     $a0, $zero, 0x1BBD
  .L80131E10:
    /* 40210 80131E10 94C7040C */  jal        func_80131E50
    /* 40214 80131E14 00000000 */   nop
    /* 40218 80131E18 7AD8030C */  jal        func_800F61E8
    /* 4021C 80131E1C 00000000 */   nop
    /* 40220 80131E20 5DD5030C */  jal        func_800F5574
    /* 40224 80131E24 05000424 */   addiu     $a0, $zero, 0x5
    /* 40228 80131E28 F5D4030C */  jal        func_800F53D4
    /* 4022C 80131E2C 00000000 */   nop
    /* 40230 80131E30 F7FF4010 */  beqz       $v0, .L80131E10
    /* 40234 80131E34 00000000 */   nop
    /* 40238 80131E38 14C7040C */  jal        func_80131C50
    /* 4023C 80131E3C 00000000 */   nop
    /* 40240 80131E40 1000BF8F */  lw         $ra, 0x10($sp)
    /* 40244 80131E44 00000000 */  nop
    /* 40248 80131E48 0800E003 */  jr         $ra
    /* 4024C 80131E4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131DF8
