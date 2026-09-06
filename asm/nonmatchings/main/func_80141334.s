nonmatching func_80141334, 0x134

glabel func_80141334
    /* 4F734 80141334 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4F738 80141338 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4F73C 8014133C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F740 80141340 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F744 80141344 00006290 */  lbu        $v0, 0x0($v1)
    /* 4F748 80141348 00000000 */  nop
    /* 4F74C 8014134C C0100200 */  sll        $v0, $v0, 3
    /* 4F750 80141350 000062A0 */  sb         $v0, 0x0($v1)
    /* 4F754 80141354 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 4F758 80141358 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 4F75C 8014135C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4F760 80141360 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4F764 80141364 00008294 */  lhu        $v0, 0x0($a0)
    /* 4F768 80141368 C7E5030C */  jal        func_800F971C
    /* 4F76C 8014136C 000062A4 */   sh        $v0, 0x0($v1)
    /* 4F770 80141370 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4F774 80141374 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4F778 80141378 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4F77C 8014137C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4F780 80141380 00006294 */  lhu        $v0, 0x0($v1)
    /* 4F784 80141384 00000000 */  nop
    /* 4F788 80141388 000082A4 */  sh         $v0, 0x0($a0)
    /* 4F78C 8014138C 0D00043C */  lui        $a0, (0xDFD1C >> 16)
  .L80141390:
    /* 4F790 80141390 1ADB030C */  jal        func_800F6C68
    /* 4F794 80141394 1CFD8434 */   ori       $a0, $a0, (0xDFD1C & 0xFFFF)
    /* 4F798 80141398 58E2030C */  jal        func_800F8960
    /* 4F79C 8014139C 1BF40434 */   ori       $a0, $zero, 0xF41B
    /* 4F7A0 801413A0 D9D8030C */  jal        func_800F6364
    /* 4F7A4 801413A4 00000000 */   nop
    /* 4F7A8 801413A8 EFD8030C */  jal        func_800F63BC
    /* 4F7AC 801413AC 00000000 */   nop
    /* 4F7B0 801413B0 A4D6030C */  jal        func_800F5A90
    /* 4F7B4 801413B4 08000424 */   addiu     $a0, $zero, 0x8
    /* 4F7B8 801413B8 F5D4030C */  jal        func_800F53D4
    /* 4F7BC 801413BC 00000000 */   nop
    /* 4F7C0 801413C0 F3FF4010 */  beqz       $v0, .L80141390
    /* 4F7C4 801413C4 0D00043C */   lui       $a0, (0xDFD1C >> 16)
    /* 4F7C8 801413C8 77DC030C */  jal        func_800F71DC
    /* 4F7CC 801413CC 00010424 */   addiu     $a0, $zero, 0x100
    /* 4F7D0 801413D0 5BE3030C */  jal        func_800F8D6C
    /* 4F7D4 801413D4 21200000 */   addu      $a0, $zero, $zero
    /* 4F7D8 801413D8 84DC030C */  jal        func_800F7210
    /* 4F7DC 801413DC 1BF40434 */   ori       $a0, $zero, 0xF41B
    /* 4F7E0 801413E0 40DD030C */  jal        func_800F7500
    /* 4F7E4 801413E4 00480424 */   addiu     $a0, $zero, 0x4800
    /* 4F7E8 801413E8 53D9030C */  jal        func_800F654C
    /* 4F7EC 801413EC 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 4F7F0 801413F0 F4C8010C */  jal        func_800723D0
    /* 4F7F4 801413F4 00000000 */   nop
    /* 4F7F8 801413F8 77DC030C */  jal        func_800F71DC
    /* 4F7FC 801413FC 00010424 */   addiu     $a0, $zero, 0x100
    /* 4F800 80141400 5BE3030C */  jal        func_800F8D6C
    /* 4F804 80141404 21200000 */   addu      $a0, $zero, $zero
    /* 4F808 80141408 84DC030C */  jal        func_800F7210
    /* 4F80C 8014140C 1DF40434 */   ori       $a0, $zero, 0xF41D
    /* 4F810 80141410 40DD030C */  jal        func_800F7500
    /* 4F814 80141414 80480424 */   addiu     $a0, $zero, 0x4880
    /* 4F818 80141418 53D9030C */  jal        func_800F654C
    /* 4F81C 8014141C 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 4F820 80141420 F4C8010C */  jal        func_800723D0
    /* 4F824 80141424 00000000 */   nop
    /* 4F828 80141428 59D9030C */  jal        func_800F6564
    /* 4F82C 8014142C 1FF40434 */   ori       $a0, $zero, 0xF41F
    /* 4F830 80141430 77DC030C */  jal        func_800F71DC
    /* 4F834 80141434 04000424 */   addiu     $a0, $zero, 0x4
    /* 4F838 80141438 72D8010C */  jal        func_800761C8
    /* 4F83C 8014143C 00000000 */   nop
    /* 4F840 80141440 59D9030C */  jal        func_800F6564
    /* 4F844 80141444 20F40434 */   ori       $a0, $zero, 0xF420
    /* 4F848 80141448 77DC030C */  jal        func_800F71DC
    /* 4F84C 8014144C 05000424 */   addiu     $a0, $zero, 0x5
    /* 4F850 80141450 72D8010C */  jal        func_800761C8
    /* 4F854 80141454 00000000 */   nop
    /* 4F858 80141458 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F85C 8014145C 00000000 */  nop
    /* 4F860 80141460 0800E003 */  jr         $ra
    /* 4F864 80141464 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141334
