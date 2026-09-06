nonmatching func_8016C6FC, 0x38

glabel func_8016C6FC
    /* 7AAFC 8016C6FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7AB00 8016C700 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7AB04 8016C704 53D9030C */  jal        func_800F654C
    /* 7AB08 8016C708 20000424 */   addiu     $a0, $zero, 0x20
    /* 7AB0C 8016C70C 93E0030C */  jal        func_800F824C
    /* 7AB10 8016C710 28000424 */   addiu     $a0, $zero, 0x28
    /* 7AB14 8016C714 91E5030C */  jal        func_800F9644
    /* 7AB18 8016C718 20000424 */   addiu     $a0, $zero, 0x20
    /* 7AB1C 8016C71C E3B1050C */  jal        func_8016C78C
    /* 7AB20 8016C720 00000000 */   nop
    /* 7AB24 8016C724 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7AB28 8016C728 00000000 */  nop
    /* 7AB2C 8016C72C 0800E003 */  jr         $ra
    /* 7AB30 8016C730 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016C6FC
