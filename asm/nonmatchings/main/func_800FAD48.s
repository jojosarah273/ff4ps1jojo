nonmatching func_800FAD48, 0x354

glabel func_800FAD48
    /* 9148 800FAD48 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 914C 800FAD4C 2400BFAF */  sw         $ra, 0x24($sp)
    /* 9150 800FAD50 2000B2AF */  sw         $s2, 0x20($sp)
    /* 9154 800FAD54 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 9158 800FAD58 18E9030C */  jal        func_800FA460
    /* 915C 800FAD5C 1800B0AF */   sw        $s0, 0x18($sp)
    /* 9160 800FAD60 53D9030C */  jal        func_800F654C
    /* 9164 800FAD64 17000424 */   addiu     $a0, $zero, 0x17
    /* 9168 800FAD68 62E0030C */  jal        func_800F8188
    /* 916C 800FAD6C 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 9170 800FAD70 53D9030C */  jal        func_800F654C
    /* 9174 800FAD74 09000424 */   addiu     $a0, $zero, 0x9
    /* 9178 800FAD78 62E0030C */  jal        func_800F8188
    /* 917C 800FAD7C 05210424 */   addiu     $a0, $zero, 0x2105
    /* 9180 800FAD80 C4D1050C */  jal        func_80174710
    /* 9184 800FAD84 00000000 */   nop
    /* 9188 800FAD88 77DC030C */  jal        func_800F71DC
    /* 918C 800FAD8C 00200424 */   addiu     $a0, $zero, 0x2000
    /* 9190 800FAD90 5BE3030C */  jal        func_800F8D6C
    /* 9194 800FAD94 47000424 */   addiu     $a0, $zero, 0x47
    /* 9198 800FAD98 77DC030C */  jal        func_800F71DC
    /* 919C 800FAD9C 00100424 */   addiu     $a0, $zero, 0x1000
    /* 91A0 800FADA0 5BE3030C */  jal        func_800F8D6C
    /* 91A4 800FADA4 45000424 */   addiu     $a0, $zero, 0x45
    /* 91A8 800FADA8 53D9030C */  jal        func_800F654C
    /* 91AC 800FADAC 0A000424 */   addiu     $a0, $zero, 0xA
    /* 91B0 800FADB0 93E0030C */  jal        func_800F824C
    /* 91B4 800FADB4 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 91B8 800FADB8 77DC030C */  jal        func_800F71DC
    /* 91BC 800FADBC 00F00434 */   ori       $a0, $zero, 0xF000
    /* 91C0 800FADC0 5BE3030C */  jal        func_800F8D6C
    /* 91C4 800FADC4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 91C8 800FADC8 ACD9050C */  jal        func_801766B0
    /* 91CC 800FADCC 00000000 */   nop
    /* 91D0 800FADD0 77DC030C */  jal        func_800F71DC
    /* 91D4 800FADD4 00280424 */   addiu     $a0, $zero, 0x2800
    /* 91D8 800FADD8 5BE3030C */  jal        func_800F8D6C
    /* 91DC 800FADDC 47000424 */   addiu     $a0, $zero, 0x47
    /* 91E0 800FADE0 77DC030C */  jal        func_800F71DC
    /* 91E4 800FADE4 00100424 */   addiu     $a0, $zero, 0x1000
    /* 91E8 800FADE8 5BE3030C */  jal        func_800F8D6C
    /* 91EC 800FADEC 45000424 */   addiu     $a0, $zero, 0x45
    /* 91F0 800FADF0 EEE3030C */  jal        func_800F8FB8
    /* 91F4 800FADF4 76000424 */   addiu     $a0, $zero, 0x76
    /* 91F8 800FADF8 D2D9050C */  jal        func_80176748
    /* 91FC 800FADFC 00000000 */   nop
    /* 9200 800FAE00 B0C1050C */  jal        func_801706C0
    /* 9204 800FAE04 00000000 */   nop
    /* 9208 800FAE08 59D9030C */  jal        func_800F6564
    /* 920C 800FAE0C DF0F0424 */   addiu     $a0, $zero, 0xFDF
    /* 9210 800FAE10 92D0030C */  jal        func_800F4248
    /* 9214 800FAE14 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 9218 800FAE18 9F70040C */  jal        func_8011C27C
    /* 921C 800FAE1C 00000000 */   nop
    /* 9220 800FAE20 7DD1050C */  jal        func_801745F4
    /* 9224 800FAE24 00000000 */   nop
    /* 9228 800FAE28 E9D5050C */  jal        func_801757A4
    /* 922C 800FAE2C 00000000 */   nop
    /* 9230 800FAE30 8CD9030C */  jal        func_800F6630
    /* 9234 800FAE34 85000424 */   addiu     $a0, $zero, 0x85
    /* 9238 800FAE38 0DD9030C */  jal        func_800F6434
    /* 923C 800FAE3C 02020424 */   addiu     $a0, $zero, 0x202
    /* 9240 800FAE40 09004014 */  bnez       $v0, .L800FAE68
    /* 9244 800FAE44 00000000 */   nop
    /* 9248 800FAE48 8CD9030C */  jal        func_800F6630
    /* 924C 800FAE4C B1000424 */   addiu     $a0, $zero, 0xB1
    /* 9250 800FAE50 0DD9030C */  jal        func_800F6434
    /* 9254 800FAE54 02020424 */   addiu     $a0, $zero, 0x202
    /* 9258 800FAE58 03004014 */  bnez       $v0, .L800FAE68
    /* 925C 800FAE5C 00000000 */   nop
    /* 9260 800FAE60 AB28040C */  jal        func_8010A2AC
    /* 9264 800FAE64 00000000 */   nop
  .L800FAE68:
    /* 9268 800FAE68 EEE3030C */  jal        func_800F8FB8
    /* 926C 800FAE6C D1000424 */   addiu     $a0, $zero, 0xD1
    /* 9270 800FAE70 EEE3030C */  jal        func_800F8FB8
    /* 9274 800FAE74 85000424 */   addiu     $a0, $zero, 0x85
    /* 9278 800FAE78 8CD9030C */  jal        func_800F6630
    /* 927C 800FAE7C B1000424 */   addiu     $a0, $zero, 0xB1
    /* 9280 800FAE80 0DD9030C */  jal        func_800F6434
    /* 9284 800FAE84 02020424 */   addiu     $a0, $zero, 0x202
    /* 9288 800FAE88 03004014 */  bnez       $v0, .L800FAE98
    /* 928C 800FAE8C 00000000 */   nop
    /* 9290 800FAE90 C6F5030C */  jal        func_800FD718
    /* 9294 800FAE94 00000000 */   nop
  .L800FAE98:
    /* 9298 800FAE98 8CD9030C */  jal        func_800F6630
    /* 929C 800FAE9C 81000424 */   addiu     $a0, $zero, 0x81
    /* 92A0 800FAEA0 0DD9030C */  jal        func_800F6434
    /* 92A4 800FAEA4 02020424 */   addiu     $a0, $zero, 0x202
    /* 92A8 800FAEA8 1D004014 */  bnez       $v0, .L800FAF20
    /* 92AC 800FAEAC 00000000 */   nop
    /* 92B0 800FAEB0 53D9030C */  jal        func_800F654C
    /* 92B4 800FAEB4 11000424 */   addiu     $a0, $zero, 0x11
    /* 92B8 800FAEB8 62E0030C */  jal        func_800F8188
    /* 92BC 800FAEBC 2D210424 */   addiu     $a0, $zero, 0x212D
    /* 92C0 800FAEC0 59D9030C */  jal        func_800F6564
    /* 92C4 800FAEC4 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 92C8 800FAEC8 19DE030C */  jal        func_800F7864
    /* 92CC 800FAECC 00000000 */   nop
    /* 92D0 800FAED0 CADD030C */  jal        func_800F7728
    /* 92D4 800FAED4 01010424 */   addiu     $a0, $zero, 0x101
    /* 92D8 800FAED8 0B004014 */  bnez       $v0, .L800FAF08
    /* 92DC 800FAEDC 00000000 */   nop
    /* 92E0 800FAEE0 53D9030C */  jal        func_800F654C
    /* 92E4 800FAEE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 92E8 800FAEE8 62E0030C */  jal        func_800F8188
    /* 92EC 800FAEEC 30210424 */   addiu     $a0, $zero, 0x2130
    /* 92F0 800FAEF0 53D9030C */  jal        func_800F654C
    /* 92F4 800FAEF4 43000424 */   addiu     $a0, $zero, 0x43
    /* 92F8 800FAEF8 62E0030C */  jal        func_800F8188
    /* 92FC 800FAEFC 31210424 */   addiu     $a0, $zero, 0x2131
    /* 9300 800FAF00 DBEB0308 */  j          .L800FAF6C
    /* 9304 800FAF04 00000000 */   nop
  .L800FAF08:
    /* 9308 800FAF08 DDE3030C */  jal        func_800F8F74
    /* 930C 800FAF0C 30210424 */   addiu     $a0, $zero, 0x2130
    /* 9310 800FAF10 DDE3030C */  jal        func_800F8F74
    /* 9314 800FAF14 31210424 */   addiu     $a0, $zero, 0x2131
    /* 9318 800FAF18 DBEB0308 */  j          .L800FAF6C
    /* 931C 800FAF1C 00000000 */   nop
  .L800FAF20:
    /* 9320 800FAF20 DDE3030C */  jal        func_800F8F74
    /* 9324 800FAF24 2D210424 */   addiu     $a0, $zero, 0x212D
    /* 9328 800FAF28 53D9030C */  jal        func_800F654C
    /* 932C 800FAF2C 83000424 */   addiu     $a0, $zero, 0x83
    /* 9330 800FAF30 62E0030C */  jal        func_800F8188
    /* 9334 800FAF34 31210424 */   addiu     $a0, $zero, 0x2131
    /* 9338 800FAF38 8CD9030C */  jal        func_800F6630
    /* 933C 800FAF3C 83000424 */   addiu     $a0, $zero, 0x83
    /* 9340 800FAF40 92D0030C */  jal        func_800F4248
    /* 9344 800FAF44 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 9348 800FAF48 0FCF030C */  jal        func_800F3C3C
    /* 934C 800FAF4C 81000424 */   addiu     $a0, $zero, 0x81
    /* 9350 800FAF50 31DE030C */  jal        func_800F78C4
    /* 9354 800FAF54 21204000 */   addu      $a0, $v0, $zero
    /* 9358 800FAF58 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 935C 800FAF5C 00000000 */  nop
    /* 9360 800FAF60 00004490 */  lbu        $a0, 0x0($v0)
    /* 9364 800FAF64 A4FA050C */  jal        func_8017EA90
    /* 9368 800FAF68 00000000 */   nop
  .L800FAF6C:
    /* 936C 800FAF6C 3876040C */  jal        func_8011D8E0
    /* 9370 800FAF70 1D80103C */   lui       $s0, %hi(D_801CFD68)
    /* 9374 800FAF74 9675040C */  jal        func_8011D658
    /* 9378 800FAF78 68FD1026 */   addiu     $s0, $s0, %lo(D_801CFD68)
    /* 937C 800FAF7C F6D9050C */  jal        func_801767D8
    /* 9380 800FAF80 0100123C */   lui       $s2, (0x10000 >> 16)
    /* 9384 800FAF84 3AF2030C */  jal        func_800FC8E8
    /* 9388 800FAF88 00000000 */   nop
    /* 938C 800FAF8C 6DDA050C */  jal        func_801769B4
    /* 9390 800FAF90 00000000 */   nop
    /* 9394 800FAF94 21200002 */  addu       $a0, $s0, $zero
    /* 9398 800FAF98 00020524 */  addiu      $a1, $zero, 0x200
    /* 939C 800FAF9C 21300000 */  addu       $a2, $zero, $zero
    /* 93A0 800FAFA0 6AFE050C */  jal        func_8017F9A8
    /* 93A4 800FAFA4 21380000 */   addu      $a3, $zero, $zero
    /* 93A8 800FAFA8 21200002 */  addu       $a0, $s0, $zero
    /* 93AC 800FAFAC 00020524 */  addiu      $a1, $zero, 0x200
    /* 93B0 800FAFB0 21300000 */  addu       $a2, $zero, $zero
    /* 93B4 800FAFB4 6AFE050C */  jal        func_8017F9A8
    /* 93B8 800FAFB8 11000724 */   addiu     $a3, $zero, 0x11
    /* 93BC 800FAFBC 00400426 */  addiu      $a0, $s0, 0x4000
    /* 93C0 800FAFC0 00020524 */  addiu      $a1, $zero, 0x200
    /* 93C4 800FAFC4 00010624 */  addiu      $a2, $zero, 0x100
    /* 93C8 800FAFC8 3EFE050C */  jal        func_8017F8F8
    /* 93CC 800FAFCC 02000724 */   addiu     $a3, $zero, 0x2
    /* 93D0 800FAFD0 FF130224 */  addiu      $v0, $zero, 0x13FF
    /* 93D4 800FAFD4 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 93D8 800FAFD8 2EEE22A4 */  sh         $v0, %lo(D_8019EE2E)($at)
    /* 93DC 800FAFDC 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 93E0 800FAFE0 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* 93E4 800FAFE4 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* 93E8 800FAFE8 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* 93EC 800FAFEC C7FE030C */  jal        func_800FFB1C
    /* 93F0 800FAFF0 00000000 */   nop
    /* 93F4 800FAFF4 626F040C */  jal        func_8011BD88
    /* 93F8 800FAFF8 00000000 */   nop
    /* 93FC 800FAFFC 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 9400 800FB000 FCA74224 */  addiu      $v0, $v0, %lo(D_8019A7FC)
    /* 9404 800FB004 02005124 */  addiu      $s1, $v0, 0x2
    /* 9408 800FB008 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 940C 800FB00C 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
  .L800FB010:
    /* 9410 800FB010 1000A427 */  addiu      $a0, $sp, 0x10
    /* 9414 800FB014 FEFF2586 */  lh         $a1, -0x2($s1)
    /* 9418 800FB018 00002686 */  lh         $a2, 0x0($s1)
    /* 941C 800FB01C 04003126 */  addiu      $s1, $s1, 0x4
    /* 9420 800FB020 00000296 */  lhu        $v0, 0x0($s0)
    /* 9424 800FB024 02000396 */  lhu        $v1, 0x2($s0)
    /* 9428 800FB028 04000796 */  lhu        $a3, 0x4($s0)
    /* 942C 800FB02C 06000896 */  lhu        $t0, 0x6($s0)
    /* 9430 800FB030 08001026 */  addiu      $s0, $s0, 0x8
    /* 9434 800FB034 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 9438 800FB038 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 943C 800FB03C 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 9440 800FB040 C051060C */  jal        func_80194700
    /* 9444 800FB044 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 9448 800FB048 E550060C */  jal        func_80194394
    /* 944C 800FB04C 21200000 */   addu      $a0, $zero, $zero
    /* 9450 800FB050 21184002 */  addu       $v1, $s2, $zero
    /* 9454 800FB054 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 9458 800FB058 031C0300 */  sra        $v1, $v1, 16
    /* 945C 800FB05C 11006328 */  slti       $v1, $v1, 0x11
    /* 9460 800FB060 EBFF6014 */  bnez       $v1, .L800FB010
    /* 9464 800FB064 21904202 */   addu      $s2, $s2, $v0
    /* 9468 800FB068 C0000224 */  addiu      $v0, $zero, 0xC0
    /* 946C 800FB06C 2400BF8F */  lw         $ra, 0x24($sp)
    /* 9470 800FB070 2000B28F */  lw         $s2, 0x20($sp)
    /* 9474 800FB074 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 9478 800FB078 1800B08F */  lw         $s0, 0x18($sp)
    /* 947C 800FB07C E0010324 */  addiu      $v1, $zero, 0x1E0
    /* 9480 800FB080 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 9484 800FB084 10000224 */  addiu      $v0, $zero, 0x10
    /* 9488 800FB088 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 948C 800FB08C 1400A2A7 */  sh         $v0, 0x14($sp)
    /* 9490 800FB090 1600A2A7 */  sh         $v0, 0x16($sp)
    /* 9494 800FB094 0800E003 */  jr         $ra
    /* 9498 800FB098 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_800FAD48
