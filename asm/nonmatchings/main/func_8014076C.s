nonmatching func_8014076C, 0x80

glabel func_8014076C
    /* 4EB6C 8014076C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EB70 80140770 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EB74 80140774 53D9030C */  jal        func_800F654C
    /* 4EB78 80140778 54000424 */   addiu     $a0, $zero, 0x54
    /* 4EB7C 8014077C 4A35050C */  jal        func_8014D528
    /* 4EB80 80140780 00000000 */   nop
    /* 4EB84 80140784 77DC030C */  jal        func_800F71DC
    /* 4EB88 80140788 40000424 */   addiu     $a0, $zero, 0x40
  .L8014078C:
    /* 4EB8C 8014078C CCE4030C */  jal        func_800F9330
    /* 4EB90 80140790 00000000 */   nop
    /* 4EB94 80140794 5601050C */  jal        func_80140558
    /* 4EB98 80140798 00000000 */   nop
    /* 4EB9C 8014079C 0F35050C */  jal        func_8014D43C
    /* 4EBA0 801407A0 00000000 */   nop
    /* 4EBA4 801407A4 68E5030C */  jal        func_800F95A0
    /* 4EBA8 801407A8 00000000 */   nop
    /* 4EBAC 801407AC 92D7030C */  jal        func_800F5E48
    /* 4EBB0 801407B0 00000000 */   nop
    /* 4EBB4 801407B4 19D7030C */  jal        func_800F5C64
    /* 4EBB8 801407B8 02020424 */   addiu     $a0, $zero, 0x202
    /* 4EBBC 801407BC F3FF4014 */  bnez       $v0, .L8014078C
    /* 4EBC0 801407C0 00000000 */   nop
    /* 4EBC4 801407C4 0535050C */  jal        func_8014D414
    /* 4EBC8 801407C8 00000000 */   nop
    /* 4EBCC 801407CC C7E5030C */  jal        func_800F971C
    /* 4EBD0 801407D0 00000000 */   nop
    /* 4EBD4 801407D4 4A35050C */  jal        func_8014D528
    /* 4EBD8 801407D8 00000000 */   nop
    /* 4EBDC 801407DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EBE0 801407E0 00000000 */  nop
    /* 4EBE4 801407E4 0800E003 */  jr         $ra
    /* 4EBE8 801407E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014076C
