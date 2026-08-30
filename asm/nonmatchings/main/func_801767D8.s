nonmatching func_801767D8, 0x1DC

glabel func_801767D8
    /* 84BD8 801767D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 84BDC 801767DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 84BE0 801767E0 59D9030C */  jal        func_800F6564
    /* 84BE4 801767E4 DD0F0424 */   addiu     $a0, $zero, 0xFDD
    /* 84BE8 801767E8 1500043C */  lui        $a0, (0x15CB4F >> 16)
    /* 84BEC 801767EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 84BF0 801767F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 84BF4 801767F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 84BF8 801767F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 84BFC 801767FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 84C00 80176800 4FCB8434 */  ori        $a0, $a0, (0x15CB4F & 0xFFFF)
    /* 84C04 80176804 1ADB030C */  jal        func_800F6C68
    /* 84C08 80176808 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 84C0C 8017680C 93E0030C */  jal        func_800F824C
    /* 84C10 80176810 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 84C14 80176814 EEE3030C */  jal        func_800F8FB8
    /* 84C18 80176818 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 84C1C 8017681C 0FCF030C */  jal        func_800F3C3C
    /* 84C20 80176820 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 84C24 80176824 AFDD030C */  jal        func_800F76BC
    /* 84C28 80176828 21204000 */   addu      $a0, $v0, $zero
    /* 84C2C 8017682C BADD030C */  jal        func_800F76E8
    /* 84C30 80176830 00000000 */   nop
    /* 84C34 80176834 0FCF030C */  jal        func_800F3C3C
    /* 84C38 80176838 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 84C3C 8017683C 32DF030C */  jal        func_800F7CC8
    /* 84C40 80176840 21204000 */   addu      $a0, $v0, $zero
    /* 84C44 80176844 8CD9030C */  jal        func_800F6630
    /* 84C48 80176848 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 84C4C 8017684C 04D5030C */  jal        func_800F5410
    /* 84C50 80176850 00000000 */   nop
    /* 84C54 80176854 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 84C58 80176858 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 84C5C 8017685C 1500043C */  lui        $a0, (0x15CB4F >> 16)
    /* 84C60 80176860 00004594 */  lhu        $a1, 0x0($v0)
    /* 84C64 80176864 E7CE030C */  jal        func_800F3B9C
    /* 84C68 80176868 4FCB8434 */   ori       $a0, $a0, (0x15CB4F & 0xFFFF)
    /* 84C6C 8017686C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 84C70 80176870 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 84C74 80176874 00000000 */  nop
    /* 84C78 80176878 00006494 */  lhu        $a0, 0x0($v1)
    /* 84C7C 8017687C CECF030C */  jal        func_800F3F38
    /* 84C80 80176880 21204400 */   addu      $a0, $v0, $a0
    /* 84C84 80176884 93E0030C */  jal        func_800F824C
    /* 84C88 80176888 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 84C8C 8017688C 9CDC030C */  jal        func_800F7270
    /* 84C90 80176890 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 84C94 80176894 40DD030C */  jal        func_800F7500
    /* 84C98 80176898 21200000 */   addu      $a0, $zero, $zero
    /* 84C9C 8017689C 53D9030C */  jal        func_800F654C
    /* 84CA0 801768A0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 84CA4 801768A4 80E4030C */  jal        func_800F9200
    /* 84CA8 801768A8 00000000 */   nop
    /* 84CAC 801768AC 12E5030C */  jal        func_800F9448
    /* 84CB0 801768B0 00000000 */   nop
  .L801768B4:
    /* 84CB4 801768B4 1F00043C */  lui        $a0, (0x1FB9C0 >> 16)
  .L801768B8:
    /* 84CB8 801768B8 1ADB030C */  jal        func_800F6C68
    /* 84CBC 801768BC C0B98434 */   ori       $a0, $a0, (0x1FB9C0 & 0xFFFF)
    /* 84CC0 801768C0 58E2030C */  jal        func_800F8960
    /* 84CC4 801768C4 00500424 */   addiu     $a0, $zero, 0x5000
    /* 84CC8 801768C8 D9D8030C */  jal        func_800F6364
    /* 84CCC 801768CC 00000000 */   nop
    /* 84CD0 801768D0 EFD8030C */  jal        func_800F63BC
    /* 84CD4 801768D4 00000000 */   nop
    /* 84CD8 801768D8 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 84CDC 801768DC 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 84CE0 801768E0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 84CE4 801768E4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 84CE8 801768E8 00004390 */  lbu        $v1, 0x0($v0)
    /* 84CEC 801768EC 0F000424 */  addiu      $a0, $zero, 0xF
    /* 84CF0 801768F0 92D0030C */  jal        func_800F4248
    /* 84CF4 801768F4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 84CF8 801768F8 48D0030C */  jal        func_800F4120
    /* 84CFC 801768FC 02020424 */   addiu     $a0, $zero, 0x202
    /* 84D00 80176900 ECFF4014 */  bnez       $v0, .L801768B4
    /* 84D04 80176904 00000000 */   nop
    /* 84D08 80176908 1F00043C */  lui        $a0, (0x1FB9C0 >> 16)
  .L8017690C:
    /* 84D0C 8017690C 1ADB030C */  jal        func_800F6C68
    /* 84D10 80176910 C0B98434 */   ori       $a0, $a0, (0x1FB9C0 & 0xFFFF)
    /* 84D14 80176914 58E2030C */  jal        func_800F8960
    /* 84D18 80176918 00500424 */   addiu     $a0, $zero, 0x5000
    /* 84D1C 8017691C D9D8030C */  jal        func_800F6364
    /* 84D20 80176920 00000000 */   nop
    /* 84D24 80176924 EFD8030C */  jal        func_800F63BC
    /* 84D28 80176928 00000000 */   nop
    /* 84D2C 8017692C 53D9030C */  jal        func_800F654C
    /* 84D30 80176930 21200000 */   addu      $a0, $zero, $zero
    /* 84D34 80176934 58E2030C */  jal        func_800F8960
    /* 84D38 80176938 00500424 */   addiu     $a0, $zero, 0x5000
    /* 84D3C 8017693C EFD8030C */  jal        func_800F63BC
    /* 84D40 80176940 00000000 */   nop
    /* 84D44 80176944 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 84D48 80176948 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 84D4C 8017694C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 84D50 80176950 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 84D54 80176954 00004390 */  lbu        $v1, 0x0($v0)
    /* 84D58 80176958 0F000424 */  addiu      $a0, $zero, 0xF
    /* 84D5C 8017695C 92D0030C */  jal        func_800F4248
    /* 84D60 80176960 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 84D64 80176964 48D0030C */  jal        func_800F4120
    /* 84D68 80176968 02020424 */   addiu     $a0, $zero, 0x202
    /* 84D6C 8017696C E7FF4014 */  bnez       $v0, .L8017690C
    /* 84D70 80176970 1F00043C */   lui       $a0, (0x1FB9C0 >> 16)
    /* 84D74 80176974 A4D6030C */  jal        func_800F5A90
    /* 84D78 80176978 00080424 */   addiu     $a0, $zero, 0x800
    /* 84D7C 8017697C F5D4030C */  jal        func_800F53D4
    /* 84D80 80176980 00000000 */   nop
    /* 84D84 80176984 CCFF4010 */  beqz       $v0, .L801768B8
    /* 84D88 80176988 1F00043C */   lui       $a0, (0x1FB9C0 >> 16)
    /* 84D8C 8017698C 53D9030C */  jal        func_800F654C
    /* 84D90 80176990 21200000 */   addu      $a0, $zero, $zero
    /* 84D94 80176994 80E4030C */  jal        func_800F9200
    /* 84D98 80176998 00000000 */   nop
    /* 84D9C 8017699C 12E5030C */  jal        func_800F9448
    /* 84DA0 801769A0 00000000 */   nop
    /* 84DA4 801769A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 84DA8 801769A8 00000000 */  nop
    /* 84DAC 801769AC 0800E003 */  jr         $ra
    /* 84DB0 801769B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801767D8
