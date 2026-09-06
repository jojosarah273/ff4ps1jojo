nonmatching func_800FFE0C, 0xF0

glabel func_800FFE0C
    /* E20C 800FFE0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* E210 800FFE10 1000BFAF */  sw         $ra, 0x10($sp)
    /* E214 800FFE14 8CD9030C */  jal        func_800F6630
    /* E218 800FFE18 B1000424 */   addiu     $a0, $zero, 0xB1
    /* E21C 800FFE1C 0DD9030C */  jal        func_800F6434
    /* E220 800FFE20 02020424 */   addiu     $a0, $zero, 0x202
    /* E224 800FFE24 31004014 */  bnez       $v0, .L800FFEEC
    /* E228 800FFE28 21100000 */   addu      $v0, $zero, $zero
    /* E22C 800FFE2C 8CD9030C */  jal        func_800F6630
    /* E230 800FFE30 5A000424 */   addiu     $a0, $zero, 0x5A
    /* E234 800FFE34 92D0030C */  jal        func_800F4248
    /* E238 800FFE38 0F000424 */   addiu     $a0, $zero, 0xF
    /* E23C 800FFE3C 48D0030C */  jal        func_800F4120
    /* E240 800FFE40 02020424 */   addiu     $a0, $zero, 0x202
    /* E244 800FFE44 29004014 */  bnez       $v0, .L800FFEEC
    /* E248 800FFE48 21100000 */   addu      $v0, $zero, $zero
    /* E24C 800FFE4C 8CD9030C */  jal        func_800F6630
    /* E250 800FFE50 5C000424 */   addiu     $a0, $zero, 0x5C
    /* E254 800FFE54 92D0030C */  jal        func_800F4248
    /* E258 800FFE58 0F000424 */   addiu     $a0, $zero, 0xF
    /* E25C 800FFE5C 48D0030C */  jal        func_800F4120
    /* E260 800FFE60 02020424 */   addiu     $a0, $zero, 0x202
    /* E264 800FFE64 21004014 */  bnez       $v0, .L800FFEEC
    /* E268 800FFE68 21100000 */   addu      $v0, $zero, $zero
    /* E26C 800FFE6C 8CD9030C */  jal        func_800F6630
    /* E270 800FFE70 02000424 */   addiu     $a0, $zero, 0x2
    /* E274 800FFE74 92D0030C */  jal        func_800F4248
    /* E278 800FFE78 80000424 */   addiu     $a0, $zero, 0x80
    /* E27C 800FFE7C 48D0030C */  jal        func_800F4120
    /* E280 800FFE80 02020424 */   addiu     $a0, $zero, 0x202
    /* E284 800FFE84 19004010 */  beqz       $v0, .L800FFEEC
    /* E288 800FFE88 21100000 */   addu      $v0, $zero, $zero
    /* E28C 800FFE8C 8CD9030C */  jal        func_800F6630
    /* E290 800FFE90 54000424 */   addiu     $a0, $zero, 0x54
    /* E294 800FFE94 0DD9030C */  jal        func_800F6434
    /* E298 800FFE98 02000424 */   addiu     $a0, $zero, 0x2
    /* E29C 800FFE9C 13004010 */  beqz       $v0, .L800FFEEC
    /* E2A0 800FFEA0 21100000 */   addu      $v0, $zero, $zero
    /* E2A4 800FFEA4 AFD8030C */  jal        func_800F62BC
    /* E2A8 800FFEA8 54000424 */   addiu     $a0, $zero, 0x54
    /* E2AC 800FFEAC 8CD9030C */  jal        func_800F6630
    /* E2B0 800FFEB0 EA000424 */   addiu     $a0, $zero, 0xEA
    /* E2B4 800FFEB4 0DD9030C */  jal        func_800F6434
    /* E2B8 800FFEB8 02020424 */   addiu     $a0, $zero, 0x202
    /* E2BC 800FFEBC 03004014 */  bnez       $v0, .L800FFECC
    /* E2C0 800FFEC0 00000000 */   nop
    /* E2C4 800FFEC4 AFD8030C */  jal        func_800F62BC
    /* E2C8 800FFEC8 EA000424 */   addiu     $a0, $zero, 0xEA
  .L800FFECC:
    /* E2CC 800FFECC BFFF030C */  jal        func_800FFEFC
    /* E2D0 800FFED0 00000000 */   nop
    /* E2D4 800FFED4 592A040C */  jal        func_8010A964
    /* E2D8 800FFED8 00000000 */   nop
    /* E2DC 800FFEDC 21184000 */  addu       $v1, $v0, $zero
    /* E2E0 800FFEE0 02006014 */  bnez       $v1, .L800FFEEC
    /* E2E4 800FFEE4 01000224 */   addiu     $v0, $zero, 0x1
    /* E2E8 800FFEE8 21100000 */  addu       $v0, $zero, $zero
  .L800FFEEC:
    /* E2EC 800FFEEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* E2F0 800FFEF0 00000000 */  nop
    /* E2F4 800FFEF4 0800E003 */  jr         $ra
    /* E2F8 800FFEF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFE0C
