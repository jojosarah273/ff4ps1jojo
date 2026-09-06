nonmatching func_801369B8, 0xA0

glabel func_801369B8
    /* 44DB8 801369B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 44DBC 801369BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 44DC0 801369C0 80E4030C */  jal        func_800F9200
    /* 44DC4 801369C4 00000000 */   nop
    /* 44DC8 801369C8 93E0030C */  jal        func_800F824C
    /* 44DCC 801369CC 57000424 */   addiu     $a0, $zero, 0x57
    /* 44DD0 801369D0 81B4040C */  jal        func_8012D204
    /* 44DD4 801369D4 00000000 */   nop
    /* 44DD8 801369D8 F5D4030C */  jal        func_800F53D4
    /* 44DDC 801369DC 00000000 */   nop
    /* 44DE0 801369E0 17004014 */  bnez       $v0, .L80136A40
    /* 44DE4 801369E4 00000000 */   nop
    /* 44DE8 801369E8 5BE3030C */  jal        func_800F8D6C
    /* 44DEC 801369EC E5000424 */   addiu     $a0, $zero, 0xE5
    /* 44DF0 801369F0 BED2040C */  jal        func_80134AF8
    /* 44DF4 801369F4 00000000 */   nop
    /* 44DF8 801369F8 F0D4030C */  jal        func_800F53C0
    /* 44DFC 801369FC 00000000 */   nop
    /* 44E00 80136A00 0F004010 */  beqz       $v0, .L80136A40
    /* 44E04 80136A04 00000000 */   nop
    /* 44E08 80136A08 8CD9030C */  jal        func_800F6630
    /* 44E0C 80136A0C 57000424 */   addiu     $a0, $zero, 0x57
    /* 44E10 80136A10 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 44E14 80136A14 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 44E18 80136A18 00000000 */  nop
    /* 44E1C 80136A1C 00006290 */  lbu        $v0, 0x0($v1)
    /* 44E20 80136A20 00000000 */  nop
    /* 44E24 80136A24 80100200 */  sll        $v0, $v0, 2
    /* 44E28 80136A28 3489040C */  jal        func_801224D0
    /* 44E2C 80136A2C 000062A0 */   sb        $v0, 0x0($v1)
    /* 44E30 80136A30 53D9030C */  jal        func_800F654C
    /* 44E34 80136A34 08000424 */   addiu     $a0, $zero, 0x8
    /* 44E38 80136A38 DAE1030C */  jal        func_800F8768
    /* 44E3C 80136A3C 15FE0434 */   ori       $a0, $zero, 0xFE15
  .L80136A40:
    /* 44E40 80136A40 F7E4030C */  jal        func_800F93DC
    /* 44E44 80136A44 00000000 */   nop
    /* 44E48 80136A48 1000BF8F */  lw         $ra, 0x10($sp)
    /* 44E4C 80136A4C 00000000 */  nop
    /* 44E50 80136A50 0800E003 */  jr         $ra
    /* 44E54 80136A54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801369B8
