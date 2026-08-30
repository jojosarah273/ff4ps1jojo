nonmatching func_801911E8, 0x1E0

glabel func_801911E8
    /* 9F5E8 801911E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9F5EC 801911EC 0F80043C */  lui        $a0, %hi(D_800F3650)
    /* 9F5F0 801911F0 50368424 */  addiu      $a0, $a0, %lo(D_800F3650)
    /* 9F5F4 801911F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9F5F8 801911F8 8845060C */  jal        func_80191620
    /* 9F5FC 801911FC 00000000 */   nop
    /* 9F600 80191200 0F80043C */  lui        $a0, %hi(D_800F365C)
    /* 9F604 80191204 5C368424 */  addiu      $a0, $a0, %lo(D_800F365C)
    /* 9F608 80191208 1A80053C */  lui        $a1, %hi(D_8019BCCC)
    /* 9F60C 8019120C 323C060C */  jal        func_8018F0C8
    /* 9F610 80191210 CCBCA524 */   addiu     $a1, $a1, %lo(D_8019BCCC)
    /* 9F614 80191214 1A80013C */  lui        $at, %hi(D_8019BA09)
    /* 9F618 80191218 09BA20A0 */  sb         $zero, %lo(D_8019BA09)($at)
    /* 9F61C 8019121C 1A80013C */  lui        $at, %hi(D_8019BA08)
    /* 9F620 80191220 08BA20A0 */  sb         $zero, %lo(D_8019BA08)($at)
    /* 9F624 80191224 1A80013C */  lui        $at, %hi(D_8019B9F0)
    /* 9F628 80191228 F0B920AC */  sw         $zero, %lo(D_8019B9F0)($at)
    /* 9F62C 8019122C 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9F630 80191230 ECB920AC */  sw         $zero, %lo(D_8019B9EC)($at)
    /* 9F634 80191234 1A80013C */  lui        $at, %hi(D_8019B9FC)
    /* 9F638 80191238 FCB920AC */  sw         $zero, %lo(D_8019B9FC)($at)
    /* 9F63C 8019123C 1A80013C */  lui        $at, %hi(D_8019B9F8)
    /* 9F640 80191240 BE4A060C */  jal        func_80192AF8
    /* 9F644 80191244 F8B920AC */   sw        $zero, %lo(D_8019B9F8)($at)
    /* 9F648 80191248 1980053C */  lui        $a1, %hi(func_8019153C)
    /* 9F64C 8019124C 3C15A524 */  addiu      $a1, $a1, %lo(func_8019153C)
    /* 9F650 80191250 CA4A060C */  jal        func_80192B28
    /* 9F654 80191254 02000424 */   addiu     $a0, $zero, 0x2
    /* 9F658 80191258 1A80033C */  lui        $v1, %hi(D_8019BCB0)
    /* 9F65C 8019125C B0BC638C */  lw         $v1, %lo(D_8019BCB0)($v1)
    /* 9F660 80191260 01000224 */  addiu      $v0, $zero, 0x1
    /* 9F664 80191264 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F668 80191268 1A80023C */  lui        $v0, %hi(D_8019BCB4)
    /* 9F66C 8019126C B4BC428C */  lw         $v0, %lo(D_8019BCB4)($v0)
    /* 9F670 80191270 00000000 */  nop
    /* 9F674 80191274 00004290 */  lbu        $v0, 0x0($v0)
    /* 9F678 80191278 00000000 */  nop
    /* 9F67C 8019127C 07004230 */  andi       $v0, $v0, 0x7
    /* 9F680 80191280 16004010 */  beqz       $v0, .L801912DC
    /* 9F684 80191284 01000424 */   addiu     $a0, $zero, 0x1
    /* 9F688 80191288 07000324 */  addiu      $v1, $zero, 0x7
  .L8019128C:
    /* 9F68C 8019128C 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9F690 80191290 B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9F694 80191294 00000000 */  nop
    /* 9F698 80191298 000044A0 */  sb         $a0, 0x0($v0)
    /* 9F69C 8019129C 1A80023C */  lui        $v0, %hi(D_8019BCB4)
    /* 9F6A0 801912A0 B4BC428C */  lw         $v0, %lo(D_8019BCB4)($v0)
    /* 9F6A4 801912A4 00000000 */  nop
    /* 9F6A8 801912A8 000043A0 */  sb         $v1, 0x0($v0)
    /* 9F6AC 801912AC 1A80023C */  lui        $v0, %hi(D_8019BCC0)
    /* 9F6B0 801912B0 C0BC428C */  lw         $v0, %lo(D_8019BCC0)($v0)
    /* 9F6B4 801912B4 00000000 */  nop
    /* 9F6B8 801912B8 000043A0 */  sb         $v1, 0x0($v0)
    /* 9F6BC 801912BC 1A80023C */  lui        $v0, %hi(D_8019BCB4)
    /* 9F6C0 801912C0 B4BC428C */  lw         $v0, %lo(D_8019BCB4)($v0)
    /* 9F6C4 801912C4 00000000 */  nop
    /* 9F6C8 801912C8 00004290 */  lbu        $v0, 0x0($v0)
    /* 9F6CC 801912CC 00000000 */  nop
    /* 9F6D0 801912D0 07004230 */  andi       $v0, $v0, 0x7
    /* 9F6D4 801912D4 EDFF4014 */  bnez       $v0, .L8019128C
    /* 9F6D8 801912D8 00000000 */   nop
  .L801912DC:
    /* 9F6DC 801912DC 01000424 */  addiu      $a0, $zero, 0x1
    /* 9F6E0 801912E0 21280000 */  addu       $a1, $zero, $zero
    /* 9F6E4 801912E4 1A80033C */  lui        $v1, %hi(D_8019BCC8)
    /* 9F6E8 801912E8 C8BC6324 */  addiu      $v1, $v1, %lo(D_8019BCC8)
    /* 9F6EC 801912EC 020060A0 */  sb         $zero, 0x2($v1)
    /* 9F6F0 801912F0 02006290 */  lbu        $v0, 0x2($v1)
    /* 9F6F4 801912F4 21300000 */  addu       $a2, $zero, $zero
    /* 9F6F8 801912F8 010062A0 */  sb         $v0, 0x1($v1)
    /* 9F6FC 801912FC 1A80073C */  lui        $a3, %hi(D_8019BCB0)
    /* 9F700 80191300 B0BCE78C */  lw         $a3, %lo(D_8019BCB0)($a3)
    /* 9F704 80191304 02000224 */  addiu      $v0, $zero, 0x2
    /* 9F708 80191308 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F70C 8019130C 0000E0A0 */  sb         $zero, 0x0($a3)
    /* 9F710 80191310 1A80023C */  lui        $v0, %hi(D_8019BCB4)
    /* 9F714 80191314 B4BC428C */  lw         $v0, %lo(D_8019BCB4)($v0)
    /* 9F718 80191318 21380000 */  addu       $a3, $zero, $zero
    /* 9F71C 8019131C 000040A0 */  sb         $zero, 0x0($v0)
    /* 9F720 80191320 1A80033C */  lui        $v1, %hi(D_8019BCB8)
    /* 9F724 80191324 B8BC638C */  lw         $v1, %lo(D_8019BCB8)($v1)
    /* 9F728 80191328 25130224 */  addiu      $v0, $zero, 0x1325
    /* 9F72C 8019132C D142060C */  jal        func_80190B44
    /* 9F730 80191330 000062AC */   sw        $v0, 0x0($v1)
    /* 9F734 80191334 1A80023C */  lui        $v0, %hi(D_8019B9F8)
    /* 9F738 80191338 F8B9428C */  lw         $v0, %lo(D_8019B9F8)($v0)
    /* 9F73C 8019133C 00000000 */  nop
    /* 9F740 80191340 10004230 */  andi       $v0, $v0, 0x10
    /* 9F744 80191344 05004010 */  beqz       $v0, .L8019135C
    /* 9F748 80191348 01000424 */   addiu     $a0, $zero, 0x1
    /* 9F74C 8019134C 21280000 */  addu       $a1, $zero, $zero
    /* 9F750 80191350 21300000 */  addu       $a2, $zero, $zero
    /* 9F754 80191354 D142060C */  jal        func_80190B44
    /* 9F758 80191358 21380000 */   addu      $a3, $zero, $zero
  .L8019135C:
    /* 9F75C 8019135C 0A000424 */  addiu      $a0, $zero, 0xA
    /* 9F760 80191360 21280000 */  addu       $a1, $zero, $zero
    /* 9F764 80191364 21300000 */  addu       $a2, $zero, $zero
    /* 9F768 80191368 D142060C */  jal        func_80190B44
    /* 9F76C 8019136C 21380000 */   addu      $a3, $zero, $zero
    /* 9F770 80191370 11004014 */  bnez       $v0, .L801913B8
    /* 9F774 80191374 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9F778 80191378 0C000424 */  addiu      $a0, $zero, 0xC
    /* 9F77C 8019137C 21280000 */  addu       $a1, $zero, $zero
    /* 9F780 80191380 21300000 */  addu       $a2, $zero, $zero
    /* 9F784 80191384 D142060C */  jal        func_80190B44
    /* 9F788 80191388 21380000 */   addu      $a3, $zero, $zero
    /* 9F78C 8019138C 09004014 */  bnez       $v0, .L801913B4
    /* 9F790 80191390 21200000 */   addu      $a0, $zero, $zero
    /* 9F794 80191394 7F41060C */  jal        func_801905FC
    /* 9F798 80191398 21280000 */   addu      $a1, $zero, $zero
    /* 9F79C 8019139C 21204000 */  addu       $a0, $v0, $zero
    /* 9F7A0 801913A0 02000324 */  addiu      $v1, $zero, 0x2
    /* 9F7A4 801913A4 04008314 */  bne        $a0, $v1, .L801913B8
    /* 9F7A8 801913A8 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9F7AC 801913AC EE440608 */  j          .L801913B8
    /* 9F7B0 801913B0 21100000 */   addu      $v0, $zero, $zero
  .L801913B4:
    /* 9F7B4 801913B4 FFFF0224 */  addiu      $v0, $zero, -0x1
  .L801913B8:
    /* 9F7B8 801913B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9F7BC 801913BC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9F7C0 801913C0 0800E003 */  jr         $ra
    /* 9F7C4 801913C4 00000000 */   nop
endlabel func_801911E8
