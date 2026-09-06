nonmatching func_80123AA8, 0x58

glabel func_80123AA8
    /* 31EA8 80123AA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31EAC 80123AAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31EB0 80123AB0 91E5030C */  jal        func_800F9644
    /* 31EB4 80123AB4 20000424 */   addiu     $a0, $zero, 0x20
    /* 31EB8 80123AB8 96D9030C */  jal        func_800F6658
    /* 31EBC 80123ABC 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 31EC0 80123AC0 04D5030C */  jal        func_800F5410
    /* 31EC4 80123AC4 00000000 */   nop
    /* 31EC8 80123AC8 19D0030C */  jal        func_800F4064
    /* 31ECC 80123ACC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 31ED0 80123AD0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 31ED4 80123AD4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 31ED8 80123AD8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 31EDC 80123ADC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 31EE0 80123AE0 00004394 */  lhu        $v1, 0x0($v0)
    /* 31EE4 80123AE4 20000424 */  addiu      $a0, $zero, 0x20
    /* 31EE8 80123AE8 98E5030C */  jal        func_800F9660
    /* 31EEC 80123AEC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 31EF0 80123AF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31EF4 80123AF4 00000000 */  nop
    /* 31EF8 80123AF8 0800E003 */  jr         $ra
    /* 31EFC 80123AFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123AA8
