nonmatching func_8012C794, 0x50

glabel func_8012C794
    /* 3AB94 8012C794 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3AB98 8012C798 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3AB9C 8012C79C 70D5030C */  jal        func_800F55C0
    /* 3ABA0 8012C7A0 0F270424 */   addiu     $a0, $zero, 0x270F
    /* 3ABA4 8012C7A4 F0D4030C */  jal        func_800F53C0
    /* 3ABA8 8012C7A8 00000000 */   nop
    /* 3ABAC 8012C7AC 03004010 */  beqz       $v0, .L8012C7BC
    /* 3ABB0 8012C7B0 00000000 */   nop
    /* 3ABB4 8012C7B4 56D9030C */  jal        func_800F6558
    /* 3ABB8 8012C7B8 0F270424 */   addiu     $a0, $zero, 0x270F
  .L8012C7BC:
    /* 3ABBC 8012C7BC DEE0030C */  jal        func_800F8378
    /* 3ABC0 8012C7C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3ABC4 8012C7C4 98E5030C */  jal        func_800F9660
    /* 3ABC8 8012C7C8 20000424 */   addiu     $a0, $zero, 0x20
    /* 3ABCC 8012C7CC 7B88040C */  jal        func_801221EC
    /* 3ABD0 8012C7D0 00000000 */   nop
    /* 3ABD4 8012C7D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3ABD8 8012C7D8 00000000 */  nop
    /* 3ABDC 8012C7DC 0800E003 */  jr         $ra
    /* 3ABE0 8012C7E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C794
