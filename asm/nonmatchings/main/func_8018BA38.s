nonmatching func_8018BA38, 0x4D4

glabel func_8018BA38
    /* 99E38 8018BA38 78FFBD27 */  addiu      $sp, $sp, -0x88
    /* 99E3C 8018BA3C 6800B2AF */  sw         $s2, 0x68($sp)
    /* 99E40 8018BA40 21908000 */  addu       $s2, $a0, $zero
    /* 99E44 8018BA44 7C00B7AF */  sw         $s7, 0x7C($sp)
    /* 99E48 8018BA48 21B80000 */  addu       $s7, $zero, $zero
    /* 99E4C 8018BA4C 7000B4AF */  sw         $s4, 0x70($sp)
    /* 99E50 8018BA50 21A00000 */  addu       $s4, $zero, $zero
    /* 99E54 8018BA54 7800B6AF */  sw         $s6, 0x78($sp)
    /* 99E58 8018BA58 21B00000 */  addu       $s6, $zero, $zero
    /* 99E5C 8018BA5C 8400BFAF */  sw         $ra, 0x84($sp)
    /* 99E60 8018BA60 8000BEAF */  sw         $fp, 0x80($sp)
    /* 99E64 8018BA64 7400B5AF */  sw         $s5, 0x74($sp)
    /* 99E68 8018BA68 6C00B3AF */  sw         $s3, 0x6C($sp)
    /* 99E6C 8018BA6C 6400B1AF */  sw         $s1, 0x64($sp)
    /* 99E70 8018BA70 6000B0AF */  sw         $s0, 0x60($sp)
    /* 99E74 8018BA74 5800A0AF */  sw         $zero, 0x58($sp)
    /* 99E78 8018BA78 0000538E */  lw         $s3, 0x0($s2)
    /* 99E7C 8018BA7C 21F00000 */  addu       $fp, $zero, $zero
    /* 99E80 8018BA80 0100752E */  sltiu      $s5, $s3, 0x1
    /* 99E84 8018BA84 0400A016 */  bnez       $s5, .L8018BA98
    /* 99E88 8018BA88 1000A0AF */   sw        $zero, 0x10($sp)
    /* 99E8C 8018BA8C 01006232 */  andi       $v0, $s3, 0x1
    /* 99E90 8018BA90 43004010 */  beqz       $v0, .L8018BBA0
    /* 99E94 8018BA94 00000000 */   nop
  .L8018BA98:
    /* 99E98 8018BA98 0400508E */  lw         $s0, 0x4($s2)
    /* 99E9C 8018BA9C 00000000 */  nop
    /* 99EA0 8018BAA0 00010232 */  andi       $v0, $s0, 0x100
    /* 99EA4 8018BAA4 04004010 */  beqz       $v0, .L8018BAB8
    /* 99EA8 8018BAA8 FFFE0224 */   addiu     $v0, $zero, -0x101
    /* 99EAC 8018BAAC 24800202 */  and        $s0, $s0, $v0
    /* 99EB0 8018BAB0 01000824 */  addiu      $t0, $zero, 0x1
    /* 99EB4 8018BAB4 5800A8AF */  sw         $t0, 0x58($sp)
  .L8018BAB8:
    /* 99EB8 8018BAB8 0A00022E */  sltiu      $v0, $s0, 0xA
    /* 99EBC 8018BABC 09004010 */  beqz       $v0, .L8018BAE4
    /* 99EC0 8018BAC0 80101000 */   sll       $v0, $s0, 2
    /* 99EC4 8018BAC4 1A80043C */  lui        $a0, %hi(D_8019B6D4)
    /* 99EC8 8018BAC8 21208200 */  addu       $a0, $a0, $v0
    /* 99ECC 8018BACC D4B6848C */  lw         $a0, %lo(D_8019B6D4)($a0)
    /* 99ED0 8018BAD0 1A80113C */  lui        $s1, %hi(D_8019B6D4)
    /* 99ED4 8018BAD4 6A2E060C */  jal        func_8018B9A8
    /* 99ED8 8018BAD8 D4B63126 */   addiu     $s1, $s1, %lo(D_8019B6D4)
    /* 99EDC 8018BADC 03004010 */  beqz       $v0, .L8018BAEC
    /* 99EE0 8018BAE0 01001424 */   addiu     $s4, $zero, 0x1
  .L8018BAE4:
    /* 99EE4 8018BAE4 B72F0608 */  j          .L8018BEDC
    /* 99EE8 8018BAE8 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L8018BAEC:
    /* 99EEC 8018BAEC 1000A627 */  addiu      $a2, $sp, 0x10
    /* 99EF0 8018BAF0 43000524 */  addiu      $a1, $zero, 0x43
    /* 99EF4 8018BAF4 1A80013C */  lui        $at, %hi(D_8019B0B8)
    /* 99EF8 8018BAF8 B8B030AC */  sw         $s0, %lo(D_8019B0B8)($at)
    /* 99EFC 8018BAFC 1A80033C */  lui        $v1, %hi(D_8019B0B8)
    /* 99F00 8018BB00 B8B0638C */  lw         $v1, %lo(D_8019B0B8)($v1)
    /* 99F04 8018BB04 FFFF0724 */  addiu      $a3, $zero, -0x1
    /* 99F08 8018BB08 80200300 */  sll        $a0, $v1, 2
    /* 99F0C 8018BB0C 21209100 */  addu       $a0, $a0, $s1
    /* 99F10 8018BB10 00110300 */  sll        $v0, $v1, 4
    /* 99F14 8018BB14 21104300 */  addu       $v0, $v0, $v1
    /* 99F18 8018BB18 80100200 */  sll        $v0, $v0, 2
    /* 99F1C 8018BB1C 1A80033C */  lui        $v1, %hi(D_8019B704)
    /* 99F20 8018BB20 04B76324 */  addiu      $v1, $v1, %lo(D_8019B704)
    /* 99F24 8018BB24 0000848C */  lw         $a0, 0x0($a0)
    /* 99F28 8018BB28 21184300 */  addu       $v1, $v0, $v1
    /* 99F2C 8018BB2C 1A80013C */  lui        $at, %hi(D_8019B0B0)
    /* 99F30 8018BB30 B0B024AC */  sw         $a0, %lo(D_8019B0B0)($at)
  .L8018BB34:
    /* 99F34 8018BB34 00006290 */  lbu        $v0, 0x0($v1)
    /* 99F38 8018BB38 01006324 */  addiu      $v1, $v1, 0x1
    /* 99F3C 8018BB3C FFFFA524 */  addiu      $a1, $a1, -0x1
    /* 99F40 8018BB40 0000C2A0 */  sb         $v0, 0x0($a2)
    /* 99F44 8018BB44 FBFFA714 */  bne        $a1, $a3, .L8018BB34
    /* 99F48 8018BB48 0100C624 */   addiu     $a2, $a2, 0x1
    /* 99F4C 8018BB4C 1A80043C */  lui        $a0, %hi(D_8019B0B8)
    /* 99F50 8018BB50 B8B08424 */  addiu      $a0, $a0, %lo(D_8019B0B8)
    /* 99F54 8018BB54 0000838C */  lw         $v1, 0x0($a0)
    /* 99F58 8018BB58 07000224 */  addiu      $v0, $zero, 0x7
    /* 99F5C 8018BB5C 05006210 */  beq        $v1, $v0, .L8018BB74
    /* 99F60 8018BB60 08000224 */   addiu     $v0, $zero, 0x8
    /* 99F64 8018BB64 07006210 */  beq        $v1, $v0, .L8018BB84
    /* 99F68 8018BB68 7F000224 */   addiu     $v0, $zero, 0x7F
    /* 99F6C 8018BB6C E42E0608 */  j          .L8018BB90
    /* 99F70 8018BB70 00000000 */   nop
  .L8018BB74:
    /* 99F74 8018BB74 7F000224 */  addiu      $v0, $zero, 0x7F
    /* 99F78 8018BB78 0C0082AC */  sw         $v0, 0xC($a0)
    /* 99F7C 8018BB7C E82E0608 */  j          .L8018BBA0
    /* 99F80 8018BB80 080082AC */   sw        $v0, 0x8($a0)
  .L8018BB84:
    /* 99F84 8018BB84 0C0080AC */  sw         $zero, 0xC($a0)
    /* 99F88 8018BB88 E82E0608 */  j          .L8018BBA0
    /* 99F8C 8018BB8C 080082AC */   sw        $v0, 0x8($a0)
  .L8018BB90:
    /* 99F90 8018BB90 1A80023C */  lui        $v0, %hi(D_8019B0C4)
    /* 99F94 8018BB94 C4B04224 */  addiu      $v0, $v0, %lo(D_8019B0C4)
    /* 99F98 8018BB98 000040AC */  sw         $zero, 0x0($v0)
    /* 99F9C 8018BB9C FCFF40AC */  sw         $zero, -0x4($v0)
  .L8018BBA0:
    /* 99FA0 8018BBA0 0300A016 */  bnez       $s5, .L8018BBB0
    /* 99FA4 8018BBA4 08006232 */   andi      $v0, $s3, 0x8
    /* 99FA8 8018BBA8 45004010 */  beqz       $v0, .L8018BCC0
    /* 99FAC 8018BBAC 00000000 */   nop
  .L8018BBB0:
    /* 99FB0 8018BBB0 1A80033C */  lui        $v1, %hi(D_8019B0B8)
    /* 99FB4 8018BBB4 B8B0638C */  lw         $v1, %lo(D_8019B0B8)($v1)
    /* 99FB8 8018BBB8 00000000 */  nop
    /* 99FBC 8018BBBC 09006228 */  slti       $v0, $v1, 0x9
    /* 99FC0 8018BBC0 3F004010 */  beqz       $v0, .L8018BCC0
    /* 99FC4 8018BBC4 07006228 */   slti      $v0, $v1, 0x7
    /* 99FC8 8018BBC8 3D004014 */  bnez       $v0, .L8018BCC0
    /* 99FCC 8018BBCC 00000000 */   nop
    /* 99FD0 8018BBD0 15008016 */  bnez       $s4, .L8018BC28
    /* 99FD4 8018BBD4 01001624 */   addiu     $s6, $zero, 0x1
    /* 99FD8 8018BBD8 1000A527 */  addiu      $a1, $sp, 0x10
    /* 99FDC 8018BBDC 43000424 */  addiu      $a0, $zero, 0x43
    /* 99FE0 8018BBE0 1A80023C */  lui        $v0, %hi(D_8019B0B8)
    /* 99FE4 8018BBE4 B8B0428C */  lw         $v0, %lo(D_8019B0B8)($v0)
    /* 99FE8 8018BBE8 FFFF0624 */  addiu      $a2, $zero, -0x1
    /* 99FEC 8018BBEC 00190200 */  sll        $v1, $v0, 4
    /* 99FF0 8018BBF0 21186200 */  addu       $v1, $v1, $v0
    /* 99FF4 8018BBF4 80180300 */  sll        $v1, $v1, 2
    /* 99FF8 8018BBF8 1A80023C */  lui        $v0, %hi(D_8019B704)
    /* 99FFC 8018BBFC 04B74224 */  addiu      $v0, $v0, %lo(D_8019B704)
    /* 9A000 8018BC00 21186200 */  addu       $v1, $v1, $v0
  .L8018BC04:
    /* 9A004 8018BC04 00006290 */  lbu        $v0, 0x0($v1)
    /* 9A008 8018BC08 01006324 */  addiu      $v1, $v1, 0x1
    /* 9A00C 8018BC0C FFFF8424 */  addiu      $a0, $a0, -0x1
    /* 9A010 8018BC10 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 9A014 8018BC14 FBFF8614 */  bne        $a0, $a2, .L8018BC04
    /* 9A018 8018BC18 0100A524 */   addiu     $a1, $a1, 0x1
    /* 9A01C 8018BC1C 010C023C */  lui        $v0, (0xC011C00 >> 16)
    /* 9A020 8018BC20 001C4234 */  ori        $v0, $v0, (0xC011C00 & 0xFFFF)
    /* 9A024 8018BC24 1000A2AF */  sw         $v0, 0x10($sp)
  .L8018BC28:
    /* 9A028 8018BC28 0281043C */  lui        $a0, (0x81020409 >> 16)
    /* 9A02C 8018BC2C 0C00428E */  lw         $v0, 0xC($s2)
    /* 9A030 8018BC30 09048434 */  ori        $a0, $a0, (0x81020409 & 0xFFFF)
    /* 9A034 8018BC34 401B0200 */  sll        $v1, $v0, 13
    /* 9A038 8018BC38 18006400 */  mult       $v1, $a0
    /* 9A03C 8018BC3C 10380000 */  mfhi       $a3
    /* 9A040 8018BC40 002B0200 */  sll        $a1, $v0, 12
    /* 9A044 8018BC44 00000000 */  nop
    /* 9A048 8018BC48 1800A400 */  mult       $a1, $a0
    /* 9A04C 8018BC4C 1A80013C */  lui        $at, %hi(D_8019B0C0)
    /* 9A050 8018BC50 C0B022AC */  sw         $v0, %lo(D_8019B0C0)($at)
    /* 9A054 8018BC54 2110E300 */  addu       $v0, $a3, $v1
    /* 9A058 8018BC58 83110200 */  sra        $v0, $v0, 6
    /* 9A05C 8018BC5C C31F0300 */  sra        $v1, $v1, 31
    /* 9A060 8018BC60 23104300 */  subu       $v0, $v0, $v1
    /* 9A064 8018BC64 1400A497 */  lhu        $a0, 0x14($sp)
    /* 9A068 8018BC68 3600A397 */  lhu        $v1, 0x36($sp)
    /* 9A06C 8018BC6C 23104400 */  subu       $v0, $v0, $a0
    /* 9A070 8018BC70 2800A2A7 */  sh         $v0, 0x28($sp)
    /* 9A074 8018BC74 1600A297 */  lhu        $v0, 0x16($sp)
    /* 9A078 8018BC78 10300000 */  mfhi       $a2
    /* 9A07C 8018BC7C 2120C500 */  addu       $a0, $a2, $a1
    /* 9A080 8018BC80 83210400 */  sra        $a0, $a0, 6
    /* 9A084 8018BC84 C32F0500 */  sra        $a1, $a1, 31
    /* 9A088 8018BC88 23208500 */  subu       $a0, $a0, $a1
    /* 9A08C 8018BC8C 23108200 */  subu       $v0, $a0, $v0
    /* 9A090 8018BC90 2A00A2A7 */  sh         $v0, 0x2A($sp)
    /* 9A094 8018BC94 2E00A297 */  lhu        $v0, 0x2E($sp)
    /* 9A098 8018BC98 21186400 */  addu       $v1, $v1, $a0
    /* 9A09C 8018BC9C 3400A3A7 */  sh         $v1, 0x34($sp)
    /* 9A0A0 8018BCA0 4E00A397 */  lhu        $v1, 0x4E($sp)
    /* 9A0A4 8018BCA4 21104400 */  addu       $v0, $v0, $a0
    /* 9A0A8 8018BCA8 2C00A2A7 */  sh         $v0, 0x2C($sp)
    /* 9A0AC 8018BCAC 4C00A297 */  lhu        $v0, 0x4C($sp)
    /* 9A0B0 8018BCB0 21186400 */  addu       $v1, $v1, $a0
    /* 9A0B4 8018BCB4 4A00A3A7 */  sh         $v1, 0x4A($sp)
    /* 9A0B8 8018BCB8 21104400 */  addu       $v0, $v0, $a0
    /* 9A0BC 8018BCBC 4800A2A7 */  sh         $v0, 0x48($sp)
  .L8018BCC0:
    /* 9A0C0 8018BCC0 0300A016 */  bnez       $s5, .L8018BCD0
    /* 9A0C4 8018BCC4 10006232 */   andi      $v0, $s3, 0x10
    /* 9A0C8 8018BCC8 32004010 */  beqz       $v0, .L8018BD94
    /* 9A0CC 8018BCCC 00000000 */   nop
  .L8018BCD0:
    /* 9A0D0 8018BCD0 1A80033C */  lui        $v1, %hi(D_8019B0B8)
    /* 9A0D4 8018BCD4 B8B0638C */  lw         $v1, %lo(D_8019B0B8)($v1)
    /* 9A0D8 8018BCD8 00000000 */  nop
    /* 9A0DC 8018BCDC 09006228 */  slti       $v0, $v1, 0x9
    /* 9A0E0 8018BCE0 2C004010 */  beqz       $v0, .L8018BD94
    /* 9A0E4 8018BCE4 07006228 */   slti      $v0, $v1, 0x7
    /* 9A0E8 8018BCE8 2A004014 */  bnez       $v0, .L8018BD94
    /* 9A0EC 8018BCEC 00000000 */   nop
    /* 9A0F0 8018BCF0 19008016 */  bnez       $s4, .L8018BD58
    /* 9A0F4 8018BCF4 01001E24 */   addiu     $fp, $zero, 0x1
    /* 9A0F8 8018BCF8 1300C016 */  bnez       $s6, .L8018BD48
    /* 9A0FC 8018BCFC 1000A527 */   addiu     $a1, $sp, 0x10
    /* 9A100 8018BD00 43000424 */  addiu      $a0, $zero, 0x43
    /* 9A104 8018BD04 1A80023C */  lui        $v0, %hi(D_8019B0B8)
    /* 9A108 8018BD08 B8B0428C */  lw         $v0, %lo(D_8019B0B8)($v0)
    /* 9A10C 8018BD0C FFFF0624 */  addiu      $a2, $zero, -0x1
    /* 9A110 8018BD10 00190200 */  sll        $v1, $v0, 4
    /* 9A114 8018BD14 21186200 */  addu       $v1, $v1, $v0
    /* 9A118 8018BD18 80180300 */  sll        $v1, $v1, 2
    /* 9A11C 8018BD1C 1A80023C */  lui        $v0, %hi(D_8019B704)
    /* 9A120 8018BD20 04B74224 */  addiu      $v0, $v0, %lo(D_8019B704)
    /* 9A124 8018BD24 21186200 */  addu       $v1, $v1, $v0
  .L8018BD28:
    /* 9A128 8018BD28 00006290 */  lbu        $v0, 0x0($v1)
    /* 9A12C 8018BD2C 01006324 */  addiu      $v1, $v1, 0x1
    /* 9A130 8018BD30 FFFF8424 */  addiu      $a0, $a0, -0x1
    /* 9A134 8018BD34 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 9A138 8018BD38 FBFF8614 */  bne        $a0, $a2, .L8018BD28
    /* 9A13C 8018BD3C 0100A524 */   addiu     $a1, $a1, 0x1
    /* 9A140 8018BD40 552F0608 */  j          .L8018BD54
    /* 9A144 8018BD44 80000224 */   addiu     $v0, $zero, 0x80
  .L8018BD48:
    /* 9A148 8018BD48 1000A28F */  lw         $v0, 0x10($sp)
    /* 9A14C 8018BD4C 00000000 */  nop
    /* 9A150 8018BD50 80004234 */  ori        $v0, $v0, 0x80
  .L8018BD54:
    /* 9A154 8018BD54 1000A2AF */  sw         $v0, 0x10($sp)
  .L8018BD58:
    /* 9A158 8018BD58 0281043C */  lui        $a0, (0x81020409 >> 16)
    /* 9A15C 8018BD5C 1000438E */  lw         $v1, 0x10($s2)
    /* 9A160 8018BD60 09048434 */  ori        $a0, $a0, (0x81020409 & 0xFFFF)
    /* 9A164 8018BD64 C0110300 */  sll        $v0, $v1, 7
    /* 9A168 8018BD68 21104300 */  addu       $v0, $v0, $v1
    /* 9A16C 8018BD6C 00120200 */  sll        $v0, $v0, 8
    /* 9A170 8018BD70 18004400 */  mult       $v0, $a0
    /* 9A174 8018BD74 1A80013C */  lui        $at, %hi(D_8019B0C4)
    /* 9A178 8018BD78 C4B023AC */  sw         $v1, %lo(D_8019B0C4)($at)
    /* 9A17C 8018BD7C 10400000 */  mfhi       $t0
    /* 9A180 8018BD80 21180201 */  addu       $v1, $t0, $v0
    /* 9A184 8018BD84 83190300 */  sra        $v1, $v1, 6
    /* 9A188 8018BD88 C3170200 */  sra        $v0, $v0, 31
    /* 9A18C 8018BD8C 23186200 */  subu       $v1, $v1, $v0
    /* 9A190 8018BD90 2200A3A7 */  sh         $v1, 0x22($sp)
  .L8018BD94:
    /* 9A194 8018BD94 0F008012 */  beqz       $s4, .L8018BDD4
    /* 9A198 8018BD98 00000000 */   nop
    /* 9A19C 8018BD9C 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9A1A0 8018BDA0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9A1A4 8018BDA4 00000000 */  nop
    /* 9A1A8 8018BDA8 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9A1AC 8018BDAC 00000000 */  nop
    /* 9A1B0 8018BDB0 C2110200 */  srl        $v0, $v0, 7
    /* 9A1B4 8018BDB4 01005730 */  andi       $s7, $v0, 0x1
    /* 9A1B8 8018BDB8 1F00E012 */  beqz       $s7, .L8018BE38
    /* 9A1BC 8018BDBC 00000000 */   nop
    /* 9A1C0 8018BDC0 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9A1C4 8018BDC4 00000000 */  nop
    /* 9A1C8 8018BDC8 7FFF4230 */  andi       $v0, $v0, 0xFF7F
    /* 9A1CC 8018BDCC 8E2F0608 */  j          .L8018BE38
    /* 9A1D0 8018BDD0 AA0162A4 */   sh        $v0, 0x1AA($v1)
  .L8018BDD4:
    /* 9A1D4 8018BDD4 0300A016 */  bnez       $s5, .L8018BDE4
    /* 9A1D8 8018BDD8 02006232 */   andi      $v0, $s3, 0x2
    /* 9A1DC 8018BDDC 09004010 */  beqz       $v0, .L8018BE04
    /* 9A1E0 8018BDE0 00000000 */   nop
  .L8018BDE4:
    /* 9A1E4 8018BDE4 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9A1E8 8018BDE8 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9A1EC 8018BDEC 08004396 */  lhu        $v1, 0x8($s2)
    /* 9A1F0 8018BDF0 00000000 */  nop
    /* 9A1F4 8018BDF4 840143A4 */  sh         $v1, 0x184($v0)
    /* 9A1F8 8018BDF8 08004296 */  lhu        $v0, 0x8($s2)
    /* 9A1FC 8018BDFC 1A80013C */  lui        $at, %hi(D_8019B0BC)
    /* 9A200 8018BE00 BCB022A4 */  sh         $v0, %lo(D_8019B0BC)($at)
  .L8018BE04:
    /* 9A204 8018BE04 0300A016 */  bnez       $s5, .L8018BE14
    /* 9A208 8018BE08 04006232 */   andi      $v0, $s3, 0x4
    /* 9A20C 8018BE0C 13004010 */  beqz       $v0, .L8018BE5C
    /* 9A210 8018BE10 00000000 */   nop
  .L8018BE14:
    /* 9A214 8018BE14 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9A218 8018BE18 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9A21C 8018BE1C 0A004396 */  lhu        $v1, 0xA($s2)
    /* 9A220 8018BE20 00000000 */  nop
    /* 9A224 8018BE24 860143A4 */  sh         $v1, 0x186($v0)
    /* 9A228 8018BE28 0A004296 */  lhu        $v0, 0xA($s2)
    /* 9A22C 8018BE2C 1A80013C */  lui        $at, %hi(D_8019B0BE)
    /* 9A230 8018BE30 972F0608 */  j          .L8018BE5C
    /* 9A234 8018BE34 BEB022A4 */   sh        $v0, %lo(D_8019B0BE)($at)
  .L8018BE38:
    /* 9A238 8018BE38 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9A23C 8018BE3C 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9A240 8018BE40 00000000 */  nop
    /* 9A244 8018BE44 840140A4 */  sh         $zero, 0x184($v0)
    /* 9A248 8018BE48 860140A4 */  sh         $zero, 0x186($v0)
    /* 9A24C 8018BE4C 1A80023C */  lui        $v0, %hi(D_8019B0BC)
    /* 9A250 8018BE50 BCB04224 */  addiu      $v0, $v0, %lo(D_8019B0BC)
    /* 9A254 8018BE54 000040A4 */  sh         $zero, 0x0($v0)
    /* 9A258 8018BE58 020040A4 */  sh         $zero, 0x2($v0)
  .L8018BE5C:
    /* 9A25C 8018BE5C 05008016 */  bnez       $s4, .L8018BE74
    /* 9A260 8018BE60 00000000 */   nop
    /* 9A264 8018BE64 0300C016 */  bnez       $s6, .L8018BE74
    /* 9A268 8018BE68 00000000 */   nop
    /* 9A26C 8018BE6C 0300C013 */  beqz       $fp, .L8018BE7C
    /* 9A270 8018BE70 00000000 */   nop
  .L8018BE74:
    /* 9A274 8018BE74 C62F060C */  jal        func_8018BF18
    /* 9A278 8018BE78 1000A427 */   addiu     $a0, $sp, 0x10
  .L8018BE7C:
    /* 9A27C 8018BE7C 5800A88F */  lw         $t0, 0x58($sp)
    /* 9A280 8018BE80 00000000 */  nop
    /* 9A284 8018BE84 05000011 */  beqz       $t0, .L8018BE9C
    /* 9A288 8018BE88 00000000 */   nop
    /* 9A28C 8018BE8C 1A80043C */  lui        $a0, %hi(D_8019B0B8)
    /* 9A290 8018BE90 B8B0848C */  lw         $a0, %lo(D_8019B0B8)($a0)
    /* 9A294 8018BE94 1A31060C */  jal        func_8018C468
    /* 9A298 8018BE98 00000000 */   nop
  .L8018BE9C:
    /* 9A29C 8018BE9C 0E008012 */  beqz       $s4, .L8018BED8
    /* 9A2A0 8018BEA0 D1000424 */   addiu     $a0, $zero, 0xD1
    /* 9A2A4 8018BEA4 1A80053C */  lui        $a1, %hi(D_8019B0B0)
    /* 9A2A8 8018BEA8 B0B0A58C */  lw         $a1, %lo(D_8019B0B0)($a1)
    /* 9A2AC 8018BEAC B12A060C */  jal        func_8018AAC4
    /* 9A2B0 8018BEB0 21300000 */   addu      $a2, $zero, $zero
    /* 9A2B4 8018BEB4 0900E012 */  beqz       $s7, .L8018BEDC
    /* 9A2B8 8018BEB8 21100000 */   addu      $v0, $zero, $zero
    /* 9A2BC 8018BEBC 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9A2C0 8018BEC0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9A2C4 8018BEC4 00000000 */  nop
    /* 9A2C8 8018BEC8 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9A2CC 8018BECC 00000000 */  nop
    /* 9A2D0 8018BED0 80004234 */  ori        $v0, $v0, 0x80
    /* 9A2D4 8018BED4 AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018BED8:
    /* 9A2D8 8018BED8 21100000 */  addu       $v0, $zero, $zero
  .L8018BEDC:
    /* 9A2DC 8018BEDC 8400BF8F */  lw         $ra, 0x84($sp)
    /* 9A2E0 8018BEE0 8000BE8F */  lw         $fp, 0x80($sp)
    /* 9A2E4 8018BEE4 7C00B78F */  lw         $s7, 0x7C($sp)
    /* 9A2E8 8018BEE8 7800B68F */  lw         $s6, 0x78($sp)
    /* 9A2EC 8018BEEC 7400B58F */  lw         $s5, 0x74($sp)
    /* 9A2F0 8018BEF0 7000B48F */  lw         $s4, 0x70($sp)
    /* 9A2F4 8018BEF4 6C00B38F */  lw         $s3, 0x6C($sp)
    /* 9A2F8 8018BEF8 6800B28F */  lw         $s2, 0x68($sp)
    /* 9A2FC 8018BEFC 6400B18F */  lw         $s1, 0x64($sp)
    /* 9A300 8018BF00 6000B08F */  lw         $s0, 0x60($sp)
    /* 9A304 8018BF04 0800E003 */  jr         $ra
    /* 9A308 8018BF08 8800BD27 */   addiu     $sp, $sp, 0x88
endlabel func_8018BA38
    /* 9A30C 8018BF0C 00000000 */  nop
    /* 9A310 8018BF10 00000000 */  nop
    /* 9A314 8018BF14 00000000 */  nop
