nonmatching func_80142064, 0x50

glabel func_80142064
    /* 50464 80142064 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50468 80142068 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5046C 8014206C 90D8030C */  jal        func_800F6240
    /* 50470 80142070 27F30434 */   ori       $a0, $zero, 0xF327
    /* 50474 80142074 77DC030C */  jal        func_800F71DC
    /* 50478 80142078 20000424 */   addiu     $a0, $zero, 0x20
    /* 5047C 8014207C 0B08050C */  jal        func_8014202C
    /* 50480 80142080 00000000 */   nop
    /* 50484 80142084 DDE3030C */  jal        func_800F8F74
    /* 50488 80142088 26F30434 */   ori       $a0, $zero, 0xF326
    /* 5048C 8014208C DDE3030C */  jal        func_800F8F74
    /* 50490 80142090 27F30434 */   ori       $a0, $zero, 0xF327
    /* 50494 80142094 77DC030C */  jal        func_800F71DC
    /* 50498 80142098 08000424 */   addiu     $a0, $zero, 0x8
    /* 5049C 8014209C 0B08050C */  jal        func_8014202C
    /* 504A0 801420A0 00000000 */   nop
    /* 504A4 801420A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 504A8 801420A8 00000000 */  nop
    /* 504AC 801420AC 0800E003 */  jr         $ra
    /* 504B0 801420B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142064
