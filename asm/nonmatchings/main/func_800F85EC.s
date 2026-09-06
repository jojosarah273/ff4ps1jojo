nonmatching func_800F85EC, 0x54

glabel func_800F85EC
    /* 69EC 800F85EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 69F0 800F85F0 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 69F4 800F85F4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 69F8 800F85F8 0FCF030C */  jal        func_800F3C3C
    /* 69FC 800F85FC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 6A00 800F8600 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6A04 800F8604 00000000 */  nop
    /* 6A08 800F8608 00006494 */  lhu        $a0, 0x0($v1)
    /* 6A0C 800F860C 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6A10 800F8610 21104400 */  addu       $v0, $v0, $a0
    /* 6A14 800F8614 00004494 */  lhu        $a0, 0x0($v0)
    /* 6A18 800F8618 C1CE030C */  jal        func_800F3B04
    /* 6A1C 800F861C C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6A20 800F8620 08000492 */  lbu        $a0, 0x8($s0)
    /* 6A24 800F8624 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6A28 800F8628 000044A0 */  sb         $a0, 0x0($v0)
    /* 6A2C 800F862C 09000392 */  lbu        $v1, 0x9($s0)
    /* 6A30 800F8630 1000B08F */  lw         $s0, 0x10($sp)
    /* 6A34 800F8634 010043A0 */  sb         $v1, 0x1($v0)
    /* 6A38 800F8638 0800E003 */  jr         $ra
    /* 6A3C 800F863C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F85EC
