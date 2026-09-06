nonmatching func_8012FF9C, 0xBC

glabel func_8012FF9C
    /* 3E39C 8012FF9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3E3A0 8012FFA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3E3A4 8012FFA4 59D9030C */  jal        func_800F6564
    /* 3E3A8 8012FFA8 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3E3AC 8012FFAC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3E3B0 8012FFB0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3E3B4 8012FFB4 00000000 */  nop
    /* 3E3B8 8012FFB8 00006290 */  lbu        $v0, 0x0($v1)
    /* 3E3BC 8012FFBC 00000000 */  nop
    /* 3E3C0 8012FFC0 C0100200 */  sll        $v0, $v0, 3
    /* 3E3C4 8012FFC4 50D4030C */  jal        func_800F5140
    /* 3E3C8 8012FFC8 000062A0 */   sb        $v0, 0x0($v1)
    /* 3E3CC 8012FFCC D3D3030C */  jal        func_800F4F4C
    /* 3E3D0 8012FFD0 00000000 */   nop
    /* 3E3D4 8012FFD4 02D0030C */  jal        func_800F4008
    /* 3E3D8 8012FFD8 56000424 */   addiu     $a0, $zero, 0x56
    /* 3E3DC 8012FFDC 93E0030C */  jal        func_800F824C
    /* 3E3E0 8012FFE0 46000424 */   addiu     $a0, $zero, 0x46
    /* 3E3E4 8012FFE4 59D9030C */  jal        func_800F6564
    /* 3E3E8 8012FFE8 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3E3EC 8012FFEC 98E5030C */  jal        func_800F9660
    /* 3E3F0 8012FFF0 10000424 */   addiu     $a0, $zero, 0x10
    /* 3E3F4 8012FFF4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3E3F8 8012FFF8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3E3FC 8012FFFC 1A80043C */  lui        $a0, %hi(D_8019ED5C)
    /* 3E400 80130000 5CED848C */  lw         $a0, %lo(D_8019ED5C)($a0)
    /* 3E404 80130004 00006290 */  lbu        $v0, 0x0($v1)
    /* 3E408 80130008 00000000 */  nop
    /* 3E40C 8013000C 000082A0 */  sb         $v0, 0x0($a0)
    /* 3E410 80130010 1A80023C */  lui        $v0, %hi(D_80199328)
    /* 3E414 80130014 1A80053C */  lui        $a1, %hi(D_8019ED5C)
    /* 3E418 80130018 5CEDA58C */  lw         $a1, %lo(D_8019ED5C)($a1)
    /* 3E41C 8013001C 28934224 */  addiu      $v0, $v0, %lo(D_80199328)
    /* 3E420 80130020 0000A390 */  lbu        $v1, 0x0($a1)
    /* 3E424 80130024 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 3E428 80130028 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 3E42C 8013002C 21186200 */  addu       $v1, $v1, $v0
    /* 3E430 80130030 00006290 */  lbu        $v0, 0x0($v1)
    /* 3E434 80130034 10000424 */  addiu      $a0, $zero, 0x10
    /* 3E438 80130038 91E5030C */  jal        func_800F9644
    /* 3E43C 8013003C 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 3E440 80130040 93E0030C */  jal        func_800F824C
    /* 3E444 80130044 45000424 */   addiu     $a0, $zero, 0x45
    /* 3E448 80130048 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3E44C 8013004C 00000000 */  nop
    /* 3E450 80130050 0800E003 */  jr         $ra
    /* 3E454 80130054 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012FF9C
