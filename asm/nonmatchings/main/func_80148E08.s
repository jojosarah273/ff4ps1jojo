nonmatching func_80148E08, 0x58

glabel func_80148E08
    /* 57208 80148E08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5720C 80148E0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57210 80148E10 77DC030C */  jal        func_800F71DC
    /* 57214 80148E14 21200000 */   addu      $a0, $zero, $zero
    /* 57218 80148E18 53D9030C */  jal        func_800F654C
    /* 5721C 80148E1C 40000424 */   addiu     $a0, $zero, 0x40
  .L80148E20:
    /* 57220 80148E20 3BE4030C */  jal        func_800F90EC
    /* 57224 80148E24 33F10434 */   ori       $a0, $zero, 0xF133
    /* 57228 80148E28 DAE1030C */  jal        func_800F8768
    /* 5722C 80148E2C 73F10434 */   ori       $a0, $zero, 0xF173
    /* 57230 80148E30 D9D8030C */  jal        func_800F6364
    /* 57234 80148E34 00000000 */   nop
    /* 57238 80148E38 56D6030C */  jal        func_800F5958
    /* 5723C 80148E3C 08000424 */   addiu     $a0, $zero, 0x8
    /* 57240 80148E40 F5D4030C */  jal        func_800F53D4
    /* 57244 80148E44 00000000 */   nop
    /* 57248 80148E48 F5FF4010 */  beqz       $v0, .L80148E20
    /* 5724C 80148E4C 00000000 */   nop
    /* 57250 80148E50 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57254 80148E54 00000000 */  nop
    /* 57258 80148E58 0800E003 */  jr         $ra
    /* 5725C 80148E5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148E08
