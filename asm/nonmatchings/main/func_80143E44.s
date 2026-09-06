nonmatching func_80143E44, 0x90

glabel func_80143E44
    /* 52244 80143E44 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52248 80143E48 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5224C 80143E4C 80E4030C */  jal        func_800F9200
    /* 52250 80143E50 00000000 */   nop
    /* 52254 80143E54 04D5030C */  jal        func_800F5410
    /* 52258 80143E58 00000000 */   nop
    /* 5225C 80143E5C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 52260 80143E60 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 52264 80143E64 00000000 */  nop
    /* 52268 80143E68 00004394 */  lhu        $v1, 0x0($v0)
    /* 5226C 80143E6C 73F10434 */  ori        $a0, $zero, 0xF173
    /* 52270 80143E70 C1CE030C */  jal        func_800F3B04
    /* 52274 80143E74 21206400 */   addu      $a0, $v1, $a0
    /* 52278 80143E78 CECF030C */  jal        func_800F3F38
    /* 5227C 80143E7C 21204000 */   addu      $a0, $v0, $zero
    /* 52280 80143E80 DAE1030C */  jal        func_800F8768
    /* 52284 80143E84 73F10434 */   ori       $a0, $zero, 0xF173
    /* 52288 80143E88 F7E4030C */  jal        func_800F93DC
    /* 5228C 80143E8C 00000000 */   nop
    /* 52290 80143E90 04D5030C */  jal        func_800F5410
    /* 52294 80143E94 00000000 */   nop
    /* 52298 80143E98 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5229C 80143E9C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 522A0 80143EA0 00000000 */  nop
    /* 522A4 80143EA4 00004394 */  lhu        $v1, 0x0($v0)
    /* 522A8 80143EA8 33F10434 */  ori        $a0, $zero, 0xF133
    /* 522AC 80143EAC C1CE030C */  jal        func_800F3B04
    /* 522B0 80143EB0 21206400 */   addu      $a0, $v1, $a0
    /* 522B4 80143EB4 CECF030C */  jal        func_800F3F38
    /* 522B8 80143EB8 21204000 */   addu      $a0, $v0, $zero
    /* 522BC 80143EBC DAE1030C */  jal        func_800F8768
    /* 522C0 80143EC0 33F10434 */   ori       $a0, $zero, 0xF133
    /* 522C4 80143EC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 522C8 80143EC8 00000000 */  nop
    /* 522CC 80143ECC 0800E003 */  jr         $ra
    /* 522D0 80143ED0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143E44
