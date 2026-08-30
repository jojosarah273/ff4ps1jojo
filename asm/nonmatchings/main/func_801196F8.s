nonmatching func_801196F8, 0x48

glabel func_801196F8
    /* 27AF8 801196F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27AFC 801196FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27B00 80119700 59D9030C */  jal        func_800F6564
    /* 27B04 80119704 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 27B08 80119708 93E0030C */  jal        func_800F824C
    /* 27B0C 8011970C 30000424 */   addiu     $a0, $zero, 0x30
    /* 27B10 80119710 59D9030C */  jal        func_800F6564
    /* 27B14 80119714 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 27B18 80119718 93E0030C */  jal        func_800F824C
    /* 27B1C 8011971C 31000424 */   addiu     $a0, $zero, 0x31
    /* 27B20 80119720 59D9030C */  jal        func_800F6564
    /* 27B24 80119724 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 27B28 80119728 93E0030C */  jal        func_800F824C
    /* 27B2C 8011972C 32000424 */   addiu     $a0, $zero, 0x32
    /* 27B30 80119730 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27B34 80119734 00000000 */  nop
    /* 27B38 80119738 0800E003 */  jr         $ra
    /* 27B3C 8011973C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801196F8
