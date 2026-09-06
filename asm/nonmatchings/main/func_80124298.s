nonmatching func_80124298, 0xC0

glabel func_80124298
    /* 32698 80124298 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3269C 8012429C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 326A0 801242A0 EEE3030C */  jal        func_800F8FB8
    /* 326A4 801242A4 E4000424 */   addiu     $a0, $zero, 0xE4
  .L801242A8:
    /* 326A8 801242A8 8CD9030C */  jal        func_800F6630
    /* 326AC 801242AC E4000424 */   addiu     $a0, $zero, 0xE4
    /* 326B0 801242B0 AB93040C */  jal        func_80124EAC
    /* 326B4 801242B4 00000000 */   nop
    /* 326B8 801242B8 50D4030C */  jal        func_800F5140
    /* 326BC 801242BC 00000000 */   nop
    /* 326C0 801242C0 93E0030C */  jal        func_800F824C
    /* 326C4 801242C4 43000424 */   addiu     $a0, $zero, 0x43
    /* 326C8 801242C8 65DD030C */  jal        func_800F7594
    /* 326CC 801242CC 43000424 */   addiu     $a0, $zero, 0x43
    /* 326D0 801242D0 DADA030C */  jal        func_800F6B68
    /* 326D4 801242D4 21200000 */   addu      $a0, $zero, $zero
    /* 326D8 801242D8 92D0030C */  jal        func_800F4248
    /* 326DC 801242DC 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 326E0 801242E0 93E0030C */  jal        func_800F824C
    /* 326E4 801242E4 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 326E8 801242E8 58E2030C */  jal        func_800F8960
    /* 326EC 801242EC 671A0424 */   addiu     $a0, $zero, 0x1A67
    /* 326F0 801242F0 8CD9030C */  jal        func_800F6630
    /* 326F4 801242F4 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 326F8 801242F8 93E0030C */  jal        func_800F824C
    /* 326FC 801242FC 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 32700 80124300 58E2030C */  jal        func_800F8960
    /* 32704 80124304 681A0424 */   addiu     $a0, $zero, 0x1A68
    /* 32708 80124308 DADA030C */  jal        func_800F6B68
    /* 3270C 8012430C 01000424 */   addiu     $a0, $zero, 0x1
    /* 32710 80124310 93E0030C */  jal        func_800F824C
    /* 32714 80124314 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 32718 80124318 D690040C */  jal        func_80124358
    /* 3271C 8012431C 00000000 */   nop
    /* 32720 80124320 AFD8030C */  jal        func_800F62BC
    /* 32724 80124324 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 32728 80124328 8CD9030C */  jal        func_800F6630
    /* 3272C 8012432C E4000424 */   addiu     $a0, $zero, 0xE4
    /* 32730 80124330 5DD5030C */  jal        func_800F5574
    /* 32734 80124334 05000424 */   addiu     $a0, $zero, 0x5
    /* 32738 80124338 F5D4030C */  jal        func_800F53D4
    /* 3273C 8012433C 00000000 */   nop
    /* 32740 80124340 D9FF4010 */  beqz       $v0, .L801242A8
    /* 32744 80124344 00000000 */   nop
    /* 32748 80124348 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3274C 8012434C 00000000 */  nop
    /* 32750 80124350 0800E003 */  jr         $ra
    /* 32754 80124354 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124298
