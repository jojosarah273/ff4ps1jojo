nonmatching func_801526F8, 0xB4

glabel func_801526F8
    /* 60AF8 801526F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 60AFC 801526FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 60B00 80152700 93E0030C */  jal        func_800F824C
    /* 60B04 80152704 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 60B08 80152708 8CD9030C */  jal        func_800F6630
    /* 60B0C 8015270C E5000424 */   addiu     $a0, $zero, 0xE5
    /* 60B10 80152710 93E0030C */  jal        func_800F824C
    /* 60B14 80152714 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 60B18 80152718 8CD9030C */  jal        func_800F6630
    /* 60B1C 8015271C E1000424 */   addiu     $a0, $zero, 0xE1
    /* 60B20 80152720 93E0030C */  jal        func_800F824C
    /* 60B24 80152724 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 60B28 80152728 0349050C */  jal        func_8015240C
    /* 60B2C 8015272C 00000000 */   nop
    /* 60B30 80152730 65DD030C */  jal        func_800F7594
    /* 60B34 80152734 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 60B38 80152738 C7E5030C */  jal        func_800F971C
    /* 60B3C 8015273C 00000000 */   nop
    /* 60B40 80152740 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 60B44 80152744 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 60B48 80152748 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 60B4C 8015274C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 60B50 80152750 00004394 */  lhu        $v1, 0x0($v0)
    /* 60B54 80152754 00000000 */  nop
    /* 60B58 80152758 000083A4 */  sh         $v1, 0x0($a0)
  .L8015275C:
    /* 60B5C 8015275C FFD9030C */  jal        func_800F67FC
    /* 60B60 80152760 80000424 */   addiu     $a0, $zero, 0x80
    /* 60B64 80152764 DAE1030C */  jal        func_800F8768
    /* 60B68 80152768 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 60B6C 8015276C EFD8030C */  jal        func_800F63BC
    /* 60B70 80152770 00000000 */   nop
    /* 60B74 80152774 D9D8030C */  jal        func_800F6364
    /* 60B78 80152778 00000000 */   nop
    /* 60B7C 8015277C 0FCF030C */  jal        func_800F3C3C
    /* 60B80 80152780 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 60B84 80152784 ABD5030C */  jal        func_800F56AC
    /* 60B88 80152788 21204000 */   addu      $a0, $v0, $zero
    /* 60B8C 8015278C F5D4030C */  jal        func_800F53D4
    /* 60B90 80152790 00000000 */   nop
    /* 60B94 80152794 F1FF4010 */  beqz       $v0, .L8015275C
    /* 60B98 80152798 00000000 */   nop
    /* 60B9C 8015279C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 60BA0 801527A0 00000000 */  nop
    /* 60BA4 801527A4 0800E003 */  jr         $ra
    /* 60BA8 801527A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801526F8
