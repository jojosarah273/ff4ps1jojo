nonmatching func_801607F4, 0xD0

glabel func_801607F4
    /* 6EBF4 801607F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EBF8 801607F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EBFC 801607FC C7E5030C */  jal        func_800F971C
    /* 6EC00 80160800 00000000 */   nop
    /* 6EC04 80160804 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6EC08 80160808 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6EC0C 8016080C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6EC10 80160810 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6EC14 80160814 00004394 */  lhu        $v1, 0x0($v0)
    /* 6EC18 80160818 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6EC1C 8016081C 5BE3030C */  jal        func_800F8D6C
    /* 6EC20 80160820 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80160824:
    /* 6EC24 80160824 DADA030C */  jal        func_800F6B68
    /* 6EC28 80160828 00200424 */   addiu     $a0, $zero, 0x2000
    /* 6EC2C 8016082C 92D0030C */  jal        func_800F4248
    /* 6EC30 80160830 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6EC34 80160834 5DD5030C */  jal        func_800F5574
    /* 6EC38 80160838 11000424 */   addiu     $a0, $zero, 0x11
    /* 6EC3C 8016083C F5D4030C */  jal        func_800F53D4
    /* 6EC40 80160840 00000000 */   nop
    /* 6EC44 80160844 07004014 */  bnez       $v0, .L80160864
    /* 6EC48 80160848 00000000 */   nop
    /* 6EC4C 8016084C C34C050C */  jal        func_8015330C
    /* 6EC50 80160850 00000000 */   nop
    /* 6EC54 80160854 AFD8030C */  jal        func_800F62BC
    /* 6EC58 80160858 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6EC5C 8016085C 09820508 */  j          .L80160824
    /* 6EC60 80160860 00000000 */   nop
  .L80160864:
    /* 6EC64 80160864 8CD9030C */  jal        func_800F6630
    /* 6EC68 80160868 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6EC6C 8016086C 374B050C */  jal        func_80152CDC
    /* 6EC70 80160870 00000000 */   nop
    /* 6EC74 80160874 53D9030C */  jal        func_800F654C
    /* 6EC78 80160878 03000424 */   addiu     $a0, $zero, 0x3
    /* 6EC7C 8016087C 434C050C */  jal        func_8015310C
    /* 6EC80 80160880 00000000 */   nop
    /* 6EC84 80160884 84DC030C */  jal        func_800F7210
    /* 6EC88 80160888 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6EC8C 8016088C 53D9030C */  jal        func_800F654C
    /* 6EC90 80160890 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6EC94 80160894 DAE1030C */  jal        func_800F8768
    /* 6EC98 80160898 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6EC9C 8016089C 3BE4030C */  jal        func_800F90EC
    /* 6ECA0 801608A0 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 6ECA4 801608A4 3BE4030C */  jal        func_800F90EC
    /* 6ECA8 801608A8 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6ECAC 801608AC 90D8030C */  jal        func_800F6240
    /* 6ECB0 801608B0 E4380424 */   addiu     $a0, $zero, 0x38E4
    /* 6ECB4 801608B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6ECB8 801608B8 00000000 */  nop
    /* 6ECBC 801608BC 0800E003 */  jr         $ra
    /* 6ECC0 801608C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801607F4
