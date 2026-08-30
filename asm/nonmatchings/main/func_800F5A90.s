nonmatching func_800F5A90, 0x9C

glabel func_800F5A90
    /* 3E90 800F5A90 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 3E94 800F5A94 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 3E98 800F5A98 000044AC */  sw         $a0, 0x0($v0)
    /* 3E9C 800F5A9C 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3EA0 800F5AA0 00000000 */  nop
    /* 3EA4 800F5AA4 00006290 */  lbu        $v0, 0x0($v1)
    /* 3EA8 800F5AA8 00000000 */  nop
    /* 3EAC 800F5AAC 7C004230 */  andi       $v0, $v0, 0x7C
    /* 3EB0 800F5AB0 000062A0 */  sb         $v0, 0x0($v1)
    /* 3EB4 800F5AB4 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 3EB8 800F5AB8 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 3EBC 800F5ABC 00008394 */  lhu        $v1, 0x0($a0)
    /* 3EC0 800F5AC0 00004294 */  lhu        $v0, 0x0($v0)
    /* 3EC4 800F5AC4 00000000 */  nop
    /* 3EC8 800F5AC8 08006214 */  bne        $v1, $v0, .L800F5AEC
    /* 3ECC 800F5ACC 2B106200 */   sltu      $v0, $v1, $v0
    /* 3ED0 800F5AD0 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3ED4 800F5AD4 00000000 */  nop
    /* 3ED8 800F5AD8 00006290 */  lbu        $v0, 0x0($v1)
    /* 3EDC 800F5ADC 00000000 */  nop
    /* 3EE0 800F5AE0 03004234 */  ori        $v0, $v0, 0x3
    /* 3EE4 800F5AE4 0800E003 */  jr         $ra
    /* 3EE8 800F5AE8 000062A0 */   sb        $v0, 0x0($v1)
  .L800F5AEC:
    /* 3EEC 800F5AEC 08004010 */  beqz       $v0, .L800F5B10
    /* 3EF0 800F5AF0 00000000 */   nop
    /* 3EF4 800F5AF4 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3EF8 800F5AF8 00000000 */  nop
    /* 3EFC 800F5AFC 00006290 */  lbu        $v0, 0x0($v1)
    /* 3F00 800F5B00 00000000 */  nop
    /* 3F04 800F5B04 80004234 */  ori        $v0, $v0, 0x80
    /* 3F08 800F5B08 0800E003 */  jr         $ra
    /* 3F0C 800F5B0C 000062A0 */   sb        $v0, 0x0($v1)
  .L800F5B10:
    /* 3F10 800F5B10 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3F14 800F5B14 00000000 */  nop
    /* 3F18 800F5B18 00006290 */  lbu        $v0, 0x0($v1)
    /* 3F1C 800F5B1C 00000000 */  nop
    /* 3F20 800F5B20 01004234 */  ori        $v0, $v0, 0x1
    /* 3F24 800F5B24 0800E003 */  jr         $ra
    /* 3F28 800F5B28 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F5A90
