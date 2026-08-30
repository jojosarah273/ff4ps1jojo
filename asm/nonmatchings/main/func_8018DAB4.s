nonmatching func_8018DAB4, 0x1A4

glabel func_8018DAB4
    /* 9BEB4 8018DAB4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 9BEB8 8018DAB8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9BEBC 8018DABC 21888000 */  addu       $s1, $a0, $zero
    /* 9BEC0 8018DAC0 1A80043C */  lui        $a0, %hi(D_8019B584)
    /* 9BEC4 8018DAC4 84B5848C */  lw         $a0, %lo(D_8019B584)($a0)
    /* 9BEC8 8018DAC8 20000224 */  addiu      $v0, $zero, 0x20
    /* 9BECC 8018DACC 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 9BED0 8018DAD0 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9BED4 8018DAD4 F0008330 */  andi       $v1, $a0, 0xF0
    /* 9BED8 8018DAD8 09006210 */  beq        $v1, $v0, .L8018DB00
    /* 9BEDC 8018DADC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 9BEE0 8018DAE0 21006228 */  slti       $v0, $v1, 0x21
    /* 9BEE4 8018DAE4 56004014 */  bnez       $v0, .L8018DC40
    /* 9BEE8 8018DAE8 FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9BEEC 8018DAEC 30000224 */  addiu      $v0, $zero, 0x30
    /* 9BEF0 8018DAF0 0B006210 */  beq        $v1, $v0, .L8018DB20
    /* 9BEF4 8018DAF4 FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9BEF8 8018DAF8 10370608 */  j          .L8018DC40
    /* 9BEFC 8018DAFC 00000000 */   nop
  .L8018DB00:
    /* 9BF00 8018DB00 22000224 */  addiu      $v0, $zero, 0x22
    /* 9BF04 8018DB04 4E008214 */  bne        $a0, $v0, .L8018DC40
    /* 9BF08 8018DB08 FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9BF0C 8018DB0C 30000224 */  addiu      $v0, $zero, 0x30
    /* 9BF10 8018DB10 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9BF14 8018DB14 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9BF18 8018DB18 D1360608 */  j          .L8018DB44
    /* 9BF1C 8018DB1C 21282002 */   addu      $a1, $s1, $zero
  .L8018DB20:
    /* 9BF20 8018DB20 01000324 */  addiu      $v1, $zero, 0x1
    /* 9BF24 8018DB24 1F80013C */  lui        $at, %hi(D_801F6964)
    /* 9BF28 8018DB28 646923AC */  sw         $v1, %lo(D_801F6964)($at)
    /* 9BF2C 8018DB2C 1A80013C */  lui        $at, %hi(D_8019B590)
    /* 9BF30 8018DB30 90B531AC */  sw         $s1, %lo(D_8019B590)($at)
    /* 9BF34 8018DB34 1F80013C */  lui        $at, %hi(D_801F6964)
    /* 9BF38 8018DB38 646920AC */  sw         $zero, %lo(D_801F6964)($at)
    /* 9BF3C 8018DB3C 10370608 */  j          .L8018DC40
    /* 9BF40 8018DB40 01000224 */   addiu     $v0, $zero, 0x1
  .L8018DB44:
    /* 9BF44 8018DB44 21800000 */  addu       $s0, $zero, $zero
    /* 9BF48 8018DB48 01001224 */  addiu      $s2, $zero, 0x1
    /* 9BF4C 8018DB4C 04101202 */  sllv       $v0, $s2, $s0
  .L8018DB50:
    /* 9BF50 8018DB50 2410A200 */  and        $v0, $a1, $v0
    /* 9BF54 8018DB54 05004014 */  bnez       $v0, .L8018DB6C
    /* 9BF58 8018DB58 00000000 */   nop
    /* 9BF5C 8018DB5C 01001026 */  addiu      $s0, $s0, 0x1
    /* 9BF60 8018DB60 1800022A */  slti       $v0, $s0, 0x18
    /* 9BF64 8018DB64 FAFF4014 */  bnez       $v0, .L8018DB50
    /* 9BF68 8018DB68 04101202 */   sllv      $v0, $s2, $s0
  .L8018DB6C:
    /* 9BF6C 8018DB6C 8231060C */  jal        func_8018C608
    /* 9BF70 8018DB70 01000424 */   addiu     $a0, $zero, 0x1
    /* 9BF74 8018DB74 1A80023C */  lui        $v0, %hi(D_8019B100)
    /* 9BF78 8018DB78 00B1428C */  lw         $v0, %lo(D_8019B100)($v0)
    /* 9BF7C 8018DB7C 00000000 */  nop
    /* 9BF80 8018DB80 01004230 */  andi       $v0, $v0, 0x1
    /* 9BF84 8018DB84 03004010 */  beqz       $v0, .L8018DB94
    /* 9BF88 8018DB88 00000000 */   nop
    /* 9BF8C 8018DB8C 3238060C */  jal        func_8018E0C8
    /* 9BF90 8018DB90 01000424 */   addiu     $a0, $zero, 0x1
  .L8018DB94:
    /* 9BF94 8018DB94 1980043C */  lui        $a0, %hi(func_8018D82C)
    /* 9BF98 8018DB98 2CD88424 */  addiu      $a0, $a0, %lo(func_8018D82C)
    /* 9BF9C 8018DB9C 1A80013C */  lui        $at, %hi(D_8019B588)
    /* 9BFA0 8018DBA0 88B531AC */  sw         $s1, %lo(D_8019B588)($at)
    /* 9BFA4 8018DBA4 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9BFA8 8018DBA8 8CB531AC */  sw         $s1, %lo(D_8019B58C)($at)
    /* 9BFAC 8018DBAC 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9BFB0 8018DBB0 A4B520AC */  sw         $zero, %lo(D_8019B5A4)($at)
    /* 9BFB4 8018DBB4 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9BFB8 8018DBB8 2E39060C */  jal        func_8018E4B8
    /* 9BFBC 8018DBBC A0B520AC */   sw        $zero, %lo(D_8019B5A0)($at)
    /* 9BFC0 8018DBC0 1F80033C */  lui        $v1, %hi(D_801F67D4)
    /* 9BFC4 8018DBC4 D467638C */  lw         $v1, %lo(D_801F67D4)($v1)
    /* 9BFC8 8018DBC8 1F80013C */  lui        $at, %hi(D_801F67B0)
    /* 9BFCC 8018DBCC 03006010 */  beqz       $v1, .L8018DBDC
    /* 9BFD0 8018DBD0 B06722AC */   sw        $v0, %lo(D_801F67B0)($at)
    /* 9BFD4 8018DBD4 FA2A060C */  jal        func_8018ABE8
    /* 9BFD8 8018DBD8 21200000 */   addu      $a0, $zero, $zero
  .L8018DBDC:
    /* 9BFDC 8018DBDC 1980043C */  lui        $a0, %hi(func_8018D3C8)
    /* 9BFE0 8018DBE0 1239060C */  jal        func_8018E448
    /* 9BFE4 8018DBE4 C8D38424 */   addiu     $a0, $a0, %lo(func_8018D3C8)
    /* 9BFE8 8018DBE8 21200002 */  addu       $a0, $s0, $zero
    /* 9BFEC 8018DBEC 1F80013C */  lui        $at, %hi(D_801F67B4)
    /* 9BFF0 8018DBF0 B46722AC */  sw         $v0, %lo(D_801F67B4)($at)
    /* 9BFF4 8018DBF4 1F80013C */  lui        $at, %hi(D_801F695C)
    /* 9BFF8 8018DBF8 5C6932AC */  sw         $s2, %lo(D_801F695C)($at)
    /* 9BFFC 8018DBFC 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9C000 8018DC00 BC6724AC */  sw         $a0, %lo(D_801F67BC)($at)
    /* 9C004 8018DC04 1F80013C */  lui        $at, %hi(D_801F67B8)
    /* 9C008 8018DC08 6B34060C */  jal        func_8018D1AC
    /* 9C00C 8018DC0C B86724AC */   sw        $a0, %lo(D_801F67B8)($at)
    /* 9C010 8018DC10 21200000 */  addu       $a0, $zero, $zero
    /* 9C014 8018DC14 B238060C */  jal        func_8018E2C8
    /* 9C018 8018DC18 21804000 */   addu      $s0, $v0, $zero
    /* 9C01C 8018DC1C 0C00058E */  lw         $a1, 0xC($s0)
    /* 9C020 8018DC20 1F80063C */  lui        $a2, %hi(D_801F6958)
    /* 9C024 8018DC24 5869C68C */  lw         $a2, %lo(D_801F6958)($a2)
    /* 9C028 8018DC28 31000224 */  addiu      $v0, $zero, 0x31
    /* 9C02C 8018DC2C 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9C030 8018DC30 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9C034 8018DC34 D729060C */  jal        func_8018A75C
    /* 9C038 8018DC38 03000424 */   addiu     $a0, $zero, 0x3
    /* 9C03C 8018DC3C 01000224 */  addiu      $v0, $zero, 0x1
  .L8018DC40:
    /* 9C040 8018DC40 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 9C044 8018DC44 1800B28F */  lw         $s2, 0x18($sp)
    /* 9C048 8018DC48 1400B18F */  lw         $s1, 0x14($sp)
    /* 9C04C 8018DC4C 1000B08F */  lw         $s0, 0x10($sp)
    /* 9C050 8018DC50 0800E003 */  jr         $ra
    /* 9C054 8018DC54 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018DAB4
