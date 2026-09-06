nonmatching func_8011EF30, 0x100

glabel func_8011EF30
    /* 2D330 8011EF30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D334 8011EF34 21200000 */  addu       $a0, $zero, $zero
    /* 2D338 8011EF38 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2D33C 8011EF3C 0FCF030C */  jal        func_800F3C3C
    /* 2D340 8011EF40 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2D344 8011EF44 E7E4030C */  jal        func_800F939C
    /* 2D348 8011EF48 21804000 */   addu      $s0, $v0, $zero
    /* 2D34C 8011EF4C 9BE4030C */  jal        func_800F926C
    /* 2D350 8011EF50 00000000 */   nop
    /* 2D354 8011EF54 1A80023C */  lui        $v0, %hi(D_8019ED4C)
    /* 2D358 8011EF58 4CED428C */  lw         $v0, %lo(D_8019ED4C)($v0)
    /* 2D35C 8011EF5C 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 2D360 8011EF60 00004394 */  lhu        $v1, 0x0($v0)
    /* 2D364 8011EF64 01000224 */  addiu      $v0, $zero, 0x1
    /* 2D368 8011EF68 21186400 */  addu       $v1, $v1, $a0
    /* 2D36C 8011EF6C 000062A0 */  sb         $v0, %lo(D_800D0000)($v1)
    /* 2D370 8011EF70 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 2D374 8011EF74 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 2D378 8011EF78 00000000 */  nop
    /* 2D37C 8011EF7C 00008294 */  lhu        $v0, 0x0($a0)
    /* 2D380 8011EF80 00000000 */  nop
    /* 2D384 8011EF84 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 2D388 8011EF88 12E5030C */  jal        func_800F9448
    /* 2D38C 8011EF8C 000082A4 */   sh        $v0, 0x0($a0)
    /* 2D390 8011EF90 FFFF023C */  lui        $v0, (0xFFFF24AF >> 16)
    /* 2D394 8011EF94 AF244234 */  ori        $v0, $v0, (0xFFFF24AF & 0xFFFF)
    /* 2D398 8011EF98 FFFF033C */  lui        $v1, (0xFFFF24B0 >> 16)
    /* 2D39C 8011EF9C B0246334 */  ori        $v1, $v1, (0xFFFF24B0 & 0xFFFF)
    /* 2D3A0 8011EFA0 FFFF043C */  lui        $a0, (0xFFFF24B1 >> 16)
    /* 2D3A4 8011EFA4 1A80073C */  lui        $a3, %hi(D_80199374)
    /* 2D3A8 8011EFA8 1A80063C */  lui        $a2, %hi(D_8019ED58)
    /* 2D3AC 8011EFAC 58EDC68C */  lw         $a2, %lo(D_8019ED58)($a2)
    /* 2D3B0 8011EFB0 7493E724 */  addiu      $a3, $a3, %lo(D_80199374)
    /* 2D3B4 8011EFB4 0000C594 */  lhu        $a1, 0x0($a2)
    /* 2D3B8 8011EFB8 B1248434 */  ori        $a0, $a0, (0xFFFF24B1 & 0xFFFF)
    /* 2D3BC 8011EFBC 2110A200 */  addu       $v0, $a1, $v0
    /* 2D3C0 8011EFC0 21104700 */  addu       $v0, $v0, $a3
    /* 2D3C4 8011EFC4 2118A300 */  addu       $v1, $a1, $v1
    /* 2D3C8 8011EFC8 00004690 */  lbu        $a2, 0x0($v0)
    /* 2D3CC 8011EFCC FFFF023C */  lui        $v0, (0xFFFF24B2 >> 16)
    /* 2D3D0 8011EFD0 2120A400 */  addu       $a0, $a1, $a0
    /* 2D3D4 8011EFD4 B2244234 */  ori        $v0, $v0, (0xFFFF24B2 & 0xFFFF)
    /* 2D3D8 8011EFD8 2128A200 */  addu       $a1, $a1, $v0
    /* 2D3DC 8011EFDC 34000292 */  lbu        $v0, 0x34($s0)
    /* 2D3E0 8011EFE0 21186700 */  addu       $v1, $v1, $a3
    /* 2D3E4 8011EFE4 2B0006A2 */  sb         $a2, 0x2B($s0)
    /* 2D3E8 8011EFE8 00006690 */  lbu        $a2, 0x0($v1)
    /* 2D3EC 8011EFEC 21208700 */  addu       $a0, $a0, $a3
    /* 2D3F0 8011EFF0 2C0006A2 */  sb         $a2, 0x2C($s0)
    /* 2D3F4 8011EFF4 00008390 */  lbu        $v1, 0x0($a0)
    /* 2D3F8 8011EFF8 2128A700 */  addu       $a1, $a1, $a3
    /* 2D3FC 8011EFFC 2D0003A2 */  sb         $v1, 0x2D($s0)
    /* 2D400 8011F000 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2D404 8011F004 2F0002A2 */  sb         $v0, 0x2F($s0)
    /* 2D408 8011F008 12E5030C */  jal        func_800F9448
    /* 2D40C 8011F00C 2E0003A2 */   sb        $v1, 0x2E($s0)
    /* 2D410 8011F010 0C7C040C */  jal        func_8011F030
    /* 2D414 8011F014 00000000 */   nop
    /* 2D418 8011F018 83E5030C */  jal        func_800F960C
    /* 2D41C 8011F01C 00000000 */   nop
    /* 2D420 8011F020 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2D424 8011F024 1000B08F */  lw         $s0, 0x10($sp)
    /* 2D428 8011F028 0800E003 */  jr         $ra
    /* 2D42C 8011F02C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EF30
