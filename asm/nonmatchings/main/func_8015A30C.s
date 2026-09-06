nonmatching func_8015A30C, 0x38

glabel func_8015A30C
    /* 6870C 8015A30C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68710 8015A310 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68714 8015A314 5DD5030C */  jal        func_800F5574
    /* 68718 8015A318 63000424 */   addiu     $a0, $zero, 0x63
    /* 6871C 8015A31C F0D4030C */  jal        func_800F53C0
    /* 68720 8015A320 00000000 */   nop
    /* 68724 8015A324 03004010 */  beqz       $v0, .L8015A334
    /* 68728 8015A328 00000000 */   nop
    /* 6872C 8015A32C 53D9030C */  jal        func_800F654C
    /* 68730 8015A330 63000424 */   addiu     $a0, $zero, 0x63
  .L8015A334:
    /* 68734 8015A334 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68738 8015A338 00000000 */  nop
    /* 6873C 8015A33C 0800E003 */  jr         $ra
    /* 68740 8015A340 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A30C
