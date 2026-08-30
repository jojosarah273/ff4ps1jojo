nonmatching func_80136174, 0x30

glabel func_80136174
    /* 44574 80136174 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 44578 80136178 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4457C 8013617C 91E5030C */  jal        func_800F9644
    /* 44580 80136180 20000424 */   addiu     $a0, $zero, 0x20
    /* 44584 80136184 BCD8030C */  jal        func_800F62F0
    /* 44588 80136188 51000424 */   addiu     $a0, $zero, 0x51
    /* 4458C 8013618C 98E5030C */  jal        func_800F9660
    /* 44590 80136190 20000424 */   addiu     $a0, $zero, 0x20
    /* 44594 80136194 1000BF8F */  lw         $ra, 0x10($sp)
    /* 44598 80136198 00000000 */  nop
    /* 4459C 8013619C 0800E003 */  jr         $ra
    /* 445A0 801361A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80136174
