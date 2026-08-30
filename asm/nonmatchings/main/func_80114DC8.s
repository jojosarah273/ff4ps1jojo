nonmatching func_80114DC8, 0xF4

glabel func_80114DC8
    /* 231C8 80114DC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 231CC 80114DCC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 231D0 80114DD0 F453040C */  jal        func_80114FD0
    /* 231D4 80114DD4 00000000 */   nop
    /* 231D8 80114DD8 77DC030C */  jal        func_800F71DC
    /* 231DC 80114DDC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 231E0 80114DE0 5BE3030C */  jal        func_800F8D6C
    /* 231E4 80114DE4 89000424 */   addiu     $a0, $zero, 0x89
  .L80114DE8:
    /* 231E8 80114DE8 DEF9030C */  jal        func_800FE778
    /* 231EC 80114DEC 00000000 */   nop
    /* 231F0 80114DF0 9CDC030C */  jal        func_800F7270
    /* 231F4 80114DF4 89000424 */   addiu     $a0, $zero, 0x89
    /* 231F8 80114DF8 56D6030C */  jal        func_800F5958
    /* 231FC 80114DFC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 23200 80114E00 F0D4030C */  jal        func_800F53C0
    /* 23204 80114E04 00000000 */   nop
    /* 23208 80114E08 08004014 */  bnez       $v0, .L80114E2C
    /* 2320C 80114E0C 00210424 */   addiu     $a0, $zero, 0x2100
    /* 23210 80114E10 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 23214 80114E14 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 23218 80114E18 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2321C 80114E1C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 23220 80114E20 00004390 */  lbu        $v1, 0x0($v0)
    /* 23224 80114E24 62E0030C */  jal        func_800F8188
    /* 23228 80114E28 0000A3A0 */   sb        $v1, 0x0($a1)
  .L80114E2C:
    /* 2322C 80114E2C 1CFA030C */  jal        func_800FE870
    /* 23230 80114E30 00000000 */   nop
    /* 23234 80114E34 EACA050C */  jal        func_80172BA8
    /* 23238 80114E38 00000000 */   nop
    /* 2323C 80114E3C 2054040C */  jal        func_80115080
    /* 23240 80114E40 00000000 */   nop
    /* 23244 80114E44 53D9030C */  jal        func_800F654C
    /* 23248 80114E48 40000424 */   addiu     $a0, $zero, 0x40
    /* 2324C 80114E4C 4754040C */  jal        func_8011511C
    /* 23250 80114E50 00000000 */   nop
    /* 23254 80114E54 53D9030C */  jal        func_800F654C
    /* 23258 80114E58 04000424 */   addiu     $a0, $zero, 0x4
    /* 2325C 80114E5C 93E0030C */  jal        func_800F824C
    /* 23260 80114E60 05000424 */   addiu     $a0, $zero, 0x5
    /* 23264 80114E64 EEE3030C */  jal        func_800F8FB8
    /* 23268 80114E68 04000424 */   addiu     $a0, $zero, 0x4
    /* 2326C 80114E6C 0E54040C */  jal        func_80115038
    /* 23270 80114E70 00000000 */   nop
    /* 23274 80114E74 9CDC030C */  jal        func_800F7270
    /* 23278 80114E78 89000424 */   addiu     $a0, $zero, 0x89
    /* 2327C 80114E7C 92D7030C */  jal        func_800F5E48
    /* 23280 80114E80 00000000 */   nop
    /* 23284 80114E84 5BE3030C */  jal        func_800F8D6C
    /* 23288 80114E88 89000424 */   addiu     $a0, $zero, 0x89
    /* 2328C 80114E8C 19D7030C */  jal        func_800F5C64
    /* 23290 80114E90 02020424 */   addiu     $a0, $zero, 0x202
    /* 23294 80114E94 D4FF4014 */  bnez       $v0, .L80114DE8
    /* 23298 80114E98 00000000 */   nop
    /* 2329C 80114E9C EEE3030C */  jal        func_800F8FB8
    /* 232A0 80114EA0 80000424 */   addiu     $a0, $zero, 0x80
    /* 232A4 80114EA4 977A040C */  jal        func_8011EA5C
    /* 232A8 80114EA8 00000000 */   nop
    /* 232AC 80114EAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 232B0 80114EB0 00000000 */  nop
    /* 232B4 80114EB4 0800E003 */  jr         $ra
    /* 232B8 80114EB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114DC8
