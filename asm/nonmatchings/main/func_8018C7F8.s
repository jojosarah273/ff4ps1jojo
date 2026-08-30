nonmatching func_8018C7F8, 0x5C

glabel func_8018C7F8
    /* 9ABF8 8018C7F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9ABFC 8018C7FC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9AC00 8018C800 2180A000 */  addu       $s0, $a1, $zero
    /* 9AC04 8018C804 0700023C */  lui        $v0, (0x7EFF0 >> 16)
    /* 9AC08 8018C808 F0EF4234 */  ori        $v0, $v0, (0x7EFF0 & 0xFFFF)
    /* 9AC0C 8018C80C 2B105000 */  sltu       $v0, $v0, $s0
    /* 9AC10 8018C810 03004010 */  beqz       $v0, .L8018C820
    /* 9AC14 8018C814 1400BFAF */   sw        $ra, 0x14($sp)
    /* 9AC18 8018C818 0700103C */  lui        $s0, (0x7EFF0 >> 16)
    /* 9AC1C 8018C81C F0EF1036 */  ori        $s0, $s0, (0x7EFF0 & 0xFFFF)
  .L8018C820:
    /* 9AC20 8018C820 772A060C */  jal        func_8018A9DC
    /* 9AC24 8018C824 21280002 */   addu      $a1, $s0, $zero
    /* 9AC28 8018C828 1A80023C */  lui        $v0, %hi(D_8019B14C)
    /* 9AC2C 8018C82C 4CB1428C */  lw         $v0, %lo(D_8019B14C)($v0)
    /* 9AC30 8018C830 00000000 */  nop
    /* 9AC34 8018C834 03004014 */  bnez       $v0, .L8018C844
    /* 9AC38 8018C838 21100002 */   addu      $v0, $s0, $zero
    /* 9AC3C 8018C83C 1A80013C */  lui        $at, %hi(D_8019B148)
    /* 9AC40 8018C840 48B120AC */  sw         $zero, %lo(D_8019B148)($at)
  .L8018C844:
    /* 9AC44 8018C844 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9AC48 8018C848 1000B08F */  lw         $s0, 0x10($sp)
    /* 9AC4C 8018C84C 0800E003 */  jr         $ra
    /* 9AC50 8018C850 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018C7F8
    /* 9AC54 8018C854 00000000 */  nop
