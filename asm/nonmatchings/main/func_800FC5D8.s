nonmatching func_800FC5D8, 0x310

glabel func_800FC5D8
    /* A9D8 800FC5D8 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* A9DC 800FC5DC 00170424 */  addiu      $a0, $zero, 0x1700
    /* A9E0 800FC5E0 2800BFAF */  sw         $ra, 0x28($sp)
    /* A9E4 800FC5E4 2400B3AF */  sw         $s3, 0x24($sp)
    /* A9E8 800FC5E8 2000B2AF */  sw         $s2, 0x20($sp)
    /* A9EC 800FC5EC 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* A9F0 800FC5F0 59D9030C */  jal        func_800F6564
    /* A9F4 800FC5F4 1800B0AF */   sw        $s0, 0x18($sp)
    /* A9F8 800FC5F8 5DD5030C */  jal        func_800F5574
    /* A9FC 800FC5FC 03000424 */   addiu     $a0, $zero, 0x3
    /* AA00 800FC600 F5D4030C */  jal        func_800F53D4
    /* AA04 800FC604 00000000 */   nop
    /* AA08 800FC608 12004014 */  bnez       $v0, .L800FC654
    /* AA0C 800FC60C 00000000 */   nop
    /* AA10 800FC610 53D9030C */  jal        func_800F654C
    /* AA14 800FC614 07000424 */   addiu     $a0, $zero, 0x7
    /* AA18 800FC618 62E0030C */  jal        func_800F8188
    /* AA1C 800FC61C 05210424 */   addiu     $a0, $zero, 0x2105
    /* AA20 800FC620 B7FE030C */  jal        func_800FFADC
    /* AA24 800FC624 00000000 */   nop
    /* AA28 800FC628 1D80043C */  lui        $a0, %hi(D_801CFD68)
    /* AA2C 800FC62C 68FD8424 */  addiu      $a0, $a0, %lo(D_801CFD68)
    /* AA30 800FC630 00020524 */  addiu      $a1, $zero, 0x200
    /* AA34 800FC634 21300000 */  addu       $a2, $zero, $zero
    /* AA38 800FC638 6AFE050C */  jal        func_8017F9A8
    /* AA3C 800FC63C 21380000 */   addu      $a3, $zero, $zero
    /* AA40 800FC640 00110224 */  addiu      $v0, $zero, 0x1100
    /* AA44 800FC644 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* AA48 800FC648 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* AA4C 800FC64C 1BF20308 */  j          .L800FC86C
    /* AA50 800FC650 00000000 */   nop
  .L800FC654:
    /* AA54 800FC654 53D9030C */  jal        func_800F654C
    /* AA58 800FC658 09000424 */   addiu     $a0, $zero, 0x9
    /* AA5C 800FC65C 62E0030C */  jal        func_800F8188
    /* AA60 800FC660 05210424 */   addiu     $a0, $zero, 0x2105
    /* AA64 800FC664 C7FE030C */  jal        func_800FFB1C
    /* AA68 800FC668 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* AA6C 800FC66C 9D32040C */  jal        func_8010CA74
    /* AA70 800FC670 68FD3026 */   addiu     $s0, $s1, %lo(D_801CFD68)
    /* AA74 800FC674 21200002 */  addu       $a0, $s0, $zero
    /* AA78 800FC678 00020524 */  addiu      $a1, $zero, 0x200
    /* AA7C 800FC67C 21300000 */  addu       $a2, $zero, $zero
    /* AA80 800FC680 6AFE050C */  jal        func_8017F9A8
    /* AA84 800FC684 21380000 */   addu      $a3, $zero, $zero
    /* AA88 800FC688 21200002 */  addu       $a0, $s0, $zero
    /* AA8C 800FC68C 00020524 */  addiu      $a1, $zero, 0x200
    /* AA90 800FC690 21300000 */  addu       $a2, $zero, $zero
    /* AA94 800FC694 6AFE050C */  jal        func_8017F9A8
    /* AA98 800FC698 11000724 */   addiu     $a3, $zero, 0x11
    /* AA9C 800FC69C 00400426 */  addiu      $a0, $s0, 0x4000
    /* AAA0 800FC6A0 00020524 */  addiu      $a1, $zero, 0x200
    /* AAA4 800FC6A4 00010624 */  addiu      $a2, $zero, 0x100
    /* AAA8 800FC6A8 3EFE050C */  jal        func_8017F8F8
    /* AAAC 800FC6AC 02000724 */   addiu     $a3, $zero, 0x2
    /* AAB0 800FC6B0 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* AAB4 800FC6B4 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* AAB8 800FC6B8 00030524 */  addiu      $a1, $zero, 0x300
    /* AABC 800FC6BC 21300000 */  addu       $a2, $zero, $zero
    /* AAC0 800FC6C0 3EFE050C */  jal        func_8017F8F8
    /* AAC4 800FC6C4 FFFF0724 */   addiu     $a3, $zero, -0x1
    /* AAC8 800FC6C8 21982002 */  addu       $s3, $s1, $zero
    /* AACC 800FC6CC 0100123C */  lui        $s2, (0x10000 >> 16)
    /* AAD0 800FC6D0 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* AAD4 800FC6D4 FCA74224 */  addiu      $v0, $v0, %lo(D_8019A7FC)
    /* AAD8 800FC6D8 02005124 */  addiu      $s1, $v0, 0x2
    /* AADC 800FC6DC 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* AAE0 800FC6E0 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* AAE4 800FC6E4 FF130224 */  addiu      $v0, $zero, 0x13FF
    /* AAE8 800FC6E8 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* AAEC 800FC6EC 2EEE22A4 */  sh         $v0, %lo(D_8019EE2E)($at)
    /* AAF0 800FC6F0 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* AAF4 800FC6F4 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* AAF8 800FC6F8 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* AAFC 800FC6FC 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* AB00 800FC700 1000A427 */  addiu      $a0, $sp, 0x10
  .L800FC704:
    /* AB04 800FC704 FEFF2586 */  lh         $a1, -0x2($s1)
    /* AB08 800FC708 00002686 */  lh         $a2, 0x0($s1)
    /* AB0C 800FC70C 04003126 */  addiu      $s1, $s1, 0x4
    /* AB10 800FC710 00000296 */  lhu        $v0, 0x0($s0)
    /* AB14 800FC714 02000396 */  lhu        $v1, 0x2($s0)
    /* AB18 800FC718 04000796 */  lhu        $a3, 0x4($s0)
    /* AB1C 800FC71C 06000896 */  lhu        $t0, 0x6($s0)
    /* AB20 800FC720 08001026 */  addiu      $s0, $s0, 0x8
    /* AB24 800FC724 1000A2A7 */  sh         $v0, 0x10($sp)
    /* AB28 800FC728 1200A3A7 */  sh         $v1, 0x12($sp)
    /* AB2C 800FC72C 1400A7A7 */  sh         $a3, 0x14($sp)
    /* AB30 800FC730 C051060C */  jal        func_80194700
    /* AB34 800FC734 1600A8A7 */   sh        $t0, 0x16($sp)
    /* AB38 800FC738 E550060C */  jal        func_80194394
    /* AB3C 800FC73C 21200000 */   addu      $a0, $zero, $zero
    /* AB40 800FC740 21184002 */  addu       $v1, $s2, $zero
    /* AB44 800FC744 0100023C */  lui        $v0, (0x10000 >> 16)
    /* AB48 800FC748 21904202 */  addu       $s2, $s2, $v0
    /* AB4C 800FC74C 03140300 */  sra        $v0, $v1, 16
    /* AB50 800FC750 11004228 */  slti       $v0, $v0, 0x11
    /* AB54 800FC754 EBFF4014 */  bnez       $v0, .L800FC704
    /* AB58 800FC758 1000A427 */   addiu     $a0, $sp, 0x10
    /* AB5C 800FC75C 59D9030C */  jal        func_800F6564
    /* AB60 800FC760 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* AB64 800FC764 19DE030C */  jal        func_800F7864
    /* AB68 800FC768 00000000 */   nop
    /* AB6C 800FC76C CADD030C */  jal        func_800F7728
    /* AB70 800FC770 01010424 */   addiu     $a0, $zero, 0x101
    /* AB74 800FC774 3D004014 */  bnez       $v0, .L800FC86C
    /* AB78 800FC778 00000000 */   nop
    /* AB7C 800FC77C 53D9030C */  jal        func_800F654C
    /* AB80 800FC780 03000424 */   addiu     $a0, $zero, 0x3
    /* AB84 800FC784 62E0030C */  jal        func_800F8188
    /* AB88 800FC788 30210424 */   addiu     $a0, $zero, 0x2130
    /* AB8C 800FC78C 53D9030C */  jal        func_800F654C
    /* AB90 800FC790 43000424 */   addiu     $a0, $zero, 0x43
    /* AB94 800FC794 62E0030C */  jal        func_800F8188
    /* AB98 800FC798 31210424 */   addiu     $a0, $zero, 0x2131
    /* AB9C 800FC79C 68FD7026 */  addiu      $s0, $s3, %lo(D_801CFD68)
    /* ABA0 800FC7A0 21200002 */  addu       $a0, $s0, $zero
    /* ABA4 800FC7A4 00020524 */  addiu      $a1, $zero, 0x200
    /* ABA8 800FC7A8 21300000 */  addu       $a2, $zero, $zero
    /* ABAC 800FC7AC 6AFE050C */  jal        func_8017F9A8
    /* ABB0 800FC7B0 21380000 */   addu      $a3, $zero, $zero
    /* ABB4 800FC7B4 21200002 */  addu       $a0, $s0, $zero
    /* ABB8 800FC7B8 00020524 */  addiu      $a1, $zero, 0x200
    /* ABBC 800FC7BC 21300000 */  addu       $a2, $zero, $zero
    /* ABC0 800FC7C0 6AFE050C */  jal        func_8017F9A8
    /* ABC4 800FC7C4 11000724 */   addiu     $a3, $zero, 0x11
    /* ABC8 800FC7C8 00400426 */  addiu      $a0, $s0, 0x4000
    /* ABCC 800FC7CC 00020524 */  addiu      $a1, $zero, 0x200
    /* ABD0 800FC7D0 00010624 */  addiu      $a2, $zero, 0x100
    /* ABD4 800FC7D4 3EFE050C */  jal        func_8017F8F8
    /* ABD8 800FC7D8 02000724 */   addiu     $a3, $zero, 0x2
    /* ABDC 800FC7DC 0100123C */  lui        $s2, (0x10000 >> 16)
    /* ABE0 800FC7E0 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* ABE4 800FC7E4 FCA74224 */  addiu      $v0, $v0, %lo(D_8019A7FC)
    /* ABE8 800FC7E8 02005124 */  addiu      $s1, $v0, 0x2
    /* ABEC 800FC7EC 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* ABF0 800FC7F0 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* ABF4 800FC7F4 FF130224 */  addiu      $v0, $zero, 0x13FF
    /* ABF8 800FC7F8 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* ABFC 800FC7FC 2EEE22A4 */  sh         $v0, %lo(D_8019EE2E)($at)
    /* AC00 800FC800 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* AC04 800FC804 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* AC08 800FC808 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* AC0C 800FC80C 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* AC10 800FC810 1000A427 */  addiu      $a0, $sp, 0x10
  .L800FC814:
    /* AC14 800FC814 FEFF2586 */  lh         $a1, -0x2($s1)
    /* AC18 800FC818 00002686 */  lh         $a2, 0x0($s1)
    /* AC1C 800FC81C 04003126 */  addiu      $s1, $s1, 0x4
    /* AC20 800FC820 00000296 */  lhu        $v0, 0x0($s0)
    /* AC24 800FC824 02000396 */  lhu        $v1, 0x2($s0)
    /* AC28 800FC828 04000796 */  lhu        $a3, 0x4($s0)
    /* AC2C 800FC82C 06000896 */  lhu        $t0, 0x6($s0)
    /* AC30 800FC830 08001026 */  addiu      $s0, $s0, 0x8
    /* AC34 800FC834 1000A2A7 */  sh         $v0, 0x10($sp)
    /* AC38 800FC838 1200A3A7 */  sh         $v1, 0x12($sp)
    /* AC3C 800FC83C 1400A7A7 */  sh         $a3, 0x14($sp)
    /* AC40 800FC840 C051060C */  jal        func_80194700
    /* AC44 800FC844 1600A8A7 */   sh        $t0, 0x16($sp)
    /* AC48 800FC848 E550060C */  jal        func_80194394
    /* AC4C 800FC84C 21200000 */   addu      $a0, $zero, $zero
    /* AC50 800FC850 21184002 */  addu       $v1, $s2, $zero
    /* AC54 800FC854 0100023C */  lui        $v0, (0x10000 >> 16)
    /* AC58 800FC858 21904202 */  addu       $s2, $s2, $v0
    /* AC5C 800FC85C 03140300 */  sra        $v0, $v1, 16
    /* AC60 800FC860 11004228 */  slti       $v0, $v0, 0x11
    /* AC64 800FC864 EBFF4014 */  bnez       $v0, .L800FC814
    /* AC68 800FC868 1000A427 */   addiu     $a0, $sp, 0x10
  .L800FC86C:
    /* AC6C 800FC86C 18D8050C */  jal        func_80176060
    /* AC70 800FC870 00000000 */   nop
    /* AC74 800FC874 A2D7050C */  jal        func_80175E88
    /* AC78 800FC878 00000000 */   nop
    /* AC7C 800FC87C DADA030C */  jal        func_800F6B68
    /* AC80 800FC880 00100424 */   addiu     $a0, $zero, 0x1000
    /* AC84 800FC884 0DD9030C */  jal        func_800F6434
    /* AC88 800FC888 02020424 */   addiu     $a0, $zero, 0x202
    /* AC8C 800FC88C 03004014 */  bnez       $v0, .L800FC89C
    /* AC90 800FC890 00000000 */   nop
    /* AC94 800FC894 82D7050C */  jal        func_80175E08
    /* AC98 800FC898 00000000 */   nop
  .L800FC89C:
    /* AC9C 800FC89C 1CFA030C */  jal        func_800FE870
    /* ACA0 800FC8A0 00000000 */   nop
    /* ACA4 800FC8A4 53D9030C */  jal        func_800F654C
    /* ACA8 800FC8A8 81000424 */   addiu     $a0, $zero, 0x81
    /* ACAC 800FC8AC 62E0030C */  jal        func_800F8188
    /* ACB0 800FC8B0 00420424 */   addiu     $a0, $zero, 0x4200
    /* ACB4 800FC8B4 53D9030C */  jal        func_800F654C
    /* ACB8 800FC8B8 21200000 */   addu      $a0, $zero, $zero
    /* ACBC 800FC8BC 17F6030C */  jal        func_800FD85C
    /* ACC0 800FC8C0 00000000 */   nop
    /* ACC4 800FC8C4 12D5030C */  jal        func_800F5448
    /* ACC8 800FC8C8 00000000 */   nop
    /* ACCC 800FC8CC 2800BF8F */  lw         $ra, 0x28($sp)
    /* ACD0 800FC8D0 2400B38F */  lw         $s3, 0x24($sp)
    /* ACD4 800FC8D4 2000B28F */  lw         $s2, 0x20($sp)
    /* ACD8 800FC8D8 1C00B18F */  lw         $s1, 0x1C($sp)
    /* ACDC 800FC8DC 1800B08F */  lw         $s0, 0x18($sp)
    /* ACE0 800FC8E0 0800E003 */  jr         $ra
    /* ACE4 800FC8E4 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_800FC5D8
