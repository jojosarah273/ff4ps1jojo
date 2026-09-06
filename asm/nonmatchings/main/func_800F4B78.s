nonmatching func_800F4B78, 0x38

glabel func_800F4B78
    /* 2F78 800F4B78 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 2F7C 800F4B7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F80 800F4B80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F84 800F4B84 00004390 */  lbu        $v1, 0x0($v0)
    /* 2F88 800F4B88 C1CE030C */  jal        func_800F3B04
    /* 2F8C 800F4B8C 21208300 */   addu      $a0, $a0, $v1
    /* 2F90 800F4B90 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2F94 800F4B94 00004490 */  lbu        $a0, 0x0($v0)
    /* 2F98 800F4B98 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2F9C 800F4B9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FA0 800F4BA0 24186400 */  and        $v1, $v1, $a0
    /* 2FA4 800F4BA4 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2FA8 800F4BA8 0800E003 */  jr         $ra
    /* 2FAC 800F4BAC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4B78
