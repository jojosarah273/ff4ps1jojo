nonmatching func_8018E00C, 0xBC

glabel func_8018E00C
    /* 9C40C 8018E00C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9C410 8018E010 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9C414 8018E014 B238060C */  jal        func_8018E2C8
    /* 9C418 8018E018 21200000 */   addu      $a0, $zero, $zero
    /* 9C41C 8018E01C 1F80043C */  lui        $a0, %hi(D_801F67B4)
    /* 9C420 8018E020 B467848C */  lw         $a0, %lo(D_801F67B4)($a0)
    /* 9C424 8018E024 43000224 */  addiu      $v0, $zero, 0x43
    /* 9C428 8018E028 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9C42C 8018E02C 1239060C */  jal        func_8018E448
    /* 9C430 8018E030 84B522AC */   sw        $v0, %lo(D_8019B584)($at)
    /* 9C434 8018E034 1F80043C */  lui        $a0, %hi(D_801F67B0)
    /* 9C438 8018E038 B067848C */  lw         $a0, %lo(D_801F67B0)($a0)
    /* 9C43C 8018E03C 2E39060C */  jal        func_8018E4B8
    /* 9C440 8018E040 00000000 */   nop
    /* 9C444 8018E044 1F80023C */  lui        $v0, %hi(D_801F67D4)
    /* 9C448 8018E048 D467428C */  lw         $v0, %lo(D_801F67D4)($v0)
    /* 9C44C 8018E04C 00000000 */  nop
    /* 9C450 8018E050 03004010 */  beqz       $v0, .L8018E060
    /* 9C454 8018E054 00000000 */   nop
    /* 9C458 8018E058 FA2A060C */  jal        func_8018ABE8
    /* 9C45C 8018E05C 01000424 */   addiu     $a0, $zero, 0x1
  .L8018E060:
    /* 9C460 8018E060 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9C464 8018E064 AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9C468 8018E068 00000000 */  nop
    /* 9C46C 8018E06C 0C004010 */  beqz       $v0, .L8018E0A0
    /* 9C470 8018E070 10000224 */   addiu     $v0, $zero, 0x10
    /* 9C474 8018E074 1A80043C */  lui        $a0, %hi(D_8019B5A0)
    /* 9C478 8018E078 A0B5848C */  lw         $a0, %lo(D_8019B5A0)($a0)
    /* 9C47C 8018E07C 00000000 */  nop
    /* 9C480 8018E080 07008010 */  beqz       $a0, .L8018E0A0
    /* 9C484 8018E084 00000000 */   nop
    /* 9C488 8018E088 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9C48C 8018E08C AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9C490 8018E090 00000000 */  nop
    /* 9C494 8018E094 09F84000 */  jalr       $v0
    /* 9C498 8018E098 08000524 */   addiu     $a1, $zero, 0x8
    /* 9C49C 8018E09C 10000224 */  addiu      $v0, $zero, 0x10
  .L8018E0A0:
    /* 9C4A0 8018E0A0 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9C4A4 8018E0A4 A0B520AC */  sw         $zero, %lo(D_8019B5A0)($at)
    /* 9C4A8 8018E0A8 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9C4AC 8018E0AC A4B520AC */  sw         $zero, %lo(D_8019B5A4)($at)
    /* 9C4B0 8018E0B0 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9C4B4 8018E0B4 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9C4B8 8018E0B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9C4BC 8018E0BC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9C4C0 8018E0C0 0800E003 */  jr         $ra
    /* 9C4C4 8018E0C4 00000000 */   nop
endlabel func_8018E00C
