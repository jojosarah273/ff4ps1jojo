nonmatching func_8015FB70, 0x8C

glabel func_8015FB70
    /* 6DF70 8015FB70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DF74 8015FB74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DF78 8015FB78 90D8030C */  jal        func_800F6240
    /* 6DF7C 8015FB7C E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 6DF80 8015FB80 C7E5030C */  jal        func_800F971C
    /* 6DF84 8015FB84 00000000 */   nop
    /* 6DF88 8015FB88 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6DF8C 8015FB8C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6DF90 8015FB90 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6DF94 8015FB94 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6DF98 8015FB98 00004394 */  lhu        $v1, 0x0($v0)
    /* 6DF9C 8015FB9C 00000000 */  nop
    /* 6DFA0 8015FBA0 000083A4 */  sh         $v1, 0x0($a0)
  .L8015FBA4:
    /* 6DFA4 8015FBA4 DADA030C */  jal        func_800F6B68
    /* 6DFA8 8015FBA8 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 6DFAC 8015FBAC 5DD5030C */  jal        func_800F5574
    /* 6DFB0 8015FBB0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6DFB4 8015FBB4 F5D4030C */  jal        func_800F53D4
    /* 6DFB8 8015FBB8 00000000 */   nop
    /* 6DFBC 8015FBBC 05004014 */  bnez       $v0, .L8015FBD4
    /* 6DFC0 8015FBC0 00000000 */   nop
    /* 6DFC4 8015FBC4 D9D8030C */  jal        func_800F6364
    /* 6DFC8 8015FBC8 00000000 */   nop
    /* 6DFCC 8015FBCC E97E0508 */  j          .L8015FBA4
    /* 6DFD0 8015FBD0 00000000 */   nop
  .L8015FBD4:
    /* 6DFD4 8015FBD4 5BE3030C */  jal        func_800F8D6C
    /* 6DFD8 8015FBD8 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 6DFDC 8015FBDC 53D9030C */  jal        func_800F654C
    /* 6DFE0 8015FBE0 01000424 */   addiu     $a0, $zero, 0x1
    /* 6DFE4 8015FBE4 1B81050C */  jal        func_8016046C
    /* 6DFE8 8015FBE8 00000000 */   nop
    /* 6DFEC 8015FBEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DFF0 8015FBF0 00000000 */  nop
    /* 6DFF4 8015FBF4 0800E003 */  jr         $ra
    /* 6DFF8 8015FBF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FB70
