nonmatching func_80113E3C, 0x100

glabel func_80113E3C
    /* 2223C 80113E3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22240 80113E40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22244 80113E44 93E0030C */  jal        func_800F824C
    /* 22248 80113E48 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 2224C 80113E4C 53D9030C */  jal        func_800F654C
    /* 22250 80113E50 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 22254 80113E54 93E0030C */  jal        func_800F824C
    /* 22258 80113E58 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2225C 80113E5C 77DC030C */  jal        func_800F71DC
    /* 22260 80113E60 7C010424 */   addiu     $a0, $zero, 0x17C
    /* 22264 80113E64 40E3030C */  jal        func_800F8D00
    /* 22268 80113E68 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 2226C 80113E6C 5BE3030C */  jal        func_800F8D6C
    /* 22270 80113E70 24000424 */   addiu     $a0, $zero, 0x24
    /* 22274 80113E74 53D9030C */  jal        func_800F654C
    /* 22278 80113E78 10000424 */   addiu     $a0, $zero, 0x10
    /* 2227C 80113E7C 93E0030C */  jal        func_800F824C
    /* 22280 80113E80 90000424 */   addiu     $a0, $zero, 0x90
  .L80113E84:
    /* 22284 80113E84 F6F9030C */  jal        func_800FE7D8
    /* 22288 80113E88 00000000 */   nop
    /* 2228C 80113E8C CF4F040C */  jal        func_80113F3C
    /* 22290 80113E90 00000000 */   nop
    /* 22294 80113E94 91E5030C */  jal        func_800F9644
    /* 22298 80113E98 20000424 */   addiu     $a0, $zero, 0x20
    /* 2229C 80113E9C 63D9030C */  jal        func_800F658C
    /* 222A0 80113EA0 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 222A4 80113EA4 3ED7030C */  jal        func_800F5CF8
    /* 222A8 80113EA8 00000000 */   nop
    /* 222AC 80113EAC 3ED7030C */  jal        func_800F5CF8
    /* 222B0 80113EB0 00000000 */   nop
    /* 222B4 80113EB4 6CE0030C */  jal        func_800F81B0
    /* 222B8 80113EB8 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 222BC 80113EBC 96D9030C */  jal        func_800F6658
    /* 222C0 80113EC0 24000424 */   addiu     $a0, $zero, 0x24
    /* 222C4 80113EC4 3ED7030C */  jal        func_800F5CF8
    /* 222C8 80113EC8 00000000 */   nop
    /* 222CC 80113ECC 3ED7030C */  jal        func_800F5CF8
    /* 222D0 80113ED0 00000000 */   nop
    /* 222D4 80113ED4 9DE0030C */  jal        func_800F8274
    /* 222D8 80113ED8 24000424 */   addiu     $a0, $zero, 0x24
    /* 222DC 80113EDC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 222E0 80113EE0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 222E4 80113EE4 00000000 */  nop
    /* 222E8 80113EE8 00006294 */  lhu        $v0, 0x0($v1)
    /* 222EC 80113EEC FF000424 */  addiu      $a0, $zero, 0xFF
    /* 222F0 80113EF0 82100200 */  srl        $v0, $v0, 2
    /* 222F4 80113EF4 99D0030C */  jal        func_800F4264
    /* 222F8 80113EF8 000062A4 */   sh        $v0, 0x0($v1)
    /* 222FC 80113EFC 98E5030C */  jal        func_800F9660
    /* 22300 80113F00 20000424 */   addiu     $a0, $zero, 0x20
    /* 22304 80113F04 93E0030C */  jal        func_800F824C
    /* 22308 80113F08 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2230C 80113F0C 7AD0030C */  jal        func_800F41E8
    /* 22310 80113F10 02000424 */   addiu     $a0, $zero, 0x2
    /* 22314 80113F14 DBFF4010 */  beqz       $v0, .L80113E84
    /* 22318 80113F18 00000000 */   nop
    /* 2231C 80113F1C 2DFA030C */  jal        func_800FE8B4
    /* 22320 80113F20 00000000 */   nop
    /* 22324 80113F24 977A040C */  jal        func_8011EA5C
    /* 22328 80113F28 00000000 */   nop
    /* 2232C 80113F2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22330 80113F30 00000000 */  nop
    /* 22334 80113F34 0800E003 */  jr         $ra
    /* 22338 80113F38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113E3C
