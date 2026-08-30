nonmatching func_800F7F48, 0x84

glabel func_800F7F48
    /* 6348 800F7F48 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 634C 800F7F4C 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 6350 800F7F50 00008390 */  lbu        $v1, 0x0($a0)
    /* 6354 800F7F54 0000A690 */  lbu        $a2, 0x0($a1)
    /* 6358 800F7F58 00004490 */  lbu        $a0, 0x0($v0)
    /* 635C 800F7F5C 2330C300 */  subu       $a2, $a2, $v1
    /* 6360 800F7F60 01008238 */  xori       $v0, $a0, 0x1
    /* 6364 800F7F64 01004230 */  andi       $v0, $v0, 0x1
    /* 6368 800F7F68 2330C200 */  subu       $a2, $a2, $v0
    /* 636C 800F7F6C 3C008430 */  andi       $a0, $a0, 0x3C
    /* 6370 800F7F70 C0FF0224 */  addiu      $v0, $zero, -0x40
    /* 6374 800F7F74 2410C200 */  and        $v0, $a2, $v0
    /* 6378 800F7F78 25108200 */  or         $v0, $a0, $v0
    /* 637C 800F7F7C FF004430 */  andi       $a0, $v0, 0xFF
    /* 6380 800F7F80 0001C230 */  andi       $v0, $a2, 0x100
    /* 6384 800F7F84 03004014 */  bnez       $v0, .L800F7F94
    /* 6388 800F7F88 0000A6A0 */   sb        $a2, 0x0($a1)
    /* 638C 800F7F8C E6DF0308 */  j          .L800F7F98
    /* 6390 800F7F90 01008234 */   ori       $v0, $a0, 0x1
  .L800F7F94:
    /* 6394 800F7F94 FF008230 */  andi       $v0, $a0, 0xFF
  .L800F7F98:
    /* 6398 800F7F98 21204000 */  addu       $a0, $v0, $zero
    /* 639C 800F7F9C FF00C230 */  andi       $v0, $a2, 0xFF
    /* 63A0 800F7FA0 03004014 */  bnez       $v0, .L800F7FB0
    /* 63A4 800F7FA4 00000000 */   nop
    /* 63A8 800F7FA8 EDDF0308 */  j          .L800F7FB4
    /* 63AC 800F7FAC 02008434 */   ori       $a0, $a0, 0x2
  .L800F7FB0:
    /* 63B0 800F7FB0 FF008430 */  andi       $a0, $a0, 0xFF
  .L800F7FB4:
    /* 63B4 800F7FB4 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 63B8 800F7FB8 00000000 */  nop
    /* 63BC 800F7FBC 000046AC */  sw         $a2, 0x0($v0)
    /* 63C0 800F7FC0 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 63C4 800F7FC4 0800E003 */  jr         $ra
    /* 63C8 800F7FC8 000064A0 */   sb        $a0, 0x0($v1)
endlabel func_800F7F48
