nonmatching func_800F6940, 0x48

glabel func_800F6940
    /* 4D40 800F6940 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D44 800F6944 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4D48 800F6948 0FCF030C */  jal        func_800F3C3C
    /* 4D4C 800F694C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4D50 800F6950 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 4D54 800F6954 00000000 */  nop
    /* 4D58 800F6958 00006494 */  lhu        $a0, 0x0($v1)
    /* 4D5C 800F695C 00000000 */  nop
    /* 4D60 800F6960 21104400 */  addu       $v0, $v0, $a0
    /* 4D64 800F6964 00004494 */  lhu        $a0, 0x0($v0)
    /* 4D68 800F6968 C1CE030C */  jal        func_800F3B04
    /* 4D6C 800F696C 00000000 */   nop
    /* 4D70 800F6970 00004390 */  lbu        $v1, 0x0($v0)
    /* 4D74 800F6974 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D78 800F6978 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4D7C 800F697C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4D80 800F6980 0800E003 */  jr         $ra
    /* 4D84 800F6984 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6940
