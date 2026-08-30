nonmatching func_80153374, 0x48

glabel func_80153374
    /* 61774 80153374 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61778 80153378 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6177C 8015337C 434C050C */  jal        func_8015310C
    /* 61780 80153380 00000000 */   nop
    /* 61784 80153384 84DC030C */  jal        func_800F7210
    /* 61788 80153388 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6178C 8015338C 8CD9030C */  jal        func_800F6630
    /* 61790 80153390 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 61794 80153394 DAE1030C */  jal        func_800F8768
    /* 61798 80153398 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6179C 8015339C 8CD9030C */  jal        func_800F6630
    /* 617A0 801533A0 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 617A4 801533A4 DAE1030C */  jal        func_800F8768
    /* 617A8 801533A8 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 617AC 801533AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 617B0 801533B0 00000000 */  nop
    /* 617B4 801533B4 0800E003 */  jr         $ra
    /* 617B8 801533B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80153374
