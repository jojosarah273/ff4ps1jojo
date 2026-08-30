nonmatching func_80141FEC, 0x40

glabel func_80141FEC
    /* 503EC 80141FEC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 503F0 80141FF0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 503F4 80141FF4 90D8030C */  jal        func_800F6240
    /* 503F8 80141FF8 27F30434 */   ori       $a0, $zero, 0xF327
    /* 503FC 80141FFC DEFB040C */  jal        func_8013EF78
    /* 50400 80142000 00000000 */   nop
    /* 50404 80142004 D507050C */  jal        func_80141F54
    /* 50408 80142008 00000000 */   nop
    /* 5040C 8014200C DDE3030C */  jal        func_800F8F74
    /* 50410 80142010 26F30434 */   ori       $a0, $zero, 0xF326
    /* 50414 80142014 DDE3030C */  jal        func_800F8F74
    /* 50418 80142018 27F30434 */   ori       $a0, $zero, 0xF327
    /* 5041C 8014201C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50420 80142020 00000000 */  nop
    /* 50424 80142024 0800E003 */  jr         $ra
    /* 50428 80142028 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141FEC
