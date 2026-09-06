nonmatching func_8010DA88, 0x510

glabel func_8010DA88
    /* 1BE88 8010DA88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1BE8C 8010DA8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1BE90 8010DA90 655D040C */  jal        func_80117594
    /* 1BE94 8010DA94 00000000 */   nop
    /* 1BE98 8010DA98 EEE3030C */  jal        func_800F8FB8
    /* 1BE9C 8010DA9C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1BEA0 8010DAA0 50D4030C */  jal        func_800F5140
    /* 1BEA4 8010DAA4 00000000 */   nop
    /* 1BEA8 8010DAA8 D3D3030C */  jal        func_800F4F4C
    /* 1BEAC 8010DAAC 00000000 */   nop
    /* 1BEB0 8010DAB0 0FCF030C */  jal        func_800F3C3C
    /* 1BEB4 8010DAB4 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1BEB8 8010DAB8 90DE030C */  jal        func_800F7A40
    /* 1BEBC 8010DABC 21204000 */   addu      $a0, $v0, $zero
    /* 1BEC0 8010DAC0 9ADE030C */  jal        func_800F7A68
    /* 1BEC4 8010DAC4 00000000 */   nop
    /* 1BEC8 8010DAC8 93E0030C */  jal        func_800F824C
    /* 1BECC 8010DACC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1BED0 8010DAD0 9CDC030C */  jal        func_800F7270
    /* 1BED4 8010DAD4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1BED8 8010DAD8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 1BEDC 8010DADC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 1BEE0 8010DAE0 00000000 */  nop
    /* 1BEE4 8010DAE4 00004494 */  lhu        $a0, 0x0($v0)
    /* 1BEE8 8010DAE8 00000000 */  nop
    /* 1BEEC 8010DAEC 8100832C */  sltiu      $v1, $a0, 0x81
    /* 1BEF0 8010DAF0 25016010 */  beqz       $v1, .L8010DF88
    /* 1BEF4 8010DAF4 0F80023C */   lui       $v0, %hi(jtbl_800F2460)
    /* 1BEF8 8010DAF8 60244224 */  addiu      $v0, $v0, %lo(jtbl_800F2460)
    /* 1BEFC 8010DAFC 80180400 */  sll        $v1, $a0, 2
    /* 1BF00 8010DB00 21186200 */  addu       $v1, $v1, $v0
    /* 1BF04 8010DB04 0000648C */  lw         $a0, 0x0($v1)
    /* 1BF08 8010DB08 00000000 */  nop
    /* 1BF0C 8010DB0C 08008000 */  jr         $a0
    /* 1BF10 8010DB10 00000000 */   nop
  jlabel .L8010DB14
    /* 1BF14 8010DB14 6550040C */  jal        func_80114194
    /* 1BF18 8010DB18 00000000 */   nop
    /* 1BF1C 8010DB1C E2370408 */  j          .L8010DF88
    /* 1BF20 8010DB20 00000000 */   nop
  jlabel .L8010DB24
    /* 1BF24 8010DB24 BF50040C */  jal        func_801142FC
    /* 1BF28 8010DB28 00000000 */   nop
    /* 1BF2C 8010DB2C E2370408 */  j          .L8010DF88
    /* 1BF30 8010DB30 00000000 */   nop
  jlabel .L8010DB34
    /* 1BF34 8010DB34 334F040C */  jal        func_80113CCC
    /* 1BF38 8010DB38 00000000 */   nop
    /* 1BF3C 8010DB3C E2370408 */  j          .L8010DF88
    /* 1BF40 8010DB40 00000000 */   nop
  jlabel .L8010DB44
    /* 1BF44 8010DB44 9A4A040C */  jal        func_80112A68
    /* 1BF48 8010DB48 00000000 */   nop
    /* 1BF4C 8010DB4C E2370408 */  j          .L8010DF88
    /* 1BF50 8010DB50 00000000 */   nop
  jlabel .L8010DB54
    /* 1BF54 8010DB54 174A040C */  jal        func_8011285C
    /* 1BF58 8010DB58 00000000 */   nop
    /* 1BF5C 8010DB5C E2370408 */  j          .L8010DF88
    /* 1BF60 8010DB60 00000000 */   nop
  jlabel .L8010DB64
    /* 1BF64 8010DB64 3D48040C */  jal        func_801120F4
    /* 1BF68 8010DB68 00000000 */   nop
    /* 1BF6C 8010DB6C E2370408 */  j          .L8010DF88
    /* 1BF70 8010DB70 00000000 */   nop
  jlabel .L8010DB74
    /* 1BF74 8010DB74 734F040C */  jal        func_80113DCC
    /* 1BF78 8010DB78 00000000 */   nop
    /* 1BF7C 8010DB7C E2370408 */  j          .L8010DF88
    /* 1BF80 8010DB80 00000000 */   nop
  jlabel .L8010DB84
    /* 1BF84 8010DB84 814F040C */  jal        func_80113E04
    /* 1BF88 8010DB88 00000000 */   nop
    /* 1BF8C 8010DB8C E2370408 */  j          .L8010DF88
    /* 1BF90 8010DB90 00000000 */   nop
  jlabel .L8010DB94
    /* 1BF94 8010DB94 0F4E040C */  jal        func_8011383C
    /* 1BF98 8010DB98 00000000 */   nop
    /* 1BF9C 8010DB9C E2370408 */  j          .L8010DF88
    /* 1BFA0 8010DBA0 00000000 */   nop
  jlabel .L8010DBA4
    /* 1BFA4 8010DBA4 7148040C */  jal        func_801121C4
    /* 1BFA8 8010DBA8 00000000 */   nop
    /* 1BFAC 8010DBAC E2370408 */  j          .L8010DF88
    /* 1BFB0 8010DBB0 00000000 */   nop
  jlabel .L8010DBB4
    /* 1BFB4 8010DBB4 CD47040C */  jal        func_80111F34
    /* 1BFB8 8010DBB8 00000000 */   nop
    /* 1BFBC 8010DBBC E2370408 */  j          .L8010DF88
    /* 1BFC0 8010DBC0 00000000 */   nop
  jlabel .L8010DBC4
    /* 1BFC4 8010DBC4 E547040C */  jal        func_80111F94
    /* 1BFC8 8010DBC8 00000000 */   nop
    /* 1BFCC 8010DBCC E2370408 */  j          .L8010DF88
    /* 1BFD0 8010DBD0 00000000 */   nop
  jlabel .L8010DBD4
    /* 1BFD4 8010DBD4 B54D040C */  jal        func_801136D4
    /* 1BFD8 8010DBD8 00000000 */   nop
    /* 1BFDC 8010DBDC E2370408 */  j          .L8010DF88
    /* 1BFE0 8010DBE0 00000000 */   nop
  jlabel .L8010DBE4
    /* 1BFE4 8010DBE4 BD47040C */  jal        func_80111EF4
    /* 1BFE8 8010DBE8 00000000 */   nop
    /* 1BFEC 8010DBEC E2370408 */  j          .L8010DF88
    /* 1BFF0 8010DBF0 00000000 */   nop
  jlabel .L8010DBF4
    /* 1BFF4 8010DBF4 A849040C */  jal        func_801126A0
    /* 1BFF8 8010DBF8 00000000 */   nop
    /* 1BFFC 8010DBFC E2370408 */  j          .L8010DF88
    /* 1C000 8010DC00 00000000 */   nop
  jlabel .L8010DC04
    /* 1C004 8010DC04 3346040C */  jal        func_801118CC
    /* 1C008 8010DC08 00000000 */   nop
    /* 1C00C 8010DC0C E2370408 */  j          .L8010DF88
    /* 1C010 8010DC10 00000000 */   nop
  jlabel .L8010DC14
    /* 1C014 8010DC14 7C45040C */  jal        func_801115F0
    /* 1C018 8010DC18 00000000 */   nop
    /* 1C01C 8010DC1C E2370408 */  j          .L8010DF88
    /* 1C020 8010DC20 00000000 */   nop
  jlabel .L8010DC24
    /* 1C024 8010DC24 9344040C */  jal        func_8011124C
    /* 1C028 8010DC28 00000000 */   nop
    /* 1C02C 8010DC2C E2370408 */  j          .L8010DF88
    /* 1C030 8010DC30 00000000 */   nop
  jlabel .L8010DC34
    /* 1C034 8010DC34 F051040C */  jal        func_801147C0
    /* 1C038 8010DC38 00000000 */   nop
    /* 1C03C 8010DC3C E2370408 */  j          .L8010DF88
    /* 1C040 8010DC40 00000000 */   nop
  jlabel .L8010DC44
    /* 1C044 8010DC44 2052040C */  jal        func_80114880
    /* 1C048 8010DC48 00000000 */   nop
    /* 1C04C 8010DC4C E2370408 */  j          .L8010DF88
    /* 1C050 8010DC50 00000000 */   nop
  jlabel .L8010DC54
    /* 1C054 8010DC54 4E52040C */  jal        func_80114938
    /* 1C058 8010DC58 00000000 */   nop
    /* 1C05C 8010DC5C E2370408 */  j          .L8010DF88
    /* 1C060 8010DC60 00000000 */   nop
  jlabel .L8010DC64
    /* 1C064 8010DC64 E251040C */  jal        func_80114788
    /* 1C068 8010DC68 00000000 */   nop
    /* 1C06C 8010DC6C E2370408 */  j          .L8010DF88
    /* 1C070 8010DC70 00000000 */   nop
  jlabel .L8010DC74
    /* 1C074 8010DC74 6F54040C */  jal        func_801151BC
    /* 1C078 8010DC78 00000000 */   nop
    /* 1C07C 8010DC7C E2370408 */  j          .L8010DF88
    /* 1C080 8010DC80 00000000 */   nop
  jlabel .L8010DC84
    /* 1C084 8010DC84 7253040C */  jal        func_80114DC8
    /* 1C088 8010DC88 00000000 */   nop
    /* 1C08C 8010DC8C E2370408 */  j          .L8010DF88
    /* 1C090 8010DC90 00000000 */   nop
  jlabel .L8010DC94
    /* 1C094 8010DC94 AF53040C */  jal        func_80114EBC
    /* 1C098 8010DC98 00000000 */   nop
    /* 1C09C 8010DC9C E2370408 */  j          .L8010DF88
    /* 1C0A0 8010DCA0 00000000 */   nop
  jlabel .L8010DCA4
    /* 1C0A4 8010DCA4 3344040C */  jal        func_801110CC
    /* 1C0A8 8010DCA8 00000000 */   nop
    /* 1C0AC 8010DCAC E2370408 */  j          .L8010DF88
    /* 1C0B0 8010DCB0 00000000 */   nop
  jlabel .L8010DCB4
    /* 1C0B4 8010DCB4 4D44040C */  jal        func_80111134
    /* 1C0B8 8010DCB8 00000000 */   nop
    /* 1C0BC 8010DCBC E2370408 */  j          .L8010DF88
    /* 1C0C0 8010DCC0 00000000 */   nop
  jlabel .L8010DCC4
    /* 1C0C4 8010DCC4 5F44040C */  jal        func_8011117C
    /* 1C0C8 8010DCC8 00000000 */   nop
    /* 1C0CC 8010DCCC E2370408 */  j          .L8010DF88
    /* 1C0D0 8010DCD0 00000000 */   nop
  jlabel .L8010DCD4
    /* 1C0D4 8010DCD4 0B44040C */  jal        func_8011102C
    /* 1C0D8 8010DCD8 00000000 */   nop
    /* 1C0DC 8010DCDC E2370408 */  j          .L8010DF88
    /* 1C0E0 8010DCE0 00000000 */   nop
  jlabel .L8010DCE4
    /* 1C0E4 8010DCE4 F943040C */  jal        func_80110FE4
    /* 1C0E8 8010DCE8 00000000 */   nop
    /* 1C0EC 8010DCEC E2370408 */  j          .L8010DF88
    /* 1C0F0 8010DCF0 00000000 */   nop
  jlabel .L8010DCF4
    /* 1C0F4 8010DCF4 914D040C */  jal        func_80113644
    /* 1C0F8 8010DCF8 00000000 */   nop
    /* 1C0FC 8010DCFC E2370408 */  j          .L8010DF88
    /* 1C100 8010DD00 00000000 */   nop
  jlabel .L8010DD04
    /* 1C104 8010DD04 6A42040C */  jal        func_801109A8
    /* 1C108 8010DD08 00000000 */   nop
    /* 1C10C 8010DD0C E2370408 */  j          .L8010DF88
    /* 1C110 8010DD10 00000000 */   nop
  jlabel .L8010DD14
    /* 1C114 8010DD14 953C040C */  jal        func_8010F254
    /* 1C118 8010DD18 00000000 */   nop
    /* 1C11C 8010DD1C E2370408 */  j          .L8010DF88
    /* 1C120 8010DD20 00000000 */   nop
  jlabel .L8010DD24
    /* 1C124 8010DD24 BD3C040C */  jal        func_8010F2F4
    /* 1C128 8010DD28 00000000 */   nop
    /* 1C12C 8010DD2C E2370408 */  j          .L8010DF88
    /* 1C130 8010DD30 00000000 */   nop
  jlabel .L8010DD34
    /* 1C134 8010DD34 513E040C */  jal        func_8010F944
    /* 1C138 8010DD38 00000000 */   nop
    /* 1C13C 8010DD3C E2370408 */  j          .L8010DF88
    /* 1C140 8010DD40 00000000 */   nop
  jlabel .L8010DD44
    /* 1C144 8010DD44 D63E040C */  jal        func_8010FB58
    /* 1C148 8010DD48 00000000 */   nop
    /* 1C14C 8010DD4C E2370408 */  j          .L8010DF88
    /* 1C150 8010DD50 00000000 */   nop
  jlabel .L8010DD54
    /* 1C154 8010DD54 4C3F040C */  jal        func_8010FD30
    /* 1C158 8010DD58 00000000 */   nop
    /* 1C15C 8010DD5C E2370408 */  j          .L8010DF88
    /* 1C160 8010DD60 00000000 */   nop
  jlabel .L8010DD64
    /* 1C164 8010DD64 BB3F040C */  jal        func_8010FEEC
    /* 1C168 8010DD68 00000000 */   nop
    /* 1C16C 8010DD6C E2370408 */  j          .L8010DF88
    /* 1C170 8010DD70 00000000 */   nop
  jlabel .L8010DD74
    /* 1C174 8010DD74 7940040C */  jal        func_801101E4
    /* 1C178 8010DD78 00000000 */   nop
    /* 1C17C 8010DD7C E2370408 */  j          .L8010DF88
    /* 1C180 8010DD80 00000000 */   nop
  jlabel .L8010DD84
    /* 1C184 8010DD84 CD40040C */  jal        func_80110334
    /* 1C188 8010DD88 00000000 */   nop
    /* 1C18C 8010DD8C E2370408 */  j          .L8010DF88
    /* 1C190 8010DD90 00000000 */   nop
  jlabel .L8010DD94
    /* 1C194 8010DD94 1F44040C */  jal        func_8011107C
    /* 1C198 8010DD98 00000000 */   nop
    /* 1C19C 8010DD9C E2370408 */  j          .L8010DF88
    /* 1C1A0 8010DDA0 00000000 */   nop
  jlabel .L8010DDA4
    /* 1C1A4 8010DDA4 E841040C */  jal        func_801107A0
    /* 1C1A8 8010DDA8 00000000 */   nop
    /* 1C1AC 8010DDAC E2370408 */  j          .L8010DF88
    /* 1C1B0 8010DDB0 00000000 */   nop
  jlabel .L8010DDB4
    /* 1C1B4 8010DDB4 3F43040C */  jal        func_80110CFC
    /* 1C1B8 8010DDB8 00000000 */   nop
    /* 1C1BC 8010DDBC E2370408 */  j          .L8010DF88
    /* 1C1C0 8010DDC0 00000000 */   nop
  jlabel .L8010DDC4
    /* 1C1C4 8010DDC4 BC52040C */  jal        func_80114AF0
    /* 1C1C8 8010DDC8 00000000 */   nop
    /* 1C1CC 8010DDCC E2370408 */  j          .L8010DF88
    /* 1C1D0 8010DDD0 00000000 */   nop
  jlabel .L8010DDD4
    /* 1C1D4 8010DDD4 F052040C */  jal        func_80114BC0
    /* 1C1D8 8010DDD8 00000000 */   nop
    /* 1C1DC 8010DDDC E2370408 */  j          .L8010DF88
    /* 1C1E0 8010DDE0 00000000 */   nop
  jlabel .L8010DDE4
    /* 1C1E4 8010DDE4 753C040C */  jal        func_8010F1D4
    /* 1C1E8 8010DDE8 00000000 */   nop
    /* 1C1EC 8010DDEC E2370408 */  j          .L8010DF88
    /* 1C1F0 8010DDF0 00000000 */   nop
  jlabel .L8010DDF4
    /* 1C1F4 8010DDF4 473C040C */  jal        func_8010F11C
    /* 1C1F8 8010DDF8 00000000 */   nop
    /* 1C1FC 8010DDFC E2370408 */  j          .L8010DF88
    /* 1C200 8010DE00 00000000 */   nop
  jlabel .L8010DE04
    /* 1C204 8010DE04 513C040C */  jal        func_8010F144
    /* 1C208 8010DE08 00000000 */   nop
    /* 1C20C 8010DE0C E2370408 */  j          .L8010DF88
    /* 1C210 8010DE10 00000000 */   nop
  jlabel .L8010DE14
    /* 1C214 8010DE14 233C040C */  jal        func_8010F08C
    /* 1C218 8010DE18 00000000 */   nop
    /* 1C21C 8010DE1C E2370408 */  j          .L8010DF88
    /* 1C220 8010DE20 00000000 */   nop
  jlabel .L8010DE24
    /* 1C224 8010DE24 EC4C040C */  jal        func_801133B0
    /* 1C228 8010DE28 00000000 */   nop
    /* 1C22C 8010DE2C E2370408 */  j          .L8010DF88
    /* 1C230 8010DE30 00000000 */   nop
  jlabel .L8010DE34
    /* 1C234 8010DE34 C53A040C */  jal        func_8010EB14
    /* 1C238 8010DE38 00000000 */   nop
    /* 1C23C 8010DE3C E2370408 */  j          .L8010DF88
    /* 1C240 8010DE40 00000000 */   nop
  jlabel .L8010DE44
    /* 1C244 8010DE44 01000224 */  addiu      $v0, $zero, 0x1
    /* 1C248 8010DE48 1A80013C */  lui        $at, %hi(D_8019EE00)
    /* 1C24C 8010DE4C 00EE22A4 */  sh         $v0, %lo(D_8019EE00)($at)
    /* 1C250 8010DE50 633A040C */  jal        func_8010E98C
    /* 1C254 8010DE54 00000000 */   nop
    /* 1C258 8010DE58 1A80013C */  lui        $at, %hi(D_8019EE00)
    /* 1C25C 8010DE5C 00EE20A4 */  sh         $zero, %lo(D_8019EE00)($at)
    /* 1C260 8010DE60 E2370408 */  j          .L8010DF88
    /* 1C264 8010DE64 00000000 */   nop
  jlabel .L8010DE68
    /* 1C268 8010DE68 6339040C */  jal        func_8010E58C
    /* 1C26C 8010DE6C 00000000 */   nop
    /* 1C270 8010DE70 E2370408 */  j          .L8010DF88
    /* 1C274 8010DE74 00000000 */   nop
  jlabel .L8010DE78
    /* 1C278 8010DE78 0642040C */  jal        func_80110818
    /* 1C27C 8010DE7C 00000000 */   nop
    /* 1C280 8010DE80 E2370408 */  j          .L8010DF88
    /* 1C284 8010DE84 00000000 */   nop
  jlabel .L8010DE88
    /* 1C288 8010DE88 E238040C */  jal        func_8010E388
    /* 1C28C 8010DE8C 00000000 */   nop
    /* 1C290 8010DE90 E2370408 */  j          .L8010DF88
    /* 1C294 8010DE94 00000000 */   nop
  jlabel .L8010DE98
    /* 1C298 8010DE98 01000224 */  addiu      $v0, $zero, 0x1
    /* 1C29C 8010DE9C 35000324 */  addiu      $v1, $zero, 0x35
    /* 1C2A0 8010DEA0 040082A3 */  sb         $v0, %gp_rel(D_8019ED00)($gp)
    /* 1C2A4 8010DEA4 01000224 */  addiu      $v0, $zero, 0x1
    /* 1C2A8 8010DEA8 1A80013C */  lui        $at, %hi(D_8019EF28)
    /* 1C2AC 8010DEAC 28EF23AC */  sw         $v1, %lo(D_8019EF28)($at)
    /* 1C2B0 8010DEB0 1A80013C */  lui        $at, %hi(D_8019EF24)
    /* 1C2B4 8010DEB4 24EF22AC */  sw         $v0, %lo(D_8019EF24)($at)
    /* 1C2B8 8010DEB8 9E38040C */  jal        func_8010E278
    /* 1C2BC 8010DEBC 00000000 */   nop
    /* 1C2C0 8010DEC0 E2370408 */  j          .L8010DF88
    /* 1C2C4 8010DEC4 00000000 */   nop
  jlabel .L8010DEC8
    /* 1C2C8 8010DEC8 02000224 */  addiu      $v0, $zero, 0x2
    /* 1C2CC 8010DECC 040082A3 */  sb         $v0, %gp_rel(D_8019ED00)($gp)
    /* 1C2D0 8010DED0 AE38040C */  jal        func_8010E2B8
    /* 1C2D4 8010DED4 00000000 */   nop
    /* 1C2D8 8010DED8 E2370408 */  j          .L8010DF88
    /* 1C2DC 8010DEDC 00000000 */   nop
  jlabel .L8010DEE0
    /* 1C2E0 8010DEE0 3CE6050C */  jal        func_801798F0
    /* 1C2E4 8010DEE4 00000000 */   nop
    /* 1C2E8 8010DEE8 9CE5050C */  jal        func_80179670
    /* 1C2EC 8010DEEC 01000424 */   addiu     $a0, $zero, 0x1
    /* 1C2F0 8010DEF0 37000224 */  addiu      $v0, $zero, 0x37
    /* 1C2F4 8010DEF4 01000324 */  addiu      $v1, $zero, 0x1
    /* 1C2F8 8010DEF8 1A80013C */  lui        $at, %hi(D_8019EF28)
    /* 1C2FC 8010DEFC 28EF22AC */  sw         $v0, %lo(D_8019EF28)($at)
    /* 1C300 8010DF00 1A80013C */  lui        $at, %hi(D_8019EF24)
    /* 1C304 8010DF04 24EF23AC */  sw         $v1, %lo(D_8019EF24)($at)
    /* 1C308 8010DF08 4CE6050C */  jal        func_80179930
    /* 1C30C 8010DF0C 00000000 */   nop
    /* 1C310 8010DF10 BE38040C */  jal        func_8010E2F8
    /* 1C314 8010DF14 00000000 */   nop
    /* 1C318 8010DF18 E2370408 */  j          .L8010DF88
    /* 1C31C 8010DF1C 00000000 */   nop
  jlabel .L8010DF20
    /* 1C320 8010DF20 A34D040C */  jal        func_8011368C
    /* 1C324 8010DF24 00000000 */   nop
    /* 1C328 8010DF28 E2370408 */  j          .L8010DF88
    /* 1C32C 8010DF2C 00000000 */   nop
  jlabel .L8010DF30
    /* 1C330 8010DF30 5638040C */  jal        func_8010E158
    /* 1C334 8010DF34 00000000 */   nop
    /* 1C338 8010DF38 E2370408 */  j          .L8010DF88
    /* 1C33C 8010DF3C 00000000 */   nop
  jlabel .L8010DF40
    /* 1C340 8010DF40 1438040C */  jal        func_8010E050
    /* 1C344 8010DF44 00000000 */   nop
    /* 1C348 8010DF48 E2370408 */  j          .L8010DF88
    /* 1C34C 8010DF4C 00000000 */   nop
  jlabel .L8010DF50
    /* 1C350 8010DF50 2A38040C */  jal        func_8010E0A8
    /* 1C354 8010DF54 00000000 */   nop
    /* 1C358 8010DF58 E2370408 */  j          .L8010DF88
    /* 1C35C 8010DF5C 00000000 */   nop
  jlabel .L8010DF60
    /* 1C360 8010DF60 4038040C */  jal        func_8010E100
    /* 1C364 8010DF64 00000000 */   nop
    /* 1C368 8010DF68 E2370408 */  j          .L8010DF88
    /* 1C36C 8010DF6C 00000000 */   nop
  jlabel .L8010DF70
    /* 1C370 8010DF70 E637040C */  jal        func_8010DF98
    /* 1C374 8010DF74 00000000 */   nop
    /* 1C378 8010DF78 E2370408 */  j          .L8010DF88
    /* 1C37C 8010DF7C 00000000 */   nop
  jlabel .L8010DF80
    /* 1C380 8010DF80 9941040C */  jal        func_80110664
    /* 1C384 8010DF84 00000000 */   nop
  jlabel .L8010DF88
    /* 1C388 8010DF88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C38C 8010DF8C 00000000 */  nop
    /* 1C390 8010DF90 0800E003 */  jr         $ra
    /* 1C394 8010DF94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010DA88
