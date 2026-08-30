nonmatching func_80119210, 0xE8

glabel func_80119210
    /* 27610 80119210 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27614 80119214 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27618 80119218 655D040C */  jal        func_80117594
    /* 2761C 8011921C 00000000 */   nop
    /* 27620 80119220 93E0030C */  jal        func_800F824C
    /* 27624 80119224 18000424 */   addiu     $a0, $zero, 0x18
    /* 27628 80119228 EEE3030C */  jal        func_800F8FB8
    /* 2762C 8011922C 19000424 */   addiu     $a0, $zero, 0x19
    /* 27630 80119230 53D9030C */  jal        func_800F654C
    /* 27634 80119234 64000424 */   addiu     $a0, $zero, 0x64
    /* 27638 80119238 93E0030C */  jal        func_800F824C
    /* 2763C 8011923C 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 27640 80119240 EEE3030C */  jal        func_800F8FB8
    /* 27644 80119244 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 27648 80119248 C3D3050C */  jal        func_80174F0C
    /* 2764C 8011924C 00000000 */   nop
    /* 27650 80119250 59D9030C */  jal        func_800F6564
    /* 27654 80119254 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 27658 80119258 20D5030C */  jal        func_800F5480
    /* 2765C 8011925C 00000000 */   nop
    /* 27660 80119260 0FCF030C */  jal        func_800F3C3C
    /* 27664 80119264 30000424 */   addiu     $a0, $zero, 0x30
    /* 27668 80119268 D2DF030C */  jal        func_800F7F48
    /* 2766C 8011926C 21204000 */   addu      $a0, $v0, $zero
    /* 27670 80119270 62E0030C */  jal        func_800F8188
    /* 27674 80119274 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 27678 80119278 59D9030C */  jal        func_800F6564
    /* 2767C 8011927C A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 27680 80119280 0FCF030C */  jal        func_800F3C3C
    /* 27684 80119284 31000424 */   addiu     $a0, $zero, 0x31
    /* 27688 80119288 D2DF030C */  jal        func_800F7F48
    /* 2768C 8011928C 21204000 */   addu      $a0, $v0, $zero
    /* 27690 80119290 62E0030C */  jal        func_800F8188
    /* 27694 80119294 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 27698 80119298 59D9030C */  jal        func_800F6564
    /* 2769C 8011929C A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 276A0 801192A0 0FCF030C */  jal        func_800F3C3C
    /* 276A4 801192A4 32000424 */   addiu     $a0, $zero, 0x32
    /* 276A8 801192A8 D2DF030C */  jal        func_800F7F48
    /* 276AC 801192AC 21204000 */   addu      $a0, $v0, $zero
    /* 276B0 801192B0 62E0030C */  jal        func_800F8188
    /* 276B4 801192B4 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 276B8 801192B8 F0D4030C */  jal        func_800F53C0
    /* 276BC 801192BC 00000000 */   nop
    /* 276C0 801192C0 07004014 */  bnez       $v0, .L801192E0
    /* 276C4 801192C4 00000000 */   nop
    /* 276C8 801192C8 DDE3030C */  jal        func_800F8F74
    /* 276CC 801192CC A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 276D0 801192D0 DDE3030C */  jal        func_800F8F74
    /* 276D4 801192D4 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 276D8 801192D8 DDE3030C */  jal        func_800F8F74
    /* 276DC 801192DC A2160424 */   addiu     $a0, $zero, 0x16A2
  .L801192E0:
    /* 276E0 801192E0 DEF9030C */  jal        func_800FE778
    /* 276E4 801192E4 00000000 */   nop
    /* 276E8 801192E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 276EC 801192EC 00000000 */  nop
    /* 276F0 801192F0 0800E003 */  jr         $ra
    /* 276F4 801192F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119210
