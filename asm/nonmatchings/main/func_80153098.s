nonmatching func_80153098, 0x48

glabel func_80153098
    /* 61498 80153098 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6149C 8015309C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 614A0 801530A0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 614A4 801530A4 1300043C */  lui        $a0, (0x13FEFE >> 16)
    /* 614A8 801530A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 614AC 801530AC 00004594 */  lhu        $a1, 0x0($v0)
    /* 614B0 801530B0 E7CE030C */  jal        func_800F3B9C
    /* 614B4 801530B4 FEFE8434 */   ori       $a0, $a0, (0x13FEFE & 0xFFFF)
    /* 614B8 801530B8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 614BC 801530BC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 614C0 801530C0 00000000 */  nop
    /* 614C4 801530C4 00006494 */  lhu        $a0, 0x0($v1)
    /* 614C8 801530C8 31DE030C */  jal        func_800F78C4
    /* 614CC 801530CC 21204400 */   addu      $a0, $v0, $a0
    /* 614D0 801530D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 614D4 801530D4 00000000 */  nop
    /* 614D8 801530D8 0800E003 */  jr         $ra
    /* 614DC 801530DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80153098
