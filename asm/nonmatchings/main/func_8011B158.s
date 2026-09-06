nonmatching func_8011B158, 0x2F0

glabel func_8011B158
    /* 29558 8011B158 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2955C 8011B15C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29560 8011B160 EEE3030C */  jal        func_800F8FB8
    /* 29564 8011B164 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 29568 8011B168 50D4030C */  jal        func_800F5140
    /* 2956C 8011B16C 00000000 */   nop
    /* 29570 8011B170 D3D3030C */  jal        func_800F4F4C
    /* 29574 8011B174 00000000 */   nop
    /* 29578 8011B178 0FCF030C */  jal        func_800F3C3C
    /* 2957C 8011B17C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 29580 8011B180 90DE030C */  jal        func_800F7A40
    /* 29584 8011B184 21204000 */   addu      $a0, $v0, $zero
    /* 29588 8011B188 93E0030C */  jal        func_800F824C
    /* 2958C 8011B18C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29590 8011B190 59D9030C */  jal        func_800F6564
    /* 29594 8011B194 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 29598 8011B198 0DD9030C */  jal        func_800F6434
    /* 2959C 8011B19C 80000424 */   addiu     $a0, $zero, 0x80
    /* 295A0 8011B1A0 07004014 */  bnez       $v0, .L8011B1C0
    /* 295A4 8011B1A4 00000000 */   nop
    /* 295A8 8011B1A8 59D9030C */  jal        func_800F6564
    /* 295AC 8011B1AC 01170424 */   addiu     $a0, $zero, 0x1701
    /* 295B0 8011B1B0 0DD9030C */  jal        func_800F6434
    /* 295B4 8011B1B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 295B8 8011B1B8 05004014 */  bnez       $v0, .L8011B1D0
    /* 295BC 8011B1BC 00000000 */   nop
  .L8011B1C0:
    /* 295C0 8011B1C0 AFD8030C */  jal        func_800F62BC
    /* 295C4 8011B1C4 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 295C8 8011B1C8 AFD8030C */  jal        func_800F62BC
    /* 295CC 8011B1CC 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8011B1D0:
    /* 295D0 8011B1D0 9CDC030C */  jal        func_800F7270
    /* 295D4 8011B1D4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 295D8 8011B1D8 1300043C */  lui        $a0, (0x139802 >> 16)
    /* 295DC 8011B1DC 1ADB030C */  jal        func_800F6C68
    /* 295E0 8011B1E0 02988434 */   ori       $a0, $a0, (0x139802 & 0xFFFF)
    /* 295E4 8011B1E4 93E0030C */  jal        func_800F824C
    /* 295E8 8011B1E8 40000424 */   addiu     $a0, $zero, 0x40
    /* 295EC 8011B1EC 1300043C */  lui        $a0, (0x139803 >> 16)
    /* 295F0 8011B1F0 1ADB030C */  jal        func_800F6C68
    /* 295F4 8011B1F4 03988434 */   ori       $a0, $a0, (0x139803 & 0xFFFF)
    /* 295F8 8011B1F8 93E0030C */  jal        func_800F824C
    /* 295FC 8011B1FC 41000424 */   addiu     $a0, $zero, 0x41
    /* 29600 8011B200 9CDC030C */  jal        func_800F7270
    /* 29604 8011B204 40000424 */   addiu     $a0, $zero, 0x40
    /* 29608 8011B208 92D7030C */  jal        func_800F5E48
    /* 2960C 8011B20C 00000000 */   nop
    /* 29610 8011B210 1300043C */  lui        $a0, (0x139C00 >> 16)
  .L8011B214:
    /* 29614 8011B214 1ADB030C */  jal        func_800F6C68
    /* 29618 8011B218 009C8434 */   ori       $a0, $a0, (0x139C00 & 0xFFFF)
    /* 2961C 8011B21C 5DD5030C */  jal        func_800F5574
    /* 29620 8011B220 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 29624 8011B224 F5D4030C */  jal        func_800F53D4
    /* 29628 8011B228 00000000 */   nop
    /* 2962C 8011B22C 05004014 */  bnez       $v0, .L8011B244
    /* 29630 8011B230 00000000 */   nop
    /* 29634 8011B234 92D7030C */  jal        func_800F5E48
    /* 29638 8011B238 00000000 */   nop
    /* 2963C 8011B23C 856C0408 */  j          .L8011B214
    /* 29640 8011B240 1300043C */   lui       $a0, (0x139C00 >> 16)
  .L8011B244:
    /* 29644 8011B244 D9D8030C */  jal        func_800F6364
    /* 29648 8011B248 00000000 */   nop
    /* 2964C 8011B24C 40E3030C */  jal        func_800F8D00
    /* 29650 8011B250 690A0424 */   addiu     $a0, $zero, 0xA69
    /* 29654 8011B254 D9D8030C */  jal        func_800F6364
    /* 29658 8011B258 00000000 */   nop
    /* 2965C 8011B25C 40DD030C */  jal        func_800F7500
    /* 29660 8011B260 21200000 */   addu      $a0, $zero, $zero
  .L8011B264:
    /* 29664 8011B264 0FCF030C */  jal        func_800F3C3C
    /* 29668 8011B268 40000424 */   addiu     $a0, $zero, 0x40
    /* 2966C 8011B26C ABD5030C */  jal        func_800F56AC
    /* 29670 8011B270 21204000 */   addu      $a0, $v0, $zero
    /* 29674 8011B274 F5D4030C */  jal        func_800F53D4
    /* 29678 8011B278 00000000 */   nop
    /* 2967C 8011B27C 0C004014 */  bnez       $v0, .L8011B2B0
    /* 29680 8011B280 00000000 */   nop
    /* 29684 8011B284 1300043C */  lui        $a0, (0x139C00 >> 16)
    /* 29688 8011B288 1ADB030C */  jal        func_800F6C68
    /* 2968C 8011B28C 009C8434 */   ori       $a0, $a0, (0x139C00 & 0xFFFF)
    /* 29690 8011B290 58E2030C */  jal        func_800F8960
    /* 29694 8011B294 490A0424 */   addiu     $a0, $zero, 0xA49
    /* 29698 8011B298 EFD8030C */  jal        func_800F63BC
    /* 2969C 8011B29C 00000000 */   nop
    /* 296A0 8011B2A0 D9D8030C */  jal        func_800F6364
    /* 296A4 8011B2A4 00000000 */   nop
    /* 296A8 8011B2A8 996C0408 */  j          .L8011B264
    /* 296AC 8011B2AC 00000000 */   nop
  .L8011B2B0:
    /* 296B0 8011B2B0 9CDC030C */  jal        func_800F7270
    /* 296B4 8011B2B4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 296B8 8011B2B8 1300043C */  lui        $a0, (0x139800 >> 16)
    /* 296BC 8011B2BC 1ADB030C */  jal        func_800F6C68
    /* 296C0 8011B2C0 00988434 */   ori       $a0, $a0, (0x139800 & 0xFFFF)
    /* 296C4 8011B2C4 93E0030C */  jal        func_800F824C
    /* 296C8 8011B2C8 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 296CC 8011B2CC 1300043C */  lui        $a0, (0x139801 >> 16)
    /* 296D0 8011B2D0 1ADB030C */  jal        func_800F6C68
    /* 296D4 8011B2D4 01988434 */   ori       $a0, $a0, (0x139801 & 0xFFFF)
    /* 296D8 8011B2D8 93E0030C */  jal        func_800F824C
    /* 296DC 8011B2DC BD000424 */   addiu     $a0, $zero, 0xBD
  .L8011B2E0:
    /* 296E0 8011B2E0 9CDC030C */  jal        func_800F7270
    /* 296E4 8011B2E4 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 296E8 8011B2E8 1300043C */  lui        $a0, (0x139C00 >> 16)
    /* 296EC 8011B2EC 1ADB030C */  jal        func_800F6C68
    /* 296F0 8011B2F0 009C8434 */   ori       $a0, $a0, (0x139C00 & 0xFFFF)
    /* 296F4 8011B2F4 5DD5030C */  jal        func_800F5574
    /* 296F8 8011B2F8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 296FC 8011B2FC F5D4030C */  jal        func_800F53D4
    /* 29700 8011B300 00000000 */   nop
    /* 29704 8011B304 36004014 */  bnez       $v0, .L8011B3E0
    /* 29708 8011B308 00000000 */   nop
    /* 2970C 8011B30C 5DD5030C */  jal        func_800F5574
    /* 29710 8011B310 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 29714 8011B314 F5D4030C */  jal        func_800F53D4
    /* 29718 8011B318 00000000 */   nop
    /* 2971C 8011B31C 14004010 */  beqz       $v0, .L8011B370
    /* 29720 8011B320 00000000 */   nop
    /* 29724 8011B324 9CDC030C */  jal        func_800F7270
    /* 29728 8011B328 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 2972C 8011B32C D9D8030C */  jal        func_800F6364
    /* 29730 8011B330 00000000 */   nop
    /* 29734 8011B334 5BE3030C */  jal        func_800F8D6C
    /* 29738 8011B338 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 2973C 8011B33C 1300043C */  lui        $a0, (0x139C00 >> 16)
    /* 29740 8011B340 1ADB030C */  jal        func_800F6C68
    /* 29744 8011B344 009C8434 */   ori       $a0, $a0, (0x139C00 & 0xFFFF)
    /* 29748 8011B348 AD6D040C */  jal        func_8011B6B4
    /* 2974C 8011B34C 00000000 */   nop
    /* 29750 8011B350 5DD5030C */  jal        func_800F5574
    /* 29754 8011B354 21200000 */   addu      $a0, $zero, $zero
    /* 29758 8011B358 F5D4030C */  jal        func_800F53D4
    /* 2975C 8011B35C 00000000 */   nop
    /* 29760 8011B360 0B004014 */  bnez       $v0, .L8011B390
    /* 29764 8011B364 00000000 */   nop
    /* 29768 8011B368 F06C0408 */  j          .L8011B3C0
    /* 2976C 8011B36C 00000000 */   nop
  .L8011B370:
    /* 29770 8011B370 AD6D040C */  jal        func_8011B6B4
    /* 29774 8011B374 00000000 */   nop
    /* 29778 8011B378 5DD5030C */  jal        func_800F5574
    /* 2977C 8011B37C 21200000 */   addu      $a0, $zero, $zero
    /* 29780 8011B380 F5D4030C */  jal        func_800F53D4
    /* 29784 8011B384 00000000 */   nop
    /* 29788 8011B388 0D004014 */  bnez       $v0, .L8011B3C0
    /* 2978C 8011B38C 00000000 */   nop
  .L8011B390:
    /* 29790 8011B390 126D040C */  jal        func_8011B448
    /* 29794 8011B394 00000000 */   nop
    /* 29798 8011B398 9CDC030C */  jal        func_800F7270
    /* 2979C 8011B39C BC000424 */   addiu     $a0, $zero, 0xBC
    /* 297A0 8011B3A0 C1CE030C */  jal        func_800F3B04
    /* 297A4 8011B3A4 690A0424 */   addiu     $a0, $zero, 0xA69
    /* 297A8 8011B3A8 ABD5030C */  jal        func_800F56AC
    /* 297AC 8011B3AC 21204000 */   addu      $a0, $v0, $zero
    /* 297B0 8011B3B0 F5D4030C */  jal        func_800F53D4
    /* 297B4 8011B3B4 00000000 */   nop
    /* 297B8 8011B3B8 09004014 */  bnez       $v0, .L8011B3E0
    /* 297BC 8011B3BC 00000000 */   nop
  .L8011B3C0:
    /* 297C0 8011B3C0 9CDC030C */  jal        func_800F7270
    /* 297C4 8011B3C4 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 297C8 8011B3C8 D9D8030C */  jal        func_800F6364
    /* 297CC 8011B3CC 00000000 */   nop
    /* 297D0 8011B3D0 5BE3030C */  jal        func_800F8D6C
    /* 297D4 8011B3D4 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 297D8 8011B3D8 B86C0408 */  j          .L8011B2E0
    /* 297DC 8011B3DC 00000000 */   nop
  .L8011B3E0:
    /* 297E0 8011B3E0 53D9030C */  jal        func_800F654C
    /* 297E4 8011B3E4 01000424 */   addiu     $a0, $zero, 0x1
    /* 297E8 8011B3E8 93E0030C */  jal        func_800F824C
    /* 297EC 8011B3EC B1000424 */   addiu     $a0, $zero, 0xB1
    /* 297F0 8011B3F0 EEE3030C */  jal        func_800F8FB8
    /* 297F4 8011B3F4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 297F8 8011B3F8 9CDC030C */  jal        func_800F7270
    /* 297FC 8011B3FC BC000424 */   addiu     $a0, $zero, 0xBC
    /* 29800 8011B400 1300043C */  lui        $a0, (0x139C01 >> 16)
    /* 29804 8011B404 1ADB030C */  jal        func_800F6C68
    /* 29808 8011B408 019C8434 */   ori       $a0, $a0, (0x139C01 & 0xFFFF)
    /* 2980C 8011B40C 0DD9030C */  jal        func_800F6434
    /* 29810 8011B410 02000424 */   addiu     $a0, $zero, 0x2
    /* 29814 8011B414 05004014 */  bnez       $v0, .L8011B42C
    /* 29818 8011B418 00000000 */   nop
    /* 2981C 8011B41C FA58040C */  jal        func_801163E8
    /* 29820 8011B420 00000000 */   nop
    /* 29824 8011B424 04004014 */  bnez       $v0, .L8011B438
    /* 29828 8011B428 01000224 */   addiu     $v0, $zero, 0x1
  .L8011B42C:
    /* 2982C 8011B42C EEE3030C */  jal        func_800F8FB8
    /* 29830 8011B430 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 29834 8011B434 21100000 */  addu       $v0, $zero, $zero
  .L8011B438:
    /* 29838 8011B438 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2983C 8011B43C 00000000 */  nop
    /* 29840 8011B440 0800E003 */  jr         $ra
    /* 29844 8011B444 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B158
