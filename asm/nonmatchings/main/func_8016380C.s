nonmatching func_8016380C, 0x144

glabel func_8016380C
    /* 71C0C 8016380C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71C10 80163810 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71C14 80163814 53D9030C */  jal        func_800F654C
    /* 71C18 80163818 12000424 */   addiu     $a0, $zero, 0x12
    /* 71C1C 8016381C 62E0030C */  jal        func_800F8188
    /* 71C20 80163820 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 71C24 80163824 53D9030C */  jal        func_800F654C
    /* 71C28 80163828 10000424 */   addiu     $a0, $zero, 0x10
    /* 71C2C 8016382C 62E0030C */  jal        func_800F8188
    /* 71C30 80163830 C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 71C34 80163834 9CDC030C */  jal        func_800F7270
    /* 71C38 80163838 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 71C3C 8016383C DADA030C */  jal        func_800F6B68
    /* 71C40 80163840 2F200424 */   addiu     $a0, $zero, 0x202F
    /* 71C44 80163844 19DE030C */  jal        func_800F7864
    /* 71C48 80163848 00000000 */   nop
    /* 71C4C 8016384C BADD030C */  jal        func_800F76E8
    /* 71C50 80163850 00000000 */   nop
    /* 71C54 80163854 93E0030C */  jal        func_800F824C
    /* 71C58 80163858 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 71C5C 8016385C 77DC030C */  jal        func_800F71DC
    /* 71C60 80163860 05000424 */   addiu     $a0, $zero, 0x5
    /* 71C64 80163864 5BE3030C */  jal        func_800F8D6C
    /* 71C68 80163868 AB000424 */   addiu     $a0, $zero, 0xAB
  .L8016386C:
    /* 71C6C 8016386C 9CDC030C */  jal        func_800F7270
    /* 71C70 80163870 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 71C74 80163874 DADA030C */  jal        func_800F6B68
    /* 71C78 80163878 40350424 */   addiu     $a0, $zero, 0x3540
    /* 71C7C 8016387C 0DD9030C */  jal        func_800F6434
    /* 71C80 80163880 02020424 */   addiu     $a0, $zero, 0x202
    /* 71C84 80163884 1E004014 */  bnez       $v0, .L80163900
    /* 71C88 80163888 00000000 */   nop
    /* 71C8C 8016388C 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 71C90 80163890 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 71C94 80163894 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 71C98 80163898 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 71C9C 8016389C 00004390 */  lbu        $v1, 0x0($v0)
    /* 71CA0 801638A0 374B050C */  jal        func_80152CDC
    /* 71CA4 801638A4 000083A0 */   sb        $v1, 0x0($a0)
    /* 71CA8 801638A8 9CDC030C */  jal        func_800F7270
    /* 71CAC 801638AC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 71CB0 801638B0 20D5030C */  jal        func_800F5480
    /* 71CB4 801638B4 00000000 */   nop
    /* 71CB8 801638B8 DADA030C */  jal        func_800F6B68
    /* 71CBC 801638BC 2F200424 */   addiu     $a0, $zero, 0x202F
    /* 71CC0 801638C0 0FCF030C */  jal        func_800F3C3C
    /* 71CC4 801638C4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 71CC8 801638C8 D2DF030C */  jal        func_800F7F48
    /* 71CCC 801638CC 21204000 */   addu      $a0, $v0, $zero
    /* 71CD0 801638D0 F5D4030C */  jal        func_800F53D4
    /* 71CD4 801638D4 00000000 */   nop
    /* 71CD8 801638D8 05004014 */  bnez       $v0, .L801638F0
    /* 71CDC 801638DC 00000000 */   nop
    /* 71CE0 801638E0 F0D4030C */  jal        func_800F53C0
    /* 71CE4 801638E4 00000000 */   nop
    /* 71CE8 801638E8 03004014 */  bnez       $v0, .L801638F8
    /* 71CEC 801638EC 00000000 */   nop
  .L801638F0:
    /* 71CF0 801638F0 53D9030C */  jal        func_800F654C
    /* 71CF4 801638F4 01000424 */   addiu     $a0, $zero, 0x1
  .L801638F8:
    /* 71CF8 801638F8 DAE1030C */  jal        func_800F8768
    /* 71CFC 801638FC 2F200424 */   addiu     $a0, $zero, 0x202F
  .L80163900:
    /* 71D00 80163900 AFD8030C */  jal        func_800F62BC
    /* 71D04 80163904 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 71D08 80163908 8CD9030C */  jal        func_800F6630
    /* 71D0C 8016390C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 71D10 80163910 5DD5030C */  jal        func_800F5574
    /* 71D14 80163914 0D000424 */   addiu     $a0, $zero, 0xD
    /* 71D18 80163918 F5D4030C */  jal        func_800F53D4
    /* 71D1C 8016391C 00000000 */   nop
    /* 71D20 80163920 D2FF4010 */  beqz       $v0, .L8016386C
    /* 71D24 80163924 00000000 */   nop
    /* 71D28 80163928 53D9030C */  jal        func_800F654C
    /* 71D2C 8016392C 13000424 */   addiu     $a0, $zero, 0x13
    /* 71D30 80163930 62E0030C */  jal        func_800F8188
    /* 71D34 80163934 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 71D38 80163938 A74C050C */  jal        func_8015329C
    /* 71D3C 8016393C 00000000 */   nop
    /* 71D40 80163940 1000BF8F */  lw         $ra, 0x10($sp)
    /* 71D44 80163944 00000000 */  nop
    /* 71D48 80163948 0800E003 */  jr         $ra
    /* 71D4C 8016394C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016380C
