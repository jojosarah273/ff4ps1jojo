nonmatching func_8018C3E8, 0x4C

glabel func_8018C3E8
    /* 9A7E8 8018C3E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9A7EC 8018C3EC 0A008010 */  beqz       $a0, .L8018C418
    /* 9A7F0 8018C3F0 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9A7F4 8018C3F4 1A80043C */  lui        $a0, %hi(D_8019B0B0)
    /* 9A7F8 8018C3F8 B0B0848C */  lw         $a0, %lo(D_8019B0B0)($a0)
    /* 9A7FC 8018C3FC 6A2E060C */  jal        func_8018B9A8
    /* 9A800 8018C400 00000000 */   nop
    /* 9A804 8018C404 04004014 */  bnez       $v0, .L8018C418
    /* 9A808 8018C408 01000224 */   addiu     $v0, $zero, 0x1
    /* 9A80C 8018C40C 1A80013C */  lui        $at, %hi(D_8019B0AC)
    /* 9A810 8018C410 09310608 */  j          .L8018C424
    /* 9A814 8018C414 ACB022AC */   sw        $v0, %lo(D_8019B0AC)($at)
  .L8018C418:
    /* 9A818 8018C418 1A80013C */  lui        $at, %hi(D_8019B0AC)
    /* 9A81C 8018C41C ACB020AC */  sw         $zero, %lo(D_8019B0AC)($at)
    /* 9A820 8018C420 21100000 */  addu       $v0, $zero, $zero
  .L8018C424:
    /* 9A824 8018C424 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9A828 8018C428 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9A82C 8018C42C 0800E003 */  jr         $ra
    /* 9A830 8018C430 00000000 */   nop
endlabel func_8018C3E8
    /* 9A834 8018C434 00000000 */  nop
