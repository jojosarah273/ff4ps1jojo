nonmatching func_8015DCA4, 0x33C

glabel func_8015DCA4
    /* 6C0A4 8015DCA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C0A8 8015DCA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C0AC 8015DCAC C7E5030C */  jal        func_800F971C
    /* 6C0B0 8015DCB0 00000000 */   nop
    /* 6C0B4 8015DCB4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C0B8 8015DCB8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C0BC 8015DCBC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C0C0 8015DCC0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C0C4 8015DCC4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C0C8 8015DCC8 8E000424 */  addiu      $a0, $zero, 0x8E
    /* 6C0CC 8015DCCC 5BE3030C */  jal        func_800F8D6C
    /* 6C0D0 8015DCD0 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015DCD4:
    /* 6C0D4 8015DCD4 9CDC030C */  jal        func_800F7270
    /* 6C0D8 8015DCD8 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6C0DC 8015DCDC DADA030C */  jal        func_800F6B68
    /* 6C0E0 8015DCE0 40350424 */   addiu     $a0, $zero, 0x3540
    /* 6C0E4 8015DCE4 0DD9030C */  jal        func_800F6434
    /* 6C0E8 8015DCE8 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C0EC 8015DCEC AE004014 */  bnez       $v0, .L8015DFA8
    /* 6C0F0 8015DCF0 00000000 */   nop
    /* 6C0F4 8015DCF4 DADA030C */  jal        func_800F6B68
    /* 6C0F8 8015DCF8 60350424 */   addiu     $a0, $zero, 0x3560
    /* 6C0FC 8015DCFC 0DD9030C */  jal        func_800F6434
    /* 6C100 8015DD00 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C104 8015DD04 A8004010 */  beqz       $v0, .L8015DFA8
    /* 6C108 8015DD08 00000000 */   nop
    /* 6C10C 8015DD0C 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 6C110 8015DD10 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 6C114 8015DD14 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 6C118 8015DD18 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 6C11C 8015DD1C 00004390 */  lbu        $v1, 0x0($v0)
    /* 6C120 8015DD20 374B050C */  jal        func_80152CDC
    /* 6C124 8015DD24 000083A0 */   sb        $v1, 0x0($a0)
    /* 6C128 8015DD28 9CDC030C */  jal        func_800F7270
    /* 6C12C 8015DD2C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C130 8015DD30 DADA030C */  jal        func_800F6B68
    /* 6C134 8015DD34 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6C138 8015DD38 92D0030C */  jal        func_800F4248
    /* 6C13C 8015DD3C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6C140 8015DD40 48D0030C */  jal        func_800F4120
    /* 6C144 8015DD44 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C148 8015DD48 07004014 */  bnez       $v0, .L8015DD68
    /* 6C14C 8015DD4C 00000000 */   nop
    /* 6C150 8015DD50 DADA030C */  jal        func_800F6B68
    /* 6C154 8015DD54 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6C158 8015DD58 92D0030C */  jal        func_800F4248
    /* 6C15C 8015DD5C 30000424 */   addiu     $a0, $zero, 0x30
    /* 6C160 8015DD60 3AD0030C */  jal        func_800F40E8
    /* 6C164 8015DD64 00000000 */   nop
  .L8015DD68:
    /* 6C168 8015DD68 F5D4030C */  jal        func_800F53D4
    /* 6C16C 8015DD6C 00000000 */   nop
    /* 6C170 8015DD70 8D004010 */  beqz       $v0, .L8015DFA8
    /* 6C174 8015DD74 00000000 */   nop
    /* 6C178 8015DD78 DADA030C */  jal        func_800F6B68
    /* 6C17C 8015DD7C 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6C180 8015DD80 92D0030C */  jal        func_800F4248
    /* 6C184 8015DD84 40000424 */   addiu     $a0, $zero, 0x40
    /* 6C188 8015DD88 48D0030C */  jal        func_800F4120
    /* 6C18C 8015DD8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C190 8015DD90 85004010 */  beqz       $v0, .L8015DFA8
    /* 6C194 8015DD94 00000000 */   nop
    /* 6C198 8015DD98 DADA030C */  jal        func_800F6B68
    /* 6C19C 8015DD9C 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6C1A0 8015DDA0 92D0030C */  jal        func_800F4248
    /* 6C1A4 8015DDA4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6C1A8 8015DDA8 48D0030C */  jal        func_800F4120
    /* 6C1AC 8015DDAC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C1B0 8015DDB0 1F004014 */  bnez       $v0, .L8015DE30
    /* 6C1B4 8015DDB4 00000000 */   nop
    /* 6C1B8 8015DDB8 DADA030C */  jal        func_800F6B68
    /* 6C1BC 8015DDBC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6C1C0 8015DDC0 92D0030C */  jal        func_800F4248
    /* 6C1C4 8015DDC4 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 6C1C8 8015DDC8 DAE1030C */  jal        func_800F8768
    /* 6C1CC 8015DDCC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6C1D0 8015DDD0 DADA030C */  jal        func_800F6B68
    /* 6C1D4 8015DDD4 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6C1D8 8015DDD8 92D0030C */  jal        func_800F4248
    /* 6C1DC 8015DDDC 04000424 */   addiu     $a0, $zero, 0x4
    /* 6C1E0 8015DDE0 48D0030C */  jal        func_800F4120
    /* 6C1E4 8015DDE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C1E8 8015DDE8 05004014 */  bnez       $v0, .L8015DE00
    /* 6C1EC 8015DDEC 00000000 */   nop
    /* 6C1F0 8015DDF0 1979050C */  jal        func_8015E464
    /* 6C1F4 8015DDF4 00000000 */   nop
    /* 6C1F8 8015DDF8 D2770508 */  j          .L8015DF48
    /* 6C1FC 8015DDFC 00000000 */   nop
  .L8015DE00:
    /* 6C200 8015DE00 DADA030C */  jal        func_800F6B68
    /* 6C204 8015DE04 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6C208 8015DE08 92D0030C */  jal        func_800F4248
    /* 6C20C 8015DE0C 08000424 */   addiu     $a0, $zero, 0x8
    /* 6C210 8015DE10 48D0030C */  jal        func_800F4120
    /* 6C214 8015DE14 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C218 8015DE18 05004014 */  bnez       $v0, .L8015DE30
    /* 6C21C 8015DE1C 00000000 */   nop
    /* 6C220 8015DE20 F877050C */  jal        func_8015DFE0
    /* 6C224 8015DE24 00000000 */   nop
    /* 6C228 8015DE28 D2770508 */  j          .L8015DF48
    /* 6C22C 8015DE2C 00000000 */   nop
  .L8015DE30:
    /* 6C230 8015DE30 DADA030C */  jal        func_800F6B68
    /* 6C234 8015DE34 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6C238 8015DE38 92D0030C */  jal        func_800F4248
    /* 6C23C 8015DE3C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6C240 8015DE40 48D0030C */  jal        func_800F4120
    /* 6C244 8015DE44 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C248 8015DE48 57004014 */  bnez       $v0, .L8015DFA8
    /* 6C24C 8015DE4C 00000000 */   nop
    /* 6C250 8015DE50 DADA030C */  jal        func_800F6B68
    /* 6C254 8015DE54 00200424 */   addiu     $a0, $zero, 0x2000
    /* 6C258 8015DE58 92D0030C */  jal        func_800F4248
    /* 6C25C 8015DE5C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6C260 8015DE60 5DD5030C */  jal        func_800F5574
    /* 6C264 8015DE64 05000424 */   addiu     $a0, $zero, 0x5
    /* 6C268 8015DE68 F5D4030C */  jal        func_800F53D4
    /* 6C26C 8015DE6C 00000000 */   nop
    /* 6C270 8015DE70 4D004010 */  beqz       $v0, .L8015DFA8
    /* 6C274 8015DE74 00000000 */   nop
    /* 6C278 8015DE78 59D9030C */  jal        func_800F6564
    /* 6C27C 8015DE7C 82350424 */   addiu     $a0, $zero, 0x3582
    /* 6C280 8015DE80 0DD9030C */  jal        func_800F6434
    /* 6C284 8015DE84 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C288 8015DE88 47004014 */  bnez       $v0, .L8015DFA8
    /* 6C28C 8015DE8C 00000000 */   nop
    /* 6C290 8015DE90 53D9030C */  jal        func_800F654C
    /* 6C294 8015DE94 03000424 */   addiu     $a0, $zero, 0x3
    /* 6C298 8015DE98 434C050C */  jal        func_8015310C
    /* 6C29C 8015DE9C 00000000 */   nop
    /* 6C2A0 8015DEA0 84DC030C */  jal        func_800F7210
    /* 6C2A4 8015DEA4 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6C2A8 8015DEA8 DADA030C */  jal        func_800F6B68
    /* 6C2AC 8015DEAC 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6C2B0 8015DEB0 92D0030C */  jal        func_800F4248
    /* 6C2B4 8015DEB4 08000424 */   addiu     $a0, $zero, 0x8
    /* 6C2B8 8015DEB8 48D0030C */  jal        func_800F4120
    /* 6C2BC 8015DEBC 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C2C0 8015DEC0 39004014 */  bnez       $v0, .L8015DFA8
    /* 6C2C4 8015DEC4 00000000 */   nop
    /* 6C2C8 8015DEC8 9CDC030C */  jal        func_800F7270
    /* 6C2CC 8015DECC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C2D0 8015DED0 DADA030C */  jal        func_800F6B68
    /* 6C2D4 8015DED4 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6C2D8 8015DED8 0DD9030C */  jal        func_800F6434
    /* 6C2DC 8015DEDC 80800434 */   ori       $a0, $zero, 0x8080
    /* 6C2E0 8015DEE0 0D004014 */  bnez       $v0, .L8015DF18
    /* 6C2E4 8015DEE4 00000000 */   nop
    /* 6C2E8 8015DEE8 D679050C */  jal        func_8015E758
    /* 6C2EC 8015DEEC 00000000 */   nop
    /* 6C2F0 8015DEF0 33D7030C */  jal        func_800F5CCC
    /* 6C2F4 8015DEF4 00000000 */   nop
    /* 6C2F8 8015DEF8 E3D6030C */  jal        func_800F5B8C
    /* 6C2FC 8015DEFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C300 8015DF00 29004014 */  bnez       $v0, .L8015DFA8
    /* 6C304 8015DF04 00000000 */   nop
    /* 6C308 8015DF08 A979050C */  jal        func_8015E6A4
    /* 6C30C 8015DF0C 00000000 */   nop
    /* 6C310 8015DF10 D8770508 */  j          .L8015DF60
    /* 6C314 8015DF14 00000000 */   nop
  .L8015DF18:
    /* 6C318 8015DF18 D679050C */  jal        func_8015E758
    /* 6C31C 8015DF1C 00000000 */   nop
    /* 6C320 8015DF20 33D7030C */  jal        func_800F5CCC
    /* 6C324 8015DF24 00000000 */   nop
    /* 6C328 8015DF28 E3D6030C */  jal        func_800F5B8C
    /* 6C32C 8015DF2C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C330 8015DF30 1D004014 */  bnez       $v0, .L8015DFA8
    /* 6C334 8015DF34 00000000 */   nop
    /* 6C338 8015DF38 9B79050C */  jal        func_8015E66C
    /* 6C33C 8015DF3C 00000000 */   nop
    /* 6C340 8015DF40 D8770508 */  j          .L8015DF60
    /* 6C344 8015DF44 00000000 */   nop
  .L8015DF48:
    /* 6C348 8015DF48 EEE3030C */  jal        func_800F8FB8
    /* 6C34C 8015DF4C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6C350 8015DF50 8CD9030C */  jal        func_800F6630
    /* 6C354 8015DF54 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6C358 8015DF58 DD68050C */  jal        func_8015A374
    /* 6C35C 8015DF5C 00000000 */   nop
  .L8015DF60:
    /* 6C360 8015DF60 53D9030C */  jal        func_800F654C
    /* 6C364 8015DF64 03000424 */   addiu     $a0, $zero, 0x3
    /* 6C368 8015DF68 DD4C050C */  jal        func_80153374
    /* 6C36C 8015DF6C 00000000 */   nop
    /* 6C370 8015DF70 53D9030C */  jal        func_800F654C
    /* 6C374 8015DF74 08000424 */   addiu     $a0, $zero, 0x8
    /* 6C378 8015DF78 DAE1030C */  jal        func_800F8768
    /* 6C37C 8015DF7C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6C380 8015DF80 9CDC030C */  jal        func_800F7270
    /* 6C384 8015DF84 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6C388 8015DF88 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 6C38C 8015DF8C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 6C390 8015DF90 00000000 */  nop
    /* 6C394 8015DF94 00004494 */  lhu        $a0, 0x0($v0)
    /* 6C398 8015DF98 C1CE030C */  jal        func_800F3B04
    /* 6C39C 8015DF9C 60358424 */   addiu     $a0, $a0, 0x3560
    /* 6C3A0 8015DFA0 12D8030C */  jal        func_800F6048
    /* 6C3A4 8015DFA4 21204000 */   addu      $a0, $v0, $zero
  .L8015DFA8:
    /* 6C3A8 8015DFA8 AFD8030C */  jal        func_800F62BC
    /* 6C3AC 8015DFAC 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6C3B0 8015DFB0 8CD9030C */  jal        func_800F6630
    /* 6C3B4 8015DFB4 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6C3B8 8015DFB8 5DD5030C */  jal        func_800F5574
    /* 6C3BC 8015DFBC 05000424 */   addiu     $a0, $zero, 0x5
    /* 6C3C0 8015DFC0 F5D4030C */  jal        func_800F53D4
    /* 6C3C4 8015DFC4 00000000 */   nop
    /* 6C3C8 8015DFC8 42FF4010 */  beqz       $v0, .L8015DCD4
    /* 6C3CC 8015DFCC 00000000 */   nop
    /* 6C3D0 8015DFD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6C3D4 8015DFD4 00000000 */  nop
    /* 6C3D8 8015DFD8 0800E003 */  jr         $ra
    /* 6C3DC 8015DFDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015DCA4
