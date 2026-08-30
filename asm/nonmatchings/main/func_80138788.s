nonmatching func_80138788, 0x50

glabel func_80138788
    /* 46B88 80138788 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46B8C 8013878C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46B90 80138790 91E5030C */  jal        func_800F9644
    /* 46B94 80138794 20000424 */   addiu     $a0, $zero, 0x20
    /* 46B98 80138798 56D9030C */  jal        func_800F6558
    /* 46B9C 8013879C FF070424 */   addiu     $a0, $zero, 0x7FF
    /* 46BA0 801387A0 77DC030C */  jal        func_800F71DC
    /* 46BA4 801387A4 00F60434 */   ori       $a0, $zero, 0xF600
    /* 46BA8 801387A8 40DD030C */  jal        func_800F7500
    /* 46BAC 801387AC 00100424 */   addiu     $a0, $zero, 0x1000
    /* 46BB0 801387B0 59CF030C */  jal        func_800F3D64
    /* 46BB4 801387B4 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 46BB8 801387B8 98E5030C */  jal        func_800F9660
    /* 46BBC 801387BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 46BC0 801387C0 D5D6040C */  jal        func_80135B54
    /* 46BC4 801387C4 00000000 */   nop
    /* 46BC8 801387C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 46BCC 801387CC 00000000 */  nop
    /* 46BD0 801387D0 0800E003 */  jr         $ra
    /* 46BD4 801387D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80138788
