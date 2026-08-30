nonmatching func_8015EBE0, 0x90

glabel func_8015EBE0
    /* 6CFE0 8015EBE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CFE4 8015EBE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CFE8 8015EBE8 AB82050C */  jal        func_80160AAC
    /* 6CFEC 8015EBEC 00000000 */   nop
    /* 6CFF0 8015EBF0 59D9030C */  jal        func_800F6564
    /* 6CFF4 8015EBF4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6CFF8 8015EBF8 0DD9030C */  jal        func_800F6434
    /* 6CFFC 8015EBFC 80800434 */   ori       $a0, $zero, 0x8080
    /* 6D000 8015EC00 09004014 */  bnez       $v0, .L8015EC28
    /* 6D004 8015EC04 00000000 */   nop
    /* 6D008 8015EC08 92D0030C */  jal        func_800F4248
    /* 6D00C 8015EC0C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6D010 8015EC10 62E0030C */  jal        func_800F8188
    /* 6D014 8015EC14 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D018 8015EC18 2394010C */  jal        func_8006508C
    /* 6D01C 8015EC1C 00000000 */   nop
    /* 6D020 8015EC20 187B0508 */  j          .L8015EC60
    /* 6D024 8015EC24 00000000 */   nop
  .L8015EC28:
    /* 6D028 8015EC28 E382050C */  jal        func_80160B8C
    /* 6D02C 8015EC2C 00000000 */   nop
    /* 6D030 8015EC30 1886010C */  jal        func_80061860
    /* 6D034 8015EC34 00000000 */   nop
    /* 6D038 8015EC38 59D9030C */  jal        func_800F6564
    /* 6D03C 8015EC3C 50350424 */   addiu     $a0, $zero, 0x3550
    /* 6D040 8015EC40 80E4030C */  jal        func_800F9200
    /* 6D044 8015EC44 00000000 */   nop
    /* 6D048 8015EC48 DD95010C */  jal        func_80065774
    /* 6D04C 8015EC4C 00000000 */   nop
    /* 6D050 8015EC50 F7E4030C */  jal        func_800F93DC
    /* 6D054 8015EC54 00000000 */   nop
    /* 6D058 8015EC58 62E0030C */  jal        func_800F8188
    /* 6D05C 8015EC5C 50350424 */   addiu     $a0, $zero, 0x3550
  .L8015EC60:
    /* 6D060 8015EC60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D064 8015EC64 00000000 */  nop
    /* 6D068 8015EC68 0800E003 */  jr         $ra
    /* 6D06C 8015EC6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EBE0
