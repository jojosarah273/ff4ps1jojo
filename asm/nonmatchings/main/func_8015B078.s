nonmatching func_8015B078, 0x20C

glabel func_8015B078
    /* 69478 8015B078 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6947C 8015B07C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 69480 8015B080 EEE3030C */  jal        func_800F8FB8
    /* 69484 8015B084 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69488 8015B088 EEE3030C */  jal        func_800F8FB8
    /* 6948C 8015B08C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 69490 8015B090 59D9030C */  jal        func_800F6564
    /* 69494 8015B094 22180424 */   addiu     $a0, $zero, 0x1822
    /* 69498 8015B098 374B050C */  jal        func_80152CDC
    /* 6949C 8015B09C 00000000 */   nop
    /* 694A0 8015B0A0 9CDC030C */  jal        func_800F7270
    /* 694A4 8015B0A4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 694A8 8015B0A8 DADA030C */  jal        func_800F6B68
    /* 694AC 8015B0AC 01200424 */   addiu     $a0, $zero, 0x2001
    /* 694B0 8015B0B0 92D0030C */  jal        func_800F4248
    /* 694B4 8015B0B4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 694B8 8015B0B8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 694BC 8015B0BC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 694C0 8015B0C0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 694C4 8015B0C4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 694C8 8015B0C8 00004394 */  lhu        $v1, 0x0($v0)
    /* 694CC 8015B0CC EFD8030C */  jal        func_800F63BC
    /* 694D0 8015B0D0 000083A4 */   sh        $v1, 0x0($a0)
    /* 694D4 8015B0D4 20D5030C */  jal        func_800F5480
    /* 694D8 8015B0D8 00000000 */   nop
  .L8015B0DC:
    /* 694DC 8015B0DC 0FCF030C */  jal        func_800F3C3C
    /* 694E0 8015B0E0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 694E4 8015B0E4 90DE030C */  jal        func_800F7A40
    /* 694E8 8015B0E8 21204000 */   addu      $a0, $v0, $zero
    /* 694EC 8015B0EC 9ADE030C */  jal        func_800F7A68
    /* 694F0 8015B0F0 00000000 */   nop
    /* 694F4 8015B0F4 0FCF030C */  jal        func_800F3C3C
    /* 694F8 8015B0F8 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 694FC 8015B0FC 90DE030C */  jal        func_800F7A40
    /* 69500 8015B100 21204000 */   addu      $a0, $v0, $zero
    /* 69504 8015B104 9ADE030C */  jal        func_800F7A68
    /* 69508 8015B108 00000000 */   nop
    /* 6950C 8015B10C A8D7030C */  jal        func_800F5EA0
    /* 69510 8015B110 00000000 */   nop
    /* 69514 8015B114 19D7030C */  jal        func_800F5C64
    /* 69518 8015B118 02020424 */   addiu     $a0, $zero, 0x202
    /* 6951C 8015B11C EFFF4014 */  bnez       $v0, .L8015B0DC
    /* 69520 8015B120 00000000 */   nop
    /* 69524 8015B124 C7E5030C */  jal        func_800F971C
    /* 69528 8015B128 00000000 */   nop
    /* 6952C 8015B12C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 69530 8015B130 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 69534 8015B134 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 69538 8015B138 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6953C 8015B13C 00004394 */  lhu        $v1, 0x0($v0)
    /* 69540 8015B140 AF000424 */  addiu      $a0, $zero, 0xAF
    /* 69544 8015B144 5BE3030C */  jal        func_800F8D6C
    /* 69548 8015B148 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015B14C:
    /* 6954C 8015B14C 9CDC030C */  jal        func_800F7270
    /* 69550 8015B150 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 69554 8015B154 DADA030C */  jal        func_800F6B68
    /* 69558 8015B158 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6955C 8015B15C 0DD9030C */  jal        func_800F6434
    /* 69560 8015B160 02000424 */   addiu     $a0, $zero, 0x2
    /* 69564 8015B164 35004014 */  bnez       $v0, .L8015B23C
    /* 69568 8015B168 00000000 */   nop
    /* 6956C 8015B16C 5DD5030C */  jal        func_800F5574
    /* 69570 8015B170 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 69574 8015B174 F5D4030C */  jal        func_800F53D4
    /* 69578 8015B178 00000000 */   nop
    /* 6957C 8015B17C 11004010 */  beqz       $v0, .L8015B1C4
    /* 69580 8015B180 00000000 */   nop
    /* 69584 8015B184 9CDC030C */  jal        func_800F7270
    /* 69588 8015B188 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6958C 8015B18C DADA030C */  jal        func_800F6B68
    /* 69590 8015B190 00200424 */   addiu     $a0, $zero, 0x2000
    /* 69594 8015B194 92D0030C */  jal        func_800F4248
    /* 69598 8015B198 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6959C 8015B19C 5DD5030C */  jal        func_800F5574
    /* 695A0 8015B1A0 0B000424 */   addiu     $a0, $zero, 0xB
    /* 695A4 8015B1A4 F5D4030C */  jal        func_800F53D4
    /* 695A8 8015B1A8 00000000 */   nop
    /* 695AC 8015B1AC 0D004010 */  beqz       $v0, .L8015B1E4
    /* 695B0 8015B1B0 00000000 */   nop
    /* 695B4 8015B1B4 F5D4030C */  jal        func_800F53D4
    /* 695B8 8015B1B8 00000000 */   nop
    /* 695BC 8015B1BC 17004014 */  bnez       $v0, .L8015B21C
    /* 695C0 8015B1C0 00000000 */   nop
  .L8015B1C4:
    /* 695C4 8015B1C4 A16C050C */  jal        func_8015B284
    /* 695C8 8015B1C8 00000000 */   nop
    /* 695CC 8015B1CC 59D9030C */  jal        func_800F6564
    /* 695D0 8015B1D0 3D350424 */   addiu     $a0, $zero, 0x353D
    /* 695D4 8015B1D4 0DD9030C */  jal        func_800F6434
    /* 695D8 8015B1D8 02000424 */   addiu     $a0, $zero, 0x2
    /* 695DC 8015B1DC 0F004014 */  bnez       $v0, .L8015B21C
    /* 695E0 8015B1E0 00000000 */   nop
  .L8015B1E4:
    /* 695E4 8015B1E4 9CDC030C */  jal        func_800F7270
    /* 695E8 8015B1E8 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 695EC 8015B1EC DADA030C */  jal        func_800F6B68
    /* 695F0 8015B1F0 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 695F4 8015B1F4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 695F8 8015B1F8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 695FC 8015B1FC 00000000 */  nop
    /* 69600 8015B200 00006290 */  lbu        $v0, 0x0($v1)
    /* 69604 8015B204 1A320424 */  addiu      $a0, $zero, 0x321A
    /* 69608 8015B208 80004234 */  ori        $v0, $v0, 0x80
    /* 6960C 8015B20C DAE1030C */  jal        func_800F8768
    /* 69610 8015B210 000062A0 */   sb        $v0, 0x0($v1)
    /* 69614 8015B214 8F6C0508 */  j          .L8015B23C
    /* 69618 8015B218 00000000 */   nop
  .L8015B21C:
    /* 6961C 8015B21C 9CDC030C */  jal        func_800F7270
    /* 69620 8015B220 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 69624 8015B224 DADA030C */  jal        func_800F6B68
    /* 69628 8015B228 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 6962C 8015B22C 92D0030C */  jal        func_800F4248
    /* 69630 8015B230 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 69634 8015B234 DAE1030C */  jal        func_800F8768
    /* 69638 8015B238 1A320424 */   addiu     $a0, $zero, 0x321A
  .L8015B23C:
    /* 6963C 8015B23C 04D5030C */  jal        func_800F5410
    /* 69640 8015B240 00000000 */   nop
    /* 69644 8015B244 8CD9030C */  jal        func_800F6630
    /* 69648 8015B248 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 6964C 8015B24C 02D0030C */  jal        func_800F4008
    /* 69650 8015B250 04000424 */   addiu     $a0, $zero, 0x4
    /* 69654 8015B254 93E0030C */  jal        func_800F824C
    /* 69658 8015B258 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 6965C 8015B25C 5DD5030C */  jal        func_800F5574
    /* 69660 8015B260 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 69664 8015B264 F5D4030C */  jal        func_800F53D4
    /* 69668 8015B268 00000000 */   nop
    /* 6966C 8015B26C B7FF4010 */  beqz       $v0, .L8015B14C
    /* 69670 8015B270 00000000 */   nop
    /* 69674 8015B274 1000BF8F */  lw         $ra, 0x10($sp)
    /* 69678 8015B278 00000000 */  nop
    /* 6967C 8015B27C 0800E003 */  jr         $ra
    /* 69680 8015B280 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015B078
