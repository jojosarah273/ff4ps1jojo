nonmatching func_800FE5D4, 0x60

glabel func_800FE5D4
    /* C9D4 800FE5D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C9D8 800FE5D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* C9DC 800FE5DC 53D9030C */  jal        func_800F654C
    /* C9E0 800FE5E0 40000424 */   addiu     $a0, $zero, 0x40
    /* C9E4 800FE5E4 8DF9030C */  jal        func_800FE634
    /* C9E8 800FE5E8 00000000 */   nop
    /* C9EC 800FE5EC AFE3030C */  jal        func_800F8EBC
    /* C9F0 800FE5F0 6E000424 */   addiu     $a0, $zero, 0x6E
    /* C9F4 800FE5F4 53D9030C */  jal        func_800F654C
    /* C9F8 800FE5F8 21200000 */   addu      $a0, $zero, $zero
    /* C9FC 800FE5FC 8DF9030C */  jal        func_800FE634
    /* CA00 800FE600 00000000 */   nop
    /* CA04 800FE604 AFE3030C */  jal        func_800F8EBC
    /* CA08 800FE608 70000424 */   addiu     $a0, $zero, 0x70
    /* CA0C 800FE60C 53D9030C */  jal        func_800F654C
    /* CA10 800FE610 80000424 */   addiu     $a0, $zero, 0x80
    /* CA14 800FE614 8DF9030C */  jal        func_800FE634
    /* CA18 800FE618 00000000 */   nop
    /* CA1C 800FE61C AFE3030C */  jal        func_800F8EBC
    /* CA20 800FE620 72000424 */   addiu     $a0, $zero, 0x72
    /* CA24 800FE624 1000BF8F */  lw         $ra, 0x10($sp)
    /* CA28 800FE628 00000000 */  nop
    /* CA2C 800FE62C 0800E003 */  jr         $ra
    /* CA30 800FE630 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE5D4
