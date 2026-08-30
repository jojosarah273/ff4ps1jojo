nonmatching func_800F6240, 0x34

glabel func_800F6240
    /* 4640 800F6240 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4644 800F6244 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4648 800F6248 C1CE030C */  jal        func_800F3B04
    /* 464C 800F624C 00000000 */   nop
    /* 4650 800F6250 00004390 */  lbu        $v1, 0x0($v0)
    /* 4654 800F6254 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4658 800F6258 01006324 */  addiu      $v1, $v1, 0x1
    /* 465C 800F625C 000043A0 */  sb         $v1, 0x0($v0)
    /* 4660 800F6260 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 4664 800F6264 FF006330 */  andi       $v1, $v1, 0xFF
    /* 4668 800F6268 000083AC */  sw         $v1, 0x0($a0)
    /* 466C 800F626C 0800E003 */  jr         $ra
    /* 4670 800F6270 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6240
