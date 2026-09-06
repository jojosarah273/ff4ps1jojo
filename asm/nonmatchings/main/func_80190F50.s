nonmatching func_80190F50, 0x88

glabel func_80190F50
    /* 9F350 80190F50 1A80033C */  lui        $v1, %hi(D_8019BCB0)
    /* 9F354 80190F54 B0BC638C */  lw         $v1, %lo(D_8019BCB0)($v1)
    /* 9F358 80190F58 02000224 */  addiu      $v0, $zero, 0x2
    /* 9F35C 80190F5C 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F360 80190F60 1A80033C */  lui        $v1, %hi(D_8019BCC0)
    /* 9F364 80190F64 C0BC638C */  lw         $v1, %lo(D_8019BCC0)($v1)
    /* 9F368 80190F68 00008290 */  lbu        $v0, 0x0($a0)
    /* 9F36C 80190F6C 00000000 */  nop
    /* 9F370 80190F70 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F374 80190F74 1A80033C */  lui        $v1, %hi(D_8019BCB4)
    /* 9F378 80190F78 B4BC638C */  lw         $v1, %lo(D_8019BCB4)($v1)
    /* 9F37C 80190F7C 01008290 */  lbu        $v0, 0x1($a0)
    /* 9F380 80190F80 00000000 */  nop
    /* 9F384 80190F84 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F388 80190F88 1A80033C */  lui        $v1, %hi(D_8019BCB0)
    /* 9F38C 80190F8C B0BC638C */  lw         $v1, %lo(D_8019BCB0)($v1)
    /* 9F390 80190F90 03000224 */  addiu      $v0, $zero, 0x3
    /* 9F394 80190F94 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F398 80190F98 1A80033C */  lui        $v1, %hi(D_8019BCBC)
    /* 9F39C 80190F9C BCBC638C */  lw         $v1, %lo(D_8019BCBC)($v1)
    /* 9F3A0 80190FA0 02008290 */  lbu        $v0, 0x2($a0)
    /* 9F3A4 80190FA4 00000000 */  nop
    /* 9F3A8 80190FA8 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F3AC 80190FAC 1A80033C */  lui        $v1, %hi(D_8019BCC0)
    /* 9F3B0 80190FB0 C0BC638C */  lw         $v1, %lo(D_8019BCC0)($v1)
    /* 9F3B4 80190FB4 03008290 */  lbu        $v0, 0x3($a0)
    /* 9F3B8 80190FB8 00000000 */  nop
    /* 9F3BC 80190FBC 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F3C0 80190FC0 1A80033C */  lui        $v1, %hi(D_8019BCB4)
    /* 9F3C4 80190FC4 B4BC638C */  lw         $v1, %lo(D_8019BCB4)($v1)
    /* 9F3C8 80190FC8 20000224 */  addiu      $v0, $zero, 0x20
    /* 9F3CC 80190FCC 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F3D0 80190FD0 0800E003 */  jr         $ra
    /* 9F3D4 80190FD4 21100000 */   addu      $v0, $zero, $zero
endlabel func_80190F50
