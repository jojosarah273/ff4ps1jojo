nonmatching func_800F780C, 0x58

glabel func_800F780C
    /* 5C0C 800F780C 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 5C10 800F7810 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5C14 800F7814 0000C390 */  lbu        $v1, 0x0($a2)
    /* 5C18 800F7818 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5C1C 800F781C 7C006730 */  andi       $a3, $v1, 0x7C
    /* 5C20 800F7820 01004230 */  andi       $v0, $v0, 0x1
    /* 5C24 800F7824 0000A38C */  lw         $v1, 0x0($a1)
    /* 5C28 800F7828 00000000 */  nop
    /* 5C2C 800F782C FEFF6330 */  andi       $v1, $v1, 0xFFFE
    /* 5C30 800F7830 03006014 */  bnez       $v1, .L800F7840
    /* 5C34 800F7834 2538E200 */   or        $a3, $a3, $v0
    /* 5C38 800F7838 11DE0308 */  j          .L800F7844
    /* 5C3C 800F783C 0200E234 */   ori       $v0, $a3, 0x2
  .L800F7840:
    /* 5C40 800F7840 FF00E230 */  andi       $v0, $a3, 0xFF
  .L800F7844:
    /* 5C44 800F7844 21384000 */  addu       $a3, $v0, $zero
    /* 5C48 800F7848 0000C7A0 */  sb         $a3, 0x0($a2)
    /* 5C4C 800F784C FF008230 */  andi       $v0, $a0, 0xFF
    /* 5C50 800F7850 2438E200 */  and        $a3, $a3, $v0
    /* 5C54 800F7854 03120400 */  sra        $v0, $a0, 8
    /* 5C58 800F7858 2610E200 */  xor        $v0, $a3, $v0
    /* 5C5C 800F785C 0800E003 */  jr         $ra
    /* 5C60 800F7860 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F780C
