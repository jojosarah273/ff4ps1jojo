nonmatching func_80163B88, 0x1E0

glabel func_80163B88
    /* 71F88 80163B88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71F8C 80163B8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71F90 80163B90 59D9030C */  jal        func_800F6564
    /* 71F94 80163B94 83260424 */   addiu     $a0, $zero, 0x2683
    /* 71F98 80163B98 92D0030C */  jal        func_800F4248
    /* 71F9C 80163B9C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 71FA0 80163BA0 48D0030C */  jal        func_800F4120
    /* 71FA4 80163BA4 02020424 */   addiu     $a0, $zero, 0x202
    /* 71FA8 80163BA8 6B004014 */  bnez       $v0, .L80163D58
    /* 71FAC 80163BAC 00000000 */   nop
    /* 71FB0 80163BB0 59D9030C */  jal        func_800F6564
    /* 71FB4 80163BB4 84260424 */   addiu     $a0, $zero, 0x2684
    /* 71FB8 80163BB8 92D0030C */  jal        func_800F4248
    /* 71FBC 80163BBC 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 71FC0 80163BC0 48D0030C */  jal        func_800F4120
    /* 71FC4 80163BC4 02020424 */   addiu     $a0, $zero, 0x202
    /* 71FC8 80163BC8 63004014 */  bnez       $v0, .L80163D58
    /* 71FCC 80163BCC 00000000 */   nop
    /* 71FD0 80163BD0 59D9030C */  jal        func_800F6564
    /* 71FD4 80163BD4 85260424 */   addiu     $a0, $zero, 0x2685
    /* 71FD8 80163BD8 92D0030C */  jal        func_800F4248
    /* 71FDC 80163BDC C6000424 */   addiu     $a0, $zero, 0xC6
    /* 71FE0 80163BE0 48D0030C */  jal        func_800F4120
    /* 71FE4 80163BE4 02020424 */   addiu     $a0, $zero, 0x202
    /* 71FE8 80163BE8 5B004014 */  bnez       $v0, .L80163D58
    /* 71FEC 80163BEC 00000000 */   nop
    /* 71FF0 80163BF0 59D9030C */  jal        func_800F6564
    /* 71FF4 80163BF4 D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 71FF8 80163BF8 80E4030C */  jal        func_800F9200
    /* 71FFC 80163BFC 00000000 */   nop
    /* 72000 80163C00 59D9030C */  jal        func_800F6564
    /* 72004 80163C04 D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 72008 80163C08 5DD5030C */  jal        func_800F5574
    /* 7200C 80163C0C CA000424 */   addiu     $a0, $zero, 0xCA
    /* 72010 80163C10 F5D4030C */  jal        func_800F53D4
    /* 72014 80163C14 00000000 */   nop
    /* 72018 80163C18 05004010 */  beqz       $v0, .L80163C30
    /* 7201C 80163C1C 00000000 */   nop
    /* 72020 80163C20 5A8F050C */  jal        func_80163D68
    /* 72024 80163C24 00000000 */   nop
    /* 72028 80163C28 408F0508 */  j          .L80163D00
    /* 7202C 80163C2C 00000000 */   nop
  .L80163C30:
    /* 72030 80163C30 5DD5030C */  jal        func_800F5574
    /* 72034 80163C34 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 72038 80163C38 F0D4030C */  jal        func_800F53C0
    /* 7203C 80163C3C 00000000 */   nop
    /* 72040 80163C40 09004010 */  beqz       $v0, .L80163C68
    /* 72044 80163C44 00000000 */   nop
    /* 72048 80163C48 59D9030C */  jal        func_800F6564
    /* 7204C 80163C4C D0260424 */   addiu     $a0, $zero, 0x26D0
    /* 72050 80163C50 92D0030C */  jal        func_800F4248
    /* 72054 80163C54 10000424 */   addiu     $a0, $zero, 0x10
    /* 72058 80163C58 48D0030C */  jal        func_800F4120
    /* 7205C 80163C5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 72060 80163C60 25004014 */  bnez       $v0, .L80163CF8
    /* 72064 80163C64 00000000 */   nop
  .L80163C68:
    /* 72068 80163C68 84DC030C */  jal        func_800F7210
    /* 7206C 80163C6C D5260424 */   addiu     $a0, $zero, 0x26D5
    /* 72070 80163C70 5BE3030C */  jal        func_800F8D6C
    /* 72074 80163C74 80000424 */   addiu     $a0, $zero, 0x80
    /* 72078 80163C78 59D9030C */  jal        func_800F6564
    /* 7207C 80163C7C D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 72080 80163C80 5DD5030C */  jal        func_800F5574
    /* 72084 80163C84 61000424 */   addiu     $a0, $zero, 0x61
    /* 72088 80163C88 F0D4030C */  jal        func_800F53C0
    /* 7208C 80163C8C 00000000 */   nop
    /* 72090 80163C90 05004010 */  beqz       $v0, .L80163CA8
    /* 72094 80163C94 0F00043C */   lui       $a0, (0xF9070 >> 16)
    /* 72098 80163C98 53D9030C */  jal        func_800F654C
    /* 7209C 80163C9C 21200000 */   addu      $a0, $zero, $zero
    /* 720A0 80163CA0 3A8F0508 */  j          .L80163CE8
    /* 720A4 80163CA4 00000000 */   nop
  .L80163CA8:
    /* 720A8 80163CA8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 720AC 80163CAC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 720B0 80163CB0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 720B4 80163CB4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 720B8 80163CB8 00004394 */  lhu        $v1, 0x0($v0)
    /* 720BC 80163CBC 70908434 */  ori        $a0, $a0, (0xF9070 & 0xFFFF)
    /* 720C0 80163CC0 1ADB030C */  jal        func_800F6C68
    /* 720C4 80163CC4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 720C8 80163CC8 62E0030C */  jal        func_800F8188
    /* 720CC 80163CCC EC380424 */   addiu     $a0, $zero, 0x38EC
    /* 720D0 80163CD0 90D8030C */  jal        func_800F6240
    /* 720D4 80163CD4 EB380424 */   addiu     $a0, $zero, 0x38EB
    /* 720D8 80163CD8 40DD030C */  jal        func_800F7500
    /* 720DC 80163CDC 03000424 */   addiu     $a0, $zero, 0x3
    /* 720E0 80163CE0 B6D9030C */  jal        func_800F66D8
    /* 720E4 80163CE4 80000424 */   addiu     $a0, $zero, 0x80
  .L80163CE8:
    /* 720E8 80163CE8 62E0030C */  jal        func_800F8188
    /* 720EC 80163CEC D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 720F0 80163CF0 408F0508 */  j          .L80163D00
    /* 720F4 80163CF4 00000000 */   nop
  .L80163CF8:
    /* 720F8 80163CF8 90D8030C */  jal        func_800F6240
    /* 720FC 80163CFC 2A350424 */   addiu     $a0, $zero, 0x352A
  .L80163D00:
    /* 72100 80163D00 C28A010C */  jal        func_80062B08
    /* 72104 80163D04 00000000 */   nop
    /* 72108 80163D08 59D9030C */  jal        func_800F6564
    /* 7210C 80163D0C ED380424 */   addiu     $a0, $zero, 0x38ED
    /* 72110 80163D10 0DD9030C */  jal        func_800F6434
    /* 72114 80163D14 02000424 */   addiu     $a0, $zero, 0x2
    /* 72118 80163D18 05004014 */  bnez       $v0, .L80163D30
    /* 7211C 80163D1C 00000000 */   nop
    /* 72120 80163D20 F7E4030C */  jal        func_800F93DC
    /* 72124 80163D24 00000000 */   nop
    /* 72128 80163D28 508F0508 */  j          .L80163D40
    /* 7212C 80163D2C 00000000 */   nop
  .L80163D30:
    /* 72130 80163D30 F7E4030C */  jal        func_800F93DC
    /* 72134 80163D34 00000000 */   nop
    /* 72138 80163D38 62E0030C */  jal        func_800F8188
    /* 7213C 80163D3C C5330424 */   addiu     $a0, $zero, 0x33C5
  .L80163D40:
    /* 72140 80163D40 62E0030C */  jal        func_800F8188
    /* 72144 80163D44 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 72148 80163D48 53D9030C */  jal        func_800F654C
    /* 7214C 80163D4C 20000424 */   addiu     $a0, $zero, 0x20
    /* 72150 80163D50 62E0030C */  jal        func_800F8188
    /* 72154 80163D54 C7340424 */   addiu     $a0, $zero, 0x34C7
  .L80163D58:
    /* 72158 80163D58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7215C 80163D5C 00000000 */  nop
    /* 72160 80163D60 0800E003 */  jr         $ra
    /* 72164 80163D64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80163B88
