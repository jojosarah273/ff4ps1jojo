nonmatching func_80174710, 0x64

glabel func_80174710
    /* 82B10 80174710 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 82B14 80174714 1000BFAF */  sw         $ra, 0x10($sp)
    /* 82B18 80174718 77DC030C */  jal        func_800F71DC
    /* 82B1C 8017471C 21200000 */   addu      $a0, $zero, $zero
    /* 82B20 80174720 0D00043C */  lui        $a0, (0xD87D0 >> 16)
  .L80174724:
    /* 82B24 80174724 1ADB030C */  jal        func_800F6C68
    /* 82B28 80174728 D0878434 */   ori       $a0, $a0, (0xD87D0 & 0xFFFF)
    /* 82B2C 8017472C DAE1030C */  jal        func_800F8768
    /* 82B30 80174730 DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* 82B34 80174734 D9D8030C */  jal        func_800F6364
    /* 82B38 80174738 00000000 */   nop
    /* 82B3C 8017473C 56D6030C */  jal        func_800F5958
    /* 82B40 80174740 20000424 */   addiu     $a0, $zero, 0x20
    /* 82B44 80174744 F5D4030C */  jal        func_800F53D4
    /* 82B48 80174748 00000000 */   nop
    /* 82B4C 8017474C F5FF4010 */  beqz       $v0, .L80174724
    /* 82B50 80174750 0D00043C */   lui       $a0, (0xD87D0 >> 16)
    /* 82B54 80174754 84DC030C */  jal        func_800F7210
    /* 82B58 80174758 AA160424 */   addiu     $a0, $zero, 0x16AA
    /* 82B5C 8017475C 40E3030C */  jal        func_800F8D00
    /* 82B60 80174760 DD0C0424 */   addiu     $a0, $zero, 0xCDD
    /* 82B64 80174764 1000BF8F */  lw         $ra, 0x10($sp)
    /* 82B68 80174768 00000000 */  nop
    /* 82B6C 8017476C 0800E003 */  jr         $ra
    /* 82B70 80174770 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80174710
