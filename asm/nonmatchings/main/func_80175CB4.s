nonmatching func_80175CB4, 0xDC

glabel func_80175CB4
    /* 840B4 80175CB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 840B8 80175CB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 840BC 80175CBC 40DD030C */  jal        func_800F7500
    /* 840C0 80175CC0 21200000 */   addu      $a0, $zero, $zero
    /* 840C4 80175CC4 77DC030C */  jal        func_800F71DC
    /* 840C8 80175CC8 21200000 */   addu      $a0, $zero, $zero
  .L80175CCC:
    /* 840CC 80175CCC 0D00043C */  lui        $a0, (0xD8000 >> 16)
  .L80175CD0:
    /* 840D0 80175CD0 1ADB030C */  jal        func_800F6C68
    /* 840D4 80175CD4 00808434 */   ori       $a0, $a0, (0xD8000 & 0xFFFF)
    /* 840D8 80175CD8 58E2030C */  jal        func_800F8960
    /* 840DC 80175CDC DB0D0424 */   addiu     $a0, $zero, 0xDDB
    /* 840E0 80175CE0 D9D8030C */  jal        func_800F6364
    /* 840E4 80175CE4 00000000 */   nop
    /* 840E8 80175CE8 EFD8030C */  jal        func_800F63BC
    /* 840EC 80175CEC 00000000 */   nop
    /* 840F0 80175CF0 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 840F4 80175CF4 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 840F8 80175CF8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 840FC 80175CFC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 84100 80175D00 00004390 */  lbu        $v1, 0x0($v0)
    /* 84104 80175D04 0F000424 */  addiu      $a0, $zero, 0xF
    /* 84108 80175D08 92D0030C */  jal        func_800F4248
    /* 8410C 80175D0C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 84110 80175D10 48D0030C */  jal        func_800F4120
    /* 84114 80175D14 02020424 */   addiu     $a0, $zero, 0x202
    /* 84118 80175D18 ECFF4014 */  bnez       $v0, .L80175CCC
    /* 8411C 80175D1C 00000000 */   nop
  .L80175D20:
    /* 84120 80175D20 53D9030C */  jal        func_800F654C
    /* 84124 80175D24 21200000 */   addu      $a0, $zero, $zero
    /* 84128 80175D28 58E2030C */  jal        func_800F8960
    /* 8412C 80175D2C DB0D0424 */   addiu     $a0, $zero, 0xDDB
    /* 84130 80175D30 EFD8030C */  jal        func_800F63BC
    /* 84134 80175D34 00000000 */   nop
    /* 84138 80175D38 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 8413C 80175D3C 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 84140 80175D40 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 84144 80175D44 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 84148 80175D48 00004390 */  lbu        $v1, 0x0($v0)
    /* 8414C 80175D4C 0F000424 */  addiu      $a0, $zero, 0xF
    /* 84150 80175D50 92D0030C */  jal        func_800F4248
    /* 84154 80175D54 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 84158 80175D58 48D0030C */  jal        func_800F4120
    /* 8415C 80175D5C 02020424 */   addiu     $a0, $zero, 0x202
    /* 84160 80175D60 EFFF4014 */  bnez       $v0, .L80175D20
    /* 84164 80175D64 00000000 */   nop
    /* 84168 80175D68 A4D6030C */  jal        func_800F5A90
    /* 8416C 80175D6C 80000424 */   addiu     $a0, $zero, 0x80
    /* 84170 80175D70 F5D4030C */  jal        func_800F53D4
    /* 84174 80175D74 00000000 */   nop
    /* 84178 80175D78 D5FF4010 */  beqz       $v0, .L80175CD0
    /* 8417C 80175D7C 0D00043C */   lui       $a0, (0xD8000 >> 16)
    /* 84180 80175D80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 84184 80175D84 00000000 */  nop
    /* 84188 80175D88 0800E003 */  jr         $ra
    /* 8418C 80175D8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80175CB4
