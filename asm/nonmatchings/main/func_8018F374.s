nonmatching func_8018F374, 0x94

glabel func_8018F374
    /* 9D774 8018F374 1F80013C */  lui        $at, %hi(D_801F6AF0)
    /* 9D778 8018F378 F06A3FAC */  sw         $ra, %lo(D_801F6AF0)($at)
    /* 9D77C 8018F37C BA5D060C */  jal        func_801976E8
    /* 9D780 8018F380 00000000 */   nop
    /* 9D784 8018F384 56000924 */  addiu      $t1, $zero, 0x56
    /* 9D788 8018F388 B0000A24 */  addiu      $t2, $zero, 0xB0
    /* 9D78C 8018F38C 09F84001 */  jalr       $t2
    /* 9D790 8018F390 00000000 */   nop
    /* 9D794 8018F394 1800428C */  lw         $v0, 0x18($v0)
    /* 9D798 8018F398 00000000 */  nop
    /* 9D79C 8018F39C 7000438C */  lw         $v1, 0x70($v0)
    /* 9D7A0 8018F3A0 00000000 */  nop
    /* 9D7A4 8018F3A4 FFFF6930 */  andi       $t1, $v1, 0xFFFF
    /* 9D7A8 8018F3A8 004C0900 */  sll        $t1, $t1, 16
    /* 9D7AC 8018F3AC 7400438C */  lw         $v1, 0x74($v0)
    /* 9D7B0 8018F3B0 00000000 */  nop
    /* 9D7B4 8018F3B4 FFFF6A30 */  andi       $t2, $v1, 0xFFFF
    /* 9D7B8 8018F3B8 21182A01 */  addu       $v1, $t1, $t2
    /* 9D7BC 8018F3BC 28006224 */  addiu      $v0, $v1, 0x28
    /* 9D7C0 8018F3C0 19800A3C */  lui        $t2, %hi(func_8018F34C)
    /* 9D7C4 8018F3C4 4CF34A25 */  addiu      $t2, $t2, %lo(func_8018F34C)
    /* 9D7C8 8018F3C8 1980093C */  lui        $t1, %hi(func_8018F34C + 0x14)
    /* 9D7CC 8018F3CC 60F32925 */  addiu      $t1, $t1, %lo(func_8018F34C + 0x14)
  .L8018F3D0:
    /* 9D7D0 8018F3D0 0000438D */  lw         $v1, 0x0($t2)
    /* 9D7D4 8018F3D4 00000000 */  nop
    /* 9D7D8 8018F3D8 000043AC */  sw         $v1, 0x0($v0)
    /* 9D7DC 8018F3DC 04004A25 */  addiu      $t2, $t2, 0x4
    /* 9D7E0 8018F3E0 FBFF4915 */  bne        $t2, $t1, .L8018F3D0
    /* 9D7E4 8018F3E4 04004224 */   addiu     $v0, $v0, 0x4
    /* 9D7E8 8018F3E8 0100013C */  lui        $at, (0x10000 >> 16)
    /* 9D7EC 8018F3EC 825D060C */  jal        func_80197608
    /* 9D7F0 8018F3F0 FCDF22AC */   sw        $v0, -0x2004($at)
    /* 9D7F4 8018F3F4 1F801F3C */  lui        $ra, %hi(D_801F6AF0)
    /* 9D7F8 8018F3F8 F06AFF8F */  lw         $ra, %lo(D_801F6AF0)($ra)
    /* 9D7FC 8018F3FC 00000000 */  nop
    /* 9D800 8018F400 0800E003 */  jr         $ra
    /* 9D804 8018F404 00000000 */   nop
endlabel func_8018F374
