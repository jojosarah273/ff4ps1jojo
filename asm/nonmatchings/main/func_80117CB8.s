nonmatching func_80117CB8, 0x140

glabel func_80117CB8
    /* 260B8 80117CB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 260BC 80117CBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 260C0 80117CC0 8CD9030C */  jal        func_800F6630
    /* 260C4 80117CC4 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 260C8 80117CC8 92D0030C */  jal        func_800F4248
    /* 260CC 80117CCC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 260D0 80117CD0 93E0030C */  jal        func_800F824C
    /* 260D4 80117CD4 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 260D8 80117CD8 5DD5030C */  jal        func_800F5574
    /* 260DC 80117CDC 0B000424 */   addiu     $a0, $zero, 0xB
    /* 260E0 80117CE0 F5D4030C */  jal        func_800F53D4
    /* 260E4 80117CE4 00000000 */   nop
    /* 260E8 80117CE8 1D004010 */  beqz       $v0, .L80117D60
    /* 260EC 80117CEC 00000000 */   nop
    /* 260F0 80117CF0 77DC030C */  jal        func_800F71DC
    /* 260F4 80117CF4 21200000 */   addu      $a0, $zero, $zero
  .L80117CF8:
    /* 260F8 80117CF8 DADA030C */  jal        func_800F6B68
    /* 260FC 80117CFC 00110424 */   addiu     $a0, $zero, 0x1100
    /* 26100 80117D00 DAE1030C */  jal        func_800F8768
    /* 26104 80117D04 80110424 */   addiu     $a0, $zero, 0x1180
    /* 26108 80117D08 D9D8030C */  jal        func_800F6364
    /* 2610C 80117D0C 00000000 */   nop
    /* 26110 80117D10 56D6030C */  jal        func_800F5958
    /* 26114 80117D14 40000424 */   addiu     $a0, $zero, 0x40
    /* 26118 80117D18 F5D4030C */  jal        func_800F53D4
    /* 2611C 80117D1C 00000000 */   nop
    /* 26120 80117D20 F5FF4010 */  beqz       $v0, .L80117CF8
    /* 26124 80117D24 00000000 */   nop
    /* 26128 80117D28 77DC030C */  jal        func_800F71DC
    /* 2612C 80117D2C 21200000 */   addu      $a0, $zero, $zero
  .L80117D30:
    /* 26130 80117D30 DADA030C */  jal        func_800F6B68
    /* 26134 80117D34 00120424 */   addiu     $a0, $zero, 0x1200
    /* 26138 80117D38 DAE1030C */  jal        func_800F8768
    /* 2613C 80117D3C C0100424 */   addiu     $a0, $zero, 0x10C0
    /* 26140 80117D40 D9D8030C */  jal        func_800F6364
    /* 26144 80117D44 00000000 */   nop
    /* 26148 80117D48 56D6030C */  jal        func_800F5958
    /* 2614C 80117D4C 80000424 */   addiu     $a0, $zero, 0x80
    /* 26150 80117D50 F5D4030C */  jal        func_800F53D4
    /* 26154 80117D54 00000000 */   nop
    /* 26158 80117D58 F5FF4010 */  beqz       $v0, .L80117D30
    /* 2615C 80117D5C 00000000 */   nop
  .L80117D60:
    /* 26160 80117D60 77DC030C */  jal        func_800F71DC
    /* 26164 80117D64 21200000 */   addu      $a0, $zero, $zero
    /* 26168 80117D68 40DD030C */  jal        func_800F7500
    /* 2616C 80117D6C 21200000 */   addu      $a0, $zero, $zero
  .L80117D70:
    /* 26170 80117D70 5CDB030C */  jal        func_800F6D70
    /* 26174 80117D74 D60A0424 */   addiu     $a0, $zero, 0xAD6
    /* 26178 80117D78 DAE1030C */  jal        func_800F8768
    /* 2617C 80117D7C 00100424 */   addiu     $a0, $zero, 0x1000
    /* 26180 80117D80 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 26184 80117D84 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 26188 80117D88 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2618C 80117D8C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 26190 80117D90 00004390 */  lbu        $v1, 0x0($v0)
    /* 26194 80117D94 E4000424 */  addiu      $a0, $zero, 0xE4
    /* 26198 80117D98 0FCF030C */  jal        func_800F3C3C
    /* 2619C 80117D9C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 261A0 80117DA0 35D5030C */  jal        func_800F54D4
    /* 261A4 80117DA4 21204000 */   addu      $a0, $v0, $zero
    /* 261A8 80117DA8 F5D4030C */  jal        func_800F53D4
    /* 261AC 80117DAC 00000000 */   nop
    /* 261B0 80117DB0 03004010 */  beqz       $v0, .L80117DC0
    /* 261B4 80117DB4 00000000 */   nop
    /* 261B8 80117DB8 995F040C */  jal        func_80117E64
    /* 261BC 80117DBC 00000000 */   nop
  .L80117DC0:
    /* 261C0 80117DC0 7E5F040C */  jal        func_80117DF8
    /* 261C4 80117DC4 00000000 */   nop
    /* 261C8 80117DC8 EFD8030C */  jal        func_800F63BC
    /* 261CC 80117DCC 00000000 */   nop
    /* 261D0 80117DD0 A4D6030C */  jal        func_800F5A90
    /* 261D4 80117DD4 05000424 */   addiu     $a0, $zero, 0x5
    /* 261D8 80117DD8 F5D4030C */  jal        func_800F53D4
    /* 261DC 80117DDC 00000000 */   nop
    /* 261E0 80117DE0 E3FF4010 */  beqz       $v0, .L80117D70
    /* 261E4 80117DE4 00000000 */   nop
    /* 261E8 80117DE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 261EC 80117DEC 00000000 */  nop
    /* 261F0 80117DF0 0800E003 */  jr         $ra
    /* 261F4 80117DF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117CB8
