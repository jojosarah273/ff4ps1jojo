nonmatching func_80119740, 0x120

glabel func_80119740
    /* 27B40 80119740 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27B44 80119744 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27B48 80119748 655D040C */  jal        func_80117594
    /* 27B4C 8011974C 00000000 */   nop
    /* 27B50 80119750 93E0030C */  jal        func_800F824C
    /* 27B54 80119754 89000424 */   addiu     $a0, $zero, 0x89
    /* 27B58 80119758 EEE3030C */  jal        func_800F8FB8
    /* 27B5C 8011975C 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 27B60 80119760 0FCF030C */  jal        func_800F3C3C
    /* 27B64 80119764 89000424 */   addiu     $a0, $zero, 0x89
    /* 27B68 80119768 CAD3030C */  jal        func_800F4F28
    /* 27B6C 8011976C 21204000 */   addu      $a0, $v0, $zero
    /* 27B70 80119770 D3D3030C */  jal        func_800F4F4C
    /* 27B74 80119774 00000000 */   nop
    /* 27B78 80119778 0FCF030C */  jal        func_800F3C3C
    /* 27B7C 8011977C 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 27B80 80119780 90DE030C */  jal        func_800F7A40
    /* 27B84 80119784 21204000 */   addu      $a0, $v0, $zero
    /* 27B88 80119788 0FCF030C */  jal        func_800F3C3C
    /* 27B8C 8011978C 89000424 */   addiu     $a0, $zero, 0x89
    /* 27B90 80119790 CAD3030C */  jal        func_800F4F28
    /* 27B94 80119794 21204000 */   addu      $a0, $v0, $zero
    /* 27B98 80119798 D3D3030C */  jal        func_800F4F4C
    /* 27B9C 8011979C 00000000 */   nop
    /* 27BA0 801197A0 0FCF030C */  jal        func_800F3C3C
    /* 27BA4 801197A4 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 27BA8 801197A8 90DE030C */  jal        func_800F7A40
    /* 27BAC 801197AC 21204000 */   addu      $a0, $v0, $zero
    /* 27BB0 801197B0 0FCF030C */  jal        func_800F3C3C
    /* 27BB4 801197B4 89000424 */   addiu     $a0, $zero, 0x89
    /* 27BB8 801197B8 CAD3030C */  jal        func_800F4F28
    /* 27BBC 801197BC 21204000 */   addu      $a0, $v0, $zero
    /* 27BC0 801197C0 D3D3030C */  jal        func_800F4F4C
    /* 27BC4 801197C4 00000000 */   nop
    /* 27BC8 801197C8 0FCF030C */  jal        func_800F3C3C
    /* 27BCC 801197CC 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 27BD0 801197D0 90DE030C */  jal        func_800F7A40
    /* 27BD4 801197D4 21204000 */   addu      $a0, $v0, $zero
  .L801197D8:
    /* 27BD8 801197D8 DEF9030C */  jal        func_800FE778
    /* 27BDC 801197DC 00000000 */   nop
    /* 27BE0 801197E0 59D9030C */  jal        func_800F6564
    /* 27BE4 801197E4 00170424 */   addiu     $a0, $zero, 0x1700
    /* 27BE8 801197E8 5DD5030C */  jal        func_800F5574
    /* 27BEC 801197EC 03000424 */   addiu     $a0, $zero, 0x3
    /* 27BF0 801197F0 F5D4030C */  jal        func_800F53D4
    /* 27BF4 801197F4 00000000 */   nop
    /* 27BF8 801197F8 05004014 */  bnez       $v0, .L80119810
    /* 27BFC 801197FC 00000000 */   nop
    /* 27C00 80119800 09FC030C */  jal        func_800FF024
    /* 27C04 80119804 00000000 */   nop
    /* 27C08 80119808 08660408 */  j          .L80119820
    /* 27C0C 8011980C 00000000 */   nop
  .L80119810:
    /* 27C10 80119810 05C3050C */  jal        func_80170C14
    /* 27C14 80119814 00000000 */   nop
    /* 27C18 80119818 042C040C */  jal        func_8010B010
    /* 27C1C 8011981C 00000000 */   nop
  .L80119820:
    /* 27C20 80119820 9CDC030C */  jal        func_800F7270
    /* 27C24 80119824 89000424 */   addiu     $a0, $zero, 0x89
    /* 27C28 80119828 92D7030C */  jal        func_800F5E48
    /* 27C2C 8011982C 00000000 */   nop
    /* 27C30 80119830 5BE3030C */  jal        func_800F8D6C
    /* 27C34 80119834 89000424 */   addiu     $a0, $zero, 0x89
    /* 27C38 80119838 19D7030C */  jal        func_800F5C64
    /* 27C3C 8011983C 02020424 */   addiu     $a0, $zero, 0x202
    /* 27C40 80119840 E5FF4014 */  bnez       $v0, .L801197D8
    /* 27C44 80119844 00000000 */   nop
    /* 27C48 80119848 977A040C */  jal        func_8011EA5C
    /* 27C4C 8011984C 00000000 */   nop
    /* 27C50 80119850 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27C54 80119854 00000000 */  nop
    /* 27C58 80119858 0800E003 */  jr         $ra
    /* 27C5C 8011985C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119740
