nonmatching func_8014F0BC, 0x210

glabel func_8014F0BC
    /* 5D4BC 8014F0BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D4C0 8014F0C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D4C4 8014F0C4 59D9030C */  jal        func_800F6564
    /* 5D4C8 8014F0C8 81F40434 */   ori       $a0, $zero, 0xF481
    /* 5D4CC 8014F0CC 0DD9030C */  jal        func_800F6434
    /* 5D4D0 8014F0D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5D4D4 8014F0D4 03004014 */  bnez       $v0, .L8014F0E4
    /* 5D4D8 8014F0D8 00000000 */   nop
    /* 5D4DC 8014F0DC 883B050C */  jal        func_8014EE20
    /* 5D4E0 8014F0E0 00000000 */   nop
  .L8014F0E4:
    /* 5D4E4 8014F0E4 59D9030C */  jal        func_800F6564
    /* 5D4E8 8014F0E8 47F20434 */   ori       $a0, $zero, 0xF247
    /* 5D4EC 8014F0EC 0DD9030C */  jal        func_800F6434
    /* 5D4F0 8014F0F0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5D4F4 8014F0F4 71004010 */  beqz       $v0, .L8014F2BC
    /* 5D4F8 8014F0F8 00000000 */   nop
    /* 5D4FC 8014F0FC 62E0030C */  jal        func_800F8188
    /* 5D500 8014F100 2EF40434 */   ori       $a0, $zero, 0xF42E
    /* 5D504 8014F104 883B050C */  jal        func_8014EE20
    /* 5D508 8014F108 00000000 */   nop
    /* 5D50C 8014F10C 59D9030C */  jal        func_800F6564
    /* 5D510 8014F110 67F20434 */   ori       $a0, $zero, 0xF267
    /* 5D514 8014F114 33D7030C */  jal        func_800F5CCC
    /* 5D518 8014F118 00000000 */   nop
    /* 5D51C 8014F11C E3D6030C */  jal        func_800F5B8C
    /* 5D520 8014F120 02020424 */   addiu     $a0, $zero, 0x202
    /* 5D524 8014F124 07004014 */  bnez       $v0, .L8014F144
    /* 5D528 8014F128 00000000 */   nop
    /* 5D52C 8014F12C 59D9030C */  jal        func_800F6564
    /* 5D530 8014F130 4FF20434 */   ori       $a0, $zero, 0xF24F
    /* 5D534 8014F134 62E0030C */  jal        func_800F8188
    /* 5D538 8014F138 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5D53C 8014F13C 2B23050C */  jal        func_80148CAC
    /* 5D540 8014F140 00000000 */   nop
  .L8014F144:
    /* 5D544 8014F144 DDE3030C */  jal        func_800F8F74
    /* 5D548 8014F148 47F20434 */   ori       $a0, $zero, 0xF247
    /* 5D54C 8014F14C 59D9030C */  jal        func_800F6564
    /* 5D550 8014F150 4CF20434 */   ori       $a0, $zero, 0xF24C
    /* 5D554 8014F154 62E0030C */  jal        func_800F8188
    /* 5D558 8014F158 63F20434 */   ori       $a0, $zero, 0xF263
    /* 5D55C 8014F15C EEE3030C */  jal        func_800F8FB8
    /* 5D560 8014F160 18000424 */   addiu     $a0, $zero, 0x18
    /* 5D564 8014F164 933E050C */  jal        func_8014FA4C
    /* 5D568 8014F168 00000000 */   nop
    /* 5D56C 8014F16C 84DC030C */  jal        func_800F7210
    /* 5D570 8014F170 B2F20434 */   ori       $a0, $zero, 0xF2B2
    /* 5D574 8014F174 5BE3030C */  jal        func_800F8D6C
    /* 5D578 8014F178 0E000424 */   addiu     $a0, $zero, 0xE
    /* 5D57C 8014F17C 59D9030C */  jal        func_800F6564
    /* 5D580 8014F180 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5D584 8014F184 91E5030C */  jal        func_800F9644
    /* 5D588 8014F188 20000424 */   addiu     $a0, $zero, 0x20
    /* 5D58C 8014F18C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5D590 8014F190 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5D594 8014F194 00000000 */  nop
    /* 5D598 8014F198 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D59C 8014F19C 00000000 */  nop
    /* 5D5A0 8014F1A0 80100200 */  sll        $v0, $v0, 2
    /* 5D5A4 8014F1A4 000062A4 */  sh         $v0, 0x0($v1)
    /* 5D5A8 8014F1A8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5D5AC 8014F1AC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5D5B0 8014F1B0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5D5B4 8014F1B4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5D5B8 8014F1B8 00008294 */  lhu        $v0, 0x0($a0)
    /* 5D5BC 8014F1BC C7E5030C */  jal        func_800F971C
    /* 5D5C0 8014F1C0 000062A4 */   sh        $v0, 0x0($v1)
    /* 5D5C4 8014F1C4 98E5030C */  jal        func_800F9660
    /* 5D5C8 8014F1C8 20000424 */   addiu     $a0, $zero, 0x20
  .L8014F1CC:
    /* 5D5CC 8014F1CC C1CE030C */  jal        func_800F3B04
    /* 5D5D0 8014F1D0 63F20434 */   ori       $a0, $zero, 0xF263
    /* 5D5D4 8014F1D4 CAD3030C */  jal        func_800F4F28
    /* 5D5D8 8014F1D8 21204000 */   addu      $a0, $v0, $zero
    /* 5D5DC 8014F1DC EBD3030C */  jal        func_800F4FAC
    /* 5D5E0 8014F1E0 01010424 */   addiu     $a0, $zero, 0x101
    /* 5D5E4 8014F1E4 09004014 */  bnez       $v0, .L8014F20C
    /* 5D5E8 8014F1E8 00000000 */   nop
    /* 5D5EC 8014F1EC C1CE030C */  jal        func_800F3B04
    /* 5D5F0 8014F1F0 62F20434 */   ori       $a0, $zero, 0xF262
    /* 5D5F4 8014F1F4 CAD3030C */  jal        func_800F4F28
    /* 5D5F8 8014F1F8 21204000 */   addu      $a0, $v0, $zero
    /* 5D5FC 8014F1FC EA3D050C */  jal        func_8014F7A8
    /* 5D600 8014F200 00000000 */   nop
    /* 5D604 8014F204 8B3C0508 */  j          .L8014F22C
    /* 5D608 8014F208 00000000 */   nop
  .L8014F20C:
    /* 5D60C 8014F20C C1CE030C */  jal        func_800F3B04
    /* 5D610 8014F210 62F20434 */   ori       $a0, $zero, 0xF262
    /* 5D614 8014F214 CAD3030C */  jal        func_800F4F28
    /* 5D618 8014F218 21204000 */   addu      $a0, $v0, $zero
    /* 5D61C 8014F21C EBD3030C */  jal        func_800F4FAC
    /* 5D620 8014F220 01000424 */   addiu     $a0, $zero, 0x1
    /* 5D624 8014F224 1B004014 */  bnez       $v0, .L8014F294
    /* 5D628 8014F228 00000000 */   nop
  .L8014F22C:
    /* 5D62C 8014F22C AFD8030C */  jal        func_800F62BC
    /* 5D630 8014F230 18000424 */   addiu     $a0, $zero, 0x18
    /* 5D634 8014F234 8CD9030C */  jal        func_800F6630
    /* 5D638 8014F238 18000424 */   addiu     $a0, $zero, 0x18
    /* 5D63C 8014F23C 5DD5030C */  jal        func_800F5574
    /* 5D640 8014F240 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D644 8014F244 F5D4030C */  jal        func_800F53D4
    /* 5D648 8014F248 00000000 */   nop
    /* 5D64C 8014F24C DFFF4010 */  beqz       $v0, .L8014F1CC
    /* 5D650 8014F250 00000000 */   nop
    /* 5D654 8014F254 49D7030C */  jal        func_800F5D24
    /* 5D658 8014F258 67F20434 */   ori       $a0, $zero, 0xF267
    /* 5D65C 8014F25C E3D6030C */  jal        func_800F5B8C
    /* 5D660 8014F260 02020424 */   addiu     $a0, $zero, 0x202
    /* 5D664 8014F264 15004014 */  bnez       $v0, .L8014F2BC
    /* 5D668 8014F268 00000000 */   nop
    /* 5D66C 8014F26C 59D9030C */  jal        func_800F6564
    /* 5D670 8014F270 4FF20434 */   ori       $a0, $zero, 0xF24F
    /* 5D674 8014F274 62E0030C */  jal        func_800F8188
    /* 5D678 8014F278 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5D67C 8014F27C 59D9030C */  jal        func_800F6564
    /* 5D680 8014F280 66F20434 */   ori       $a0, $zero, 0xF266
    /* 5D684 8014F284 62E0030C */  jal        func_800F8188
    /* 5D688 8014F288 67F20434 */   ori       $a0, $zero, 0xF267
    /* 5D68C 8014F28C AF3C0508 */  j          .L8014F2BC
    /* 5D690 8014F290 00000000 */   nop
  .L8014F294:
    /* 5D694 8014F294 84DC030C */  jal        func_800F7210
    /* 5D698 8014F298 B2F20434 */   ori       $a0, $zero, 0xF2B2
    /* 5D69C 8014F29C 5CDC030C */  jal        func_800F7170
    /* 5D6A0 8014F2A0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5D6A4 8014F2A4 C9FF4014 */  bnez       $v0, .L8014F1CC
    /* 5D6A8 8014F2A8 00000000 */   nop
    /* 5D6AC 8014F2AC B33C050C */  jal        func_8014F2CC
    /* 5D6B0 8014F2B0 00000000 */   nop
    /* 5D6B4 8014F2B4 8B3C0508 */  j          .L8014F22C
    /* 5D6B8 8014F2B8 00000000 */   nop
  .L8014F2BC:
    /* 5D6BC 8014F2BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D6C0 8014F2C0 00000000 */  nop
    /* 5D6C4 8014F2C4 0800E003 */  jr         $ra
    /* 5D6C8 8014F2C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014F0BC
