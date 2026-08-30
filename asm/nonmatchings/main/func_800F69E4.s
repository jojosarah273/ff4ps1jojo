nonmatching func_800F69E4, 0x5C

glabel func_800F69E4
    /* 4DE4 800F69E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4DE8 800F69E8 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 4DEC 800F69EC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4DF0 800F69F0 0FCF030C */  jal        func_800F3C3C
    /* 4DF4 800F69F4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4DF8 800F69F8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 4DFC 800F69FC 00000000 */  nop
    /* 4E00 800F6A00 00006494 */  lhu        $a0, 0x0($v1)
    /* 4E04 800F6A04 00000000 */  nop
    /* 4E08 800F6A08 21104400 */  addu       $v0, $v0, $a0
    /* 4E0C 800F6A0C 00004494 */  lhu        $a0, 0x0($v0)
    /* 4E10 800F6A10 C1CE030C */  jal        func_800F3B04
    /* 4E14 800F6A14 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 4E18 800F6A18 00004490 */  lbu        $a0, 0x0($v0)
    /* 4E1C 800F6A1C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4E20 800F6A20 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 4E24 800F6A24 080004A2 */  sb         $a0, 0x8($s0)
    /* 4E28 800F6A28 01004390 */  lbu        $v1, 0x1($v0)
    /* 4E2C 800F6A2C 00000000 */  nop
    /* 4E30 800F6A30 090003A2 */  sb         $v1, 0x9($s0)
    /* 4E34 800F6A34 1000B08F */  lw         $s0, 0x10($sp)
    /* 4E38 800F6A38 0800E003 */  jr         $ra
    /* 4E3C 800F6A3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F69E4
