nonmatching func_80141DC0, 0xC0

glabel func_80141DC0
    /* 501C0 80141DC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 501C4 80141DC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 501C8 80141DC8 EEE3030C */  jal        func_800F8FB8
    /* 501CC 80141DCC 4E000424 */   addiu     $a0, $zero, 0x4E
  .L80141DD0:
    /* 501D0 80141DD0 5601050C */  jal        func_80140558
    /* 501D4 80141DD4 00000000 */   nop
    /* 501D8 80141DD8 8CD9030C */  jal        func_800F6630
    /* 501DC 80141DDC 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 501E0 80141DE0 92D0030C */  jal        func_800F4248
    /* 501E4 80141DE4 04000424 */   addiu     $a0, $zero, 0x4
    /* 501E8 80141DE8 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 501EC 80141DEC 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 501F0 80141DF0 02020424 */  addiu      $a0, $zero, 0x202
    /* 501F4 80141DF4 00004390 */  lbu        $v1, 0x0($v0)
    /* 501F8 80141DF8 1A80053C */  lui        $a1, %hi(D_8019ED50)
    /* 501FC 80141DFC 50EDA58C */  lw         $a1, %lo(D_8019ED50)($a1)
    /* 50200 80141E00 82180300 */  srl        $v1, $v1, 2
    /* 50204 80141E04 000043A0 */  sb         $v1, 0x0($v0)
    /* 50208 80141E08 CADD030C */  jal        func_800F7728
    /* 5020C 80141E0C 0000A3AC */   sw        $v1, 0x0($a1)
    /* 50210 80141E10 05004014 */  bnez       $v0, .L80141E28
    /* 50214 80141E14 00000000 */   nop
    /* 50218 80141E18 53D9030C */  jal        func_800F654C
    /* 5021C 80141E1C 34000424 */   addiu     $a0, $zero, 0x34
    /* 50220 80141E20 8C070508 */  j          .L80141E30
    /* 50224 80141E24 00000000 */   nop
  .L80141E28:
    /* 50228 80141E28 53D9030C */  jal        func_800F654C
    /* 5022C 80141E2C 38000424 */   addiu     $a0, $zero, 0x38
  .L80141E30:
    /* 50230 80141E30 62E0030C */  jal        func_800F8188
    /* 50234 80141E34 30F30434 */   ori       $a0, $zero, 0xF330
    /* 50238 80141E38 AFD8030C */  jal        func_800F62BC
    /* 5023C 80141E3C 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 50240 80141E40 8CD9030C */  jal        func_800F6630
    /* 50244 80141E44 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 50248 80141E48 5DD5030C */  jal        func_800F5574
    /* 5024C 80141E4C 10000424 */   addiu     $a0, $zero, 0x10
    /* 50250 80141E50 F5D4030C */  jal        func_800F53D4
    /* 50254 80141E54 00000000 */   nop
    /* 50258 80141E58 DDFF4010 */  beqz       $v0, .L80141DD0
    /* 5025C 80141E5C 00000000 */   nop
    /* 50260 80141E60 53D9030C */  jal        func_800F654C
    /* 50264 80141E64 38000424 */   addiu     $a0, $zero, 0x38
    /* 50268 80141E68 62E0030C */  jal        func_800F8188
    /* 5026C 80141E6C 30F30434 */   ori       $a0, $zero, 0xF330
    /* 50270 80141E70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50274 80141E74 00000000 */  nop
    /* 50278 80141E78 0800E003 */  jr         $ra
    /* 5027C 80141E7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141DC0
