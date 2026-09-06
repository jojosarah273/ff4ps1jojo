nonmatching func_8016DB94, 0x14C

glabel func_8016DB94
    /* 7BF94 8016DB94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BF98 8016DB98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BF9C 8016DB9C 91E5030C */  jal        func_800F9644
    /* 7BFA0 8016DBA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7BFA4 8016DBA4 99D0030C */  jal        func_800F4264
    /* 7BFA8 8016DBA8 FF010424 */   addiu     $a0, $zero, 0x1FF
    /* 7BFAC 8016DBAC 5BD4030C */  jal        func_800F516C
    /* 7BFB0 8016DBB0 00000000 */   nop
    /* 7BFB4 8016DBB4 1300043C */  lui        $a0, (0x13E5C5 >> 16)
    /* 7BFB8 8016DBB8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7BFBC 8016DBBC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7BFC0 8016DBC0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7BFC4 8016DBC4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7BFC8 8016DBC8 00004394 */  lhu        $v1, 0x0($v0)
    /* 7BFCC 8016DBCC C5E58434 */  ori        $a0, $a0, (0x13E5C5 & 0xFFFF)
    /* 7BFD0 8016DBD0 3DDB030C */  jal        func_800F6CF4
    /* 7BFD4 8016DBD4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7BFD8 8016DBD8 3BD9030C */  jal        func_800F64EC
    /* 7BFDC 8016DBDC 80800434 */   ori       $a0, $zero, 0x8080
    /* 7BFE0 8016DBE0 25004014 */  bnez       $v0, .L8016DC78
    /* 7BFE4 8016DBE4 10000424 */   addiu     $a0, $zero, 0x10
    /* 7BFE8 8016DBE8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7BFEC 8016DBEC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7BFF0 8016DBF0 00000000 */  nop
    /* 7BFF4 8016DBF4 00006294 */  lhu        $v0, 0x0($v1)
    /* 7BFF8 8016DBF8 00000000 */  nop
    /* 7BFFC 8016DBFC 27100200 */  nor        $v0, $zero, $v0
    /* 7C000 8016DC00 9DE0030C */  jal        func_800F8274
    /* 7C004 8016DC04 000062A4 */   sh        $v0, 0x0($v1)
    /* 7C008 8016DC08 0AB4050C */  jal        func_8016D028
    /* 7C00C 8016DC0C 00000000 */   nop
    /* 7C010 8016DC10 91E5030C */  jal        func_800F9644
    /* 7C014 8016DC14 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C018 8016DC18 96D9030C */  jal        func_800F6658
    /* 7C01C 8016DC1C 14000424 */   addiu     $a0, $zero, 0x14
    /* 7C020 8016DC20 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C024 8016DC24 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C028 8016DC28 00000000 */  nop
    /* 7C02C 8016DC2C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7C030 8016DC30 00000000 */  nop
    /* 7C034 8016DC34 27100200 */  nor        $v0, $zero, $v0
    /* 7C038 8016DC38 85D8030C */  jal        func_800F6214
    /* 7C03C 8016DC3C 000062A4 */   sh        $v0, 0x0($v1)
    /* 7C040 8016DC40 60D8030C */  jal        func_800F6180
    /* 7C044 8016DC44 80800434 */   ori       $a0, $zero, 0x8080
    /* 7C048 8016DC48 19004014 */  bnez       $v0, .L8016DCB0
    /* 7C04C 8016DC4C 00000000 */   nop
  .L8016DC50:
    /* 7C050 8016DC50 9DE0030C */  jal        func_800F8274
    /* 7C054 8016DC54 14000424 */   addiu     $a0, $zero, 0x14
    /* 7C058 8016DC58 C7E5030C */  jal        func_800F971C
    /* 7C05C 8016DC5C 00000000 */   nop
    /* 7C060 8016DC60 98E5030C */  jal        func_800F9660
    /* 7C064 8016DC64 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C068 8016DC68 20D5030C */  jal        func_800F5480
    /* 7C06C 8016DC6C 00000000 */   nop
    /* 7C070 8016DC70 34B70508 */  j          .L8016DCD0
    /* 7C074 8016DC74 00000000 */   nop
  .L8016DC78:
    /* 7C078 8016DC78 91E5030C */  jal        func_800F9644
    /* 7C07C 8016DC7C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C080 8016DC80 9DE0030C */  jal        func_800F8274
    /* 7C084 8016DC84 10000424 */   addiu     $a0, $zero, 0x10
    /* 7C088 8016DC88 0AB4050C */  jal        func_8016D028
    /* 7C08C 8016DC8C 00000000 */   nop
    /* 7C090 8016DC90 91E5030C */  jal        func_800F9644
    /* 7C094 8016DC94 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C098 8016DC98 96D9030C */  jal        func_800F6658
    /* 7C09C 8016DC9C 14000424 */   addiu     $a0, $zero, 0x14
    /* 7C0A0 8016DCA0 3BD9030C */  jal        func_800F64EC
    /* 7C0A4 8016DCA4 80000424 */   addiu     $a0, $zero, 0x80
    /* 7C0A8 8016DCA8 E9FF4014 */  bnez       $v0, .L8016DC50
    /* 7C0AC 8016DCAC 00000000 */   nop
  .L8016DCB0:
    /* 7C0B0 8016DCB0 9DE0030C */  jal        func_800F8274
    /* 7C0B4 8016DCB4 14000424 */   addiu     $a0, $zero, 0x14
    /* 7C0B8 8016DCB8 C7E5030C */  jal        func_800F971C
    /* 7C0BC 8016DCBC 00000000 */   nop
    /* 7C0C0 8016DCC0 98E5030C */  jal        func_800F9660
    /* 7C0C4 8016DCC4 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C0C8 8016DCC8 04D5030C */  jal        func_800F5410
    /* 7C0CC 8016DCCC 00000000 */   nop
  .L8016DCD0:
    /* 7C0D0 8016DCD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7C0D4 8016DCD4 00000000 */  nop
    /* 7C0D8 8016DCD8 0800E003 */  jr         $ra
    /* 7C0DC 8016DCDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016DB94
