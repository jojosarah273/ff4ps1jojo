nonmatching func_80142B4C, 0x80

glabel func_80142B4C
    /* 50F4C 80142B4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50F50 80142B50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 50F54 80142B54 80E4030C */  jal        func_800F9200
    /* 50F58 80142B58 00000000 */   nop
    /* 50F5C 80142B5C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50F60 80142B60 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50F64 80142B64 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 50F68 80142B68 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 50F6C 80142B6C 00004394 */  lhu        $v1, 0x0($v0)
    /* 50F70 80142B70 00190424 */  addiu      $a0, $zero, 0x1900
    /* 50F74 80142B74 5CDB030C */  jal        func_800F6D70
    /* 50F78 80142B78 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 50F7C 80142B7C DAE1030C */  jal        func_800F8768
    /* 50F80 80142B80 33F10434 */   ori       $a0, $zero, 0xF133
    /* 50F84 80142B84 04D5030C */  jal        func_800F5410
    /* 50F88 80142B88 00000000 */   nop
    /* 50F8C 80142B8C 02D0030C */  jal        func_800F4008
    /* 50F90 80142B90 40000424 */   addiu     $a0, $zero, 0x40
    /* 50F94 80142B94 DAE1030C */  jal        func_800F8768
    /* 50F98 80142B98 73F10434 */   ori       $a0, $zero, 0xF173
    /* 50F9C 80142B9C F7E4030C */  jal        func_800F93DC
    /* 50FA0 80142BA0 00000000 */   nop
    /* 50FA4 80142BA4 92D0030C */  jal        func_800F4248
    /* 50FA8 80142BA8 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 50FAC 80142BAC DAE1030C */  jal        func_800F8768
    /* 50FB0 80142BB0 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 50FB4 80142BB4 DAE1030C */  jal        func_800F8768
    /* 50FB8 80142BB8 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 50FBC 80142BBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50FC0 80142BC0 00000000 */  nop
    /* 50FC4 80142BC4 0800E003 */  jr         $ra
    /* 50FC8 80142BC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142B4C
