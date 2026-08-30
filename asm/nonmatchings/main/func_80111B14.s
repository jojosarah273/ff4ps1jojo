nonmatching func_80111B14, 0xA8

glabel func_80111B14
    /* 1FF14 80111B14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1FF18 80111B18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1FF1C 80111B1C 77DC030C */  jal        func_800F71DC
    /* 1FF20 80111B20 A8900434 */   ori       $a0, $zero, 0x90A8
    /* 1FF24 80111B24 40E3030C */  jal        func_800F8D00
    /* 1FF28 80111B28 06170424 */   addiu     $a0, $zero, 0x1706
    /* 1FF2C 80111B2C 53D9030C */  jal        func_800F654C
    /* 1FF30 80111B30 10000424 */   addiu     $a0, $zero, 0x10
    /* 1FF34 80111B34 93E0030C */  jal        func_800F824C
    /* 1FF38 80111B38 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 1FF3C 80111B3C 53D9030C */  jal        func_800F654C
    /* 1FF40 80111B40 58000424 */   addiu     $a0, $zero, 0x58
    /* 1FF44 80111B44 93E0030C */  jal        func_800F824C
    /* 1FF48 80111B48 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1FF4C 80111B4C 18D8050C */  jal        func_80176060
    /* 1FF50 80111B50 00000000 */   nop
    /* 1FF54 80111B54 DDE3030C */  jal        func_800F8F74
    /* 1FF58 80111B58 00170424 */   addiu     $a0, $zero, 0x1700
    /* 1FF5C 80111B5C 53D9030C */  jal        func_800F654C
    /* 1FF60 80111B60 07000424 */   addiu     $a0, $zero, 0x7
    /* 1FF64 80111B64 62E0030C */  jal        func_800F8188
    /* 1FF68 80111B68 04170424 */   addiu     $a0, $zero, 0x1704
    /* 1FF6C 80111B6C 53D9030C */  jal        func_800F654C
    /* 1FF70 80111B70 01000424 */   addiu     $a0, $zero, 0x1
    /* 1FF74 80111B74 62E0030C */  jal        func_800F8188
    /* 1FF78 80111B78 28170424 */   addiu     $a0, $zero, 0x1728
    /* 1FF7C 80111B7C 27EC030C */  jal        func_800FB09C
    /* 1FF80 80111B80 00000000 */   nop
    /* 1FF84 80111B84 53D9030C */  jal        func_800F654C
    /* 1FF88 80111B88 10000424 */   addiu     $a0, $zero, 0x10
    /* 1FF8C 80111B8C 93E0030C */  jal        func_800F824C
    /* 1FF90 80111B90 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1FF94 80111B94 EF46040C */  jal        func_80111BBC
    /* 1FF98 80111B98 00000000 */   nop
    /* 1FF9C 80111B9C 1CFA030C */  jal        func_800FE870
    /* 1FFA0 80111BA0 00000000 */   nop
    /* 1FFA4 80111BA4 0B47040C */  jal        func_80111C2C
    /* 1FFA8 80111BA8 00000000 */   nop
    /* 1FFAC 80111BAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1FFB0 80111BB0 00000000 */  nop
    /* 1FFB4 80111BB4 0800E003 */  jr         $ra
    /* 1FFB8 80111BB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111B14
