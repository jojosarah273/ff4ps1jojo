nonmatching func_8013A950, 0xB8

glabel func_8013A950
    /* 48D50 8013A950 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48D54 8013A954 1000BFAF */  sw         $ra, 0x10($sp)
    /* 48D58 8013A958 59D9030C */  jal        func_800F6564
    /* 48D5C 8013A95C A91B0424 */   addiu     $a0, $zero, 0x1BA9
    /* 48D60 8013A960 93E0030C */  jal        func_800F824C
    /* 48D64 8013A964 43000424 */   addiu     $a0, $zero, 0x43
    /* 48D68 8013A968 91E5030C */  jal        func_800F9644
    /* 48D6C 8013A96C 20000424 */   addiu     $a0, $zero, 0x20
    /* 48D70 8013A970 96D9030C */  jal        func_800F6658
    /* 48D74 8013A974 43000424 */   addiu     $a0, $zero, 0x43
    /* 48D78 8013A978 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 48D7C 8013A97C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 48D80 8013A980 00000000 */  nop
    /* 48D84 8013A984 00006294 */  lhu        $v0, 0x0($v1)
    /* 48D88 8013A988 45000424 */  addiu      $a0, $zero, 0x45
    /* 48D8C 8013A98C 40110200 */  sll        $v0, $v0, 5
    /* 48D90 8013A990 9DE0030C */  jal        func_800F8274
    /* 48D94 8013A994 000062A4 */   sh        $v0, 0x0($v1)
    /* 48D98 8013A998 98E5030C */  jal        func_800F9660
    /* 48D9C 8013A99C 20000424 */   addiu     $a0, $zero, 0x20
    /* 48DA0 8013A9A0 59D9030C */  jal        func_800F6564
    /* 48DA4 8013A9A4 A81B0424 */   addiu     $a0, $zero, 0x1BA8
    /* 48DA8 8013A9A8 0FCF030C */  jal        func_800F3C3C
    /* 48DAC 8013A9AC 45000424 */   addiu     $a0, $zero, 0x45
    /* 48DB0 8013A9B0 31DE030C */  jal        func_800F78C4
    /* 48DB4 8013A9B4 21204000 */   addu      $a0, $v0, $zero
    /* 48DB8 8013A9B8 93E0030C */  jal        func_800F824C
    /* 48DBC 8013A9BC 45000424 */   addiu     $a0, $zero, 0x45
    /* 48DC0 8013A9C0 59D9030C */  jal        func_800F6564
    /* 48DC4 8013A9C4 AA1B0424 */   addiu     $a0, $zero, 0x1BAA
    /* 48DC8 8013A9C8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 48DCC 8013A9CC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 48DD0 8013A9D0 00000000 */  nop
    /* 48DD4 8013A9D4 00006290 */  lbu        $v0, 0x0($v1)
    /* 48DD8 8013A9D8 46000424 */  addiu      $a0, $zero, 0x46
    /* 48DDC 8013A9DC 80100200 */  sll        $v0, $v0, 2
    /* 48DE0 8013A9E0 0FCF030C */  jal        func_800F3C3C
    /* 48DE4 8013A9E4 000062A0 */   sb        $v0, 0x0($v1)
    /* 48DE8 8013A9E8 31DE030C */  jal        func_800F78C4
    /* 48DEC 8013A9EC 21204000 */   addu      $a0, $v0, $zero
    /* 48DF0 8013A9F0 93E0030C */  jal        func_800F824C
    /* 48DF4 8013A9F4 46000424 */   addiu     $a0, $zero, 0x46
    /* 48DF8 8013A9F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 48DFC 8013A9FC 00000000 */  nop
    /* 48E00 8013AA00 0800E003 */  jr         $ra
    /* 48E04 8013AA04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013A950
