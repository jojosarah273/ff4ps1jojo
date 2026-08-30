nonmatching func_8015A670, 0x5C

glabel func_8015A670
    /* 68A70 8015A670 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68A74 8015A674 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68A78 8015A678 59D9030C */  jal        func_800F6564
    /* 68A7C 8015A67C 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 68A80 8015A680 93E0030C */  jal        func_800F824C
    /* 68A84 8015A684 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 68A88 8015A688 53D9030C */  jal        func_800F654C
    /* 68A8C 8015A68C 06000424 */   addiu     $a0, $zero, 0x6
    /* 68A90 8015A690 93E0030C */  jal        func_800F824C
    /* 68A94 8015A694 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 68A98 8015A698 0349050C */  jal        func_8015240C
    /* 68A9C 8015A69C 00000000 */   nop
    /* 68AA0 8015A6A0 9CDC030C */  jal        func_800F7270
    /* 68AA4 8015A6A4 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 68AA8 8015A6A8 0F00043C */  lui        $a0, (0xF97A0 >> 16)
    /* 68AAC 8015A6AC 1ADB030C */  jal        func_800F6C68
    /* 68AB0 8015A6B0 A0978434 */   ori       $a0, $a0, (0xF97A0 & 0xFFFF)
    /* 68AB4 8015A6B4 B369050C */  jal        func_8015A6CC
    /* 68AB8 8015A6B8 00000000 */   nop
    /* 68ABC 8015A6BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68AC0 8015A6C0 00000000 */  nop
    /* 68AC4 8015A6C4 0800E003 */  jr         $ra
    /* 68AC8 8015A6C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A670
