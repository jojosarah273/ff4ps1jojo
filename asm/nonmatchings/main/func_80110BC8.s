nonmatching func_80110BC8, 0x134

glabel func_80110BC8
    /* 1EFC8 80110BC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1EFCC 80110BCC 7A000424 */  addiu      $a0, $zero, 0x7A
    /* 1EFD0 80110BD0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 1EFD4 80110BD4 8CD9030C */  jal        func_800F6630
    /* 1EFD8 80110BD8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 1EFDC 80110BDC 92D0030C */  jal        func_800F4248
    /* 1EFE0 80110BE0 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 1EFE4 80110BE4 20000424 */  addiu      $a0, $zero, 0x20
    /* 1EFE8 80110BE8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1EFEC 80110BEC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1EFF0 80110BF0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 1EFF4 80110BF4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 1EFF8 80110BF8 00004394 */  lhu        $v1, 0x0($v0)
    /* 1EFFC 80110BFC 1A80103C */  lui        $s0, %hi(D_80198C1C)
    /* 1F000 80110C00 91E5030C */  jal        func_800F9644
    /* 1F004 80110C04 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1F008 80110C08 77DC030C */  jal        func_800F71DC
    /* 1F00C 80110C0C 21200000 */   addu      $a0, $zero, $zero
  .L80110C10:
    /* 1F010 80110C10 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 1F014 80110C14 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 1F018 80110C18 1C8C0626 */  addiu      $a2, $s0, %lo(D_80198C1C)
    /* 1F01C 80110C1C 00004394 */  lhu        $v1, 0x0($v0)
    /* 1F020 80110C20 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 1F024 80110C24 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 1F028 80110C28 21186600 */  addu       $v1, $v1, $a2
    /* 1F02C 80110C2C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1F030 80110C30 00000000 */  nop
    /* 1F034 80110C34 000082A0 */  sb         $v0, 0x0($a0)
    /* 1F038 80110C38 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1F03C 80110C3C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1F040 80110C40 00000000 */  nop
    /* 1F044 80110C44 00006294 */  lhu        $v0, 0x0($v1)
    /* 1F048 80110C48 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1F04C 80110C4C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1F050 80110C50 21104600 */  addu       $v0, $v0, $a2
    /* 1F054 80110C54 01004390 */  lbu        $v1, 0x1($v0)
    /* 1F058 80110C58 BB0E0424 */  addiu      $a0, $zero, 0xEBB
    /* 1F05C 80110C5C F7E1030C */  jal        func_800F87DC
    /* 1F060 80110C60 0100A3A0 */   sb        $v1, 0x1($a1)
    /* 1F064 80110C64 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1F068 80110C68 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1F06C 80110C6C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1F070 80110C70 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1F074 80110C74 00006294 */  lhu        $v0, 0x0($v1)
    /* 1F078 80110C78 85D8030C */  jal        func_800F6214
    /* 1F07C 80110C7C 000082A4 */   sh        $v0, 0x0($a0)
    /* 1F080 80110C80 85D8030C */  jal        func_800F6214
    /* 1F084 80110C84 00000000 */   nop
    /* 1F088 80110C88 99D0030C */  jal        func_800F4264
    /* 1F08C 80110C8C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 1F090 80110C90 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1F094 80110C94 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1F098 80110C98 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 1F09C 80110C9C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 1F0A0 80110CA0 00006294 */  lhu        $v0, 0x0($v1)
    /* 1F0A4 80110CA4 00000000 */  nop
    /* 1F0A8 80110CA8 000082A4 */  sh         $v0, 0x0($a0)
    /* 1F0AC 80110CAC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1F0B0 80110CB0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1F0B4 80110CB4 00000000 */  nop
    /* 1F0B8 80110CB8 00006294 */  lhu        $v0, 0x0($v1)
    /* 1F0BC 80110CBC 10000424 */  addiu      $a0, $zero, 0x10
    /* 1F0C0 80110CC0 02004224 */  addiu      $v0, $v0, 0x2
    /* 1F0C4 80110CC4 56D6030C */  jal        func_800F5958
    /* 1F0C8 80110CC8 000062A4 */   sh        $v0, 0x0($v1)
    /* 1F0CC 80110CCC F5D4030C */  jal        func_800F53D4
    /* 1F0D0 80110CD0 00000000 */   nop
    /* 1F0D4 80110CD4 CEFF4010 */  beqz       $v0, .L80110C10
    /* 1F0D8 80110CD8 00000000 */   nop
    /* 1F0DC 80110CDC 56D9030C */  jal        func_800F6558
    /* 1F0E0 80110CE0 21200000 */   addu      $a0, $zero, $zero
    /* 1F0E4 80110CE4 98E5030C */  jal        func_800F9660
    /* 1F0E8 80110CE8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1F0EC 80110CEC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 1F0F0 80110CF0 1000B08F */  lw         $s0, 0x10($sp)
    /* 1F0F4 80110CF4 0800E003 */  jr         $ra
    /* 1F0F8 80110CF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110BC8
