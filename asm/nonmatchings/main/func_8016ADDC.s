nonmatching func_8016ADDC, 0xB8

glabel func_8016ADDC
    /* 791DC 8016ADDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 791E0 8016ADE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 791E4 8016ADE4 CCE4030C */  jal        func_800F9330
    /* 791E8 8016ADE8 00000000 */   nop
    /* 791EC 8016ADEC 91E5030C */  jal        func_800F9644
    /* 791F0 8016ADF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 791F4 8016ADF4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 791F8 8016ADF8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 791FC 8016ADFC 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 79200 8016AE00 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 79204 8016AE04 00006294 */  lhu        $v0, 0x0($v1)
    /* 79208 8016AE08 21200000 */  addu       $a0, $zero, $zero
    /* 7920C 8016AE0C 77DC030C */  jal        func_800F71DC
    /* 79210 8016AE10 0000A2A4 */   sh        $v0, 0x0($a1)
  .L8016AE14:
    /* 79214 8016AE14 F7E1030C */  jal        func_800F87DC
    /* 79218 8016AE18 19330424 */   addiu     $a0, $zero, 0x3319
    /* 7921C 8016AE1C F7E1030C */  jal        func_800F87DC
    /* 79220 8016AE20 1B370424 */   addiu     $a0, $zero, 0x371B
    /* 79224 8016AE24 50E4030C */  jal        func_800F9140
    /* 79228 8016AE28 1B330424 */   addiu     $a0, $zero, 0x331B
    /* 7922C 8016AE2C 50E4030C */  jal        func_800F9140
    /* 79230 8016AE30 19370424 */   addiu     $a0, $zero, 0x3719
    /* 79234 8016AE34 D9D8030C */  jal        func_800F6364
    /* 79238 8016AE38 00000000 */   nop
    /* 7923C 8016AE3C D9D8030C */  jal        func_800F6364
    /* 79240 8016AE40 00000000 */   nop
    /* 79244 8016AE44 D9D8030C */  jal        func_800F6364
    /* 79248 8016AE48 00000000 */   nop
    /* 7924C 8016AE4C D9D8030C */  jal        func_800F6364
    /* 79250 8016AE50 00000000 */   nop
    /* 79254 8016AE54 56D6030C */  jal        func_800F5958
    /* 79258 8016AE58 00040424 */   addiu     $a0, $zero, 0x400
    /* 7925C 8016AE5C F5D4030C */  jal        func_800F53D4
    /* 79260 8016AE60 00000000 */   nop
    /* 79264 8016AE64 EBFF4010 */  beqz       $v0, .L8016AE14
    /* 79268 8016AE68 00000000 */   nop
    /* 7926C 8016AE6C C7E5030C */  jal        func_800F971C
    /* 79270 8016AE70 00000000 */   nop
    /* 79274 8016AE74 98E5030C */  jal        func_800F9660
    /* 79278 8016AE78 20000424 */   addiu     $a0, $zero, 0x20
    /* 7927C 8016AE7C 68E5030C */  jal        func_800F95A0
    /* 79280 8016AE80 00000000 */   nop
    /* 79284 8016AE84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79288 8016AE88 00000000 */  nop
    /* 7928C 8016AE8C 0800E003 */  jr         $ra
    /* 79290 8016AE90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016ADDC
