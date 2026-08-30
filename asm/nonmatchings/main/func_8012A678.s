nonmatching func_8012A678, 0x1F0

glabel func_8012A678
    /* 38A78 8012A678 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38A7C 8012A67C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38A80 8012A680 E7E4030C */  jal        func_800F939C
    /* 38A84 8012A684 00000000 */   nop
    /* 38A88 8012A688 53D9030C */  jal        func_800F654C
    /* 38A8C 8012A68C 20000424 */   addiu     $a0, $zero, 0x20
    /* 38A90 8012A690 93E0030C */  jal        func_800F824C
    /* 38A94 8012A694 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 38A98 8012A698 59D9030C */  jal        func_800F6564
    /* 38A9C 8012A69C 231B0424 */   addiu     $a0, $zero, 0x1B23
    /* 38AA0 8012A6A0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 38AA4 8012A6A4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 38AA8 8012A6A8 00000000 */  nop
    /* 38AAC 8012A6AC 00006290 */  lbu        $v0, 0x0($v1)
    /* 38AB0 8012A6B0 00000000 */  nop
    /* 38AB4 8012A6B4 C0100200 */  sll        $v0, $v0, 3
    /* 38AB8 8012A6B8 50D4030C */  jal        func_800F5140
    /* 38ABC 8012A6BC 000062A0 */   sb        $v0, 0x0($v1)
    /* 38AC0 8012A6C0 D3D3030C */  jal        func_800F4F4C
    /* 38AC4 8012A6C4 00000000 */   nop
    /* 38AC8 8012A6C8 02D0030C */  jal        func_800F4008
    /* 38ACC 8012A6CC 36000424 */   addiu     $a0, $zero, 0x36
    /* 38AD0 8012A6D0 52CF030C */  jal        func_800F3D48
    /* 38AD4 8012A6D4 00000000 */   nop
    /* 38AD8 8012A6D8 59D9030C */  jal        func_800F6564
    /* 38ADC 8012A6DC 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 38AE0 8012A6E0 0DD9030C */  jal        func_800F6434
    /* 38AE4 8012A6E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 38AE8 8012A6E8 03004014 */  bnez       $v0, .L8012A6F8
    /* 38AEC 8012A6EC 00000000 */   nop
    /* 38AF0 8012A6F0 53D9030C */  jal        func_800F654C
    /* 38AF4 8012A6F4 6C000424 */   addiu     $a0, $zero, 0x6C
  .L8012A6F8:
    /* 38AF8 8012A6F8 04D5030C */  jal        func_800F5410
    /* 38AFC 8012A6FC 00000000 */   nop
    /* 38B00 8012A700 02D0030C */  jal        func_800F4008
    /* 38B04 8012A704 04000424 */   addiu     $a0, $zero, 0x4
    /* 38B08 8012A708 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 38B0C 8012A70C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 38B10 8012A710 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 38B14 8012A714 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 38B18 8012A718 00004394 */  lhu        $v1, 0x0($v0)
    /* 38B1C 8012A71C 00030424 */  addiu      $a0, $zero, 0x300
    /* 38B20 8012A720 40DD030C */  jal        func_800F7500
    /* 38B24 8012A724 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 38B28 8012A728 C97D040C */  jal        func_8011F724
    /* 38B2C 8012A72C 00000000 */   nop
    /* 38B30 8012A730 59D9030C */  jal        func_800F6564
    /* 38B34 8012A734 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 38B38 8012A738 0DD9030C */  jal        func_800F6434
    /* 38B3C 8012A73C 02000424 */   addiu     $a0, $zero, 0x2
    /* 38B40 8012A740 43004014 */  bnez       $v0, .L8012A850
    /* 38B44 8012A744 00000000 */   nop
    /* 38B48 8012A748 59D9030C */  jal        func_800F6564
    /* 38B4C 8012A74C 251B0424 */   addiu     $a0, $zero, 0x1B25
    /* 38B50 8012A750 20D5030C */  jal        func_800F5480
    /* 38B54 8012A754 00000000 */   nop
    /* 38B58 8012A758 C1CE030C */  jal        func_800F3B04
    /* 38B5C 8012A75C 1A1B0424 */   addiu     $a0, $zero, 0x1B1A
    /* 38B60 8012A760 D2DF030C */  jal        func_800F7F48
    /* 38B64 8012A764 21204000 */   addu      $a0, $v0, $zero
    /* 38B68 8012A768 5DD5030C */  jal        func_800F5574
    /* 38B6C 8012A76C FC000424 */   addiu     $a0, $zero, 0xFC
    /* 38B70 8012A770 F0D4030C */  jal        func_800F53C0
    /* 38B74 8012A774 00000000 */   nop
    /* 38B78 8012A778 0D004014 */  bnez       $v0, .L8012A7B0
    /* 38B7C 8012A77C 00000000 */   nop
    /* 38B80 8012A780 5DD5030C */  jal        func_800F5574
    /* 38B84 8012A784 21200000 */   addu      $a0, $zero, $zero
    /* 38B88 8012A788 FFD4030C */  jal        func_800F53FC
    /* 38B8C 8012A78C 00000000 */   nop
    /* 38B90 8012A790 2D004014 */  bnez       $v0, .L8012A848
    /* 38B94 8012A794 00000000 */   nop
    /* 38B98 8012A798 5DD5030C */  jal        func_800F5574
    /* 38B9C 8012A79C 0B000424 */   addiu     $a0, $zero, 0xB
    /* 38BA0 8012A7A0 F0D4030C */  jal        func_800F53C0
    /* 38BA4 8012A7A4 00000000 */   nop
    /* 38BA8 8012A7A8 27004014 */  bnez       $v0, .L8012A848
    /* 38BAC 8012A7AC 00000000 */   nop
  .L8012A7B0:
    /* 38BB0 8012A7B0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 38BB4 8012A7B4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 38BB8 8012A7B8 00000000 */  nop
    /* 38BBC 8012A7BC 00006290 */  lbu        $v0, 0x0($v1)
    /* 38BC0 8012A7C0 00000000 */  nop
    /* 38BC4 8012A7C4 C0100200 */  sll        $v0, $v0, 3
    /* 38BC8 8012A7C8 50D4030C */  jal        func_800F5140
    /* 38BCC 8012A7CC 000062A0 */   sb        $v0, 0x0($v1)
    /* 38BD0 8012A7D0 D3D3030C */  jal        func_800F4F4C
    /* 38BD4 8012A7D4 00000000 */   nop
    /* 38BD8 8012A7D8 02D0030C */  jal        func_800F4008
    /* 38BDC 8012A7DC 36000424 */   addiu     $a0, $zero, 0x36
    /* 38BE0 8012A7E0 52CF030C */  jal        func_800F3D48
    /* 38BE4 8012A7E4 00000000 */   nop
    /* 38BE8 8012A7E8 59D9030C */  jal        func_800F6564
    /* 38BEC 8012A7EC 241B0424 */   addiu     $a0, $zero, 0x1B24
    /* 38BF0 8012A7F0 0DD9030C */  jal        func_800F6434
    /* 38BF4 8012A7F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 38BF8 8012A7F8 03004014 */  bnez       $v0, .L8012A808
    /* 38BFC 8012A7FC 00000000 */   nop
    /* 38C00 8012A800 53D9030C */  jal        func_800F654C
    /* 38C04 8012A804 70000424 */   addiu     $a0, $zero, 0x70
  .L8012A808:
    /* 38C08 8012A808 04D5030C */  jal        func_800F5410
    /* 38C0C 8012A80C 00000000 */   nop
    /* 38C10 8012A810 02D0030C */  jal        func_800F4008
    /* 38C14 8012A814 08000424 */   addiu     $a0, $zero, 0x8
    /* 38C18 8012A818 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 38C1C 8012A81C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 38C20 8012A820 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 38C24 8012A824 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 38C28 8012A828 00004394 */  lhu        $v1, 0x0($v0)
    /* 38C2C 8012A82C 10030424 */  addiu      $a0, $zero, 0x310
    /* 38C30 8012A830 40DD030C */  jal        func_800F7500
    /* 38C34 8012A834 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 38C38 8012A838 C97D040C */  jal        func_8011F724
    /* 38C3C 8012A83C 00000000 */   nop
    /* 38C40 8012A840 14AA0408 */  j          .L8012A850
    /* 38C44 8012A844 00000000 */   nop
  .L8012A848:
    /* 38C48 8012A848 36AC040C */  jal        func_8012B0D8
    /* 38C4C 8012A84C 00000000 */   nop
  .L8012A850:
    /* 38C50 8012A850 83E5030C */  jal        func_800F960C
    /* 38C54 8012A854 00000000 */   nop
    /* 38C58 8012A858 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38C5C 8012A85C 00000000 */  nop
    /* 38C60 8012A860 0800E003 */  jr         $ra
    /* 38C64 8012A864 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012A678
