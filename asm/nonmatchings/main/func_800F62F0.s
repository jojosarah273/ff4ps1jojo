nonmatching func_800F62F0, 0x48

glabel func_800F62F0
    /* 46F0 800F62F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46F4 800F62F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46F8 800F62F8 0FCF030C */  jal        func_800F3C3C
    /* 46FC 800F62FC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4700 800F6300 01004490 */  lbu        $a0, 0x1($v0)
    /* 4704 800F6304 00004390 */  lbu        $v1, 0x0($v0)
    /* 4708 800F6308 1000BF8F */  lw         $ra, 0x10($sp)
    /* 470C 800F630C 00220400 */  sll        $a0, $a0, 8
    /* 4710 800F6310 25186400 */  or         $v1, $v1, $a0
    /* 4714 800F6314 01006324 */  addiu      $v1, $v1, 0x1
    /* 4718 800F6318 03220300 */  sra        $a0, $v1, 8
    /* 471C 800F631C 000043A0 */  sb         $v1, 0x0($v0)
    /* 4720 800F6320 010044A0 */  sb         $a0, 0x1($v0)
    /* 4724 800F6324 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 4728 800F6328 00000000 */  nop
    /* 472C 800F632C 000043AC */  sw         $v1, 0x0($v0)
    /* 4730 800F6330 0800E003 */  jr         $ra
    /* 4734 800F6334 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F62F0
