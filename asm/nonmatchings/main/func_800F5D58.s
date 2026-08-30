nonmatching func_800F5D58, 0x48

glabel func_800F5D58
    /* 4158 800F5D58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 415C 800F5D5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4160 800F5D60 C1CE030C */  jal        func_800F3B04
    /* 4164 800F5D64 00000000 */   nop
    /* 4168 800F5D68 01004490 */  lbu        $a0, 0x1($v0)
    /* 416C 800F5D6C 00004390 */  lbu        $v1, 0x0($v0)
    /* 4170 800F5D70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4174 800F5D74 00220400 */  sll        $a0, $a0, 8
    /* 4178 800F5D78 25186400 */  or         $v1, $v1, $a0
    /* 417C 800F5D7C FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 4180 800F5D80 03220300 */  sra        $a0, $v1, 8
    /* 4184 800F5D84 000043A0 */  sb         $v1, 0x0($v0)
    /* 4188 800F5D88 010044A0 */  sb         $a0, 0x1($v0)
    /* 418C 800F5D8C 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 4190 800F5D90 00000000 */  nop
    /* 4194 800F5D94 000043AC */  sw         $v1, 0x0($v0)
    /* 4198 800F5D98 0800E003 */  jr         $ra
    /* 419C 800F5D9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F5D58
