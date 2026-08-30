nonmatching func_800F3C6C, 0x28

glabel func_800F3C6C
    /* 206C 800F3C6C FC7F033C */  lui        $v1, (0x7FFC8000 >> 16)
    /* 2070 800F3C70 FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 2074 800F3C74 2A104400 */  slt        $v0, $v0, $a0
    /* 2078 800F3C78 02004014 */  bnez       $v0, .L800F3C84
    /* 207C 800F3C7C 00806334 */   ori       $v1, $v1, (0x7FFC8000 & 0xFFFF)
    /* 2080 800F3C80 0D80033C */  lui        $v1, (0x800D0000 >> 16)
  .L800F3C84:
    /* 2084 800F3C84 21186400 */  addu       $v1, $v1, $a0
    /* 2088 800F3C88 0000628C */  lw         $v0, 0x0($v1)
    /* 208C 800F3C8C 0800E003 */  jr         $ra
    /* 2090 800F3C90 00000000 */   nop
endlabel func_800F3C6C
