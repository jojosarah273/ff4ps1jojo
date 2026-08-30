nonmatching func_80147888, 0x220

glabel func_80147888
    /* 55C88 80147888 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 55C8C 8014788C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 55C90 80147890 CCE4030C */  jal        func_800F9330
    /* 55C94 80147894 00000000 */   nop
    /* 55C98 80147898 E7E4030C */  jal        func_800F939C
    /* 55C9C 8014789C 00000000 */   nop
    /* 55CA0 801478A0 AFE3030C */  jal        func_800F8EBC
    /* 55CA4 801478A4 21200000 */   addu      $a0, $zero, $zero
    /* 55CA8 801478A8 9CDC030C */  jal        func_800F7270
    /* 55CAC 801478AC 21200000 */   addu      $a0, $zero, $zero
    /* 55CB0 801478B0 8CD9030C */  jal        func_800F6630
    /* 55CB4 801478B4 47000424 */   addiu     $a0, $zero, 0x47
    /* 55CB8 801478B8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 55CBC 801478BC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 55CC0 801478C0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 55CC4 801478C4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 55CC8 801478C8 00006294 */  lhu        $v0, 0x0($v1)
    /* 55CCC 801478CC C7E5030C */  jal        func_800F971C
    /* 55CD0 801478D0 000082A4 */   sh        $v0, 0x0($a0)
    /* 55CD4 801478D4 58E2030C */  jal        func_800F8960
    /* 55CD8 801478D8 8FF00434 */   ori       $a0, $zero, 0xF08F
    /* 55CDC 801478DC 8CD9030C */  jal        func_800F6630
    /* 55CE0 801478E0 47000424 */   addiu     $a0, $zero, 0x47
    /* 55CE4 801478E4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 55CE8 801478E8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 55CEC 801478EC 00000000 */  nop
    /* 55CF0 801478F0 00006290 */  lbu        $v0, 0x0($v1)
    /* 55CF4 801478F4 00000000 */  nop
    /* 55CF8 801478F8 80100200 */  sll        $v0, $v0, 2
    /* 55CFC 801478FC 000062A0 */  sb         $v0, 0x0($v1)
    /* 55D00 80147900 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 55D04 80147904 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 55D08 80147908 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 55D0C 8014790C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 55D10 80147910 00008294 */  lhu        $v0, 0x0($a0)
    /* 55D14 80147914 15F00434 */  ori        $a0, $zero, 0xF015
    /* 55D18 80147918 5CDB030C */  jal        func_800F6D70
    /* 55D1C 8014791C 000062A4 */   sh        $v0, 0x0($v1)
    /* 55D20 80147920 92D0030C */  jal        func_800F4248
    /* 55D24 80147924 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 55D28 80147928 48D0030C */  jal        func_800F4120
    /* 55D2C 8014792C 02020424 */   addiu     $a0, $zero, 0x202
    /* 55D30 80147930 53004014 */  bnez       $v0, .L80147A80
    /* 55D34 80147934 00000000 */   nop
    /* 55D38 80147938 59D9030C */  jal        func_800F6564
    /* 55D3C 8014793C 14F00434 */   ori       $a0, $zero, 0xF014
    /* 55D40 80147940 0DD9030C */  jal        func_800F6434
    /* 55D44 80147944 02020424 */   addiu     $a0, $zero, 0x202
    /* 55D48 80147948 12004014 */  bnez       $v0, .L80147994
    /* 55D4C 8014794C 00000000 */   nop
    /* 55D50 80147950 CCE4030C */  jal        func_800F9330
    /* 55D54 80147954 00000000 */   nop
    /* 55D58 80147958 8CD9030C */  jal        func_800F6630
    /* 55D5C 8014795C 47000424 */   addiu     $a0, $zero, 0x47
    /* 55D60 80147960 1600043C */  lui        $a0, (0x16FCF8 >> 16)
    /* 55D64 80147964 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 55D68 80147968 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 55D6C 8014796C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 55D70 80147970 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 55D74 80147974 00004394 */  lhu        $v1, 0x0($v0)
    /* 55D78 80147978 F8FC8434 */  ori        $a0, $a0, (0x16FCF8 & 0xFFFF)
    /* 55D7C 8014797C 1ADB030C */  jal        func_800F6C68
    /* 55D80 80147980 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 55D84 80147984 68E5030C */  jal        func_800F95A0
    /* 55D88 80147988 00000000 */   nop
    /* 55D8C 8014798C 741E0508 */  j          .L801479D0
    /* 55D90 80147990 00000000 */   nop
  .L80147994:
    /* 55D94 80147994 CCE4030C */  jal        func_800F9330
    /* 55D98 80147998 00000000 */   nop
    /* 55D9C 8014799C 8CD9030C */  jal        func_800F6630
    /* 55DA0 801479A0 47000424 */   addiu     $a0, $zero, 0x47
    /* 55DA4 801479A4 1600043C */  lui        $a0, (0x16FCFD >> 16)
    /* 55DA8 801479A8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 55DAC 801479AC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 55DB0 801479B0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 55DB4 801479B4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 55DB8 801479B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 55DBC 801479BC FDFC8434 */  ori        $a0, $a0, (0x16FCFD & 0xFFFF)
    /* 55DC0 801479C0 1ADB030C */  jal        func_800F6C68
    /* 55DC4 801479C4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 55DC8 801479C8 68E5030C */  jal        func_800F95A0
    /* 55DCC 801479CC 00000000 */   nop
  .L801479D0:
    /* 55DD0 801479D0 DAE1030C */  jal        func_800F8768
    /* 55DD4 801479D4 CFEF0434 */   ori       $a0, $zero, 0xEFCF
    /* 55DD8 801479D8 5CDB030C */  jal        func_800F6D70
    /* 55DDC 801479DC 15F00434 */   ori       $a0, $zero, 0xF015
    /* 55DE0 801479E0 92D0030C */  jal        func_800F4248
    /* 55DE4 801479E4 30000424 */   addiu     $a0, $zero, 0x30
    /* 55DE8 801479E8 48D0030C */  jal        func_800F4120
    /* 55DEC 801479EC 02000424 */   addiu     $a0, $zero, 0x2
    /* 55DF0 801479F0 19004014 */  bnez       $v0, .L80147A58
    /* 55DF4 801479F4 00000000 */   nop
    /* 55DF8 801479F8 92D0030C */  jal        func_800F4248
    /* 55DFC 801479FC 20000424 */   addiu     $a0, $zero, 0x20
    /* 55E00 80147A00 48D0030C */  jal        func_800F4120
    /* 55E04 80147A04 02000424 */   addiu     $a0, $zero, 0x2
    /* 55E08 80147A08 0B004014 */  bnez       $v0, .L80147A38
    /* 55E0C 80147A0C 00000000 */   nop
    /* 55E10 80147A10 DADA030C */  jal        func_800F6B68
    /* 55E14 80147A14 CEEF0434 */   ori       $a0, $zero, 0xEFCE
    /* 55E18 80147A18 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 55E1C 80147A1C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 55E20 80147A20 00000000 */  nop
    /* 55E24 80147A24 00006290 */  lbu        $v0, 0x0($v1)
    /* 55E28 80147A28 CEEF0434 */  ori        $a0, $zero, 0xEFCE
    /* 55E2C 80147A2C 10004234 */  ori        $v0, $v0, 0x10
    /* 55E30 80147A30 DAE1030C */  jal        func_800F8768
    /* 55E34 80147A34 000062A0 */   sb        $v0, 0x0($v1)
  .L80147A38:
    /* 55E38 80147A38 DADA030C */  jal        func_800F6B68
    /* 55E3C 80147A3C CFEF0434 */   ori       $a0, $zero, 0xEFCF
    /* 55E40 80147A40 50D4030C */  jal        func_800F5140
    /* 55E44 80147A44 00000000 */   nop
    /* 55E48 80147A48 DAE1030C */  jal        func_800F8768
    /* 55E4C 80147A4C CFEF0434 */   ori       $a0, $zero, 0xEFCF
    /* 55E50 80147A50 A01E0508 */  j          .L80147A80
    /* 55E54 80147A54 00000000 */   nop
  .L80147A58:
    /* 55E58 80147A58 DADA030C */  jal        func_800F6B68
    /* 55E5C 80147A5C CEEF0434 */   ori       $a0, $zero, 0xEFCE
    /* 55E60 80147A60 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 55E64 80147A64 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 55E68 80147A68 00000000 */  nop
    /* 55E6C 80147A6C 00006290 */  lbu        $v0, 0x0($v1)
    /* 55E70 80147A70 CEEF0434 */  ori        $a0, $zero, 0xEFCE
    /* 55E74 80147A74 40004234 */  ori        $v0, $v0, 0x40
    /* 55E78 80147A78 DAE1030C */  jal        func_800F8768
    /* 55E7C 80147A7C 000062A0 */   sb        $v0, 0x0($v1)
  .L80147A80:
    /* 55E80 80147A80 3E1C050C */  jal        func_801470F8
    /* 55E84 80147A84 00000000 */   nop
    /* 55E88 80147A88 83E5030C */  jal        func_800F960C
    /* 55E8C 80147A8C 00000000 */   nop
    /* 55E90 80147A90 68E5030C */  jal        func_800F95A0
    /* 55E94 80147A94 00000000 */   nop
    /* 55E98 80147A98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 55E9C 80147A9C 00000000 */  nop
    /* 55EA0 80147AA0 0800E003 */  jr         $ra
    /* 55EA4 80147AA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80147888
