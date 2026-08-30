nonmatching func_80118938, 0x108

glabel func_80118938
    /* 26D38 80118938 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26D3C 8011893C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26D40 80118940 EEE3030C */  jal        func_800F8FB8
    /* 26D44 80118944 79000424 */   addiu     $a0, $zero, 0x79
  .L80118948:
    /* 26D48 80118948 F6F9030C */  jal        func_800FE7D8
    /* 26D4C 8011894C 00000000 */   nop
    /* 26D50 80118950 8CD9030C */  jal        func_800F6630
    /* 26D54 80118954 83000424 */   addiu     $a0, $zero, 0x83
    /* 26D58 80118958 92D0030C */  jal        func_800F4248
    /* 26D5C 8011895C E0000424 */   addiu     $a0, $zero, 0xE0
    /* 26D60 80118960 0FCF030C */  jal        func_800F3C3C
    /* 26D64 80118964 81000424 */   addiu     $a0, $zero, 0x81
    /* 26D68 80118968 31DE030C */  jal        func_800F78C4
    /* 26D6C 8011896C 21204000 */   addu      $a0, $v0, $zero
    /* 26D70 80118970 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 26D74 80118974 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 26D78 80118978 00000000 */  nop
    /* 26D7C 8011897C 00004490 */  lbu        $a0, 0x0($v0)
    /* 26D80 80118980 A4FA050C */  jal        func_8017EA90
    /* 26D84 80118984 00000000 */   nop
    /* 26D88 80118988 AFD8030C */  jal        func_800F62BC
    /* 26D8C 8011898C 79000424 */   addiu     $a0, $zero, 0x79
    /* 26D90 80118990 8CD9030C */  jal        func_800F6630
    /* 26D94 80118994 79000424 */   addiu     $a0, $zero, 0x79
    /* 26D98 80118998 DCD0030C */  jal        func_800F4370
    /* 26D9C 8011899C 82000424 */   addiu     $a0, $zero, 0x82
    /* 26DA0 801189A0 48D0030C */  jal        func_800F4120
    /* 26DA4 801189A4 02020424 */   addiu     $a0, $zero, 0x202
    /* 26DA8 801189A8 E7FF4014 */  bnez       $v0, .L80118948
    /* 26DAC 801189AC 00000000 */   nop
    /* 26DB0 801189B0 68D7030C */  jal        func_800F5DA0
    /* 26DB4 801189B4 81000424 */   addiu     $a0, $zero, 0x81
    /* 26DB8 801189B8 E3D6030C */  jal        func_800F5B8C
    /* 26DBC 801189BC 80800434 */   ori       $a0, $zero, 0x8080
    /* 26DC0 801189C0 E1FF4014 */  bnez       $v0, .L80118948
    /* 26DC4 801189C4 00000000 */   nop
    /* 26DC8 801189C8 EEE3030C */  jal        func_800F8FB8
    /* 26DCC 801189CC 81000424 */   addiu     $a0, $zero, 0x81
    /* 26DD0 801189D0 53D9030C */  jal        func_800F654C
    /* 26DD4 801189D4 11000424 */   addiu     $a0, $zero, 0x11
    /* 26DD8 801189D8 62E0030C */  jal        func_800F8188
    /* 26DDC 801189DC 2D210424 */   addiu     $a0, $zero, 0x212D
    /* 26DE0 801189E0 59D9030C */  jal        func_800F6564
    /* 26DE4 801189E4 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 26DE8 801189E8 19DE030C */  jal        func_800F7864
    /* 26DEC 801189EC 00000000 */   nop
    /* 26DF0 801189F0 CADD030C */  jal        func_800F7728
    /* 26DF4 801189F4 01010424 */   addiu     $a0, $zero, 0x101
    /* 26DF8 801189F8 0B004014 */  bnez       $v0, .L80118A28
    /* 26DFC 801189FC 00000000 */   nop
    /* 26E00 80118A00 53D9030C */  jal        func_800F654C
    /* 26E04 80118A04 02000424 */   addiu     $a0, $zero, 0x2
    /* 26E08 80118A08 62E0030C */  jal        func_800F8188
    /* 26E0C 80118A0C 30210424 */   addiu     $a0, $zero, 0x2130
    /* 26E10 80118A10 53D9030C */  jal        func_800F654C
    /* 26E14 80118A14 43000424 */   addiu     $a0, $zero, 0x43
    /* 26E18 80118A18 62E0030C */  jal        func_800F8188
    /* 26E1C 80118A1C 31210424 */   addiu     $a0, $zero, 0x2131
    /* 26E20 80118A20 8C620408 */  j          .L80118A30
    /* 26E24 80118A24 00000000 */   nop
  .L80118A28:
    /* 26E28 80118A28 DDE3030C */  jal        func_800F8F74
    /* 26E2C 80118A2C 31210424 */   addiu     $a0, $zero, 0x2131
  .L80118A30:
    /* 26E30 80118A30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26E34 80118A34 00000000 */  nop
    /* 26E38 80118A38 0800E003 */  jr         $ra
    /* 26E3C 80118A3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118938
