nonmatching func_80155658, 0x120

glabel func_80155658
    /* 63A58 80155658 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 63A5C 8015565C 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 63A60 80155660 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 63A64 80155664 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 63A68 80155668 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 63A6C 8015566C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 63A70 80155670 00006290 */  lbu        $v0, 0x0($v1)
    /* 63A74 80155674 04D5030C */  jal        func_800F5410
    /* 63A78 80155678 000082A0 */   sb        $v0, 0x0($a0)
    /* 63A7C 8015567C 02D0030C */  jal        func_800F4008
    /* 63A80 80155680 05000424 */   addiu     $a0, $zero, 0x5
    /* 63A84 80155684 93E0030C */  jal        func_800F824C
    /* 63A88 80155688 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 63A8C 8015568C DADA030C */  jal        func_800F6B68
    /* 63A90 80155690 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 63A94 80155694 93E0030C */  jal        func_800F824C
    /* 63A98 80155698 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 63A9C 8015569C 53D9030C */  jal        func_800F654C
    /* 63AA0 801556A0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 63AA4 801556A4 DAE1030C */  jal        func_800F8768
    /* 63AA8 801556A8 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 63AAC 801556AC 8CD9030C */  jal        func_800F6630
    /* 63AB0 801556B0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 63AB4 801556B4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 63AB8 801556B8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 63ABC 801556BC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 63AC0 801556C0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 63AC4 801556C4 00006294 */  lhu        $v0, 0x0($v1)
    /* 63AC8 801556C8 00000000 */  nop
    /* 63ACC 801556CC 000082A4 */  sh         $v0, 0x0($a0)
    /* 63AD0 801556D0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 63AD4 801556D4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 63AD8 801556D8 00000000 */  nop
    /* 63ADC 801556DC 00006494 */  lhu        $a0, 0x0($v1)
    /* 63AE0 801556E0 C1CE030C */  jal        func_800F3B04
    /* 63AE4 801556E4 CA298424 */   addiu     $a0, $a0, 0x29CA
    /* 63AE8 801556E8 CBD6030C */  jal        func_800F5B2C
    /* 63AEC 801556EC 21204000 */   addu      $a0, $v0, $zero
    /* 63AF0 801556F0 49D7030C */  jal        func_800F5D24
    /* 63AF4 801556F4 CD290424 */   addiu     $a0, $zero, 0x29CD
    /* 63AF8 801556F8 8CD9030C */  jal        func_800F6630
    /* 63AFC 801556FC 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 63B00 80155700 93E0030C */  jal        func_800F824C
    /* 63B04 80155704 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 63B08 80155708 53D9030C */  jal        func_800F654C
    /* 63B0C 8015570C 80000424 */   addiu     $a0, $zero, 0x80
    /* 63B10 80155710 93E0030C */  jal        func_800F824C
    /* 63B14 80155714 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 63B18 80155718 0349050C */  jal        func_8015240C
    /* 63B1C 8015571C 00000000 */   nop
    /* 63B20 80155720 9CDC030C */  jal        func_800F7270
    /* 63B24 80155724 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 63B28 80155728 53D9030C */  jal        func_800F654C
    /* 63B2C 8015572C 80000424 */   addiu     $a0, $zero, 0x80
    /* 63B30 80155730 DAE1030C */  jal        func_800F8768
    /* 63B34 80155734 03200424 */   addiu     $a0, $zero, 0x2003
    /* 63B38 80155738 8CD9030C */  jal        func_800F6630
    /* 63B3C 8015573C 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 63B40 80155740 50D4030C */  jal        func_800F5140
    /* 63B44 80155744 00000000 */   nop
    /* 63B48 80155748 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 63B4C 8015574C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 63B50 80155750 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 63B54 80155754 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 63B58 80155758 00004394 */  lhu        $v1, 0x0($v0)
    /* 63B5C 8015575C EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 63B60 80155760 3BE4030C */  jal        func_800F90EC
    /* 63B64 80155764 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 63B68 80155768 1000BF8F */  lw         $ra, 0x10($sp)
    /* 63B6C 8015576C 00000000 */  nop
    /* 63B70 80155770 0800E003 */  jr         $ra
    /* 63B74 80155774 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80155658
