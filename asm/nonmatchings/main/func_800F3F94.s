nonmatching func_800F3F94, 0x74

glabel func_800F3F94
    /* 2394 800F3F94 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 2398 800F3F98 4800858F */  lw         $a1, %gp_rel(D_8019ED44)($gp)
    /* 239C 800F3F9C 00008390 */  lbu        $v1, 0x0($a0)
    /* 23A0 800F3FA0 00004790 */  lbu        $a3, 0x0($v0)
    /* 23A4 800F3FA4 0000A694 */  lhu        $a2, 0x0($a1)
    /* 23A8 800F3FA8 01008290 */  lbu        $v0, 0x1($a0)
    /* 23AC 800F3FAC 2130C300 */  addu       $a2, $a2, $v1
    /* 23B0 800F3FB0 00120200 */  sll        $v0, $v0, 8
    /* 23B4 800F3FB4 2130C200 */  addu       $a2, $a2, $v0
    /* 23B8 800F3FB8 0100E330 */  andi       $v1, $a3, 0x1
    /* 23BC 800F3FBC 2130C300 */  addu       $a2, $a2, $v1
    /* 23C0 800F3FC0 0000A6A4 */  sh         $a2, 0x0($a1)
    /* 23C4 800F3FC4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 23C8 800F3FC8 3E00E730 */  andi       $a3, $a3, 0x3E
    /* 23CC 800F3FCC 01004390 */  lbu        $v1, 0x1($v0)
    /* 23D0 800F3FD0 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 23D4 800F3FD4 2410C200 */  and        $v0, $a2, $v0
    /* 23D8 800F3FD8 C0006330 */  andi       $v1, $v1, 0xC0
    /* 23DC 800F3FDC 03004010 */  beqz       $v0, .L800F3FEC
    /* 23E0 800F3FE0 2538E300 */   or        $a3, $a3, $v1
    /* 23E4 800F3FE4 FCCF0308 */  j          .L800F3FF0
    /* 23E8 800F3FE8 0100E334 */   ori       $v1, $a3, 0x1
  .L800F3FEC:
    /* 23EC 800F3FEC FF00E330 */  andi       $v1, $a3, 0xFF
  .L800F3FF0:
    /* 23F0 800F3FF0 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 23F4 800F3FF4 00000000 */  nop
    /* 23F8 800F3FF8 000043A0 */  sb         $v1, 0x0($v0)
    /* 23FC 800F3FFC 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 2400 800F4000 0800E003 */  jr         $ra
    /* 2404 800F4004 000066AC */   sw        $a2, 0x0($v1)
endlabel func_800F3F94
