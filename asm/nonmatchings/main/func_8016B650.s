nonmatching func_8016B650, 0x3C

glabel func_8016B650
    /* 79A50 8016B650 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 79A54 8016B654 1000BFAF */  sw         $ra, 0x10($sp)
    /* 79A58 8016B658 C1CE030C */  jal        func_800F3B04
    /* 79A5C 8016B65C FF020424 */   addiu     $a0, $zero, 0x2FF
    /* 79A60 8016B660 21204000 */  addu       $a0, $v0, $zero
    /* 79A64 8016B664 20020324 */  addiu      $v1, $zero, 0x220
  .L8016B668:
    /* 79A68 8016B668 21108300 */  addu       $v0, $a0, $v1
    /* 79A6C 8016B66C FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 79A70 8016B670 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 79A74 8016B674 FCFF6014 */  bnez       $v1, .L8016B668
    /* 79A78 8016B678 000040A0 */   sb        $zero, 0x0($v0)
    /* 79A7C 8016B67C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79A80 8016B680 00000000 */  nop
    /* 79A84 8016B684 0800E003 */  jr         $ra
    /* 79A88 8016B688 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016B650
