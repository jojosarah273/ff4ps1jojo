nonmatching func_80142CB4, 0x10C

glabel func_80142CB4
    /* 510B4 80142CB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 510B8 80142CB8 1000BFAF */  sw         $ra, 0x10($sp)
  .L80142CBC:
    /* 510BC 80142CBC 8D0B050C */  jal        func_80142E34
    /* 510C0 80142CC0 00000000 */   nop
    /* 510C4 80142CC4 C7E5030C */  jal        func_800F971C
    /* 510C8 80142CC8 00000000 */   nop
    /* 510CC 80142CCC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 510D0 80142CD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 510D4 80142CD4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 510D8 80142CD8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 510DC 80142CDC 00004394 */  lhu        $v1, 0x0($v0)
    /* 510E0 80142CE0 00000000 */  nop
    /* 510E4 80142CE4 000083A4 */  sh         $v1, 0x0($a0)
  .L80142CE8:
    /* 510E8 80142CE8 53D9030C */  jal        func_800F654C
    /* 510EC 80142CEC 08000424 */   addiu     $a0, $zero, 0x8
    /* 510F0 80142CF0 910F050C */  jal        func_80143E44
    /* 510F4 80142CF4 00000000 */   nop
    /* 510F8 80142CF8 DADA030C */  jal        func_800F6B68
    /* 510FC 80142CFC B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 51100 80142D00 0DD9030C */  jal        func_800F6434
    /* 51104 80142D04 02000424 */   addiu     $a0, $zero, 0x2
    /* 51108 80142D08 09004014 */  bnez       $v0, .L80142D30
    /* 5110C 80142D0C 00000000 */   nop
    /* 51110 80142D10 20D5030C */  jal        func_800F5480
    /* 51114 80142D14 00000000 */   nop
    /* 51118 80142D18 C1CE030C */  jal        func_800F3B04
    /* 5111C 80142D1C ACF30434 */   ori       $a0, $zero, 0xF3AC
    /* 51120 80142D20 D2DF030C */  jal        func_800F7F48
    /* 51124 80142D24 21204000 */   addu      $a0, $v0, $zero
    /* 51128 80142D28 DAE1030C */  jal        func_800F8768
    /* 5112C 80142D2C B3F10434 */   ori       $a0, $zero, 0xF1B3
  .L80142D30:
    /* 51130 80142D30 DADA030C */  jal        func_800F6B68
    /* 51134 80142D34 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 51138 80142D38 0DD9030C */  jal        func_800F6434
    /* 5113C 80142D3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 51140 80142D40 09004014 */  bnez       $v0, .L80142D68
    /* 51144 80142D44 00000000 */   nop
    /* 51148 80142D48 20D5030C */  jal        func_800F5480
    /* 5114C 80142D4C 00000000 */   nop
    /* 51150 80142D50 C1CE030C */  jal        func_800F3B04
    /* 51154 80142D54 ACF30434 */   ori       $a0, $zero, 0xF3AC
    /* 51158 80142D58 D2DF030C */  jal        func_800F7F48
    /* 5115C 80142D5C 21204000 */   addu      $a0, $v0, $zero
    /* 51160 80142D60 DAE1030C */  jal        func_800F8768
    /* 51164 80142D64 F3F10434 */   ori       $a0, $zero, 0xF1F3
  .L80142D68:
    /* 51168 80142D68 D9D8030C */  jal        func_800F6364
    /* 5116C 80142D6C 00000000 */   nop
    /* 51170 80142D70 56D6030C */  jal        func_800F5958
    /* 51174 80142D74 08000424 */   addiu     $a0, $zero, 0x8
    /* 51178 80142D78 F5D4030C */  jal        func_800F53D4
    /* 5117C 80142D7C 00000000 */   nop
    /* 51180 80142D80 D9FF4010 */  beqz       $v0, .L80142CE8
    /* 51184 80142D84 00000000 */   nop
    /* 51188 80142D88 59D9030C */  jal        func_800F6564
    /* 5118C 80142D8C F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 51190 80142D90 C1CE030C */  jal        func_800F3B04
    /* 51194 80142D94 ADF30434 */   ori       $a0, $zero, 0xF3AD
    /* 51198 80142D98 35D5030C */  jal        func_800F54D4
    /* 5119C 80142D9C 21204000 */   addu      $a0, $v0, $zero
    /* 511A0 80142DA0 F5D4030C */  jal        func_800F53D4
    /* 511A4 80142DA4 00000000 */   nop
    /* 511A8 80142DA8 C4FF4010 */  beqz       $v0, .L80142CBC
    /* 511AC 80142DAC 00000000 */   nop
    /* 511B0 80142DB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 511B4 80142DB4 00000000 */  nop
    /* 511B8 80142DB8 0800E003 */  jr         $ra
    /* 511BC 80142DBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142CB4
