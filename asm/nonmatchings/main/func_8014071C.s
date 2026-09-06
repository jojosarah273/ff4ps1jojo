nonmatching func_8014071C, 0x50

glabel func_8014071C
    /* 4EB1C 8014071C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EB20 80140720 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EB24 80140724 59D9030C */  jal        func_800F6564
    /* 4EB28 80140728 11F40434 */   ori       $a0, $zero, 0xF411
    /* 4EB2C 8014072C 0DD9030C */  jal        func_800F6434
    /* 4EB30 80140730 02000424 */   addiu     $a0, $zero, 0x2
    /* 4EB34 80140734 09004014 */  bnez       $v0, .L8014075C
    /* 4EB38 80140738 00000000 */   nop
    /* 4EB3C 8014073C 49D7030C */  jal        func_800F5D24
    /* 4EB40 80140740 11F40434 */   ori       $a0, $zero, 0xF411
    /* 4EB44 80140744 9356020C */  jal        func_80095A4C
    /* 4EB48 80140748 00000000 */   nop
    /* 4EB4C 8014074C 53D9030C */  jal        func_800F654C
    /* 4EB50 80140750 31000424 */   addiu     $a0, $zero, 0x31
    /* 4EB54 80140754 4A35050C */  jal        func_8014D528
    /* 4EB58 80140758 00000000 */   nop
  .L8014075C:
    /* 4EB5C 8014075C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EB60 80140760 00000000 */  nop
    /* 4EB64 80140764 0800E003 */  jr         $ra
    /* 4EB68 80140768 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014071C
