nonmatching func_800FF0AC, 0x114

glabel func_800FF0AC
    /* D4AC 800FF0AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D4B0 800FF0B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* D4B4 800FF0B4 77DC030C */  jal        func_800F71DC
    /* D4B8 800FF0B8 21200000 */   addu      $a0, $zero, $zero
    /* D4BC 800FF0BC 40DD030C */  jal        func_800F7500
    /* D4C0 800FF0C0 21200000 */   addu      $a0, $zero, $zero
  .L800FF0C4:
    /* D4C4 800FF0C4 0F00043C */  lui        $a0, (0xFA900 >> 16)
    /* D4C8 800FF0C8 1ADB030C */  jal        func_800F6C68
    /* D4CC 800FF0CC 00A98434 */   ori       $a0, $a0, (0xFA900 & 0xFFFF)
    /* D4D0 800FF0D0 58E2030C */  jal        func_800F8960
    /* D4D4 800FF0D4 00100424 */   addiu     $a0, $zero, 0x1000
    /* D4D8 800FF0D8 D9D8030C */  jal        func_800F6364
    /* D4DC 800FF0DC 00000000 */   nop
    /* D4E0 800FF0E0 EFD8030C */  jal        func_800F63BC
    /* D4E4 800FF0E4 00000000 */   nop
    /* D4E8 800FF0E8 A4D6030C */  jal        func_800F5A90
    /* D4EC 800FF0EC 14000424 */   addiu     $a0, $zero, 0x14
    /* D4F0 800FF0F0 F5D4030C */  jal        func_800F53D4
    /* D4F4 800FF0F4 00000000 */   nop
    /* D4F8 800FF0F8 F2FF4010 */  beqz       $v0, .L800FF0C4
    /* D4FC 800FF0FC 00000000 */   nop
    /* D500 800FF100 40DD030C */  jal        func_800F7500
    /* D504 800FF104 21200000 */   addu      $a0, $zero, $zero
  .L800FF108:
    /* D508 800FF108 0F00043C */  lui        $a0, (0xFA900 >> 16)
    /* D50C 800FF10C 1ADB030C */  jal        func_800F6C68
    /* D510 800FF110 00A98434 */   ori       $a0, $a0, (0xFA900 & 0xFFFF)
    /* D514 800FF114 58E2030C */  jal        func_800F8960
    /* D518 800FF118 2D100424 */   addiu     $a0, $zero, 0x102D
    /* D51C 800FF11C D9D8030C */  jal        func_800F6364
    /* D520 800FF120 00000000 */   nop
    /* D524 800FF124 EFD8030C */  jal        func_800F63BC
    /* D528 800FF128 00000000 */   nop
    /* D52C 800FF12C A4D6030C */  jal        func_800F5A90
    /* D530 800FF130 03000424 */   addiu     $a0, $zero, 0x3
    /* D534 800FF134 F5D4030C */  jal        func_800F53D4
    /* D538 800FF138 00000000 */   nop
    /* D53C 800FF13C F2FF4010 */  beqz       $v0, .L800FF108
    /* D540 800FF140 00000000 */   nop
    /* D544 800FF144 40DD030C */  jal        func_800F7500
    /* D548 800FF148 21200000 */   addu      $a0, $zero, $zero
    /* D54C 800FF14C 0F00043C */  lui        $a0, (0xFA900 >> 16)
  .L800FF150:
    /* D550 800FF150 1ADB030C */  jal        func_800F6C68
    /* D554 800FF154 00A98434 */   ori       $a0, $a0, (0xFA900 & 0xFFFF)
    /* D558 800FF158 58E2030C */  jal        func_800F8960
    /* D55C 800FF15C 37100424 */   addiu     $a0, $zero, 0x1037
    /* D560 800FF160 D9D8030C */  jal        func_800F6364
    /* D564 800FF164 00000000 */   nop
    /* D568 800FF168 EFD8030C */  jal        func_800F63BC
    /* D56C 800FF16C 00000000 */   nop
    /* D570 800FF170 A4D6030C */  jal        func_800F5A90
    /* D574 800FF174 09000424 */   addiu     $a0, $zero, 0x9
    /* D578 800FF178 F5D4030C */  jal        func_800F53D4
    /* D57C 800FF17C 00000000 */   nop
    /* D580 800FF180 F3FF4010 */  beqz       $v0, .L800FF150
    /* D584 800FF184 0F00043C */   lui       $a0, (0xFA900 >> 16)
    /* D588 800FF188 40DD030C */  jal        func_800F7500
    /* D58C 800FF18C 21200000 */   addu      $a0, $zero, $zero
    /* D590 800FF190 AFE3030C */  jal        func_800F8EBC
    /* D594 800FF194 3D000424 */   addiu     $a0, $zero, 0x3D
    /* D598 800FF198 EC60040C */  jal        func_801183B0
    /* D59C 800FF19C 00000000 */   nop
    /* D5A0 800FF1A0 53D9030C */  jal        func_800F654C
    /* D5A4 800FF1A4 21200000 */   addu      $a0, $zero, $zero
    /* D5A8 800FF1A8 8C42050C */  jal        func_80150A30
    /* D5AC 800FF1AC 00000000 */   nop
    /* D5B0 800FF1B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* D5B4 800FF1B4 00000000 */  nop
    /* D5B8 800FF1B8 0800E003 */  jr         $ra
    /* D5BC 800FF1BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF0AC
