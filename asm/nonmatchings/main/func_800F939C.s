nonmatching func_800F939C, 0x40

glabel func_800F939C
    /* 779C 800F939C 0C80053C */  lui        $a1, (0x800C8000 >> 16)
    /* 77A0 800F93A0 0080A534 */  ori        $a1, $a1, (0x800C8000 & 0xFFFF)
    /* 77A4 800F93A4 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 77A8 800F93A8 5000868F */  lw         $a2, %gp_rel(D_8019ED4C)($gp)
    /* 77AC 800F93AC 5C00878F */  lw         $a3, %gp_rel(D_8019ED58)($gp)
    /* 77B0 800F93B0 0000C494 */  lhu        $a0, 0x0($a2)
    /* 77B4 800F93B4 0000E294 */  lhu        $v0, 0x0($a3)
    /* 77B8 800F93B8 21188300 */  addu       $v1, $a0, $v1
    /* 77BC 800F93BC 21288500 */  addu       $a1, $a0, $a1
    /* 77C0 800F93C0 000062A0 */  sb         $v0, %lo(D_800D0000)($v1)
    /* 77C4 800F93C4 02120200 */  srl        $v0, $v0, 8
    /* 77C8 800F93C8 FF7FA2A0 */  sb         $v0, 0x7FFF($a1)
    /* 77CC 800F93CC 5000838F */  lw         $v1, %gp_rel(D_8019ED4C)($gp)
    /* 77D0 800F93D0 FEFF8424 */  addiu      $a0, $a0, -0x2
    /* 77D4 800F93D4 0800E003 */  jr         $ra
    /* 77D8 800F93D8 000064A4 */   sh        $a0, 0x0($v1)
endlabel func_800F939C
