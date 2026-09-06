nonmatching func_800F4D4C, 0x54

glabel func_800F4D4C
    /* 314C 800F4D4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3150 800F4D50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3154 800F4D54 ADCE030C */  jal        func_800F3AB4
    /* 3158 800F4D58 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 315C 800F4D5C 21204000 */  addu       $a0, $v0, $zero
    /* 3160 800F4D60 E7CE030C */  jal        func_800F3B9C
    /* 3164 800F4D64 21280000 */   addu      $a1, $zero, $zero
    /* 3168 800F4D68 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 316C 800F4D6C 00004490 */  lbu        $a0, 0x0($v0)
    /* 3170 800F4D70 0000C390 */  lbu        $v1, 0x0($a2)
    /* 3174 800F4D74 00000000 */  nop
    /* 3178 800F4D78 24186400 */  and        $v1, $v1, $a0
    /* 317C 800F4D7C 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3180 800F4D80 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 3184 800F4D84 01004490 */  lbu        $a0, 0x1($v0)
    /* 3188 800F4D88 0100A390 */  lbu        $v1, 0x1($a1)
    /* 318C 800F4D8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3190 800F4D90 24186400 */  and        $v1, $v1, $a0
    /* 3194 800F4D94 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3198 800F4D98 0800E003 */  jr         $ra
    /* 319C 800F4D9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4D4C
