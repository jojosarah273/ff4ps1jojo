nonmatching func_80141530, 0x230

glabel func_80141530
    /* 4F930 80141530 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F934 80141534 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F938 80141538 0215050C */  jal        func_80145408
    /* 4F93C 8014153C 00000000 */   nop
    /* 4F940 80141540 459E050C */  jal        func_80167914
    /* 4F944 80141544 00000000 */   nop
    /* 4F948 80141548 59D9030C */  jal        func_800F6564
    /* 4F94C 8014154C E8380424 */   addiu     $a0, $zero, 0x38E8
    /* 4F950 80141550 0DD9030C */  jal        func_800F6434
    /* 4F954 80141554 02000424 */   addiu     $a0, $zero, 0x2
    /* 4F958 80141558 1A004014 */  bnez       $v0, .L801415C4
    /* 4F95C 8014155C 00000000 */   nop
    /* 4F960 80141560 59D9030C */  jal        func_800F6564
    /* 4F964 80141564 E9380424 */   addiu     $a0, $zero, 0x38E9
    /* 4F968 80141568 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4F96C 8014156C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4F970 80141570 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4F974 80141574 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4F978 80141578 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F97C 8014157C EA380424 */  addiu      $a0, $zero, 0x38EA
    /* 4F980 80141580 59D9030C */  jal        func_800F6564
    /* 4F984 80141584 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4F988 80141588 1600043C */  lui        $a0, (0x16FC60 >> 16)
    /* 4F98C 8014158C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4F990 80141590 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4F994 80141594 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4F998 80141598 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4F99C 8014159C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F9A0 801415A0 60FC8434 */  ori        $a0, $a0, (0x16FC60 & 0xFFFF)
    /* 4F9A4 801415A4 1ADB030C */  jal        func_800F6C68
    /* 4F9A8 801415A8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4F9AC 801415AC 58E2030C */  jal        func_800F8960
    /* 4F9B0 801415B0 99F00434 */   ori       $a0, $zero, 0xF099
    /* 4F9B4 801415B4 58E2030C */  jal        func_800F8960
    /* 4F9B8 801415B8 9EF00434 */   ori       $a0, $zero, 0xF09E
    /* 4F9BC 801415BC DDE3030C */  jal        func_800F8F74
    /* 4F9C0 801415C0 E8380424 */   addiu     $a0, $zero, 0x38E8
  .L801415C4:
    /* 4F9C4 801415C4 59D9030C */  jal        func_800F6564
    /* 4F9C8 801415C8 BD380424 */   addiu     $a0, $zero, 0x38BD
    /* 4F9CC 801415CC 0DD9030C */  jal        func_800F6434
    /* 4F9D0 801415D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4F9D4 801415D4 0D004014 */  bnez       $v0, .L8014160C
    /* 4F9D8 801415D8 00000000 */   nop
    /* 4F9DC 801415DC 59D9030C */  jal        func_800F6564
    /* 4F9E0 801415E0 BE380424 */   addiu     $a0, $zero, 0x38BE
    /* 4F9E4 801415E4 62E0030C */  jal        func_800F8188
    /* 4F9E8 801415E8 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 4F9EC 801415EC 53D9030C */  jal        func_800F654C
    /* 4F9F0 801415F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4F9F4 801415F4 62E0030C */  jal        func_800F8188
    /* 4F9F8 801415F8 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 4F9FC 801415FC 4AA4050C */  jal        func_80169128
    /* 4FA00 80141600 00000000 */   nop
    /* 4FA04 80141604 DDE3030C */  jal        func_800F8F74
    /* 4FA08 80141608 BD380424 */   addiu     $a0, $zero, 0x38BD
  .L8014160C:
    /* 4FA0C 8014160C 59D9030C */  jal        func_800F6564
    /* 4FA10 80141610 16F40434 */   ori       $a0, $zero, 0xF416
    /* 4FA14 80141614 0DD9030C */  jal        func_800F6434
    /* 4FA18 80141618 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FA1C 8014161C 07004014 */  bnez       $v0, .L8014163C
    /* 4FA20 80141620 00000000 */   nop
    /* 4FA24 80141624 62E0030C */  jal        func_800F8188
    /* 4FA28 80141628 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 4FA2C 8014162C 4AA4050C */  jal        func_80169128
    /* 4FA30 80141630 00000000 */   nop
    /* 4FA34 80141634 DDE3030C */  jal        func_800F8F74
    /* 4FA38 80141638 16F40434 */   ori       $a0, $zero, 0xF416
  .L8014163C:
    /* 4FA3C 8014163C 59D9030C */  jal        func_800F6564
    /* 4FA40 80141640 12F40434 */   ori       $a0, $zero, 0xF412
    /* 4FA44 80141644 0DD9030C */  jal        func_800F6434
    /* 4FA48 80141648 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FA4C 8014164C 1D004014 */  bnez       $v0, .L801416C4
    /* 4FA50 80141650 00000000 */   nop
    /* 4FA54 80141654 84DC030C */  jal        func_800F7210
    /* 4FA58 80141658 12F40434 */   ori       $a0, $zero, 0xF412
    /* 4FA5C 8014165C 40E3030C */  jal        func_800F8D00
    /* 4FA60 80141660 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 4FA64 80141664 84DC030C */  jal        func_800F7210
    /* 4FA68 80141668 14F40434 */   ori       $a0, $zero, 0xF414
    /* 4FA6C 8014166C 40E3030C */  jal        func_800F8D00
    /* 4FA70 80141670 021E0424 */   addiu     $a0, $zero, 0x1E02
    /* 4FA74 80141674 59D9030C */  jal        func_800F6564
    /* 4FA78 80141678 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4FA7C 8014167C 0DD9030C */  jal        func_800F6434
    /* 4FA80 80141680 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FA84 80141684 0B004014 */  bnez       $v0, .L801416B4
    /* 4FA88 80141688 00000000 */   nop
    /* 4FA8C 8014168C 59D9030C */  jal        func_800F6564
    /* 4FA90 80141690 021E0424 */   addiu     $a0, $zero, 0x1E02
    /* 4FA94 80141694 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4FA98 80141698 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4FA9C 8014169C 00000000 */  nop
    /* 4FAA0 801416A0 00006290 */  lbu        $v0, 0x0($v1)
    /* 4FAA4 801416A4 021E0424 */  addiu      $a0, $zero, 0x1E02
    /* 4FAA8 801416A8 27100200 */  nor        $v0, $zero, $v0
    /* 4FAAC 801416AC 62E0030C */  jal        func_800F8188
    /* 4FAB0 801416B0 000062A0 */   sb        $v0, 0x0($v1)
  .L801416B4:
    /* 4FAB4 801416B4 4AA4050C */  jal        func_80169128
    /* 4FAB8 801416B8 00000000 */   nop
    /* 4FABC 801416BC DDE3030C */  jal        func_800F8F74
    /* 4FAC0 801416C0 12F40434 */   ori       $a0, $zero, 0xF412
  .L801416C4:
    /* 4FAC4 801416C4 DDE3030C */  jal        func_800F8F74
    /* 4FAC8 801416C8 2D350424 */   addiu     $a0, $zero, 0x352D
    /* 4FACC 801416CC 59D9030C */  jal        func_800F6564
    /* 4FAD0 801416D0 72F40434 */   ori       $a0, $zero, 0xF472
    /* 4FAD4 801416D4 C1CE030C */  jal        func_800F3B04
    /* 4FAD8 801416D8 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 4FADC 801416DC 31DE030C */  jal        func_800F78C4
    /* 4FAE0 801416E0 21204000 */   addu      $a0, $v0, $zero
    /* 4FAE4 801416E4 46DE030C */  jal        func_800F7918
    /* 4FAE8 801416E8 02020424 */   addiu     $a0, $zero, 0x202
    /* 4FAEC 801416EC 12004014 */  bnez       $v0, .L80141738
    /* 4FAF0 801416F0 00000000 */   nop
    /* 4FAF4 801416F4 72D9030C */  jal        func_800F65C8
    /* 4FAF8 801416F8 18420424 */   addiu     $a0, $zero, 0x4218
    /* 4FAFC 801416FC 1A420424 */  addiu      $a0, $zero, 0x421A
    /* 4FB00 80141700 E7CE030C */  jal        func_800F3B9C
    /* 4FB04 80141704 21280000 */   addu      $a1, $zero, $zero
    /* 4FB08 80141708 31DE030C */  jal        func_800F78C4
    /* 4FB0C 8014170C 21204000 */   addu      $a0, $v0, $zero
    /* 4FB10 80141710 92D0030C */  jal        func_800F4248
    /* 4FB14 80141714 30000424 */   addiu     $a0, $zero, 0x30
    /* 4FB18 80141718 5DD5030C */  jal        func_800F5574
    /* 4FB1C 8014171C 30000424 */   addiu     $a0, $zero, 0x30
    /* 4FB20 80141720 F5D4030C */  jal        func_800F53D4
    /* 4FB24 80141724 00000000 */   nop
    /* 4FB28 80141728 03004010 */  beqz       $v0, .L80141738
    /* 4FB2C 8014172C 00000000 */   nop
    /* 4FB30 80141730 90D8030C */  jal        func_800F6240
    /* 4FB34 80141734 2D350424 */   addiu     $a0, $zero, 0x352D
  .L80141738:
    /* 4FB38 80141738 DDE3030C */  jal        func_800F8F74
    /* 4FB3C 8014173C 11180424 */   addiu     $a0, $zero, 0x1811
    /* 4FB40 80141740 DDE3030C */  jal        func_800F8F74
    /* 4FB44 80141744 12180424 */   addiu     $a0, $zero, 0x1812
    /* 4FB48 80141748 AFD8030C */  jal        func_800F62BC
    /* 4FB4C 8014174C 97000424 */   addiu     $a0, $zero, 0x97
    /* 4FB50 80141750 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4FB54 80141754 00000000 */  nop
    /* 4FB58 80141758 0800E003 */  jr         $ra
    /* 4FB5C 8014175C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141530
