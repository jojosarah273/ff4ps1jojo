nonmatching func_8012B050, 0x60

glabel func_8012B050
    /* 39450 8012B050 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39454 8012B054 1000BFAF */  sw         $ra, 0x10($sp)
    /* 39458 8012B058 59D9030C */  jal        func_800F6564
    /* 3945C 8012B05C 1A1B0424 */   addiu     $a0, $zero, 0x1B1A
    /* 39460 8012B060 04D5030C */  jal        func_800F5410
    /* 39464 8012B064 00000000 */   nop
    /* 39468 8012B068 C1CE030C */  jal        func_800F3B04
    /* 3946C 8012B06C 231B0424 */   addiu     $a0, $zero, 0x1B23
    /* 39470 8012B070 CECF030C */  jal        func_800F3F38
    /* 39474 8012B074 21204000 */   addu      $a0, $v0, $zero
    /* 39478 8012B078 62E0030C */  jal        func_800F8188
    /* 3947C 8012B07C 251B0424 */   addiu     $a0, $zero, 0x1B25
    /* 39480 8012B080 59D9030C */  jal        func_800F6564
    /* 39484 8012B084 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 39488 8012B088 62E0030C */  jal        func_800F8188
    /* 3948C 8012B08C 241B0424 */   addiu     $a0, $zero, 0x1B24
    /* 39490 8012B090 53D9030C */  jal        func_800F654C
    /* 39494 8012B094 01000424 */   addiu     $a0, $zero, 0x1
    /* 39498 8012B098 62E0030C */  jal        func_800F8188
    /* 3949C 8012B09C 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 394A0 8012B0A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 394A4 8012B0A4 00000000 */  nop
    /* 394A8 8012B0A8 0800E003 */  jr         $ra
    /* 394AC 8012B0AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B050
