nonmatching func_8012B190, 0x7C0

glabel func_8012B190
    /* 39590 8012B190 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 39594 8012B194 231B0424 */  addiu      $a0, $zero, 0x1B23
    /* 39598 8012B198 1800BFAF */  sw         $ra, 0x18($sp)
    /* 3959C 8012B19C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 395A0 8012B1A0 59D9030C */  jal        func_800F6564
    /* 395A4 8012B1A4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 395A8 8012B1A8 04D5030C */  jal        func_800F5410
    /* 395AC 8012B1AC 00000000 */   nop
    /* 395B0 8012B1B0 C1CE030C */  jal        func_800F3B04
    /* 395B4 8012B1B4 1A1B0424 */   addiu     $a0, $zero, 0x1B1A
    /* 395B8 8012B1B8 CECF030C */  jal        func_800F3F38
    /* 395BC 8012B1BC 21204000 */   addu      $a0, $v0, $zero
    /* 395C0 8012B1C0 C1CE030C */  jal        func_800F3B04
    /* 395C4 8012B1C4 251B0424 */   addiu     $a0, $zero, 0x1B25
    /* 395C8 8012B1C8 35D5030C */  jal        func_800F54D4
    /* 395CC 8012B1CC 21204000 */   addu      $a0, $v0, $zero
    /* 395D0 8012B1D0 F5D4030C */  jal        func_800F53D4
    /* 395D4 8012B1D4 00000000 */   nop
    /* 395D8 8012B1D8 8D004010 */  beqz       $v0, .L8012B410
    /* 395DC 8012B1DC 00000000 */   nop
    /* 395E0 8012B1E0 59D9030C */  jal        func_800F6564
    /* 395E4 8012B1E4 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 395E8 8012B1E8 C1CE030C */  jal        func_800F3B04
    /* 395EC 8012B1EC 241B0424 */   addiu     $a0, $zero, 0x1B24
    /* 395F0 8012B1F0 35D5030C */  jal        func_800F54D4
    /* 395F4 8012B1F4 21204000 */   addu      $a0, $v0, $zero
    /* 395F8 8012B1F8 F5D4030C */  jal        func_800F53D4
    /* 395FC 8012B1FC 00000000 */   nop
    /* 39600 8012B200 83004010 */  beqz       $v0, .L8012B410
    /* 39604 8012B204 00000000 */   nop
    /* 39608 8012B208 59D9030C */  jal        func_800F6564
    /* 3960C 8012B20C 251B0424 */   addiu     $a0, $zero, 0x1B25
    /* 39610 8012B210 50D4030C */  jal        func_800F5140
    /* 39614 8012B214 00000000 */   nop
    /* 39618 8012B218 D3D3030C */  jal        func_800F4F4C
    /* 3961C 8012B21C 00000000 */   nop
    /* 39620 8012B220 C1CE030C */  jal        func_800F3B04
    /* 39624 8012B224 241B0424 */   addiu     $a0, $zero, 0x1B24
    /* 39628 8012B228 CECF030C */  jal        func_800F3F38
    /* 3962C 8012B22C 21204000 */   addu      $a0, $v0, $zero
    /* 39630 8012B230 50D4030C */  jal        func_800F5140
    /* 39634 8012B234 00000000 */   nop
    /* 39638 8012B238 93E0030C */  jal        func_800F824C
    /* 3963C 8012B23C 45000424 */   addiu     $a0, $zero, 0x45
    /* 39640 8012B240 EEE3030C */  jal        func_800F8FB8
    /* 39644 8012B244 46000424 */   addiu     $a0, $zero, 0x46
    /* 39648 8012B248 9CDC030C */  jal        func_800F7270
    /* 3964C 8012B24C 45000424 */   addiu     $a0, $zero, 0x45
    /* 39650 8012B250 DADA030C */  jal        func_800F6B68
    /* 39654 8012B254 41140424 */   addiu     $a0, $zero, 0x1441
    /* 39658 8012B258 0DD9030C */  jal        func_800F6434
    /* 3965C 8012B25C 02000424 */   addiu     $a0, $zero, 0x2
    /* 39660 8012B260 6C014014 */  bnez       $v0, .L8012B814
    /* 39664 8012B264 00000000 */   nop
    /* 39668 8012B268 DADA030C */  jal        func_800F6B68
    /* 3966C 8012B26C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 39670 8012B270 5DD5030C */  jal        func_800F5574
    /* 39674 8012B274 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 39678 8012B278 F5D4030C */  jal        func_800F53D4
    /* 3967C 8012B27C 00000000 */   nop
    /* 39680 8012B280 0D004010 */  beqz       $v0, .L8012B2B8
    /* 39684 8012B284 00000000 */   nop
    /* 39688 8012B288 53D9030C */  jal        func_800F654C
    /* 3968C 8012B28C 63000424 */   addiu     $a0, $zero, 0x63
    /* 39690 8012B290 93E0030C */  jal        func_800F824C
    /* 39694 8012B294 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 39698 8012B298 77DC030C */  jal        func_800F71DC
    /* 3969C 8012B29C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 396A0 8012B2A0 11BA040C */  jal        func_8012E844
    /* 396A4 8012B2A4 00000000 */   nop
    /* 396A8 8012B2A8 7B88040C */  jal        func_801221EC
    /* 396AC 8012B2AC 00000000 */   nop
    /* 396B0 8012B2B0 4FAE0408 */  j          .L8012B93C
    /* 396B4 8012B2B4 21100000 */   addu      $v0, $zero, $zero
  .L8012B2B8:
    /* 396B8 8012B2B8 80AB040C */  jal        func_8012AE00
    /* 396BC 8012B2BC 00000000 */   nop
    /* 396C0 8012B2C0 8CD9030C */  jal        func_800F6630
    /* 396C4 8012B2C4 60000424 */   addiu     $a0, $zero, 0x60
    /* 396C8 8012B2C8 92D0030C */  jal        func_800F4248
    /* 396CC 8012B2CC 08000424 */   addiu     $a0, $zero, 0x8
    /* 396D0 8012B2D0 48D0030C */  jal        func_800F4120
    /* 396D4 8012B2D4 02020424 */   addiu     $a0, $zero, 0x202
    /* 396D8 8012B2D8 2C004014 */  bnez       $v0, .L8012B38C
    /* 396DC 8012B2DC 00000000 */   nop
    /* 396E0 8012B2E0 DADA030C */  jal        func_800F6B68
    /* 396E4 8012B2E4 40140424 */   addiu     $a0, $zero, 0x1440
    /* 396E8 8012B2E8 62E0030C */  jal        func_800F8188
    /* 396EC 8012B2EC 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 396F0 8012B2F0 40E3030C */  jal        func_800F8D00
    /* 396F4 8012B2F4 3C1B0424 */   addiu     $a0, $zero, 0x1B3C
    /* 396F8 8012B2F8 5DD5030C */  jal        func_800F5574
    /* 396FC 8012B2FC ED000424 */   addiu     $a0, $zero, 0xED
    /* 39700 8012B300 F5D4030C */  jal        func_800F53D4
    /* 39704 8012B304 00000000 */   nop
    /* 39708 8012B308 14004010 */  beqz       $v0, .L8012B35C
    /* 3970C 8012B30C 00000000 */   nop
    /* 39710 8012B310 1A80023C */  lui        $v0, %hi(D_8019EF0C)
    /* 39714 8012B314 0CEF4290 */  lbu        $v0, %lo(D_8019EF0C)($v0)
    /* 39718 8012B318 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3971C 8012B31C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 39720 8012B320 0D80013C */  lui        $at, %hi(D_800D1E05)
    /* 39724 8012B324 051E22A0 */  sb         $v0, %lo(D_800D1E05)($at)
    /* 39728 8012B328 00006494 */  lhu        $a0, 0x0($v1)
    /* 3972C 8012B32C C1CE030C */  jal        func_800F3B04
    /* 39730 8012B330 41148424 */   addiu     $a0, $a0, 0x1441
    /* 39734 8012B334 CBD6030C */  jal        func_800F5B2C
    /* 39738 8012B338 21204000 */   addu      $a0, $v0, $zero
    /* 3973C 8012B33C E3D6030C */  jal        func_800F5B8C
    /* 39740 8012B340 02020424 */   addiu     $a0, $zero, 0x202
    /* 39744 8012B344 42014014 */  bnez       $v0, .L8012B850
    /* 39748 8012B348 00000000 */   nop
    /* 3974C 8012B34C 3BE4030C */  jal        func_800F90EC
    /* 39750 8012B350 40140424 */   addiu     $a0, $zero, 0x1440
    /* 39754 8012B354 14AE0408 */  j          .L8012B850
    /* 39758 8012B358 00000000 */   nop
  .L8012B35C:
    /* 3975C 8012B35C 5DD5030C */  jal        func_800F5574
    /* 39760 8012B360 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 39764 8012B364 F0D4030C */  jal        func_800F53C0
    /* 39768 8012B368 00000000 */   nop
    /* 3976C 8012B36C 07004010 */  beqz       $v0, .L8012B38C
    /* 39770 8012B370 00000000 */   nop
    /* 39774 8012B374 5DD5030C */  jal        func_800F5574
    /* 39778 8012B378 EB000424 */   addiu     $a0, $zero, 0xEB
    /* 3977C 8012B37C F0D4030C */  jal        func_800F53C0
    /* 39780 8012B380 00000000 */   nop
    /* 39784 8012B384 C2004010 */  beqz       $v0, .L8012B690
    /* 39788 8012B388 00000000 */   nop
  .L8012B38C:
    /* 3978C 8012B38C 2B84040C */  jal        func_801210AC
    /* 39790 8012B390 1A80113C */   lui       $s1, %hi(D_80199190)
    /* 39794 8012B394 90913026 */  addiu      $s0, $s1, %lo(D_80199190)
    /* 39798 8012B398 1A000496 */  lhu        $a0, 0x1A($s0)
    /* 3979C 8012B39C 40DD030C */  jal        func_800F7500
    /* 397A0 8012B3A0 00000000 */   nop
    /* 397A4 8012B3A4 CC7B040C */  jal        func_8011EF30
    /* 397A8 8012B3A8 00000000 */   nop
    /* 397AC 8012B3AC 28000496 */  lhu        $a0, 0x28($s0)
    /* 397B0 8012B3B0 40DD030C */  jal        func_800F7500
    /* 397B4 8012B3B4 00000000 */   nop
    /* 397B8 8012B3B8 E97E040C */  jal        func_8011FBA4
    /* 397BC 8012B3BC 00000000 */   nop
  .L8012B3C0:
    /* 397C0 8012B3C0 FC98040C */  jal        func_801263F0
    /* 397C4 8012B3C4 90913026 */   addiu     $s0, $s1, %lo(D_80199190)
    /* 397C8 8012B3C8 D07F040C */  jal        func_8011FF40
    /* 397CC 8012B3CC 00000000 */   nop
    /* 397D0 8012B3D0 2CAC040C */  jal        func_8012B0B0
    /* 397D4 8012B3D4 00000000 */   nop
    /* 397D8 8012B3D8 2B84040C */  jal        func_801210AC
    /* 397DC 8012B3DC 00000000 */   nop
    /* 397E0 8012B3E0 18000496 */  lhu        $a0, 0x18($s0)
    /* 397E4 8012B3E4 40DD030C */  jal        func_800F7500
    /* 397E8 8012B3E8 00000000 */   nop
    /* 397EC 8012B3EC CC7B040C */  jal        func_8011EF30
    /* 397F0 8012B3F0 00000000 */   nop
    /* 397F4 8012B3F4 24000496 */  lhu        $a0, 0x24($s0)
    /* 397F8 8012B3F8 40DD030C */  jal        func_800F7500
    /* 397FC 8012B3FC 00000000 */   nop
    /* 39800 8012B400 E97E040C */  jal        func_8011FBA4
    /* 39804 8012B404 00000000 */   nop
    /* 39808 8012B408 4FAE0408 */  j          .L8012B93C
    /* 3980C 8012B40C 21100000 */   addu      $v0, $zero, $zero
  .L8012B410:
    /* 39810 8012B410 2CAC040C */  jal        func_8012B0B0
    /* 39814 8012B414 00000000 */   nop
    /* 39818 8012B418 59D9030C */  jal        func_800F6564
    /* 3981C 8012B41C 231B0424 */   addiu     $a0, $zero, 0x1B23
    /* 39820 8012B420 04D5030C */  jal        func_800F5410
    /* 39824 8012B424 00000000 */   nop
    /* 39828 8012B428 C1CE030C */  jal        func_800F3B04
    /* 3982C 8012B42C 1A1B0424 */   addiu     $a0, $zero, 0x1B1A
    /* 39830 8012B430 CECF030C */  jal        func_800F3F38
    /* 39834 8012B434 21204000 */   addu      $a0, $v0, $zero
    /* 39838 8012B438 50D4030C */  jal        func_800F5140
    /* 3983C 8012B43C 00000000 */   nop
    /* 39840 8012B440 D3D3030C */  jal        func_800F4F4C
    /* 39844 8012B444 00000000 */   nop
    /* 39848 8012B448 C1CE030C */  jal        func_800F3B04
    /* 3984C 8012B44C 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 39850 8012B450 CECF030C */  jal        func_800F3F38
    /* 39854 8012B454 21204000 */   addu      $a0, $v0, $zero
    /* 39858 8012B458 50D4030C */  jal        func_800F5140
    /* 3985C 8012B45C 00000000 */   nop
    /* 39860 8012B460 93E0030C */  jal        func_800F824C
    /* 39864 8012B464 45000424 */   addiu     $a0, $zero, 0x45
    /* 39868 8012B468 EEE3030C */  jal        func_800F8FB8
    /* 3986C 8012B46C 46000424 */   addiu     $a0, $zero, 0x46
    /* 39870 8012B470 65DD030C */  jal        func_800F7594
    /* 39874 8012B474 45000424 */   addiu     $a0, $zero, 0x45
    /* 39878 8012B478 59D9030C */  jal        func_800F6564
    /* 3987C 8012B47C 251B0424 */   addiu     $a0, $zero, 0x1B25
    /* 39880 8012B480 50D4030C */  jal        func_800F5140
    /* 39884 8012B484 00000000 */   nop
    /* 39888 8012B488 D3D3030C */  jal        func_800F4F4C
    /* 3988C 8012B48C 00000000 */   nop
    /* 39890 8012B490 C1CE030C */  jal        func_800F3B04
    /* 39894 8012B494 241B0424 */   addiu     $a0, $zero, 0x1B24
    /* 39898 8012B498 CECF030C */  jal        func_800F3F38
    /* 3989C 8012B49C 21204000 */   addu      $a0, $v0, $zero
    /* 398A0 8012B4A0 50D4030C */  jal        func_800F5140
    /* 398A4 8012B4A4 00000000 */   nop
    /* 398A8 8012B4A8 93E0030C */  jal        func_800F824C
    /* 398AC 8012B4AC 45000424 */   addiu     $a0, $zero, 0x45
    /* 398B0 8012B4B0 9CDC030C */  jal        func_800F7270
    /* 398B4 8012B4B4 45000424 */   addiu     $a0, $zero, 0x45
    /* 398B8 8012B4B8 5CDB030C */  jal        func_800F6D70
    /* 398BC 8012B4BC 40140424 */   addiu     $a0, $zero, 0x1440
    /* 398C0 8012B4C0 5DD5030C */  jal        func_800F5574
    /* 398C4 8012B4C4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 398C8 8012B4C8 F5D4030C */  jal        func_800F53D4
    /* 398CC 8012B4CC 00000000 */   nop
    /* 398D0 8012B4D0 23004010 */  beqz       $v0, .L8012B560
    /* 398D4 8012B4D4 00000000 */   nop
    /* 398D8 8012B4D8 DADA030C */  jal        func_800F6B68
    /* 398DC 8012B4DC 40140424 */   addiu     $a0, $zero, 0x1440
    /* 398E0 8012B4E0 0DD9030C */  jal        func_800F6434
    /* 398E4 8012B4E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 398E8 8012B4E8 1D004014 */  bnez       $v0, .L8012B560
    /* 398EC 8012B4EC 00000000 */   nop
    /* 398F0 8012B4F0 5DD5030C */  jal        func_800F5574
    /* 398F4 8012B4F4 ED000424 */   addiu     $a0, $zero, 0xED
    /* 398F8 8012B4F8 F5D4030C */  jal        func_800F53D4
    /* 398FC 8012B4FC 00000000 */   nop
    /* 39900 8012B500 5B004014 */  bnez       $v0, .L8012B670
    /* 39904 8012B504 00000000 */   nop
    /* 39908 8012B508 5DD5030C */  jal        func_800F5574
    /* 3990C 8012B50C 19000424 */   addiu     $a0, $zero, 0x19
    /* 39910 8012B510 F5D4030C */  jal        func_800F53D4
    /* 39914 8012B514 00000000 */   nop
    /* 39918 8012B518 0D004014 */  bnez       $v0, .L8012B550
    /* 3991C 8012B51C 00000000 */   nop
    /* 39920 8012B520 5DD5030C */  jal        func_800F5574
    /* 39924 8012B524 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 39928 8012B528 F5D4030C */  jal        func_800F53D4
    /* 3992C 8012B52C 00000000 */   nop
    /* 39930 8012B530 07004014 */  bnez       $v0, .L8012B550
    /* 39934 8012B534 00000000 */   nop
    /* 39938 8012B538 5DD5030C */  jal        func_800F5574
    /* 3993C 8012B53C EC000424 */   addiu     $a0, $zero, 0xEC
    /* 39940 8012B540 F0D4030C */  jal        func_800F53C0
    /* 39944 8012B544 00000000 */   nop
    /* 39948 8012B548 49004010 */  beqz       $v0, .L8012B670
    /* 3994C 8012B54C 00000000 */   nop
  .L8012B550:
    /* 39950 8012B550 6788040C */  jal        func_8012219C
    /* 39954 8012B554 00000000 */   nop
    /* 39958 8012B558 7EAD0408 */  j          .L8012B5F8
    /* 3995C 8012B55C 00000000 */   nop
  .L8012B560:
    /* 39960 8012B560 DADA030C */  jal        func_800F6B68
    /* 39964 8012B564 40140424 */   addiu     $a0, $zero, 0x1440
    /* 39968 8012B568 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 3996C 8012B56C 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 39970 8012B570 00000000 */  nop
    /* 39974 8012B574 00004494 */  lhu        $a0, 0x0($v0)
    /* 39978 8012B578 C1CE030C */  jal        func_800F3B04
    /* 3997C 8012B57C 40148424 */   addiu     $a0, $a0, 0x1440
    /* 39980 8012B580 35D5030C */  jal        func_800F54D4
    /* 39984 8012B584 21204000 */   addu      $a0, $v0, $zero
    /* 39988 8012B588 F5D4030C */  jal        func_800F53D4
    /* 3998C 8012B58C 00000000 */   nop
    /* 39990 8012B590 23004014 */  bnez       $v0, .L8012B620
    /* 39994 8012B594 00000000 */   nop
  .L8012B598:
    /* 39998 8012B598 DADA030C */  jal        func_800F6B68
    /* 3999C 8012B59C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 399A0 8012B5A0 80E4030C */  jal        func_800F9200
    /* 399A4 8012B5A4 00000000 */   nop
    /* 399A8 8012B5A8 DADA030C */  jal        func_800F6B68
    /* 399AC 8012B5AC 41140424 */   addiu     $a0, $zero, 0x1441
    /* 399B0 8012B5B0 80E4030C */  jal        func_800F9200
    /* 399B4 8012B5B4 00000000 */   nop
    /* 399B8 8012B5B8 5CDB030C */  jal        func_800F6D70
    /* 399BC 8012B5BC 40140424 */   addiu     $a0, $zero, 0x1440
    /* 399C0 8012B5C0 DAE1030C */  jal        func_800F8768
    /* 399C4 8012B5C4 40140424 */   addiu     $a0, $zero, 0x1440
    /* 399C8 8012B5C8 5CDB030C */  jal        func_800F6D70
    /* 399CC 8012B5CC 41140424 */   addiu     $a0, $zero, 0x1441
    /* 399D0 8012B5D0 DAE1030C */  jal        func_800F8768
    /* 399D4 8012B5D4 41140424 */   addiu     $a0, $zero, 0x1441
    /* 399D8 8012B5D8 F7E4030C */  jal        func_800F93DC
    /* 399DC 8012B5DC 00000000 */   nop
    /* 399E0 8012B5E0 58E2030C */  jal        func_800F8960
    /* 399E4 8012B5E4 41140424 */   addiu     $a0, $zero, 0x1441
    /* 399E8 8012B5E8 F7E4030C */  jal        func_800F93DC
    /* 399EC 8012B5EC 00000000 */   nop
    /* 399F0 8012B5F0 58E2030C */  jal        func_800F8960
    /* 399F4 8012B5F4 40140424 */   addiu     $a0, $zero, 0x1440
  .L8012B5F8:
    /* 399F8 8012B5F8 EF83040C */  jal        func_80120FBC
    /* 399FC 8012B5FC 00000000 */   nop
    /* 39A00 8012B600 B0AA040C */  jal        func_8012AAC0
    /* 39A04 8012B604 00000000 */   nop
    /* 39A08 8012B608 2CAC040C */  jal        func_8012B0B0
    /* 39A0C 8012B60C 00000000 */   nop
    /* 39A10 8012B610 2B84040C */  jal        func_801210AC
    /* 39A14 8012B614 00000000 */   nop
    /* 39A18 8012B618 4FAE0408 */  j          .L8012B93C
    /* 39A1C 8012B61C 21100000 */   addu      $v0, $zero, $zero
  .L8012B620:
    /* 39A20 8012B620 5CDB030C */  jal        func_800F6D70
    /* 39A24 8012B624 41140424 */   addiu     $a0, $zero, 0x1441
    /* 39A28 8012B628 04D5030C */  jal        func_800F5410
    /* 39A2C 8012B62C 00000000 */   nop
    /* 39A30 8012B630 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 39A34 8012B634 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 39A38 8012B638 00000000 */  nop
    /* 39A3C 8012B63C 00004494 */  lhu        $a0, 0x0($v0)
    /* 39A40 8012B640 C1CE030C */  jal        func_800F3B04
    /* 39A44 8012B644 41148424 */   addiu     $a0, $a0, 0x1441
    /* 39A48 8012B648 CECF030C */  jal        func_800F3F38
    /* 39A4C 8012B64C 21204000 */   addu      $a0, $v0, $zero
    /* 39A50 8012B650 5DD5030C */  jal        func_800F5574
    /* 39A54 8012B654 64000424 */   addiu     $a0, $zero, 0x64
    /* 39A58 8012B658 F0D4030C */  jal        func_800F53C0
    /* 39A5C 8012B65C 00000000 */   nop
    /* 39A60 8012B660 CDFF4014 */  bnez       $v0, .L8012B598
    /* 39A64 8012B664 00000000 */   nop
    /* 39A68 8012B668 58E2030C */  jal        func_800F8960
    /* 39A6C 8012B66C 41140424 */   addiu     $a0, $zero, 0x1441
  .L8012B670:
    /* 39A70 8012B670 53D9030C */  jal        func_800F654C
    /* 39A74 8012B674 21200000 */   addu      $a0, $zero, $zero
    /* 39A78 8012B678 DAE1030C */  jal        func_800F8768
    /* 39A7C 8012B67C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 39A80 8012B680 DAE1030C */  jal        func_800F8768
    /* 39A84 8012B684 41140424 */   addiu     $a0, $zero, 0x1441
    /* 39A88 8012B688 7EAD0408 */  j          .L8012B5F8
    /* 39A8C 8012B68C 00000000 */   nop
  .L8012B690:
    /* 39A90 8012B690 5DD5030C */  jal        func_800F5574
    /* 39A94 8012B694 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 39A98 8012B698 F5D4030C */  jal        func_800F53D4
    /* 39A9C 8012B69C 00000000 */   nop
    /* 39AA0 8012B6A0 13004014 */  bnez       $v0, .L8012B6F0
    /* 39AA4 8012B6A4 00000000 */   nop
    /* 39AA8 8012B6A8 5DD5030C */  jal        func_800F5574
    /* 39AAC 8012B6AC E2000424 */   addiu     $a0, $zero, 0xE2
    /* 39AB0 8012B6B0 F0D4030C */  jal        func_800F53C0
    /* 39AB4 8012B6B4 00000000 */   nop
    /* 39AB8 8012B6B8 0D004014 */  bnez       $v0, .L8012B6F0
    /* 39ABC 8012B6BC 00000000 */   nop
    /* 39AC0 8012B6C0 BEAE040C */  jal        func_8012BAF8
    /* 39AC4 8012B6C4 00000000 */   nop
    /* 39AC8 8012B6C8 8CD9030C */  jal        func_800F6630
    /* 39ACC 8012B6CC E8000424 */   addiu     $a0, $zero, 0xE8
    /* 39AD0 8012B6D0 0DD9030C */  jal        func_800F6434
    /* 39AD4 8012B6D4 80000424 */   addiu     $a0, $zero, 0x80
    /* 39AD8 8012B6D8 40004014 */  bnez       $v0, .L8012B7DC
    /* 39ADC 8012B6DC 00000000 */   nop
    /* 39AE0 8012B6E0 AB93040C */  jal        func_80124EAC
    /* 39AE4 8012B6E4 00000000 */   nop
    /* 39AE8 8012B6E8 5BE3030C */  jal        func_800F8D6C
    /* 39AEC 8012B6EC 60000424 */   addiu     $a0, $zero, 0x60
  .L8012B6F0:
    /* 39AF0 8012B6F0 84DC030C */  jal        func_800F7210
    /* 39AF4 8012B6F4 3C1B0424 */   addiu     $a0, $zero, 0x1B3C
    /* 39AF8 8012B6F8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 39AFC 8012B6FC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 39B00 8012B700 00000000 */  nop
    /* 39B04 8012B704 00004494 */  lhu        $a0, 0x0($v0)
    /* 39B08 8012B708 C1CE030C */  jal        func_800F3B04
    /* 39B0C 8012B70C 41148424 */   addiu     $a0, $a0, 0x1441
    /* 39B10 8012B710 CBD6030C */  jal        func_800F5B2C
    /* 39B14 8012B714 21204000 */   addu      $a0, $v0, $zero
    /* 39B18 8012B718 E3D6030C */  jal        func_800F5B8C
    /* 39B1C 8012B71C 02020424 */   addiu     $a0, $zero, 0x202
    /* 39B20 8012B720 03004014 */  bnez       $v0, .L8012B730
    /* 39B24 8012B724 00000000 */   nop
    /* 39B28 8012B728 3BE4030C */  jal        func_800F90EC
    /* 39B2C 8012B72C 40140424 */   addiu     $a0, $zero, 0x1440
  .L8012B730:
    /* 39B30 8012B730 59D9030C */  jal        func_800F6564
    /* 39B34 8012B734 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 39B38 8012B738 20D5030C */  jal        func_800F5480
    /* 39B3C 8012B73C 00000000 */   nop
    /* 39B40 8012B740 16E0030C */  jal        func_800F8058
    /* 39B44 8012B744 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 39B48 8012B748 77DC030C */  jal        func_800F71DC
    /* 39B4C 8012B74C 7CA60434 */   ori       $a0, $zero, 0xA67C
    /* 39B50 8012B750 1C80040C */  jal        func_80120070
    /* 39B54 8012B754 00000000 */   nop
    /* 39B58 8012B758 FF004330 */  andi       $v1, $v0, 0xFF
    /* 39B5C 8012B75C 01000224 */  addiu      $v0, $zero, 0x1
    /* 39B60 8012B760 76006210 */  beq        $v1, $v0, .L8012B93C
    /* 39B64 8012B764 00000000 */   nop
    /* 39B68 8012B768 02000224 */  addiu      $v0, $zero, 0x2
    /* 39B6C 8012B76C 73006210 */  beq        $v1, $v0, .L8012B93C
    /* 39B70 8012B770 00000000 */   nop
    /* 39B74 8012B774 59D9030C */  jal        func_800F6564
    /* 39B78 8012B778 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 39B7C 8012B77C 5DD5030C */  jal        func_800F5574
    /* 39B80 8012B780 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 39B84 8012B784 F5D4030C */  jal        func_800F53D4
    /* 39B88 8012B788 00000000 */   nop
    /* 39B8C 8012B78C 13004014 */  bnez       $v0, .L8012B7DC
    /* 39B90 8012B790 00000000 */   nop
    /* 39B94 8012B794 5DD5030C */  jal        func_800F5574
    /* 39B98 8012B798 E2000424 */   addiu     $a0, $zero, 0xE2
    /* 39B9C 8012B79C F0D4030C */  jal        func_800F53C0
    /* 39BA0 8012B7A0 00000000 */   nop
    /* 39BA4 8012B7A4 0D004014 */  bnez       $v0, .L8012B7DC
    /* 39BA8 8012B7A8 00000000 */   nop
    /* 39BAC 8012B7AC 59D9030C */  jal        func_800F6564
    /* 39BB0 8012B7B0 821A0424 */   addiu     $a0, $zero, 0x1A82
    /* 39BB4 8012B7B4 0DD9030C */  jal        func_800F6434
    /* 39BB8 8012B7B8 02020424 */   addiu     $a0, $zero, 0x202
    /* 39BBC 8012B7BC 07004014 */  bnez       $v0, .L8012B7DC
    /* 39BC0 8012B7C0 00000000 */   nop
    /* 39BC4 8012B7C4 85AE040C */  jal        func_8012BA14
    /* 39BC8 8012B7C8 00000000 */   nop
    /* 39BCC 8012B7CC FC98040C */  jal        func_801263F0
    /* 39BD0 8012B7D0 00000000 */   nop
    /* 39BD4 8012B7D4 D07F040C */  jal        func_8011FF40
    /* 39BD8 8012B7D8 00000000 */   nop
  .L8012B7DC:
    /* 39BDC 8012B7DC DDE3030C */  jal        func_800F8F74
    /* 39BE0 8012B7E0 821A0424 */   addiu     $a0, $zero, 0x1A82
    /* 39BE4 8012B7E4 0B84040C */  jal        func_8012102C
    /* 39BE8 8012B7E8 00000000 */   nop
    /* 39BEC 8012B7EC 1A80023C */  lui        $v0, %hi(D_801991B2)
    /* 39BF0 8012B7F0 B2914494 */  lhu        $a0, %lo(D_801991B2)($v0)
    /* 39BF4 8012B7F4 40DD030C */  jal        func_800F7500
    /* 39BF8 8012B7F8 00000000 */   nop
    /* 39BFC 8012B7FC DD7E040C */  jal        func_8011FB74
    /* 39C00 8012B800 00000000 */   nop
    /* 39C04 8012B804 FC98040C */  jal        func_801263F0
    /* 39C08 8012B808 00000000 */   nop
    /* 39C0C 8012B80C 4FAE0408 */  j          .L8012B93C
    /* 39C10 8012B810 21100000 */   addu      $v0, $zero, $zero
  .L8012B814:
    /* 39C14 8012B814 2B84040C */  jal        func_801210AC
    /* 39C18 8012B818 1A80113C */   lui       $s1, %hi(D_80199190)
    /* 39C1C 8012B81C 90913026 */  addiu      $s0, $s1, %lo(D_80199190)
    /* 39C20 8012B820 1A000496 */  lhu        $a0, 0x1A($s0)
    /* 39C24 8012B824 40DD030C */  jal        func_800F7500
    /* 39C28 8012B828 00000000 */   nop
    /* 39C2C 8012B82C CC7B040C */  jal        func_8011EF30
    /* 39C30 8012B830 00000000 */   nop
    /* 39C34 8012B834 2A000496 */  lhu        $a0, 0x2A($s0)
    /* 39C38 8012B838 40DD030C */  jal        func_800F7500
    /* 39C3C 8012B83C 00000000 */   nop
    /* 39C40 8012B840 E97E040C */  jal        func_8011FBA4
    /* 39C44 8012B844 00000000 */   nop
    /* 39C48 8012B848 F0AC0408 */  j          .L8012B3C0
    /* 39C4C 8012B84C 00000000 */   nop
  .L8012B850:
    /* 39C50 8012B850 59D9030C */  jal        func_800F6564
    /* 39C54 8012B854 051E0424 */   addiu     $a0, $zero, 0x1E05
    /* 39C58 8012B858 80E4030C */  jal        func_800F9200
    /* 39C5C 8012B85C 00000000 */   nop
    /* 39C60 8012B860 DDE3030C */  jal        func_800F8F74
    /* 39C64 8012B864 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 39C68 8012B868 53D9030C */  jal        func_800F654C
    /* 39C6C 8012B86C 01000424 */   addiu     $a0, $zero, 0x1
    /* 39C70 8012B870 62E0030C */  jal        func_800F8188
    /* 39C74 8012B874 881A0424 */   addiu     $a0, $zero, 0x1A88
    /* 39C78 8012B878 9CDC030C */  jal        func_800F7270
    /* 39C7C 8012B87C 93000424 */   addiu     $a0, $zero, 0x93
    /* 39C80 8012B880 40E3030C */  jal        func_800F8D00
    /* 39C84 8012B884 A51B0424 */   addiu     $a0, $zero, 0x1BA5
    /* 39C88 8012B888 53D9030C */  jal        func_800F654C
    /* 39C8C 8012B88C 85000424 */   addiu     $a0, $zero, 0x85
    /* 39C90 8012B890 62E0030C */  jal        func_800F8188
    /* 39C94 8012B894 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 39C98 8012B898 4AA4050C */  jal        func_80169128
    /* 39C9C 8012B89C 00000000 */   nop
    /* 39CA0 8012B8A0 8499040C */  jal        func_80126610
    /* 39CA4 8012B8A4 00000000 */   nop
    /* 39CA8 8012B8A8 53D9030C */  jal        func_800F654C
    /* 39CAC 8012B8AC 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 39CB0 8012B8B0 9388040C */  jal        func_8012224C
    /* 39CB4 8012B8B4 00000000 */   nop
    /* 39CB8 8012B8B8 53D9030C */  jal        func_800F654C
    /* 39CBC 8012B8BC F0000424 */   addiu     $a0, $zero, 0xF0
  .L8012B8C0:
    /* 39CC0 8012B8C0 C87C040C */  jal        func_8011F320
    /* 39CC4 8012B8C4 00000000 */   nop
    /* 39CC8 8012B8C8 33D7030C */  jal        func_800F5CCC
    /* 39CCC 8012B8CC 00000000 */   nop
    /* 39CD0 8012B8D0 E3D6030C */  jal        func_800F5B8C
    /* 39CD4 8012B8D4 02020424 */   addiu     $a0, $zero, 0x202
    /* 39CD8 8012B8D8 F9FF4014 */  bnez       $v0, .L8012B8C0
    /* 39CDC 8012B8DC 00000000 */   nop
    /* 39CE0 8012B8E0 53D9030C */  jal        func_800F654C
    /* 39CE4 8012B8E4 30000424 */   addiu     $a0, $zero, 0x30
    /* 39CE8 8012B8E8 8DE2040C */  jal        func_80138A34
    /* 39CEC 8012B8EC 00000000 */   nop
    /* 39CF0 8012B8F0 9BE2040C */  jal        func_80138A6C
    /* 39CF4 8012B8F4 00000000 */   nop
    /* 39CF8 8012B8F8 F7E4030C */  jal        func_800F93DC
    /* 39CFC 8012B8FC 00000000 */   nop
    /* 39D00 8012B900 8DE2040C */  jal        func_80138A34
    /* 39D04 8012B904 00000000 */   nop
    /* 39D08 8012B908 53D9030C */  jal        func_800F654C
    /* 39D0C 8012B90C 21200000 */   addu      $a0, $zero, $zero
    /* 39D10 8012B910 52CF030C */  jal        func_800F3D48
    /* 39D14 8012B914 00000000 */   nop
    /* 39D18 8012B918 84DC030C */  jal        func_800F7210
    /* 39D1C 8012B91C 651A0424 */   addiu     $a0, $zero, 0x1A65
    /* 39D20 8012B920 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 39D24 8012B924 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 39D28 8012B928 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 39D2C 8012B92C 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 39D30 8012B930 00004394 */  lhu        $v1, 0x0($v0)
    /* 39D34 8012B934 01000224 */  addiu      $v0, $zero, 0x1
    /* 39D38 8012B938 000083A4 */  sh         $v1, 0x0($a0)
  .L8012B93C:
    /* 39D3C 8012B93C 1800BF8F */  lw         $ra, 0x18($sp)
    /* 39D40 8012B940 1400B18F */  lw         $s1, 0x14($sp)
    /* 39D44 8012B944 1000B08F */  lw         $s0, 0x10($sp)
    /* 39D48 8012B948 0800E003 */  jr         $ra
    /* 39D4C 8012B94C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8012B190
