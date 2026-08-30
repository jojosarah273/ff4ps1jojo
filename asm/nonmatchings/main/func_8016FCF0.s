nonmatching func_8016FCF0, 0x2D0

glabel func_8016FCF0
    /* 7E0F0 8016FCF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E0F4 8016FCF4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7E0F8 8016FCF8 80E4030C */  jal        func_800F9200
    /* 7E0FC 8016FCFC 00000000 */   nop
    /* 7E100 8016FD00 9BE4030C */  jal        func_800F926C
    /* 7E104 8016FD04 00000000 */   nop
    /* 7E108 8016FD08 C7E5030C */  jal        func_800F971C
    /* 7E10C 8016FD0C 00000000 */   nop
    /* 7E110 8016FD10 80E4030C */  jal        func_800F9200
    /* 7E114 8016FD14 00000000 */   nop
    /* 7E118 8016FD18 12E5030C */  jal        func_800F9448
    /* 7E11C 8016FD1C 00000000 */   nop
    /* 7E120 8016FD20 8CD9030C */  jal        func_800F6630
    /* 7E124 8016FD24 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 7E128 8016FD28 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E12C 8016FD2C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E130 8016FD30 00000000 */  nop
    /* 7E134 8016FD34 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E138 8016FD38 1A80013C */  lui        $at, %hi(D_8019EE62)
    /* 7E13C 8016FD3C 62EE23A4 */  sh         $v1, %lo(D_8019EE62)($at)
    /* 7E140 8016FD40 8CD9030C */  jal        func_800F6630
    /* 7E144 8016FD44 8B000424 */   addiu     $a0, $zero, 0x8B
    /* 7E148 8016FD48 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E14C 8016FD4C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E150 8016FD50 00000000 */  nop
    /* 7E154 8016FD54 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E158 8016FD58 1A80033C */  lui        $v1, %hi(D_8019EE62)
    /* 7E15C 8016FD5C 62EE6394 */  lhu        $v1, %lo(D_8019EE62)($v1)
    /* 7E160 8016FD60 00120200 */  sll        $v0, $v0, 8
    /* 7E164 8016FD64 25186200 */  or         $v1, $v1, $v0
    /* 7E168 8016FD68 1A80013C */  lui        $at, %hi(D_8019EE62)
    /* 7E16C 8016FD6C 62EE23A4 */  sh         $v1, %lo(D_8019EE62)($at)
    /* 7E170 8016FD70 8CD9030C */  jal        func_800F6630
    /* 7E174 8016FD74 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 7E178 8016FD78 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E17C 8016FD7C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E180 8016FD80 00000000 */  nop
    /* 7E184 8016FD84 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E188 8016FD88 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 7E18C 8016FD8C 6AEE23A4 */  sh         $v1, %lo(D_8019EE6A)($at)
    /* 7E190 8016FD90 8CD9030C */  jal        func_800F6630
    /* 7E194 8016FD94 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 7E198 8016FD98 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E19C 8016FD9C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E1A0 8016FDA0 00000000 */  nop
    /* 7E1A4 8016FDA4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E1A8 8016FDA8 1A80033C */  lui        $v1, %hi(D_8019EE6A)
    /* 7E1AC 8016FDAC 6AEE6394 */  lhu        $v1, %lo(D_8019EE6A)($v1)
    /* 7E1B0 8016FDB0 00120200 */  sll        $v0, $v0, 8
    /* 7E1B4 8016FDB4 25186200 */  or         $v1, $v1, $v0
    /* 7E1B8 8016FDB8 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 7E1BC 8016FDBC 6AEE23A4 */  sh         $v1, %lo(D_8019EE6A)($at)
    /* 7E1C0 8016FDC0 8CD9030C */  jal        func_800F6630
    /* 7E1C4 8016FDC4 90000424 */   addiu     $a0, $zero, 0x90
    /* 7E1C8 8016FDC8 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E1CC 8016FDCC 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E1D0 8016FDD0 00000000 */  nop
    /* 7E1D4 8016FDD4 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E1D8 8016FDD8 1A80013C */  lui        $at, %hi(D_8019EE60)
    /* 7E1DC 8016FDDC 60EE23A4 */  sh         $v1, %lo(D_8019EE60)($at)
    /* 7E1E0 8016FDE0 8CD9030C */  jal        func_800F6630
    /* 7E1E4 8016FDE4 91000424 */   addiu     $a0, $zero, 0x91
    /* 7E1E8 8016FDE8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E1EC 8016FDEC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E1F0 8016FDF0 00000000 */  nop
    /* 7E1F4 8016FDF4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E1F8 8016FDF8 1A80033C */  lui        $v1, %hi(D_8019EE60)
    /* 7E1FC 8016FDFC 60EE6394 */  lhu        $v1, %lo(D_8019EE60)($v1)
    /* 7E200 8016FE00 00120200 */  sll        $v0, $v0, 8
    /* 7E204 8016FE04 25186200 */  or         $v1, $v1, $v0
    /* 7E208 8016FE08 1A80013C */  lui        $at, %hi(D_8019EE60)
    /* 7E20C 8016FE0C 60EE23A4 */  sh         $v1, %lo(D_8019EE60)($at)
    /* 7E210 8016FE10 8CD9030C */  jal        func_800F6630
    /* 7E214 8016FE14 93000424 */   addiu     $a0, $zero, 0x93
    /* 7E218 8016FE18 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E21C 8016FE1C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E220 8016FE20 00000000 */  nop
    /* 7E224 8016FE24 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E228 8016FE28 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7E22C 8016FE2C 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7E230 8016FE30 8CD9030C */  jal        func_800F6630
    /* 7E234 8016FE34 94000424 */   addiu     $a0, $zero, 0x94
    /* 7E238 8016FE38 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E23C 8016FE3C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E240 8016FE40 00000000 */  nop
    /* 7E244 8016FE44 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E248 8016FE48 1A80033C */  lui        $v1, %hi(D_8019EE68)
    /* 7E24C 8016FE4C 68EE6394 */  lhu        $v1, %lo(D_8019EE68)($v1)
    /* 7E250 8016FE50 00120200 */  sll        $v0, $v0, 8
    /* 7E254 8016FE54 25186200 */  or         $v1, $v1, $v0
    /* 7E258 8016FE58 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7E25C 8016FE5C 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7E260 8016FE60 8CD9030C */  jal        func_800F6630
    /* 7E264 8016FE64 96000424 */   addiu     $a0, $zero, 0x96
    /* 7E268 8016FE68 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E26C 8016FE6C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E270 8016FE70 00000000 */  nop
    /* 7E274 8016FE74 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E278 8016FE78 1A80013C */  lui        $at, %hi(D_8019EE66)
    /* 7E27C 8016FE7C 66EE23A4 */  sh         $v1, %lo(D_8019EE66)($at)
    /* 7E280 8016FE80 8CD9030C */  jal        func_800F6630
    /* 7E284 8016FE84 97000424 */   addiu     $a0, $zero, 0x97
    /* 7E288 8016FE88 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E28C 8016FE8C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E290 8016FE90 00000000 */  nop
    /* 7E294 8016FE94 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E298 8016FE98 1A80033C */  lui        $v1, %hi(D_8019EE66)
    /* 7E29C 8016FE9C 66EE6394 */  lhu        $v1, %lo(D_8019EE66)($v1)
    /* 7E2A0 8016FEA0 00120200 */  sll        $v0, $v0, 8
    /* 7E2A4 8016FEA4 25186200 */  or         $v1, $v1, $v0
    /* 7E2A8 8016FEA8 1A80013C */  lui        $at, %hi(D_8019EE66)
    /* 7E2AC 8016FEAC 66EE23A4 */  sh         $v1, %lo(D_8019EE66)($at)
    /* 7E2B0 8016FEB0 8CD9030C */  jal        func_800F6630
    /* 7E2B4 8016FEB4 99000424 */   addiu     $a0, $zero, 0x99
    /* 7E2B8 8016FEB8 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E2BC 8016FEBC 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E2C0 8016FEC0 00000000 */  nop
    /* 7E2C4 8016FEC4 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E2C8 8016FEC8 1A80013C */  lui        $at, %hi(D_8019EE6E)
    /* 7E2CC 8016FECC 6EEE23A4 */  sh         $v1, %lo(D_8019EE6E)($at)
    /* 7E2D0 8016FED0 8CD9030C */  jal        func_800F6630
    /* 7E2D4 8016FED4 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 7E2D8 8016FED8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E2DC 8016FEDC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E2E0 8016FEE0 00000000 */  nop
    /* 7E2E4 8016FEE4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E2E8 8016FEE8 1A80033C */  lui        $v1, %hi(D_8019EE6E)
    /* 7E2EC 8016FEEC 6EEE6394 */  lhu        $v1, %lo(D_8019EE6E)($v1)
    /* 7E2F0 8016FEF0 00120200 */  sll        $v0, $v0, 8
    /* 7E2F4 8016FEF4 25186200 */  or         $v1, $v1, $v0
    /* 7E2F8 8016FEF8 1A80013C */  lui        $at, %hi(D_8019EE6E)
    /* 7E2FC 8016FEFC 6EEE23A4 */  sh         $v1, %lo(D_8019EE6E)($at)
    /* 7E300 8016FF00 8CD9030C */  jal        func_800F6630
    /* 7E304 8016FF04 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7E308 8016FF08 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E30C 8016FF0C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E310 8016FF10 00000000 */  nop
    /* 7E314 8016FF14 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E318 8016FF18 1A80013C */  lui        $at, %hi(D_8019EE64)
    /* 7E31C 8016FF1C 64EE23A4 */  sh         $v1, %lo(D_8019EE64)($at)
    /* 7E320 8016FF20 8CD9030C */  jal        func_800F6630
    /* 7E324 8016FF24 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 7E328 8016FF28 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7E32C 8016FF2C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7E330 8016FF30 00000000 */  nop
    /* 7E334 8016FF34 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7E338 8016FF38 1A80033C */  lui        $v1, %hi(D_8019EE64)
    /* 7E33C 8016FF3C 64EE6394 */  lhu        $v1, %lo(D_8019EE64)($v1)
    /* 7E340 8016FF40 00120200 */  sll        $v0, $v0, 8
    /* 7E344 8016FF44 25186200 */  or         $v1, $v1, $v0
    /* 7E348 8016FF48 1A80013C */  lui        $at, %hi(D_8019EE64)
    /* 7E34C 8016FF4C 64EE23A4 */  sh         $v1, %lo(D_8019EE64)($at)
    /* 7E350 8016FF50 8CD9030C */  jal        func_800F6630
    /* 7E354 8016FF54 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 7E358 8016FF58 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7E35C 8016FF5C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7E360 8016FF60 00000000 */  nop
    /* 7E364 8016FF64 00004390 */  lbu        $v1, 0x0($v0)
    /* 7E368 8016FF68 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 7E36C 8016FF6C 6CEE23A4 */  sh         $v1, %lo(D_8019EE6C)($at)
    /* 7E370 8016FF70 8CD9030C */  jal        func_800F6630
    /* 7E374 8016FF74 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 7E378 8016FF78 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 7E37C 8016FF7C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 7E380 8016FF80 00000000 */  nop
    /* 7E384 8016FF84 00008290 */  lbu        $v0, 0x0($a0)
    /* 7E388 8016FF88 1A80033C */  lui        $v1, %hi(D_8019EE6C)
    /* 7E38C 8016FF8C 6CEE6394 */  lhu        $v1, %lo(D_8019EE6C)($v1)
    /* 7E390 8016FF90 00120200 */  sll        $v0, $v0, 8
    /* 7E394 8016FF94 25186200 */  or         $v1, $v1, $v0
    /* 7E398 8016FF98 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 7E39C 8016FF9C 6CEE23A4 */  sh         $v1, %lo(D_8019EE6C)($at)
    /* 7E3A0 8016FFA0 12E5030C */  jal        func_800F9448
    /* 7E3A4 8016FFA4 00000000 */   nop
    /* 7E3A8 8016FFA8 F7E4030C */  jal        func_800F93DC
    /* 7E3AC 8016FFAC 00000000 */   nop
    /* 7E3B0 8016FFB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E3B4 8016FFB4 00000000 */  nop
    /* 7E3B8 8016FFB8 0800E003 */  jr         $ra
    /* 7E3BC 8016FFBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016FCF0
