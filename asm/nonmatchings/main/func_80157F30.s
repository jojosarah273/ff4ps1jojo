nonmatching func_80157F30, 0x180

glabel func_80157F30
    /* 66330 80157F30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 66334 80157F34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 66338 80157F38 EEE3030C */  jal        func_800F8FB8
    /* 6633C 80157F3C D1000424 */   addiu     $a0, $zero, 0xD1
    /* 66340 80157F40 EEE3030C */  jal        func_800F8FB8
    /* 66344 80157F44 21200000 */   addu      $a0, $zero, $zero
    /* 66348 80157F48 59D9030C */  jal        func_800F6564
    /* 6634C 80157F4C F6380424 */   addiu     $a0, $zero, 0x38F6
    /* 66350 80157F50 93E0030C */  jal        func_800F824C
    /* 66354 80157F54 A9000424 */   addiu     $a0, $zero, 0xA9
  .L80157F58:
    /* 66358 80157F58 59D9030C */  jal        func_800F6564
    /* 6635C 80157F5C 01360424 */   addiu     $a0, $zero, 0x3601
    /* 66360 80157F60 5DD5030C */  jal        func_800F5574
    /* 66364 80157F64 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 66368 80157F68 F5D4030C */  jal        func_800F53D4
    /* 6636C 80157F6C 00000000 */   nop
    /* 66370 80157F70 09004014 */  bnez       $v0, .L80157F98
    /* 66374 80157F74 00000000 */   nop
    /* 66378 80157F78 0FCF030C */  jal        func_800F3C3C
    /* 6637C 80157F7C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 66380 80157F80 35D5030C */  jal        func_800F54D4
    /* 66384 80157F84 21204000 */   addu      $a0, $v0, $zero
    /* 66388 80157F88 F5D4030C */  jal        func_800F53D4
    /* 6638C 80157F8C 00000000 */   nop
    /* 66390 80157F90 2D004010 */  beqz       $v0, .L80158048
    /* 66394 80157F94 00000000 */   nop
  .L80157F98:
    /* 66398 80157F98 EEE3030C */  jal        func_800F8FB8
    /* 6639C 80157F9C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 663A0 80157FA0 EEE3030C */  jal        func_800F8FB8
    /* 663A4 80157FA4 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 663A8 80157FA8 8CD9030C */  jal        func_800F6630
    /* 663AC 80157FAC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 663B0 80157FB0 50D4030C */  jal        func_800F5140
    /* 663B4 80157FB4 00000000 */   nop
    /* 663B8 80157FB8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 663BC 80157FBC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 663C0 80157FC0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 663C4 80157FC4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 663C8 80157FC8 00004394 */  lhu        $v1, 0x0($v0)
    /* 663CC 80157FCC EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 663D0 80157FD0 DADA030C */  jal        func_800F6B68
    /* 663D4 80157FD4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 663D8 80157FD8 93E0030C */  jal        func_800F824C
    /* 663DC 80157FDC AB000424 */   addiu     $a0, $zero, 0xAB
  .L80157FE0:
    /* 663E0 80157FE0 0FCF030C */  jal        func_800F3C3C
    /* 663E4 80157FE4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 663E8 80157FE8 CAD3030C */  jal        func_800F4F28
    /* 663EC 80157FEC 21204000 */   addu      $a0, $v0, $zero
    /* 663F0 80157FF0 EBD3030C */  jal        func_800F4FAC
    /* 663F4 80157FF4 01010424 */   addiu     $a0, $zero, 0x101
    /* 663F8 80157FF8 09004014 */  bnez       $v0, .L80158020
    /* 663FC 80157FFC 00000000 */   nop
    /* 66400 80158000 2C60050C */  jal        func_801580B0
    /* 66404 80158004 00000000 */   nop
    /* 66408 80158008 8CD9030C */  jal        func_800F6630
    /* 6640C 8015800C D1000424 */   addiu     $a0, $zero, 0xD1
    /* 66410 80158010 0DD9030C */  jal        func_800F6434
    /* 66414 80158014 02020424 */   addiu     $a0, $zero, 0x202
    /* 66418 80158018 21004014 */  bnez       $v0, .L801580A0
    /* 6641C 8015801C 00000000 */   nop
  .L80158020:
    /* 66420 80158020 AFD8030C */  jal        func_800F62BC
    /* 66424 80158024 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 66428 80158028 8CD9030C */  jal        func_800F6630
    /* 6642C 8015802C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 66430 80158030 5DD5030C */  jal        func_800F5574
    /* 66434 80158034 07000424 */   addiu     $a0, $zero, 0x7
    /* 66438 80158038 F5D4030C */  jal        func_800F53D4
    /* 6643C 8015803C 00000000 */   nop
    /* 66440 80158040 E7FF4010 */  beqz       $v0, .L80157FE0
    /* 66444 80158044 00000000 */   nop
  .L80158048:
    /* 66448 80158048 AFD8030C */  jal        func_800F62BC
    /* 6644C 8015804C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 66450 80158050 8CD9030C */  jal        func_800F6630
    /* 66454 80158054 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 66458 80158058 5DD5030C */  jal        func_800F5574
    /* 6645C 8015805C 0D000424 */   addiu     $a0, $zero, 0xD
    /* 66460 80158060 F5D4030C */  jal        func_800F53D4
    /* 66464 80158064 00000000 */   nop
    /* 66468 80158068 03004010 */  beqz       $v0, .L80158078
    /* 6646C 8015806C 00000000 */   nop
    /* 66470 80158070 EEE3030C */  jal        func_800F8FB8
    /* 66474 80158074 A9000424 */   addiu     $a0, $zero, 0xA9
  .L80158078:
    /* 66478 80158078 AFD8030C */  jal        func_800F62BC
    /* 6647C 8015807C 21200000 */   addu      $a0, $zero, $zero
    /* 66480 80158080 8CD9030C */  jal        func_800F6630
    /* 66484 80158084 21200000 */   addu      $a0, $zero, $zero
    /* 66488 80158088 5DD5030C */  jal        func_800F5574
    /* 6648C 8015808C 0D000424 */   addiu     $a0, $zero, 0xD
    /* 66490 80158090 F5D4030C */  jal        func_800F53D4
    /* 66494 80158094 00000000 */   nop
    /* 66498 80158098 AFFF4010 */  beqz       $v0, .L80157F58
    /* 6649C 8015809C 00000000 */   nop
  .L801580A0:
    /* 664A0 801580A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 664A4 801580A4 00000000 */  nop
    /* 664A8 801580A8 0800E003 */  jr         $ra
    /* 664AC 801580AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80157F30
