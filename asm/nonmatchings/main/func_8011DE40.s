nonmatching func_8011DE40, 0x1A4

glabel func_8011DE40
    /* 2C240 8011DE40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C244 8011DE44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C248 8011DE48 8CD9030C */  jal        func_800F6630
    /* 2C24C 8011DE4C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2C250 8011DE50 92D0030C */  jal        func_800F4248
    /* 2C254 8011DE54 01000424 */   addiu     $a0, $zero, 0x1
    /* 2C258 8011DE58 48D0030C */  jal        func_800F4120
    /* 2C25C 8011DE5C 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C260 8011DE60 59D9030C */  jal        func_800F6564
    /* 2C264 8011DE64 FA060424 */   addiu     $a0, $zero, 0x6FA
    /* 2C268 8011DE68 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2C26C 8011DE6C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2C270 8011DE70 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2C274 8011DE74 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2C278 8011DE78 00004394 */  lhu        $v1, 0x0($v0)
    /* 2C27C 8011DE7C AB000424 */  addiu      $a0, $zero, 0xAB
    /* 2C280 8011DE80 8CD9030C */  jal        func_800F6630
    /* 2C284 8011DE84 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2C288 8011DE88 92D0030C */  jal        func_800F4248
    /* 2C28C 8011DE8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 2C290 8011DE90 48D0030C */  jal        func_800F4120
    /* 2C294 8011DE94 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C298 8011DE98 09004014 */  bnez       $v0, .L8011DEC0
    /* 2C29C 8011DE9C 00000000 */   nop
    /* 2C2A0 8011DEA0 59D9030C */  jal        func_800F6564
    /* 2C2A4 8011DEA4 0A070424 */   addiu     $a0, $zero, 0x70A
    /* 2C2A8 8011DEA8 20D5030C */  jal        func_800F5480
    /* 2C2AC 8011DEAC 00000000 */   nop
    /* 2C2B0 8011DEB0 16E0030C */  jal        func_800F8058
    /* 2C2B4 8011DEB4 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2C2B8 8011DEB8 B7770408 */  j          .L8011DEDC
    /* 2C2BC 8011DEBC 1A80043C */   lui       $a0, %hi(D_80199300)
  .L8011DEC0:
    /* 2C2C0 8011DEC0 59D9030C */  jal        func_800F6564
    /* 2C2C4 8011DEC4 0A070424 */   addiu     $a0, $zero, 0x70A
    /* 2C2C8 8011DEC8 04D5030C */  jal        func_800F5410
    /* 2C2CC 8011DECC 00000000 */   nop
    /* 2C2D0 8011DED0 02D0030C */  jal        func_800F4008
    /* 2C2D4 8011DED4 20000424 */   addiu     $a0, $zero, 0x20
    /* 2C2D8 8011DED8 1A80043C */  lui        $a0, %hi(D_80199300)
  .L8011DEDC:
    /* 2C2DC 8011DEDC 00938424 */  addiu      $a0, $a0, %lo(D_80199300)
    /* 2C2E0 8011DEE0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 2C2E4 8011DEE4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 2C2E8 8011DEE8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2C2EC 8011DEEC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2C2F0 8011DEF0 00004394 */  lhu        $v1, 0x0($v0)
    /* 2C2F4 8011DEF4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 2C2F8 8011DEF8 21186400 */  addu       $v1, $v1, $a0
    /* 2C2FC 8011DEFC 00006490 */  lbu        $a0, 0x0($v1)
    /* 2C300 8011DF00 00000000 */  nop
    /* 2C304 8011DF04 24104400 */  and        $v0, $v0, $a0
    /* 2C308 8011DF08 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 2C30C 8011DF0C 93E0030C */  jal        func_800F824C
    /* 2C310 8011DF10 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C314 8011DF14 93E0030C */  jal        func_800F824C
    /* 2C318 8011DF18 93000424 */   addiu     $a0, $zero, 0x93
    /* 2C31C 8011DF1C EEE3030C */  jal        func_800F8FB8
    /* 2C320 8011DF20 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C324 8011DF24 EEE3030C */  jal        func_800F8FB8
    /* 2C328 8011DF28 44000424 */   addiu     $a0, $zero, 0x44
    /* 2C32C 8011DF2C 8CD9030C */  jal        func_800F6630
    /* 2C330 8011DF30 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C334 8011DF34 92D0030C */  jal        func_800F4248
    /* 2C338 8011DF38 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2C33C 8011DF3C 93E0030C */  jal        func_800F824C
    /* 2C340 8011DF40 41000424 */   addiu     $a0, $zero, 0x41
    /* 2C344 8011DF44 EEE3030C */  jal        func_800F8FB8
    /* 2C348 8011DF48 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C34C 8011DF4C 0FCF030C */  jal        func_800F3C3C
    /* 2C350 8011DF50 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C354 8011DF54 CAD3030C */  jal        func_800F4F28
    /* 2C358 8011DF58 21204000 */   addu      $a0, $v0, $zero
    /* 2C35C 8011DF5C D3D3030C */  jal        func_800F4F4C
    /* 2C360 8011DF60 00000000 */   nop
    /* 2C364 8011DF64 0FCF030C */  jal        func_800F3C3C
    /* 2C368 8011DF68 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C36C 8011DF6C 90DE030C */  jal        func_800F7A40
    /* 2C370 8011DF70 21204000 */   addu      $a0, $v0, $zero
    /* 2C374 8011DF74 59D9030C */  jal        func_800F6564
    /* 2C378 8011DF78 00170424 */   addiu     $a0, $zero, 0x1700
    /* 2C37C 8011DF7C 0DD9030C */  jal        func_800F6434
    /* 2C380 8011DF80 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C384 8011DF84 07004014 */  bnez       $v0, .L8011DFA4
    /* 2C388 8011DF88 00000000 */   nop
    /* 2C38C 8011DF8C F977040C */  jal        func_8011DFE4
    /* 2C390 8011DF90 00000000 */   nop
    /* 2C394 8011DF94 0FD6050C */  jal        func_8017583C
    /* 2C398 8011DF98 00000000 */   nop
    /* 2C39C 8011DF9C F5770408 */  j          .L8011DFD4
    /* 2C3A0 8011DFA0 00000000 */   nop
  .L8011DFA4:
    /* 2C3A4 8011DFA4 5DD5030C */  jal        func_800F5574
    /* 2C3A8 8011DFA8 01000424 */   addiu     $a0, $zero, 0x1
    /* 2C3AC 8011DFAC F5D4030C */  jal        func_800F53D4
    /* 2C3B0 8011DFB0 00000000 */   nop
    /* 2C3B4 8011DFB4 05004010 */  beqz       $v0, .L8011DFCC
    /* 2C3B8 8011DFB8 00000000 */   nop
    /* 2C3BC 8011DFBC 5B78040C */  jal        func_8011E16C
    /* 2C3C0 8011DFC0 00000000 */   nop
    /* 2C3C4 8011DFC4 F5770408 */  j          .L8011DFD4
    /* 2C3C8 8011DFC8 00000000 */   nop
  .L8011DFCC:
    /* 2C3CC 8011DFCC C678040C */  jal        func_8011E318
    /* 2C3D0 8011DFD0 00000000 */   nop
  .L8011DFD4:
    /* 2C3D4 8011DFD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2C3D8 8011DFD8 00000000 */  nop
    /* 2C3DC 8011DFDC 0800E003 */  jr         $ra
    /* 2C3E0 8011DFE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011DE40
