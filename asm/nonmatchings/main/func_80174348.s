nonmatching func_80174348, 0x98

glabel func_80174348
    /* 82748 80174348 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8274C 8017434C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 82750 80174350 59D9030C */  jal        func_800F6564
    /* 82754 80174354 8A120424 */   addiu     $a0, $zero, 0x128A
    /* 82758 80174358 92D0030C */  jal        func_800F4248
    /* 8275C 8017435C 40000424 */   addiu     $a0, $zero, 0x40
    /* 82760 80174360 48D0030C */  jal        func_800F4120
    /* 82764 80174364 02020424 */   addiu     $a0, $zero, 0x202
    /* 82768 80174368 19004014 */  bnez       $v0, .L801743D0
    /* 8276C 8017436C 00000000 */   nop
    /* 82770 80174370 77DC030C */  jal        func_800F71DC
    /* 82774 80174374 005A0424 */   addiu     $a0, $zero, 0x5A00
    /* 82778 80174378 5BE3030C */  jal        func_800F8D6C
    /* 8277C 8017437C 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 82780 80174380 77DC030C */  jal        func_800F71DC
    /* 82784 80174384 00060424 */   addiu     $a0, $zero, 0x600
    /* 82788 80174388 5BE3030C */  jal        func_800F8D6C
    /* 8278C 8017438C 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 82790 80174390 77DC030C */  jal        func_800F71DC
    /* 82794 80174394 009E0434 */   ori       $a0, $zero, 0x9E00
    /* 82798 80174398 5BE3030C */  jal        func_800F8D6C
    /* 8279C 8017439C 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 827A0 801743A0 53D9030C */  jal        func_800F654C
    /* 827A4 801743A4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 827A8 801743A8 93E0030C */  jal        func_800F824C
    /* 827AC 801743AC 49000424 */   addiu     $a0, $zero, 0x49
    /* 827B0 801743B0 16C1050C */  jal        func_80170458
    /* 827B4 801743B4 00000000 */   nop
    /* 827B8 801743B8 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 827BC 801743BC 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 827C0 801743C0 00030524 */  addiu      $a1, $zero, 0x300
    /* 827C4 801743C4 21300000 */  addu       $a2, $zero, $zero
    /* 827C8 801743C8 3EFE050C */  jal        func_8017F8F8
    /* 827CC 801743CC FFFF0724 */   addiu     $a3, $zero, -0x1
  .L801743D0:
    /* 827D0 801743D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 827D4 801743D4 00000000 */  nop
    /* 827D8 801743D8 0800E003 */  jr         $ra
    /* 827DC 801743DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80174348
