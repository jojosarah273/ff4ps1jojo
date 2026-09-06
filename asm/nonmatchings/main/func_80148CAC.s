nonmatching func_80148CAC, 0x58

glabel func_80148CAC
    /* 570AC 80148CAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 570B0 80148CB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 570B4 80148CB4 CCE4030C */  jal        func_800F9330
    /* 570B8 80148CB8 00000000 */   nop
    /* 570BC 80148CBC 90D8030C */  jal        func_800F6240
    /* 570C0 80148CC0 2BF40434 */   ori       $a0, $zero, 0xF42B
    /* 570C4 80148CC4 AA000424 */  addiu      $a0, $zero, 0xAA
    /* 570C8 80148CC8 11000324 */  addiu      $v1, $zero, 0x11
    /* 570CC 80148CCC 0D80023C */  lui        $v0, (0x800D0515 >> 16)
    /* 570D0 80148CD0 15054234 */  ori        $v0, $v0, (0x800D0515 & 0xFFFF)
  .L80148CD4:
    /* 570D4 80148CD4 000044A0 */  sb         $a0, 0x0($v0)
    /* 570D8 80148CD8 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 570DC 80148CDC FDFF6104 */  bgez       $v1, .L80148CD4
    /* 570E0 80148CE0 FFFF4224 */   addiu     $v0, $v0, -0x1
    /* 570E4 80148CE4 0A23050C */  jal        func_80148C28
    /* 570E8 80148CE8 00000000 */   nop
    /* 570EC 80148CEC 68E5030C */  jal        func_800F95A0
    /* 570F0 80148CF0 00000000 */   nop
    /* 570F4 80148CF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 570F8 80148CF8 00000000 */  nop
    /* 570FC 80148CFC 0800E003 */  jr         $ra
    /* 57100 80148D00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148CAC
