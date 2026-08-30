nonmatching func_8013DC04, 0x234

glabel func_8013DC04
    /* 4C004 8013DC04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C008 8013DC08 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C00C 8013DC0C 59D9030C */  jal        func_800F6564
    /* 4C010 8013DC10 E2380424 */   addiu     $a0, $zero, 0x38E2
    /* 4C014 8013DC14 0DD9030C */  jal        func_800F6434
    /* 4C018 8013DC18 02000424 */   addiu     $a0, $zero, 0x2
    /* 4C01C 8013DC1C 82004014 */  bnez       $v0, .L8013DE28
    /* 4C020 8013DC20 00000000 */   nop
    /* 4C024 8013DC24 59D9030C */  jal        func_800F6564
    /* 4C028 8013DC28 66F40434 */   ori       $a0, $zero, 0xF466
    /* 4C02C 8013DC2C 0DD9030C */  jal        func_800F6434
    /* 4C030 8013DC30 80000424 */   addiu     $a0, $zero, 0x80
    /* 4C034 8013DC34 7C004014 */  bnez       $v0, .L8013DE28
    /* 4C038 8013DC38 00000000 */   nop
    /* 4C03C 8013DC3C 4BF4040C */  jal        func_8013D12C
    /* 4C040 8013DC40 00000000 */   nop
    /* 4C044 8013DC44 EEE3030C */  jal        func_800F8FB8
    /* 4C048 8013DC48 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 4C04C 8013DC4C C7E5030C */  jal        func_800F971C
    /* 4C050 8013DC50 00000000 */   nop
    /* 4C054 8013DC54 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C058 8013DC58 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C05C 8013DC5C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4C060 8013DC60 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4C064 8013DC64 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C068 8013DC68 00000000 */  nop
    /* 4C06C 8013DC6C 000083A4 */  sh         $v1, 0x0($a0)
  .L8013DC70:
    /* 4C070 8013DC70 5CDB030C */  jal        func_800F6D70
    /* 4C074 8013DC74 99F00434 */   ori       $a0, $zero, 0xF099
    /* 4C078 8013DC78 58E2030C */  jal        func_800F8960
    /* 4C07C 8013DC7C 9EF00434 */   ori       $a0, $zero, 0xF09E
    /* 4C080 8013DC80 EFD8030C */  jal        func_800F63BC
    /* 4C084 8013DC84 00000000 */   nop
    /* 4C088 8013DC88 A4D6030C */  jal        func_800F5A90
    /* 4C08C 8013DC8C 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C090 8013DC90 F5D4030C */  jal        func_800F53D4
    /* 4C094 8013DC94 00000000 */   nop
    /* 4C098 8013DC98 F5FF4010 */  beqz       $v0, .L8013DC70
    /* 4C09C 8013DC9C 00000000 */   nop
  .L8013DCA0:
    /* 4C0A0 8013DCA0 5601050C */  jal        func_80140558
    /* 4C0A4 8013DCA4 00000000 */   nop
    /* 4C0A8 8013DCA8 59D9030C */  jal        func_800F6564
    /* 4C0AC 8013DCAC 67F40434 */   ori       $a0, $zero, 0xF467
    /* 4C0B0 8013DCB0 93E0030C */  jal        func_800F824C
    /* 4C0B4 8013DCB4 21200000 */   addu      $a0, $zero, $zero
    /* 4C0B8 8013DCB8 C7E5030C */  jal        func_800F971C
    /* 4C0BC 8013DCBC 00000000 */   nop
    /* 4C0C0 8013DCC0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C0C4 8013DCC4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C0C8 8013DCC8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4C0CC 8013DCCC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4C0D0 8013DCD0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C0D4 8013DCD4 00000000 */  nop
    /* 4C0D8 8013DCD8 000083A4 */  sh         $v1, 0x0($a0)
  .L8013DCDC:
    /* 4C0DC 8013DCDC 0FCF030C */  jal        func_800F3C3C
    /* 4C0E0 8013DCE0 21200000 */   addu      $a0, $zero, $zero
    /* 4C0E4 8013DCE4 CAD3030C */  jal        func_800F4F28
    /* 4C0E8 8013DCE8 21204000 */   addu      $a0, $v0, $zero
    /* 4C0EC 8013DCEC EBD3030C */  jal        func_800F4FAC
    /* 4C0F0 8013DCF0 01010424 */   addiu     $a0, $zero, 0x101
    /* 4C0F4 8013DCF4 25004014 */  bnez       $v0, .L8013DD8C
    /* 4C0F8 8013DCF8 00000000 */   nop
    /* 4C0FC 8013DCFC 53D9030C */  jal        func_800F654C
    /* 4C100 8013DD00 07000424 */   addiu     $a0, $zero, 0x7
    /* 4C104 8013DD04 58E2030C */  jal        func_800F8960
    /* 4C108 8013DD08 99F00434 */   ori       $a0, $zero, 0xF099
    /* 4C10C 8013DD0C 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 4C110 8013DD10 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 4C114 8013DD14 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 4C118 8013DD18 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 4C11C 8013DD1C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C120 8013DD20 00000000 */  nop
    /* 4C124 8013DD24 000082A0 */  sb         $v0, 0x0($a0)
    /* 4C128 8013DD28 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4C12C 8013DD2C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4C130 8013DD30 00000000 */  nop
    /* 4C134 8013DD34 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C138 8013DD38 00000000 */  nop
    /* 4C13C 8013DD3C 00110200 */  sll        $v0, $v0, 4
    /* 4C140 8013DD40 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C144 8013DD44 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 4C148 8013DD48 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 4C14C 8013DD4C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4C150 8013DD50 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4C154 8013DD54 00008294 */  lhu        $v0, 0x0($a0)
    /* 4C158 8013DD58 4E000424 */  addiu      $a0, $zero, 0x4E
    /* 4C15C 8013DD5C 8CD9030C */  jal        func_800F6630
    /* 4C160 8013DD60 000062A4 */   sh        $v0, 0x0($v1)
    /* 4C164 8013DD64 92D0030C */  jal        func_800F4248
    /* 4C168 8013DD68 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C16C 8013DD6C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4C170 8013DD70 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4C174 8013DD74 00000000 */  nop
    /* 4C178 8013DD78 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C17C 8013DD7C C7EF0434 */  ori        $a0, $zero, 0xEFC7
    /* 4C180 8013DD80 04004238 */  xori       $v0, $v0, 0x4
    /* 4C184 8013DD84 DAE1030C */  jal        func_800F8768
    /* 4C188 8013DD88 000062A0 */   sb        $v0, 0x0($v1)
  .L8013DD8C:
    /* 4C18C 8013DD8C EFD8030C */  jal        func_800F63BC
    /* 4C190 8013DD90 00000000 */   nop
    /* 4C194 8013DD94 A4D6030C */  jal        func_800F5A90
    /* 4C198 8013DD98 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C19C 8013DD9C F5D4030C */  jal        func_800F53D4
    /* 4C1A0 8013DDA0 00000000 */   nop
    /* 4C1A4 8013DDA4 CDFF4010 */  beqz       $v0, .L8013DCDC
    /* 4C1A8 8013DDA8 00000000 */   nop
    /* 4C1AC 8013DDAC AFD8030C */  jal        func_800F62BC
    /* 4C1B0 8013DDB0 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 4C1B4 8013DDB4 8CD9030C */  jal        func_800F6630
    /* 4C1B8 8013DDB8 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 4C1BC 8013DDBC 5DD5030C */  jal        func_800F5574
    /* 4C1C0 8013DDC0 10000424 */   addiu     $a0, $zero, 0x10
    /* 4C1C4 8013DDC4 F5D4030C */  jal        func_800F53D4
    /* 4C1C8 8013DDC8 00000000 */   nop
    /* 4C1CC 8013DDCC B4FF4010 */  beqz       $v0, .L8013DCA0
    /* 4C1D0 8013DDD0 00000000 */   nop
    /* 4C1D4 8013DDD4 C7E5030C */  jal        func_800F971C
    /* 4C1D8 8013DDD8 00000000 */   nop
    /* 4C1DC 8013DDDC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C1E0 8013DDE0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C1E4 8013DDE4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4C1E8 8013DDE8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4C1EC 8013DDEC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C1F0 8013DDF0 00000000 */  nop
    /* 4C1F4 8013DDF4 000083A4 */  sh         $v1, 0x0($a0)
  .L8013DDF8:
    /* 4C1F8 8013DDF8 5CDB030C */  jal        func_800F6D70
    /* 4C1FC 8013DDFC 9EF00434 */   ori       $a0, $zero, 0xF09E
    /* 4C200 8013DE00 58E2030C */  jal        func_800F8960
    /* 4C204 8013DE04 99F00434 */   ori       $a0, $zero, 0xF099
    /* 4C208 8013DE08 EFD8030C */  jal        func_800F63BC
    /* 4C20C 8013DE0C 00000000 */   nop
    /* 4C210 8013DE10 A4D6030C */  jal        func_800F5A90
    /* 4C214 8013DE14 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C218 8013DE18 F5D4030C */  jal        func_800F53D4
    /* 4C21C 8013DE1C 00000000 */   nop
    /* 4C220 8013DE20 F5FF4010 */  beqz       $v0, .L8013DDF8
    /* 4C224 8013DE24 00000000 */   nop
  .L8013DE28:
    /* 4C228 8013DE28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C22C 8013DE2C 00000000 */  nop
    /* 4C230 8013DE30 0800E003 */  jr         $ra
    /* 4C234 8013DE34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013DC04
