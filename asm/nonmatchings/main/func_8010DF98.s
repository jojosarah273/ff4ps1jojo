nonmatching func_8010DF98, 0xB8

glabel func_8010DF98
    /* 1C398 8010DF98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C39C 8010DF9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C3A0 8010DFA0 77DC030C */  jal        func_800F71DC
    /* 1C3A4 8010DFA4 21200000 */   addu      $a0, $zero, $zero
  .L8010DFA8:
    /* 1C3A8 8010DFA8 DADA030C */  jal        func_800F6B68
    /* 1C3AC 8010DFAC 00100424 */   addiu     $a0, $zero, 0x1000
    /* 1C3B0 8010DFB0 92D0030C */  jal        func_800F4248
    /* 1C3B4 8010DFB4 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 1C3B8 8010DFB8 5DD5030C */  jal        func_800F5574
    /* 1C3BC 8010DFBC 0B000424 */   addiu     $a0, $zero, 0xB
    /* 1C3C0 8010DFC0 F5D4030C */  jal        func_800F53D4
    /* 1C3C4 8010DFC4 00000000 */   nop
    /* 1C3C8 8010DFC8 07004010 */  beqz       $v0, .L8010DFE8
    /* 1C3CC 8010DFCC 00000000 */   nop
    /* 1C3D0 8010DFD0 3BE4030C */  jal        func_800F90EC
    /* 1C3D4 8010DFD4 03100424 */   addiu     $a0, $zero, 0x1003
    /* 1C3D8 8010DFD8 53D9030C */  jal        func_800F654C
    /* 1C3DC 8010DFDC 01000424 */   addiu     $a0, $zero, 0x1
    /* 1C3E0 8010DFE0 00380408 */  j          .L8010E000
    /* 1C3E4 8010DFE4 00000000 */   nop
  .L8010DFE8:
    /* 1C3E8 8010DFE8 53D9030C */  jal        func_800F654C
    /* 1C3EC 8010DFEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 1C3F0 8010DFF0 DAE1030C */  jal        func_800F8768
    /* 1C3F4 8010DFF4 03100424 */   addiu     $a0, $zero, 0x1003
    /* 1C3F8 8010DFF8 53D9030C */  jal        func_800F654C
    /* 1C3FC 8010DFFC 21200000 */   addu      $a0, $zero, $zero
  .L8010E000:
    /* 1C400 8010E000 DAE1030C */  jal        func_800F8768
    /* 1C404 8010E004 07100424 */   addiu     $a0, $zero, 0x1007
    /* 1C408 8010E008 3BE4030C */  jal        func_800F90EC
    /* 1C40C 8010E00C 08100424 */   addiu     $a0, $zero, 0x1008
    /* 1C410 8010E010 3BE4030C */  jal        func_800F90EC
    /* 1C414 8010E014 04100424 */   addiu     $a0, $zero, 0x1004
    /* 1C418 8010E018 7E5F040C */  jal        func_80117DF8
    /* 1C41C 8010E01C 00000000 */   nop
    /* 1C420 8010E020 56D6030C */  jal        func_800F5958
    /* 1C424 8010E024 40010424 */   addiu     $a0, $zero, 0x140
    /* 1C428 8010E028 F5D4030C */  jal        func_800F53D4
    /* 1C42C 8010E02C 00000000 */   nop
    /* 1C430 8010E030 DDFF4010 */  beqz       $v0, .L8010DFA8
    /* 1C434 8010E034 00000000 */   nop
    /* 1C438 8010E038 977A040C */  jal        func_8011EA5C
    /* 1C43C 8010E03C 00000000 */   nop
    /* 1C440 8010E040 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C444 8010E044 00000000 */  nop
    /* 1C448 8010E048 0800E003 */  jr         $ra
    /* 1C44C 8010E04C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010DF98
