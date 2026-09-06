nonmatching func_8015A344, 0x30

glabel func_8015A344
    /* 68744 8015A344 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68748 8015A348 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6874C 8015A34C F0D4030C */  jal        func_800F53C0
    /* 68750 8015A350 00000000 */   nop
    /* 68754 8015A354 03004010 */  beqz       $v0, .L8015A364
    /* 68758 8015A358 00000000 */   nop
    /* 6875C 8015A35C 53D9030C */  jal        func_800F654C
    /* 68760 8015A360 FF000424 */   addiu     $a0, $zero, 0xFF
  .L8015A364:
    /* 68764 8015A364 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68768 8015A368 00000000 */  nop
    /* 6876C 8015A36C 0800E003 */  jr         $ra
    /* 68770 8015A370 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A344
