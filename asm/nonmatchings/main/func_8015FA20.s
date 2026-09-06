nonmatching func_8015FA20, 0x50

glabel func_8015FA20
    /* 6DE20 8015FA20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DE24 8015FA24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DE28 8015FA28 59D9030C */  jal        func_800F6564
    /* 6DE2C 8015FA2C 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6DE30 8015FA30 62E0030C */  jal        func_800F8188
    /* 6DE34 8015FA34 45390424 */   addiu     $a0, $zero, 0x3945
    /* 6DE38 8015FA38 59D9030C */  jal        func_800F6564
    /* 6DE3C 8015FA3C 0A270424 */   addiu     $a0, $zero, 0x270A
    /* 6DE40 8015FA40 62E0030C */  jal        func_800F8188
    /* 6DE44 8015FA44 46390424 */   addiu     $a0, $zero, 0x3946
    /* 6DE48 8015FA48 77DC030C */  jal        func_800F71DC
    /* 6DE4C 8015FA4C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6DE50 8015FA50 40E3030C */  jal        func_800F8D00
    /* 6DE54 8015FA54 47390424 */   addiu     $a0, $zero, 0x3947
    /* 6DE58 8015FA58 9C7E050C */  jal        func_8015FA70
    /* 6DE5C 8015FA5C 00000000 */   nop
    /* 6DE60 8015FA60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DE64 8015FA64 00000000 */  nop
    /* 6DE68 8015FA68 0800E003 */  jr         $ra
    /* 6DE6C 8015FA6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FA20
