nonmatching func_80162BD0, 0x108

glabel func_80162BD0
    /* 70FD0 80162BD0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 70FD4 80162BD4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70FD8 80162BD8 FB7F010C */  jal        func_8005FFEC
    /* 70FDC 80162BDC 00000000 */   nop
    /* 70FE0 80162BE0 8CD9030C */  jal        func_800F6630
    /* 70FE4 80162BE4 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 70FE8 80162BE8 0DD9030C */  jal        func_800F6434
    /* 70FEC 80162BEC 80800434 */   ori       $a0, $zero, 0x8080
    /* 70FF0 80162BF0 07004014 */  bnez       $v0, .L80162C10
    /* 70FF4 80162BF4 00000000 */   nop
    /* 70FF8 80162BF8 92D0030C */  jal        func_800F4248
    /* 70FFC 80162BFC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 71000 80162C00 04D5030C */  jal        func_800F5410
    /* 71004 80162C04 00000000 */   nop
    /* 71008 80162C08 02D0030C */  jal        func_800F4008
    /* 7100C 80162C0C 05000424 */   addiu     $a0, $zero, 0x5
  .L80162C10:
    /* 71010 80162C10 374B050C */  jal        func_80152CDC
    /* 71014 80162C14 00000000 */   nop
    /* 71018 80162C18 9CDC030C */  jal        func_800F7270
    /* 7101C 80162C1C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 71020 80162C20 DADA030C */  jal        func_800F6B68
    /* 71024 80162C24 05200424 */   addiu     $a0, $zero, 0x2005
    /* 71028 80162C28 92D0030C */  jal        func_800F4248
    /* 7102C 80162C2C FD000424 */   addiu     $a0, $zero, 0xFD
    /* 71030 80162C30 DAE1030C */  jal        func_800F8768
    /* 71034 80162C34 05200424 */   addiu     $a0, $zero, 0x2005
    /* 71038 80162C38 8CD9030C */  jal        func_800F6630
    /* 7103C 80162C3C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 71040 80162C40 50D4030C */  jal        func_800F5140
    /* 71044 80162C44 00000000 */   nop
    /* 71048 80162C48 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7104C 80162C4C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 71050 80162C50 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 71054 80162C54 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 71058 80162C58 00004394 */  lhu        $v1, 0x0($v0)
    /* 7105C 80162C5C 7F350424 */  addiu      $a0, $zero, 0x357F
    /* 71060 80162C60 59D9030C */  jal        func_800F6564
    /* 71064 80162C64 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 71068 80162C68 DAE1030C */  jal        func_800F8768
    /* 7106C 80162C6C EA290424 */   addiu     $a0, $zero, 0x29EA
    /* 71070 80162C70 8CD9030C */  jal        func_800F6630
    /* 71074 80162C74 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 71078 80162C78 0DD9030C */  jal        func_800F6434
    /* 7107C 80162C7C 80800434 */   ori       $a0, $zero, 0x8080
    /* 71080 80162C80 11004014 */  bnez       $v0, .L80162CC8
    /* 71084 80162C84 00000000 */   nop
    /* 71088 80162C88 53D9030C */  jal        func_800F654C
    /* 7108C 80162C8C DE000424 */   addiu     $a0, $zero, 0xDE
    /* 71090 80162C90 62E0030C */  jal        func_800F8188
    /* 71094 80162C94 C2330424 */   addiu     $a0, $zero, 0x33C2
    /* 71098 80162C98 53D9030C */  jal        func_800F654C
    /* 7109C 80162C9C F8000424 */   addiu     $a0, $zero, 0xF8
    /* 710A0 80162CA0 62E0030C */  jal        func_800F8188
    /* 710A4 80162CA4 C3330424 */   addiu     $a0, $zero, 0x33C3
    /* 710A8 80162CA8 53D9030C */  jal        func_800F654C
    /* 710AC 80162CAC 04000424 */   addiu     $a0, $zero, 0x4
    /* 710B0 80162CB0 62E0030C */  jal        func_800F8188
    /* 710B4 80162CB4 C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 710B8 80162CB8 53D9030C */  jal        func_800F654C
    /* 710BC 80162CBC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 710C0 80162CC0 62E0030C */  jal        func_800F8188
    /* 710C4 80162CC4 C5330424 */   addiu     $a0, $zero, 0x33C5
  .L80162CC8:
    /* 710C8 80162CC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 710CC 80162CCC 00000000 */  nop
    /* 710D0 80162CD0 0800E003 */  jr         $ra
    /* 710D4 80162CD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162BD0
