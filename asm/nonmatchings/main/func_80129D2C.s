nonmatching func_80129D2C, 0x38

glabel func_80129D2C
    /* 3812C 80129D2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38130 80129D30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38134 80129D34 59D9030C */  jal        func_800F6564
    /* 38138 80129D38 491B0424 */   addiu     $a0, $zero, 0x1B49
    /* 3813C 80129D3C 0DD9030C */  jal        func_800F6434
    /* 38140 80129D40 02020424 */   addiu     $a0, $zero, 0x202
    /* 38144 80129D44 03004010 */  beqz       $v0, .L80129D54
    /* 38148 80129D48 00000000 */   nop
    /* 3814C 80129D4C 03CB040C */  jal        func_80132C0C
    /* 38150 80129D50 00000000 */   nop
  .L80129D54:
    /* 38154 80129D54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38158 80129D58 00000000 */  nop
    /* 3815C 80129D5C 0800E003 */  jr         $ra
    /* 38160 80129D60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129D2C
