nonmatching func_80142BCC, 0xE8

glabel func_80142BCC
    /* 50FCC 80142BCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50FD0 80142BD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 50FD4 80142BD4 DDE3030C */  jal        func_800F8F74
    /* 50FD8 80142BD8 28F40434 */   ori       $a0, $zero, 0xF428
    /* 50FDC 80142BDC C7E5030C */  jal        func_800F971C
    /* 50FE0 80142BE0 00000000 */   nop
    /* 50FE4 80142BE4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50FE8 80142BE8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50FEC 80142BEC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 50FF0 80142BF0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 50FF4 80142BF4 00004394 */  lhu        $v1, 0x0($v0)
    /* 50FF8 80142BF8 21200000 */  addu       $a0, $zero, $zero
    /* 50FFC 80142BFC EEE3030C */  jal        func_800F8FB8
    /* 51000 80142C00 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 51004 80142C04 53D9030C */  jal        func_800F654C
    /* 51008 80142C08 40000424 */   addiu     $a0, $zero, 0x40
    /* 5100C 80142C0C 93E0030C */  jal        func_800F824C
    /* 51010 80142C10 02000424 */   addiu     $a0, $zero, 0x2
  .L80142C14:
    /* 51014 80142C14 8CD9030C */  jal        func_800F6630
    /* 51018 80142C18 21200000 */   addu      $a0, $zero, $zero
    /* 5101C 80142C1C DAE1030C */  jal        func_800F8768
    /* 51020 80142C20 33F10434 */   ori       $a0, $zero, 0xF133
    /* 51024 80142C24 04D5030C */  jal        func_800F5410
    /* 51028 80142C28 00000000 */   nop
    /* 5102C 80142C2C 02D0030C */  jal        func_800F4008
    /* 51030 80142C30 20000424 */   addiu     $a0, $zero, 0x20
    /* 51034 80142C34 93E0030C */  jal        func_800F824C
    /* 51038 80142C38 21200000 */   addu      $a0, $zero, $zero
    /* 5103C 80142C3C 8CD9030C */  jal        func_800F6630
    /* 51040 80142C40 02000424 */   addiu     $a0, $zero, 0x2
    /* 51044 80142C44 DAE1030C */  jal        func_800F8768
    /* 51048 80142C48 73F10434 */   ori       $a0, $zero, 0xF173
    /* 5104C 80142C4C 04D5030C */  jal        func_800F5410
    /* 51050 80142C50 00000000 */   nop
    /* 51054 80142C54 02D0030C */  jal        func_800F4008
    /* 51058 80142C58 20000424 */   addiu     $a0, $zero, 0x20
    /* 5105C 80142C5C 93E0030C */  jal        func_800F824C
    /* 51060 80142C60 02000424 */   addiu     $a0, $zero, 0x2
    /* 51064 80142C64 8CD9030C */  jal        func_800F6630
    /* 51068 80142C68 04000424 */   addiu     $a0, $zero, 0x4
    /* 5106C 80142C6C DAE1030C */  jal        func_800F8768
    /* 51070 80142C70 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 51074 80142C74 8CD9030C */  jal        func_800F6630
    /* 51078 80142C78 06000424 */   addiu     $a0, $zero, 0x6
    /* 5107C 80142C7C DAE1030C */  jal        func_800F8768
    /* 51080 80142C80 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 51084 80142C84 D9D8030C */  jal        func_800F6364
    /* 51088 80142C88 00000000 */   nop
    /* 5108C 80142C8C 56D6030C */  jal        func_800F5958
    /* 51090 80142C90 40000424 */   addiu     $a0, $zero, 0x40
    /* 51094 80142C94 F5D4030C */  jal        func_800F53D4
    /* 51098 80142C98 00000000 */   nop
    /* 5109C 80142C9C DDFF4010 */  beqz       $v0, .L80142C14
    /* 510A0 80142CA0 00000000 */   nop
    /* 510A4 80142CA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 510A8 80142CA8 00000000 */  nop
    /* 510AC 80142CAC 0800E003 */  jr         $ra
    /* 510B0 80142CB0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142BCC
