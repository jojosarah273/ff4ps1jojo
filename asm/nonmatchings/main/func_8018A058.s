nonmatching func_8018A058, 0xE8

glabel func_8018A058
    /* 98458 8018A058 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9845C 8018A05C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 98460 8018A060 1400BFAF */  sw         $ra, 0x14($sp)
    /* 98464 8018A064 BE4A060C */  jal        func_80192AF8
    /* 98468 8018A068 21808000 */   addu      $s0, $a0, $zero
    /* 9846C 8018A06C 6E28060C */  jal        func_8018A1B8
    /* 98470 8018A070 21200002 */   addu      $a0, $s0, $zero
    /* 98474 8018A074 08000016 */  bnez       $s0, .L8018A098
    /* 98478 8018A078 00C00434 */   ori       $a0, $zero, 0xC000
    /* 9847C 8018A07C 17000324 */  addiu      $v1, $zero, 0x17
    /* 98480 8018A080 1A80023C */  lui        $v0, %hi(D_8019B0FE)
    /* 98484 8018A084 FEB04224 */  addiu      $v0, $v0, %lo(D_8019B0FE)
  .L8018A088:
    /* 98488 8018A088 000044A4 */  sh         $a0, 0x0($v0)
    /* 9848C 8018A08C FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 98490 8018A090 FDFF6104 */  bgez       $v1, .L8018A088
    /* 98494 8018A094 FEFF4224 */   addiu     $v0, $v0, -0x2
  .L8018A098:
    /* 98498 8018A098 5028060C */  jal        func_8018A140
    /* 9849C 8018A09C 00000000 */   nop
    /* 984A0 8018A0A0 D1000424 */  addiu      $a0, $zero, 0xD1
    /* 984A4 8018A0A4 1A80023C */  lui        $v0, %hi(D_8019B0B8)
    /* 984A8 8018A0A8 B8B04224 */  addiu      $v0, $v0, %lo(D_8019B0B8)
    /* 984AC 8018A0AC 1A80053C */  lui        $a1, %hi(D_8019B6D4)
    /* 984B0 8018A0B0 D4B6A58C */  lw         $a1, %lo(D_8019B6D4)($a1)
    /* 984B4 8018A0B4 1A80013C */  lui        $at, %hi(D_8019B0A8)
    /* 984B8 8018A0B8 A8B020AC */  sw         $zero, %lo(D_8019B0A8)($at)
    /* 984BC 8018A0BC 1A80013C */  lui        $at, %hi(D_8019B0AC)
    /* 984C0 8018A0C0 ACB020AC */  sw         $zero, %lo(D_8019B0AC)($at)
    /* 984C4 8018A0C4 000040AC */  sw         $zero, 0x0($v0)
    /* 984C8 8018A0C8 040040A4 */  sh         $zero, 0x4($v0)
    /* 984CC 8018A0CC 060040A4 */  sh         $zero, 0x6($v0)
    /* 984D0 8018A0D0 080040AC */  sw         $zero, 0x8($v0)
    /* 984D4 8018A0D4 0C0040AC */  sw         $zero, 0xC($v0)
    /* 984D8 8018A0D8 1A80013C */  lui        $at, %hi(D_8019B0B0)
    /* 984DC 8018A0DC B0B025AC */  sw         $a1, %lo(D_8019B0B0)($at)
    /* 984E0 8018A0E0 B12A060C */  jal        func_8018AAC4
    /* 984E4 8018A0E4 21300000 */   addu      $a2, $zero, $zero
    /* 984E8 8018A0E8 1A80013C */  lui        $at, %hi(D_8019B174)
    /* 984EC 8018A0EC 74B120AC */  sw         $zero, %lo(D_8019B174)($at)
    /* 984F0 8018A0F0 1A80013C */  lui        $at, %hi(D_8019B178)
    /* 984F4 8018A0F4 78B120AC */  sw         $zero, %lo(D_8019B178)($at)
    /* 984F8 8018A0F8 1A80013C */  lui        $at, %hi(D_8019B17C)
    /* 984FC 8018A0FC 7CB120AC */  sw         $zero, %lo(D_8019B17C)($at)
    /* 98500 8018A100 1A80013C */  lui        $at, %hi(D_8019B0A4)
    /* 98504 8018A104 A4B020AC */  sw         $zero, %lo(D_8019B0A4)($at)
    /* 98508 8018A108 1A80013C */  lui        $at, %hi(D_8019B130)
    /* 9850C 8018A10C 30B120AC */  sw         $zero, %lo(D_8019B130)($at)
    /* 98510 8018A110 1A80013C */  lui        $at, %hi(D_8019B0A0)
    /* 98514 8018A114 A0B020AC */  sw         $zero, %lo(D_8019B0A0)($at)
    /* 98518 8018A118 1A80013C */  lui        $at, %hi(D_8019B0CC)
    /* 9851C 8018A11C CCB020AC */  sw         $zero, %lo(D_8019B0CC)($at)
    /* 98520 8018A120 1A80013C */  lui        $at, %hi(D_8019B0C8)
    /* 98524 8018A124 C8B020AC */  sw         $zero, %lo(D_8019B0C8)($at)
    /* 98528 8018A128 1A80013C */  lui        $at, %hi(D_8019B100)
    /* 9852C 8018A12C 00B120AC */  sw         $zero, %lo(D_8019B100)($at)
    /* 98530 8018A130 1400BF8F */  lw         $ra, 0x14($sp)
    /* 98534 8018A134 1000B08F */  lw         $s0, 0x10($sp)
    /* 98538 8018A138 0800E003 */  jr         $ra
    /* 9853C 8018A13C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018A058
