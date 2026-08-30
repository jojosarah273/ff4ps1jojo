nonmatching func_801428FC, 0x250

glabel func_801428FC
    /* 50CFC 801428FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50D00 80142900 1000BFAF */  sw         $ra, 0x10($sp)
    /* 50D04 80142904 4BF4040C */  jal        func_8013D12C
    /* 50D08 80142908 00000000 */   nop
    /* 50D0C 8014290C C7E5030C */  jal        func_800F971C
    /* 50D10 80142910 00000000 */   nop
    /* 50D14 80142914 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50D18 80142918 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50D1C 8014291C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 50D20 80142920 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 50D24 80142924 00004394 */  lhu        $v1, 0x0($v0)
    /* 50D28 80142928 33D7030C */  jal        func_800F5CCC
    /* 50D2C 8014292C 000083A4 */   sh        $v1, 0x0($a0)
    /* 50D30 80142930 62E0030C */  jal        func_800F8188
    /* 50D34 80142934 27F40434 */   ori       $a0, $zero, 0xF427
  .L80142938:
    /* 50D38 80142938 DADA030C */  jal        func_800F6B68
    /* 50D3C 8014293C 00190424 */   addiu     $a0, $zero, 0x1900
    /* 50D40 80142940 D30A050C */  jal        func_80142B4C
    /* 50D44 80142944 00000000 */   nop
    /* 50D48 80142948 C7E5030C */  jal        func_800F971C
    /* 50D4C 8014294C 00000000 */   nop
    /* 50D50 80142950 DAE1030C */  jal        func_800F8768
    /* 50D54 80142954 A6EC0434 */   ori       $a0, $zero, 0xECA6
    /* 50D58 80142958 D9D8030C */  jal        func_800F6364
    /* 50D5C 8014295C 00000000 */   nop
    /* 50D60 80142960 56D6030C */  jal        func_800F5958
    /* 50D64 80142964 40000424 */   addiu     $a0, $zero, 0x40
    /* 50D68 80142968 F5D4030C */  jal        func_800F53D4
    /* 50D6C 8014296C 00000000 */   nop
    /* 50D70 80142970 F1FF4010 */  beqz       $v0, .L80142938
    /* 50D74 80142974 00000000 */   nop
    /* 50D78 80142978 FB01050C */  jal        func_801407EC
    /* 50D7C 8014297C 00000000 */   nop
    /* 50D80 80142980 77DC030C */  jal        func_800F71DC
    /* 50D84 80142984 18000424 */   addiu     $a0, $zero, 0x18
  .L80142988:
    /* 50D88 80142988 CCE4030C */  jal        func_800F9330
    /* 50D8C 8014298C 00000000 */   nop
    /* 50D90 80142990 DDE3030C */  jal        func_800F8F74
    /* 50D94 80142994 28F40434 */   ori       $a0, $zero, 0xF428
    /* 50D98 80142998 C7E5030C */  jal        func_800F971C
    /* 50D9C 8014299C 00000000 */   nop
    /* 50DA0 801429A0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50DA4 801429A4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50DA8 801429A8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 50DAC 801429AC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 50DB0 801429B0 00004394 */  lhu        $v1, 0x0($v0)
    /* 50DB4 801429B4 00000000 */  nop
    /* 50DB8 801429B8 000083A4 */  sh         $v1, 0x0($a0)
  .L801429BC:
    /* 50DBC 801429BC 5CDB030C */  jal        func_800F6D70
    /* 50DC0 801429C0 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 50DC4 801429C4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 50DC8 801429C8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 50DCC 801429CC 00000000 */  nop
    /* 50DD0 801429D0 00006290 */  lbu        $v0, 0x0($v1)
    /* 50DD4 801429D4 03000424 */  addiu      $a0, $zero, 0x3
    /* 50DD8 801429D8 42110200 */  srl        $v0, $v0, 5
    /* 50DDC 801429DC 92D0030C */  jal        func_800F4248
    /* 50DE0 801429E0 000062A0 */   sb        $v0, 0x0($v1)
    /* 50DE4 801429E4 0D00043C */  lui        $a0, (0xDFE0F >> 16)
    /* 50DE8 801429E8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50DEC 801429EC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50DF0 801429F0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 50DF4 801429F4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 50DF8 801429F8 00004394 */  lhu        $v1, 0x0($v0)
    /* 50DFC 801429FC 0FFE8434 */  ori        $a0, $a0, (0xDFE0F & 0xFFFF)
    /* 50E00 80142A00 1ADB030C */  jal        func_800F6C68
    /* 50E04 80142A04 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 50E08 80142A08 58E2030C */  jal        func_800F8960
    /* 50E0C 80142A0C 66EC0434 */   ori       $a0, $zero, 0xEC66
    /* 50E10 80142A10 EFD8030C */  jal        func_800F63BC
    /* 50E14 80142A14 00000000 */   nop
    /* 50E18 80142A18 A4D6030C */  jal        func_800F5A90
    /* 50E1C 80142A1C 40000424 */   addiu     $a0, $zero, 0x40
    /* 50E20 80142A20 F5D4030C */  jal        func_800F53D4
    /* 50E24 80142A24 00000000 */   nop
    /* 50E28 80142A28 E4FF4010 */  beqz       $v0, .L801429BC
    /* 50E2C 80142A2C 00000000 */   nop
    /* 50E30 80142A30 53D9030C */  jal        func_800F654C
    /* 50E34 80142A34 40000424 */   addiu     $a0, $zero, 0x40
    /* 50E38 80142A38 7A0C050C */  jal        func_801431E8
    /* 50E3C 80142A3C 00000000 */   nop
    /* 50E40 80142A40 73DF050C */  jal        func_80177DCC
    /* 50E44 80142A44 00000000 */   nop
    /* 50E48 80142A48 C7E5030C */  jal        func_800F971C
    /* 50E4C 80142A4C 00000000 */   nop
    /* 50E50 80142A50 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50E54 80142A54 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50E58 80142A58 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 50E5C 80142A5C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 50E60 80142A60 00004394 */  lhu        $v1, 0x0($v0)
    /* 50E64 80142A64 00000000 */  nop
    /* 50E68 80142A68 000083A4 */  sh         $v1, 0x0($a0)
  .L80142A6C:
    /* 50E6C 80142A6C DADA030C */  jal        func_800F6B68
    /* 50E70 80142A70 A6EC0434 */   ori       $a0, $zero, 0xECA6
    /* 50E74 80142A74 0DD9030C */  jal        func_800F6434
    /* 50E78 80142A78 02020424 */   addiu     $a0, $zero, 0x202
    /* 50E7C 80142A7C 15004014 */  bnez       $v0, .L80142AD4
    /* 50E80 80142A80 00000000 */   nop
    /* 50E84 80142A84 DADA030C */  jal        func_800F6B68
    /* 50E88 80142A88 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 50E8C 80142A8C 20D5030C */  jal        func_800F5480
    /* 50E90 80142A90 00000000 */   nop
    /* 50E94 80142A94 16E0030C */  jal        func_800F8058
    /* 50E98 80142A98 08000424 */   addiu     $a0, $zero, 0x8
    /* 50E9C 80142A9C DAE1030C */  jal        func_800F8768
    /* 50EA0 80142AA0 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 50EA4 80142AA4 DAE1030C */  jal        func_800F8768
    /* 50EA8 80142AA8 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 50EAC 80142AAC 5DD5030C */  jal        func_800F5574
    /* 50EB0 80142AB0 10000424 */   addiu     $a0, $zero, 0x10
    /* 50EB4 80142AB4 F0D4030C */  jal        func_800F53C0
    /* 50EB8 80142AB8 00000000 */   nop
    /* 50EBC 80142ABC 05004014 */  bnez       $v0, .L80142AD4
    /* 50EC0 80142AC0 00000000 */   nop
    /* 50EC4 80142AC4 53D9030C */  jal        func_800F654C
    /* 50EC8 80142AC8 01000424 */   addiu     $a0, $zero, 0x1
    /* 50ECC 80142ACC DAE1030C */  jal        func_800F8768
    /* 50ED0 80142AD0 A6EC0434 */   ori       $a0, $zero, 0xECA6
  .L80142AD4:
    /* 50ED4 80142AD4 D9D8030C */  jal        func_800F6364
    /* 50ED8 80142AD8 00000000 */   nop
    /* 50EDC 80142ADC 56D6030C */  jal        func_800F5958
    /* 50EE0 80142AE0 40000424 */   addiu     $a0, $zero, 0x40
    /* 50EE4 80142AE4 F5D4030C */  jal        func_800F53D4
    /* 50EE8 80142AE8 00000000 */   nop
    /* 50EEC 80142AEC DFFF4010 */  beqz       $v0, .L80142A6C
    /* 50EF0 80142AF0 00000000 */   nop
    /* 50EF4 80142AF4 68E5030C */  jal        func_800F95A0
    /* 50EF8 80142AF8 00000000 */   nop
    /* 50EFC 80142AFC 56D6030C */  jal        func_800F5958
    /* 50F00 80142B00 09000424 */   addiu     $a0, $zero, 0x9
    /* 50F04 80142B04 F5D4030C */  jal        func_800F53D4
    /* 50F08 80142B08 00000000 */   nop
    /* 50F0C 80142B0C 03004010 */  beqz       $v0, .L80142B1C
    /* 50F10 80142B10 00000000 */   nop
    /* 50F14 80142B14 5B02050C */  jal        func_8014096C
    /* 50F18 80142B18 00000000 */   nop
  .L80142B1C:
    /* 50F1C 80142B1C 92D7030C */  jal        func_800F5E48
    /* 50F20 80142B20 00000000 */   nop
    /* 50F24 80142B24 19D7030C */  jal        func_800F5C64
    /* 50F28 80142B28 02020424 */   addiu     $a0, $zero, 0x202
    /* 50F2C 80142B2C 96FF4014 */  bnez       $v0, .L80142988
    /* 50F30 80142B30 00000000 */   nop
    /* 50F34 80142B34 DDE3030C */  jal        func_800F8F74
    /* 50F38 80142B38 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 50F3C 80142B3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50F40 80142B40 00000000 */  nop
    /* 50F44 80142B44 0800E003 */  jr         $ra
    /* 50F48 80142B48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801428FC
