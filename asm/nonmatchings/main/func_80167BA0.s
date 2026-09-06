nonmatching func_80167BA0, 0x234

glabel func_80167BA0
    /* 75FA0 80167BA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75FA4 80167BA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75FA8 80167BA8 53D9030C */  jal        func_800F654C
    /* 75FAC 80167BAC 20000424 */   addiu     $a0, $zero, 0x20
    /* 75FB0 80167BB0 62E0030C */  jal        func_800F8188
    /* 75FB4 80167BB4 11F10434 */   ori       $a0, $zero, 0xF111
    /* 75FB8 80167BB8 C7E5030C */  jal        func_800F971C
    /* 75FBC 80167BBC 00000000 */   nop
    /* 75FC0 80167BC0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 75FC4 80167BC4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 75FC8 80167BC8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 75FCC 80167BCC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 75FD0 80167BD0 00004394 */  lhu        $v1, 0x0($v0)
    /* 75FD4 80167BD4 00000000 */  nop
    /* 75FD8 80167BD8 000083A4 */  sh         $v1, 0x0($a0)
  .L80167BDC:
    /* 75FDC 80167BDC 759F050C */  jal        func_80167DD4
    /* 75FE0 80167BE0 00000000 */   nop
    /* 75FE4 80167BE4 56D6030C */  jal        func_800F5958
    /* 75FE8 80167BE8 10000424 */   addiu     $a0, $zero, 0x10
    /* 75FEC 80167BEC F5D4030C */  jal        func_800F53D4
    /* 75FF0 80167BF0 00000000 */   nop
    /* 75FF4 80167BF4 F9FF4010 */  beqz       $v0, .L80167BDC
    /* 75FF8 80167BF8 00000000 */   nop
    /* 75FFC 80167BFC C7E5030C */  jal        func_800F971C
    /* 76000 80167C00 00000000 */   nop
    /* 76004 80167C04 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 76008 80167C08 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7600C 80167C0C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 76010 80167C10 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 76014 80167C14 00004394 */  lhu        $v1, 0x0($v0)
    /* 76018 80167C18 33D7030C */  jal        func_800F5CCC
    /* 7601C 80167C1C 000083A4 */   sh        $v1, 0x0($a0)
  .L80167C20:
    /* 76020 80167C20 DAE1030C */  jal        func_800F8768
    /* 76024 80167C24 A8F30434 */   ori       $a0, $zero, 0xF3A8
    /* 76028 80167C28 D9D8030C */  jal        func_800F6364
    /* 7602C 80167C2C 00000000 */   nop
    /* 76030 80167C30 56D6030C */  jal        func_800F5958
    /* 76034 80167C34 08000424 */   addiu     $a0, $zero, 0x8
    /* 76038 80167C38 F5D4030C */  jal        func_800F53D4
    /* 7603C 80167C3C 00000000 */   nop
    /* 76040 80167C40 F7FF4010 */  beqz       $v0, .L80167C20
    /* 76044 80167C44 00000000 */   nop
    /* 76048 80167C48 DDE3030C */  jal        func_800F8F74
    /* 7604C 80167C4C A8F30434 */   ori       $a0, $zero, 0xF3A8
    /* 76050 80167C50 5B02050C */  jal        func_8014096C
    /* 76054 80167C54 00000000 */   nop
    /* 76058 80167C58 53D9030C */  jal        func_800F654C
    /* 7605C 80167C5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 76060 80167C60 62E0030C */  jal        func_800F8188
    /* 76064 80167C64 87EF0434 */   ori       $a0, $zero, 0xEF87
  .L80167C68:
    /* 76068 80167C68 77DC030C */  jal        func_800F71DC
    /* 7606C 80167C6C 04000424 */   addiu     $a0, $zero, 0x4
  .L80167C70:
    /* 76070 80167C70 5DC0010C */  jal        func_80070174
    /* 76074 80167C74 00000000 */   nop
    /* 76078 80167C78 92D7030C */  jal        func_800F5E48
    /* 7607C 80167C7C 00000000 */   nop
    /* 76080 80167C80 19D7030C */  jal        func_800F5C64
    /* 76084 80167C84 02020424 */   addiu     $a0, $zero, 0x202
    /* 76088 80167C88 F9FF4014 */  bnez       $v0, .L80167C70
    /* 7608C 80167C8C 00000000 */   nop
    /* 76090 80167C90 90D8030C */  jal        func_800F6240
    /* 76094 80167C94 2BF40434 */   ori       $a0, $zero, 0xF42B
    /* 76098 80167C98 919F050C */  jal        func_80167E44
    /* 7609C 80167C9C 00000000 */   nop
    /* 760A0 80167CA0 DDE3030C */  jal        func_800F8F74
    /* 760A4 80167CA4 2BF40434 */   ori       $a0, $zero, 0xF42B
    /* 760A8 80167CA8 77DC030C */  jal        func_800F71DC
    /* 760AC 80167CAC 16000424 */   addiu     $a0, $zero, 0x16
  .L80167CB0:
    /* 760B0 80167CB0 DADA030C */  jal        func_800F6B68
    /* 760B4 80167CB4 98F30434 */   ori       $a0, $zero, 0xF398
    /* 760B8 80167CB8 DAE1030C */  jal        func_800F8768
    /* 760BC 80167CBC 99F30434 */   ori       $a0, $zero, 0xF399
    /* 760C0 80167CC0 92D7030C */  jal        func_800F5E48
    /* 760C4 80167CC4 00000000 */   nop
    /* 760C8 80167CC8 56D6030C */  jal        func_800F5958
    /* 760CC 80167CCC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 760D0 80167CD0 F5D4030C */  jal        func_800F53D4
    /* 760D4 80167CD4 00000000 */   nop
    /* 760D8 80167CD8 F5FF4010 */  beqz       $v0, .L80167CB0
    /* 760DC 80167CDC 00000000 */   nop
    /* 760E0 80167CE0 59D9030C */  jal        func_800F6564
    /* 760E4 80167CE4 A8F30434 */   ori       $a0, $zero, 0xF3A8
    /* 760E8 80167CE8 7AD8030C */  jal        func_800F61E8
    /* 760EC 80167CEC 00000000 */   nop
    /* 760F0 80167CF0 92D0030C */  jal        func_800F4248
    /* 760F4 80167CF4 07000424 */   addiu     $a0, $zero, 0x7
    /* 760F8 80167CF8 62E0030C */  jal        func_800F8188
    /* 760FC 80167CFC A8F30434 */   ori       $a0, $zero, 0xF3A8
    /* 76100 80167D00 C7E5030C */  jal        func_800F971C
    /* 76104 80167D04 00000000 */   nop
    /* 76108 80167D08 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7610C 80167D0C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 76110 80167D10 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 76114 80167D14 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 76118 80167D18 00004394 */  lhu        $v1, 0x0($v0)
    /* 7611C 80167D1C 00000000 */  nop
    /* 76120 80167D20 000083A4 */  sh         $v1, 0x0($a0)
  .L80167D24:
    /* 76124 80167D24 DADA030C */  jal        func_800F6B68
    /* 76128 80167D28 A8F30434 */   ori       $a0, $zero, 0xF3A8
    /* 7612C 80167D2C 0DD9030C */  jal        func_800F6434
    /* 76130 80167D30 02020424 */   addiu     $a0, $zero, 0x202
    /* 76134 80167D34 13004014 */  bnez       $v0, .L80167D84
    /* 76138 80167D38 00000000 */   nop
    /* 7613C 80167D3C CCE4030C */  jal        func_800F9330
    /* 76140 80167D40 00000000 */   nop
    /* 76144 80167D44 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 76148 80167D48 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 7614C 80167D4C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 76150 80167D50 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 76154 80167D54 00006290 */  lbu        $v0, 0x0($v1)
    /* 76158 80167D58 50D4030C */  jal        func_800F5140
    /* 7615C 80167D5C 000082A0 */   sb        $v0, 0x0($a0)
    /* 76160 80167D60 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 76164 80167D64 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 76168 80167D68 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7616C 80167D6C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 76170 80167D70 00006294 */  lhu        $v0, 0x0($v1)
    /* 76174 80167D74 759F050C */  jal        func_80167DD4
    /* 76178 80167D78 000082A4 */   sh        $v0, 0x0($a0)
    /* 7617C 80167D7C 68E5030C */  jal        func_800F95A0
    /* 76180 80167D80 00000000 */   nop
  .L80167D84:
    /* 76184 80167D84 D9D8030C */  jal        func_800F6364
    /* 76188 80167D88 00000000 */   nop
    /* 7618C 80167D8C 56D6030C */  jal        func_800F5958
    /* 76190 80167D90 08000424 */   addiu     $a0, $zero, 0x8
    /* 76194 80167D94 F5D4030C */  jal        func_800F53D4
    /* 76198 80167D98 00000000 */   nop
    /* 7619C 80167D9C E1FF4010 */  beqz       $v0, .L80167D24
    /* 761A0 80167DA0 00000000 */   nop
    /* 761A4 80167DA4 49D7030C */  jal        func_800F5D24
    /* 761A8 80167DA8 11F10434 */   ori       $a0, $zero, 0xF111
    /* 761AC 80167DAC E3D6030C */  jal        func_800F5B8C
    /* 761B0 80167DB0 02020424 */   addiu     $a0, $zero, 0x202
    /* 761B4 80167DB4 ACFF4014 */  bnez       $v0, .L80167C68
    /* 761B8 80167DB8 00000000 */   nop
    /* 761BC 80167DBC DDE3030C */  jal        func_800F8F74
    /* 761C0 80167DC0 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 761C4 80167DC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 761C8 80167DC8 00000000 */  nop
    /* 761CC 80167DCC 0800E003 */  jr         $ra
    /* 761D0 80167DD0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167BA0
