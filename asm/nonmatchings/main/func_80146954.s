nonmatching func_80146954, 0x2C

glabel func_80146954
    /* 54D54 80146954 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 54D58 80146958 1000BFAF */  sw         $ra, 0x10($sp)
    /* 54D5C 8014695C C1CE030C */  jal        func_800F3B04
    /* 54D60 80146960 00800434 */   ori       $a0, $zero, 0x8000
    /* 54D64 80146964 C36F4390 */  lbu        $v1, 0x6FC3($v0)
    /* 54D68 80146968 1000BF8F */  lw         $ra, 0x10($sp)
    /* 54D6C 8014696C C26F40A0 */  sb         $zero, 0x6FC2($v0)
    /* 54D70 80146970 01006334 */  ori        $v1, $v1, 0x1
    /* 54D74 80146974 C36F43A0 */  sb         $v1, 0x6FC3($v0)
    /* 54D78 80146978 0800E003 */  jr         $ra
    /* 54D7C 8014697C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80146954
