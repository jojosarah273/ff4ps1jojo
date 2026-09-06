nonmatching func_8014A9B0, 0x80

glabel func_8014A9B0
    /* 58DB0 8014A9B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58DB4 8014A9B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58DB8 8014A9B8 8223050C */  jal        func_80148E08
    /* 58DBC 8014A9BC 00000000 */   nop
    /* 58DC0 8014A9C0 53D9030C */  jal        func_800F654C
    /* 58DC4 8014A9C4 18000424 */   addiu     $a0, $zero, 0x18
    /* 58DC8 8014A9C8 A023050C */  jal        func_80148E80
    /* 58DCC 8014A9CC 00000000 */   nop
    /* 58DD0 8014A9D0 77DC030C */  jal        func_800F71DC
    /* 58DD4 8014A9D4 04000424 */   addiu     $a0, $zero, 0x4
  .L8014A9D8:
    /* 58DD8 8014A9D8 53D9030C */  jal        func_800F654C
    /* 58DDC 8014A9DC 80000424 */   addiu     $a0, $zero, 0x80
    /* 58DE0 8014A9E0 5623050C */  jal        func_80148D58
    /* 58DE4 8014A9E4 00000000 */   nop
    /* 58DE8 8014A9E8 D9D8030C */  jal        func_800F6364
    /* 58DEC 8014A9EC 00000000 */   nop
    /* 58DF0 8014A9F0 56D6030C */  jal        func_800F5958
    /* 58DF4 8014A9F4 08000424 */   addiu     $a0, $zero, 0x8
    /* 58DF8 8014A9F8 F5D4030C */  jal        func_800F53D4
    /* 58DFC 8014A9FC 00000000 */   nop
    /* 58E00 8014AA00 F5FF4010 */  beqz       $v0, .L8014A9D8
    /* 58E04 8014AA04 00000000 */   nop
    /* 58E08 8014AA08 5B32050C */  jal        func_8014C96C
    /* 58E0C 8014AA0C 00000000 */   nop
    /* 58E10 8014AA10 53D9030C */  jal        func_800F654C
    /* 58E14 8014AA14 04000424 */   addiu     $a0, $zero, 0x4
    /* 58E18 8014AA18 62E0030C */  jal        func_800F8188
    /* 58E1C 8014AA1C A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 58E20 8014AA20 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58E24 8014AA24 00000000 */  nop
    /* 58E28 8014AA28 0800E003 */  jr         $ra
    /* 58E2C 8014AA2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A9B0
