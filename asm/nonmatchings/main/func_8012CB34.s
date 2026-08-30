nonmatching func_8012CB34, 0x118

glabel func_8012CB34
    /* 3AF34 8012CB34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3AF38 8012CB38 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3AF3C 8012CB3C 91E5030C */  jal        func_800F9644
    /* 3AF40 8012CB40 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AF44 8012CB44 96D9030C */  jal        func_800F6658
    /* 3AF48 8012CB48 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 3AF4C 8012CB4C 25DE030C */  jal        func_800F7894
    /* 3AF50 8012CB50 00000000 */   nop
    /* 3AF54 8012CB54 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3AF58 8012CB58 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3AF5C 8012CB5C 00000000 */  nop
    /* 3AF60 8012CB60 00006294 */  lhu        $v0, 0x0($v1)
    /* 3AF64 8012CB64 00000000 */  nop
    /* 3AF68 8012CB68 80110200 */  sll        $v0, $v0, 6
    /* 3AF6C 8012CB6C 5BD4030C */  jal        func_800F516C
    /* 3AF70 8012CB70 000062A4 */   sh        $v0, 0x0($v1)
    /* 3AF74 8012CB74 14D4030C */  jal        func_800F5050
    /* 3AF78 8012CB78 00000000 */   nop
    /* 3AF7C 8012CB7C 9DE0030C */  jal        func_800F8274
    /* 3AF80 8012CB80 45000424 */   addiu     $a0, $zero, 0x45
    /* 3AF84 8012CB84 96D9030C */  jal        func_800F6658
    /* 3AF88 8012CB88 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 3AF8C 8012CB8C 99D0030C */  jal        func_800F4264
    /* 3AF90 8012CB90 01000424 */   addiu     $a0, $zero, 0x1
    /* 3AF94 8012CB94 7AD0030C */  jal        func_800F41E8
    /* 3AF98 8012CB98 02000424 */   addiu     $a0, $zero, 0x2
    /* 3AF9C 8012CB9C 03004014 */  bnez       $v0, .L8012CBAC
    /* 3AFA0 8012CBA0 00000000 */   nop
    /* 3AFA4 8012CBA4 56D9030C */  jal        func_800F6558
    /* 3AFA8 8012CBA8 20000424 */   addiu     $a0, $zero, 0x20
  .L8012CBAC:
    /* 3AFAC 8012CBAC 0FCF030C */  jal        func_800F3C3C
    /* 3AFB0 8012CBB0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3AFB4 8012CBB4 E5CF030C */  jal        func_800F3F94
    /* 3AFB8 8012CBB8 21204000 */   addu      $a0, $v0, $zero
    /* 3AFBC 8012CBBC 04D5030C */  jal        func_800F5410
    /* 3AFC0 8012CBC0 00000000 */   nop
    /* 3AFC4 8012CBC4 0FCF030C */  jal        func_800F3C3C
    /* 3AFC8 8012CBC8 29000424 */   addiu     $a0, $zero, 0x29
    /* 3AFCC 8012CBCC E5CF030C */  jal        func_800F3F94
    /* 3AFD0 8012CBD0 21204000 */   addu      $a0, $v0, $zero
    /* 3AFD4 8012CBD4 19D0030C */  jal        func_800F4064
    /* 3AFD8 8012CBD8 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 3AFDC 8012CBDC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3AFE0 8012CBE0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3AFE4 8012CBE4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3AFE8 8012CBE8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3AFEC 8012CBEC 00004394 */  lhu        $v1, 0x0($v0)
    /* 3AFF0 8012CBF0 20000424 */  addiu      $a0, $zero, 0x20
    /* 3AFF4 8012CBF4 98E5030C */  jal        func_800F9660
    /* 3AFF8 8012CBF8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3AFFC 8012CBFC 53D9030C */  jal        func_800F654C
    /* 3B000 8012CC00 04000424 */   addiu     $a0, $zero, 0x4
    /* 3B004 8012CC04 58E2030C */  jal        func_800F8960
    /* 3B008 8012CC08 21200000 */   addu      $a0, $zero, $zero
    /* 3B00C 8012CC0C 7AD8030C */  jal        func_800F61E8
    /* 3B010 8012CC10 00000000 */   nop
    /* 3B014 8012CC14 58E2030C */  jal        func_800F8960
    /* 3B018 8012CC18 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B01C 8012CC1C 7AD8030C */  jal        func_800F61E8
    /* 3B020 8012CC20 00000000 */   nop
    /* 3B024 8012CC24 58E2030C */  jal        func_800F8960
    /* 3B028 8012CC28 40000424 */   addiu     $a0, $zero, 0x40
    /* 3B02C 8012CC2C 7AD8030C */  jal        func_800F61E8
    /* 3B030 8012CC30 00000000 */   nop
    /* 3B034 8012CC34 58E2030C */  jal        func_800F8960
    /* 3B038 8012CC38 42000424 */   addiu     $a0, $zero, 0x42
    /* 3B03C 8012CC3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B040 8012CC40 00000000 */  nop
    /* 3B044 8012CC44 0800E003 */  jr         $ra
    /* 3B048 8012CC48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CB34
