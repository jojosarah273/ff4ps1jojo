nonmatching func_80128B3C, 0x110

glabel func_80128B3C
    /* 36F3C 80128B3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 36F40 80128B40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 36F44 80128B44 91E5030C */  jal        func_800F9644
    /* 36F48 80128B48 20000424 */   addiu     $a0, $zero, 0x20
    /* 36F4C 80128B4C 56D9030C */  jal        func_800F6558
    /* 36F50 80128B50 E41B0424 */   addiu     $a0, $zero, 0x1BE4
    /* 36F54 80128B54 7000043C */  lui        $a0, (0x7007FE >> 16)
    /* 36F58 80128B58 FE078434 */  ori        $a0, $a0, (0x7007FE & 0xFFFF)
    /* 36F5C 80128B5C E7CE030C */  jal        func_800F3B9C
    /* 36F60 80128B60 21280000 */   addu      $a1, $zero, $zero
    /* 36F64 80128B64 48D5030C */  jal        func_800F5520
    /* 36F68 80128B68 21204000 */   addu      $a0, $v0, $zero
    /* 36F6C 80128B6C F5D4030C */  jal        func_800F53D4
    /* 36F70 80128B70 00000000 */   nop
    /* 36F74 80128B74 2B004014 */  bnez       $v0, .L80128C24
    /* 36F78 80128B78 7000043C */   lui       $a0, (0x700FFE >> 16)
    /* 36F7C 80128B7C FE0F8434 */  ori        $a0, $a0, (0x700FFE & 0xFFFF)
    /* 36F80 80128B80 E7CE030C */  jal        func_800F3B9C
    /* 36F84 80128B84 21280000 */   addu      $a1, $zero, $zero
    /* 36F88 80128B88 48D5030C */  jal        func_800F5520
    /* 36F8C 80128B8C 21204000 */   addu      $a0, $v0, $zero
    /* 36F90 80128B90 F5D4030C */  jal        func_800F53D4
    /* 36F94 80128B94 00000000 */   nop
    /* 36F98 80128B98 22004014 */  bnez       $v0, .L80128C24
    /* 36F9C 80128B9C 7000043C */   lui       $a0, (0x7017FE >> 16)
    /* 36FA0 80128BA0 FE178434 */  ori        $a0, $a0, (0x7017FE & 0xFFFF)
    /* 36FA4 80128BA4 E7CE030C */  jal        func_800F3B9C
    /* 36FA8 80128BA8 21280000 */   addu      $a1, $zero, $zero
    /* 36FAC 80128BAC 48D5030C */  jal        func_800F5520
    /* 36FB0 80128BB0 21204000 */   addu      $a0, $v0, $zero
    /* 36FB4 80128BB4 F5D4030C */  jal        func_800F53D4
    /* 36FB8 80128BB8 00000000 */   nop
    /* 36FBC 80128BBC 19004014 */  bnez       $v0, .L80128C24
    /* 36FC0 80128BC0 7000043C */   lui       $a0, (0x701FFE >> 16)
    /* 36FC4 80128BC4 FE1F8434 */  ori        $a0, $a0, (0x701FFE & 0xFFFF)
    /* 36FC8 80128BC8 E7CE030C */  jal        func_800F3B9C
    /* 36FCC 80128BCC 21280000 */   addu      $a1, $zero, $zero
    /* 36FD0 80128BD0 48D5030C */  jal        func_800F5520
    /* 36FD4 80128BD4 21204000 */   addu      $a0, $v0, $zero
    /* 36FD8 80128BD8 F5D4030C */  jal        func_800F53D4
    /* 36FDC 80128BDC 00000000 */   nop
    /* 36FE0 80128BE0 10004014 */  bnez       $v0, .L80128C24
    /* 36FE4 80128BE4 00000000 */   nop
    /* 36FE8 80128BE8 98E5030C */  jal        func_800F9660
    /* 36FEC 80128BEC 20000424 */   addiu     $a0, $zero, 0x20
    /* 36FF0 80128BF0 13A3040C */  jal        func_80128C4C
    /* 36FF4 80128BF4 00000000 */   nop
    /* 36FF8 80128BF8 87A0040C */  jal        func_8012821C
    /* 36FFC 80128BFC 00000000 */   nop
    /* 37000 80128C00 529B040C */  jal        func_80126D48
    /* 37004 80128C04 00000000 */   nop
    /* 37008 80128C08 01000224 */  addiu      $v0, $zero, 0x1
    /* 3700C 80128C0C 1A80013C */  lui        $at, %hi(D_8019EE4E)
    /* 37010 80128C10 4EEE22A4 */  sh         $v0, %lo(D_8019EE4E)($at)
    /* 37014 80128C14 20D5030C */  jal        func_800F5480
    /* 37018 80128C18 00000000 */   nop
    /* 3701C 80128C1C 0FA30408 */  j          .L80128C3C
    /* 37020 80128C20 00000000 */   nop
  .L80128C24:
    /* 37024 80128C24 98E5030C */  jal        func_800F9660
    /* 37028 80128C28 20000424 */   addiu     $a0, $zero, 0x20
    /* 3702C 80128C2C 1A80013C */  lui        $at, %hi(D_8019EE4E)
    /* 37030 80128C30 4EEE20A4 */  sh         $zero, %lo(D_8019EE4E)($at)
    /* 37034 80128C34 04D5030C */  jal        func_800F5410
    /* 37038 80128C38 00000000 */   nop
  .L80128C3C:
    /* 3703C 80128C3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37040 80128C40 00000000 */  nop
    /* 37044 80128C44 0800E003 */  jr         $ra
    /* 37048 80128C48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80128B3C
