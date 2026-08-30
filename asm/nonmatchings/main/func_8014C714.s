nonmatching func_8014C714, 0x108

glabel func_8014C714
    /* 5AB14 8014C714 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AB18 8014C718 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AB1C 8014C71C 59D9030C */  jal        func_800F6564
    /* 5AB20 8014C720 87F40434 */   ori       $a0, $zero, 0xF487
    /* 5AB24 8014C724 0DD9030C */  jal        func_800F6434
    /* 5AB28 8014C728 02020424 */   addiu     $a0, $zero, 0x202
    /* 5AB2C 8014C72C 37004010 */  beqz       $v0, .L8014C80C
    /* 5AB30 8014C730 00000000 */   nop
    /* 5AB34 8014C734 DDE3030C */  jal        func_800F8F74
    /* 5AB38 8014C738 87F40434 */   ori       $a0, $zero, 0xF487
    /* 5AB3C 8014C73C 59D9030C */  jal        func_800F6564
    /* 5AB40 8014C740 02180424 */   addiu     $a0, $zero, 0x1802
    /* 5AB44 8014C744 92D0030C */  jal        func_800F4248
    /* 5AB48 8014C748 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 5AB4C 8014C74C 0D00043C */  lui        $a0, (0xDFFED >> 16)
    /* 5AB50 8014C750 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5AB54 8014C754 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5AB58 8014C758 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5AB5C 8014C75C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5AB60 8014C760 00004394 */  lhu        $v1, 0x0($v0)
    /* 5AB64 8014C764 EDFF8434 */  ori        $a0, $a0, (0xDFFED & 0xFFFF)
    /* 5AB68 8014C768 1ADB030C */  jal        func_800F6C68
    /* 5AB6C 8014C76C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5AB70 8014C770 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5AB74 8014C774 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5AB78 8014C778 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5AB7C 8014C77C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5AB80 8014C780 00006294 */  lhu        $v0, 0x0($v1)
    /* 5AB84 8014C784 00000000 */  nop
    /* 5AB88 8014C788 000082A4 */  sh         $v0, 0x0($a0)
  .L8014C78C:
    /* 5AB8C 8014C78C 67C9010C */  jal        func_8007259C
    /* 5AB90 8014C790 00000000 */   nop
    /* 5AB94 8014C794 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5AB98 8014C798 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5AB9C 8014C79C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5ABA0 8014C7A0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5ABA4 8014C7A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 5ABA8 8014C7A8 02000424 */  addiu      $a0, $zero, 0x2
    /* 5ABAC 8014C7AC 93E0030C */  jal        func_800F824C
    /* 5ABB0 8014C7B0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5ABB4 8014C7B4 0732050C */  jal        func_8014C81C
    /* 5ABB8 8014C7B8 00000000 */   nop
    /* 5ABBC 8014C7BC 92D7030C */  jal        func_800F5E48
    /* 5ABC0 8014C7C0 00000000 */   nop
    /* 5ABC4 8014C7C4 19D7030C */  jal        func_800F5C64
    /* 5ABC8 8014C7C8 02020424 */   addiu     $a0, $zero, 0x202
    /* 5ABCC 8014C7CC EFFF4014 */  bnez       $v0, .L8014C78C
    /* 5ABD0 8014C7D0 00000000 */   nop
    /* 5ABD4 8014C7D4 77DC030C */  jal        func_800F71DC
    /* 5ABD8 8014C7D8 21200000 */   addu      $a0, $zero, $zero
  .L8014C7DC:
    /* 5ABDC 8014C7DC DADA030C */  jal        func_800F6B68
    /* 5ABE0 8014C7E0 C4F30434 */   ori       $a0, $zero, 0xF3C4
    /* 5ABE4 8014C7E4 DAE1030C */  jal        func_800F8768
    /* 5ABE8 8014C7E8 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5ABEC 8014C7EC D9D8030C */  jal        func_800F6364
    /* 5ABF0 8014C7F0 00000000 */   nop
    /* 5ABF4 8014C7F4 56D6030C */  jal        func_800F5958
    /* 5ABF8 8014C7F8 40000424 */   addiu     $a0, $zero, 0x40
    /* 5ABFC 8014C7FC F5D4030C */  jal        func_800F53D4
    /* 5AC00 8014C800 00000000 */   nop
    /* 5AC04 8014C804 F5FF4010 */  beqz       $v0, .L8014C7DC
    /* 5AC08 8014C808 00000000 */   nop
  .L8014C80C:
    /* 5AC0C 8014C80C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AC10 8014C810 00000000 */  nop
    /* 5AC14 8014C814 0800E003 */  jr         $ra
    /* 5AC18 8014C818 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C714
