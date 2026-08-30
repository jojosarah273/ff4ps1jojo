nonmatching func_8012C0A8, 0x1A8

glabel func_8012C0A8
    /* 3A4A8 8012C0A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A4AC 8012C0AC 03000424 */  addiu      $a0, $zero, 0x3
    /* 3A4B0 8012C0B0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 3A4B4 8012C0B4 40DD030C */  jal        func_800F7500
    /* 3A4B8 8012C0B8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3A4BC 8012C0BC B6D9030C */  jal        func_800F66D8
    /* 3A4C0 8012C0C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A4C4 8012C0C4 92D0030C */  jal        func_800F4248
    /* 3A4C8 8012C0C8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 3A4CC 8012C0CC 48D0030C */  jal        func_800F4120
    /* 3A4D0 8012C0D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A4D4 8012C0D4 42004010 */  beqz       $v0, .L8012C1E0
    /* 3A4D8 8012C0D8 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 3A4DC 8012C0DC C7E5030C */  jal        func_800F971C
    /* 3A4E0 8012C0E0 00000000 */   nop
    /* 3A4E4 8012C0E4 52CF030C */  jal        func_800F3D48
    /* 3A4E8 8012C0E8 00000000 */   nop
    /* 3A4EC 8012C0EC 59D9030C */  jal        func_800F6564
    /* 3A4F0 8012C0F0 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 3A4F4 8012C0F4 20D5030C */  jal        func_800F5480
    /* 3A4F8 8012C0F8 00000000 */   nop
    /* 3A4FC 8012C0FC 16E0030C */  jal        func_800F8058
    /* 3A500 8012C100 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 3A504 8012C104 91E5030C */  jal        func_800F9644
    /* 3A508 8012C108 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A50C 8012C10C 5BD4030C */  jal        func_800F516C
    /* 3A510 8012C110 00000000 */   nop
    /* 3A514 8012C114 9DE0030C */  jal        func_800F8274
    /* 3A518 8012C118 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A51C 8012C11C 5BD4030C */  jal        func_800F516C
    /* 3A520 8012C120 00000000 */   nop
    /* 3A524 8012C124 14D4030C */  jal        func_800F5050
    /* 3A528 8012C128 00000000 */   nop
    /* 3A52C 8012C12C 0FCF030C */  jal        func_800F3C3C
    /* 3A530 8012C130 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A534 8012C134 E5CF030C */  jal        func_800F3F94
    /* 3A538 8012C138 21204000 */   addu      $a0, $v0, $zero
    /* 3A53C 8012C13C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3A540 8012C140 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3A544 8012C144 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3A548 8012C148 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3A54C 8012C14C 00004394 */  lhu        $v1, 0x0($v0)
    /* 3A550 8012C150 20000424 */  addiu      $a0, $zero, 0x20
    /* 3A554 8012C154 98E5030C */  jal        func_800F9660
    /* 3A558 8012C158 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3A55C 8012C15C C7E5030C */  jal        func_800F971C
    /* 3A560 8012C160 00000000 */   nop
    /* 3A564 8012C164 52CF030C */  jal        func_800F3D48
    /* 3A568 8012C168 00000000 */   nop
    /* 3A56C 8012C16C 0F00043C */  lui        $a0, (0xF9681 >> 16)
    /* 3A570 8012C170 1ADB030C */  jal        func_800F6C68
    /* 3A574 8012C174 81968434 */   ori       $a0, $a0, (0xF9681 & 0xFFFF)
    /* 3A578 8012C178 91E5030C */  jal        func_800F9644
    /* 3A57C 8012C17C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A580 8012C180 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3A584 8012C184 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3A588 8012C188 00000000 */  nop
    /* 3A58C 8012C18C 00006294 */  lhu        $v0, 0x0($v1)
    /* 3A590 8012C190 841A0424 */  addiu      $a0, $zero, 0x1A84
    /* 3A594 8012C194 00110200 */  sll        $v0, $v0, 4
    /* 3A598 8012C198 6CE0030C */  jal        func_800F81B0
    /* 3A59C 8012C19C 000062A4 */   sh        $v0, 0x0($v1)
    /* 3A5A0 8012C1A0 5BD4030C */  jal        func_800F516C
    /* 3A5A4 8012C1A4 00000000 */   nop
    /* 3A5A8 8012C1A8 14D4030C */  jal        func_800F5050
    /* 3A5AC 8012C1AC 00000000 */   nop
    /* 3A5B0 8012C1B0 C1CE030C */  jal        func_800F3B04
    /* 3A5B4 8012C1B4 841A0424 */   addiu     $a0, $zero, 0x1A84
    /* 3A5B8 8012C1B8 E5CF030C */  jal        func_800F3F94
    /* 3A5BC 8012C1BC 21204000 */   addu      $a0, $v0, $zero
    /* 3A5C0 8012C1C0 9DE0030C */  jal        func_800F8274
    /* 3A5C4 8012C1C4 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A5C8 8012C1C8 98E5030C */  jal        func_800F9660
    /* 3A5CC 8012C1CC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A5D0 8012C1D0 7B88040C */  jal        func_801221EC
    /* 3A5D4 8012C1D4 00000000 */   nop
    /* 3A5D8 8012C1D8 90B00408 */  j          .L8012C240
    /* 3A5DC 8012C1DC 01000224 */   addiu     $v0, $zero, 0x1
  .L8012C1E0:
    /* 3A5E0 8012C1E0 90911026 */  addiu      $s0, $s0, %lo(D_80199190)
    /* 3A5E4 8012C1E4 20000496 */  lhu        $a0, 0x20($s0)
    /* 3A5E8 8012C1E8 40DD030C */  jal        func_800F7500
    /* 3A5EC 8012C1EC 00000000 */   nop
    /* 3A5F0 8012C1F0 90D8030C */  jal        func_800F6240
    /* 3A5F4 8012C1F4 821A0424 */   addiu     $a0, $zero, 0x1A82
    /* 3A5F8 8012C1F8 E7E4030C */  jal        func_800F939C
    /* 3A5FC 8012C1FC 00000000 */   nop
    /* 3A600 8012C200 2B84040C */  jal        func_801210AC
    /* 3A604 8012C204 00000000 */   nop
    /* 3A608 8012C208 1C000496 */  lhu        $a0, 0x1C($s0)
    /* 3A60C 8012C20C 40DD030C */  jal        func_800F7500
    /* 3A610 8012C210 00000000 */   nop
    /* 3A614 8012C214 CC7B040C */  jal        func_8011EF30
    /* 3A618 8012C218 00000000 */   nop
    /* 3A61C 8012C21C 83E5030C */  jal        func_800F960C
    /* 3A620 8012C220 00000000 */   nop
    /* 3A624 8012C224 E97E040C */  jal        func_8011FBA4
    /* 3A628 8012C228 00000000 */   nop
    /* 3A62C 8012C22C FC98040C */  jal        func_801263F0
    /* 3A630 8012C230 00000000 */   nop
    /* 3A634 8012C234 94B0040C */  jal        func_8012C250
    /* 3A638 8012C238 00000000 */   nop
    /* 3A63C 8012C23C 02000224 */  addiu      $v0, $zero, 0x2
  .L8012C240:
    /* 3A640 8012C240 1400BF8F */  lw         $ra, 0x14($sp)
    /* 3A644 8012C244 1000B08F */  lw         $s0, 0x10($sp)
    /* 3A648 8012C248 0800E003 */  jr         $ra
    /* 3A64C 8012C24C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C0A8
