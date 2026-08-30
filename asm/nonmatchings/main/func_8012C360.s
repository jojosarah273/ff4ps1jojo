nonmatching func_8012C360, 0xCC

glabel func_8012C360
    /* 3A760 8012C360 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A764 8012C364 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A768 8012C368 2AB0040C */  jal        func_8012C0A8
    /* 3A76C 8012C36C 00000000 */   nop
    /* 3A770 8012C370 02000324 */  addiu      $v1, $zero, 0x2
    /* 3A774 8012C374 29004310 */  beq        $v0, $v1, .L8012C41C
    /* 3A778 8012C378 00000000 */   nop
    /* 3A77C 8012C37C 40DD030C */  jal        func_800F7500
    /* 3A780 8012C380 07000424 */   addiu     $a0, $zero, 0x7
    /* 3A784 8012C384 91E5030C */  jal        func_800F9644
    /* 3A788 8012C388 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A78C 8012C38C D9D9030C */  jal        func_800F6764
    /* 3A790 8012C390 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A794 8012C394 04D5030C */  jal        func_800F5410
    /* 3A798 8012C398 00000000 */   nop
    /* 3A79C 8012C39C 0FCF030C */  jal        func_800F3C3C
    /* 3A7A0 8012C3A0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A7A4 8012C3A4 E5CF030C */  jal        func_800F3F94
    /* 3A7A8 8012C3A8 21204000 */   addu      $a0, $v0, $zero
    /* 3A7AC 8012C3AC EFD8030C */  jal        func_800F63BC
    /* 3A7B0 8012C3B0 00000000 */   nop
    /* 3A7B4 8012C3B4 EFD8030C */  jal        func_800F63BC
    /* 3A7B8 8012C3B8 00000000 */   nop
    /* 3A7BC 8012C3BC 9CCE030C */  jal        func_800F3A70
    /* 3A7C0 8012C3C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A7C4 8012C3C4 C1CE030C */  jal        func_800F3B04
    /* 3A7C8 8012C3C8 21204000 */   addu      $a0, $v0, $zero
    /* 3A7CC 8012C3CC 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3A7D0 8012C3D0 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3A7D4 8012C3D4 00000000 */  nop
    /* 3A7D8 8012C3D8 00006494 */  lhu        $a0, 0x0($v1)
    /* 3A7DC 8012C3DC 48D5030C */  jal        func_800F5520
    /* 3A7E0 8012C3E0 21204400 */   addu      $a0, $v0, $a0
    /* 3A7E4 8012C3E4 F0D4030C */  jal        func_800F53C0
    /* 3A7E8 8012C3E8 00000000 */   nop
    /* 3A7EC 8012C3EC 03004010 */  beqz       $v0, .L8012C3FC
    /* 3A7F0 8012C3F0 00000000 */   nop
    /* 3A7F4 8012C3F4 D9D9030C */  jal        func_800F6764
    /* 3A7F8 8012C3F8 60000424 */   addiu     $a0, $zero, 0x60
  .L8012C3FC:
    /* 3A7FC 8012C3FC A8D7030C */  jal        func_800F5EA0
    /* 3A800 8012C400 00000000 */   nop
    /* 3A804 8012C404 A8D7030C */  jal        func_800F5EA0
    /* 3A808 8012C408 00000000 */   nop
    /* 3A80C 8012C40C DEE0030C */  jal        func_800F8378
    /* 3A810 8012C410 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A814 8012C414 98E5030C */  jal        func_800F9660
    /* 3A818 8012C418 20000424 */   addiu     $a0, $zero, 0x20
  .L8012C41C:
    /* 3A81C 8012C41C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A820 8012C420 00000000 */  nop
    /* 3A824 8012C424 0800E003 */  jr         $ra
    /* 3A828 8012C428 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C360
