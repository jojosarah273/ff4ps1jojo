nonmatching func_80127668, 0xB0

glabel func_80127668
    /* 35A68 80127668 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 35A6C 8012766C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 35A70 80127670 33D7030C */  jal        func_800F5CCC
    /* 35A74 80127674 00000000 */   nop
    /* 35A78 80127678 E3D6030C */  jal        func_800F5B8C
    /* 35A7C 8012767C 80000424 */   addiu     $a0, $zero, 0x80
    /* 35A80 80127680 1F004014 */  bnez       $v0, .L80127700
    /* 35A84 80127684 46000424 */   addiu     $a0, $zero, 0x46
    /* 35A88 80127688 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 35A8C 8012768C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 35A90 80127690 00000000 */  nop
    /* 35A94 80127694 00006290 */  lbu        $v0, 0x0($v1)
    /* 35A98 80127698 00000000 */  nop
    /* 35A9C 8012769C C0100200 */  sll        $v0, $v0, 3
    /* 35AA0 801276A0 93E0030C */  jal        func_800F824C
    /* 35AA4 801276A4 000062A0 */   sb        $v0, 0x0($v1)
    /* 35AA8 801276A8 EEE3030C */  jal        func_800F8FB8
    /* 35AAC 801276AC 45000424 */   addiu     $a0, $zero, 0x45
    /* 35AB0 801276B0 9BE4030C */  jal        func_800F926C
    /* 35AB4 801276B4 00000000 */   nop
    /* 35AB8 801276B8 91E5030C */  jal        func_800F9644
    /* 35ABC 801276BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 35AC0 801276C0 9CDC030C */  jal        func_800F7270
    /* 35AC4 801276C4 45000424 */   addiu     $a0, $zero, 0x45
    /* 35AC8 801276C8 40DD030C */  jal        func_800F7500
    /* 35ACC 801276CC 00100424 */   addiu     $a0, $zero, 0x1000
    /* 35AD0 801276D0 56D9030C */  jal        func_800F6558
    /* 35AD4 801276D4 FF070424 */   addiu     $a0, $zero, 0x7FF
    /* 35AD8 801276D8 59CF030C */  jal        func_800F3D64
    /* 35ADC 801276DC 00700424 */   addiu     $a0, $zero, 0x7000
    /* 35AE0 801276E0 98E5030C */  jal        func_800F9660
    /* 35AE4 801276E4 20000424 */   addiu     $a0, $zero, 0x20
    /* 35AE8 801276E8 D5D6040C */  jal        func_80135B54
    /* 35AEC 801276EC 00000000 */   nop
    /* 35AF0 801276F0 12E5030C */  jal        func_800F9448
    /* 35AF4 801276F4 00000000 */   nop
    /* 35AF8 801276F8 C29D0408 */  j          .L80127708
    /* 35AFC 801276FC 00000000 */   nop
  .L80127700:
    /* 35B00 80127700 C69D040C */  jal        func_80127718
    /* 35B04 80127704 00000000 */   nop
  .L80127708:
    /* 35B08 80127708 1000BF8F */  lw         $ra, 0x10($sp)
    /* 35B0C 8012770C 00000000 */  nop
    /* 35B10 80127710 0800E003 */  jr         $ra
    /* 35B14 80127714 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80127668
