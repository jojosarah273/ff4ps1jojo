nonmatching func_800F3C3C, 0x30

glabel func_800F3C3C
    /* 203C 800F3C3C FC7F053C */  lui        $a1, (0x7FFC8000 >> 16)
    /* 2040 800F3C40 801F033C */  lui        $v1, (0x1F8003D0 >> 16)
    /* 2044 800F3C44 D0036394 */  lhu        $v1, (0x1F8003D0 & 0xFFFF)($v1)
    /* 2048 800F3C48 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 204C 800F3C4C FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 2050 800F3C50 21186400 */  addu       $v1, $v1, $a0
    /* 2054 800F3C54 2A104300 */  slt        $v0, $v0, $v1
    /* 2058 800F3C58 02004014 */  bnez       $v0, .L800F3C64
    /* 205C 800F3C5C 0080A534 */   ori       $a1, $a1, (0x7FFC8000 & 0xFFFF)
    /* 2060 800F3C60 0D80053C */  lui        $a1, (0x800D0000 >> 16)
  .L800F3C64:
    /* 2064 800F3C64 0800E003 */  jr         $ra
    /* 2068 800F3C68 2110A300 */   addu      $v0, $a1, $v1
endlabel func_800F3C3C
