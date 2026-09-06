nonmatching func_8017559C, 0x208

glabel func_8017559C
    /* 8399C 8017559C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 839A0 801755A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 839A4 801755A4 92D0030C */  jal        func_800F4248
    /* 839A8 801755A8 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 839AC 801755AC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 839B0 801755B0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 839B4 801755B4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 839B8 801755B8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 839BC 801755BC 00004394 */  lhu        $v1, 0x0($v0)
    /* 839C0 801755C0 00170424 */  addiu      $a0, $zero, 0x1700
    /* 839C4 801755C4 59D9030C */  jal        func_800F6564
    /* 839C8 801755C8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 839CC 801755CC 0DD9030C */  jal        func_800F6434
    /* 839D0 801755D0 02020424 */   addiu     $a0, $zero, 0x202
    /* 839D4 801755D4 0D004014 */  bnez       $v0, .L8017560C
    /* 839D8 801755D8 00000000 */   nop
    /* 839DC 801755DC 91E5030C */  jal        func_800F9644
    /* 839E0 801755E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 839E4 801755E4 1500043C */  lui        $a0, (0x15C6B1 >> 16)
    /* 839E8 801755E8 3DDB030C */  jal        func_800F6CF4
    /* 839EC 801755EC B1C68434 */   ori       $a0, $a0, (0x15C6B1 & 0xFFFF)
    /* 839F0 801755F0 6CE0030C */  jal        func_800F81B0
    /* 839F4 801755F4 250D0424 */   addiu     $a0, $zero, 0xD25
    /* 839F8 801755F8 1500043C */  lui        $a0, (0x15C6C3 >> 16)
    /* 839FC 801755FC 3DDB030C */  jal        func_800F6CF4
    /* 83A00 80175600 C3C68434 */   ori       $a0, $a0, (0x15C6C3 & 0xFFFF)
    /* 83A04 80175604 B2D50508 */  j          .L801756C8
    /* 83A08 80175608 290D0424 */   addiu     $a0, $zero, 0xD29
  .L8017560C:
    /* 83A0C 8017560C 5DD5030C */  jal        func_800F5574
    /* 83A10 80175610 01000424 */   addiu     $a0, $zero, 0x1
    /* 83A14 80175614 F5D4030C */  jal        func_800F53D4
    /* 83A18 80175618 00000000 */   nop
    /* 83A1C 8017561C 32004010 */  beqz       $v0, .L801756E8
    /* 83A20 80175620 00000000 */   nop
    /* 83A24 80175624 91E5030C */  jal        func_800F9644
    /* 83A28 80175628 20000424 */   addiu     $a0, $zero, 0x20
    /* 83A2C 8017562C 1500043C */  lui        $a0, (0x15C621 >> 16)
    /* 83A30 80175630 3DDB030C */  jal        func_800F6CF4
    /* 83A34 80175634 21C68434 */   ori       $a0, $a0, (0x15C621 & 0xFFFF)
    /* 83A38 80175638 6CE0030C */  jal        func_800F81B0
    /* 83A3C 8017563C F30C0424 */   addiu     $a0, $zero, 0xCF3
    /* 83A40 80175640 1500043C */  lui        $a0, (0x15C633 >> 16)
    /* 83A44 80175644 3DDB030C */  jal        func_800F6CF4
    /* 83A48 80175648 33C68434 */   ori       $a0, $a0, (0x15C633 & 0xFFFF)
    /* 83A4C 8017564C 6CE0030C */  jal        func_800F81B0
    /* 83A50 80175650 F50C0424 */   addiu     $a0, $zero, 0xCF5
    /* 83A54 80175654 1500043C */  lui        $a0, (0x15C645 >> 16)
    /* 83A58 80175658 3DDB030C */  jal        func_800F6CF4
    /* 83A5C 8017565C 45C68434 */   ori       $a0, $a0, (0x15C645 & 0xFFFF)
    /* 83A60 80175660 6CE0030C */  jal        func_800F81B0
    /* 83A64 80175664 1D0D0424 */   addiu     $a0, $zero, 0xD1D
    /* 83A68 80175668 1500043C */  lui        $a0, (0x15C657 >> 16)
    /* 83A6C 8017566C 3DDB030C */  jal        func_800F6CF4
    /* 83A70 80175670 57C68434 */   ori       $a0, $a0, (0x15C657 & 0xFFFF)
    /* 83A74 80175674 6CE0030C */  jal        func_800F81B0
    /* 83A78 80175678 1F0D0424 */   addiu     $a0, $zero, 0xD1F
    /* 83A7C 8017567C 1500043C */  lui        $a0, (0x15C669 >> 16)
    /* 83A80 80175680 3DDB030C */  jal        func_800F6CF4
    /* 83A84 80175684 69C68434 */   ori       $a0, $a0, (0x15C669 & 0xFFFF)
    /* 83A88 80175688 6CE0030C */  jal        func_800F81B0
    /* 83A8C 8017568C 210D0424 */   addiu     $a0, $zero, 0xD21
    /* 83A90 80175690 1500043C */  lui        $a0, (0x15C67B >> 16)
    /* 83A94 80175694 3DDB030C */  jal        func_800F6CF4
    /* 83A98 80175698 7BC68434 */   ori       $a0, $a0, (0x15C67B & 0xFFFF)
    /* 83A9C 8017569C 6CE0030C */  jal        func_800F81B0
    /* 83AA0 801756A0 DF0C0424 */   addiu     $a0, $zero, 0xCDF
    /* 83AA4 801756A4 1500043C */  lui        $a0, (0x15C68D >> 16)
    /* 83AA8 801756A8 3DDB030C */  jal        func_800F6CF4
    /* 83AAC 801756AC 8DC68434 */   ori       $a0, $a0, (0x15C68D & 0xFFFF)
    /* 83AB0 801756B0 6CE0030C */  jal        func_800F81B0
    /* 83AB4 801756B4 E50C0424 */   addiu     $a0, $zero, 0xCE5
    /* 83AB8 801756B8 1500043C */  lui        $a0, (0x15C69F >> 16)
    /* 83ABC 801756BC 3DDB030C */  jal        func_800F6CF4
    /* 83AC0 801756C0 9FC68434 */   ori       $a0, $a0, (0x15C69F & 0xFFFF)
    /* 83AC4 801756C4 DD0C0424 */  addiu      $a0, $zero, 0xCDD
  .L801756C8:
    /* 83AC8 801756C8 6CE0030C */  jal        func_800F81B0
    /* 83ACC 801756CC 00000000 */   nop
    /* 83AD0 801756D0 56D9030C */  jal        func_800F6558
    /* 83AD4 801756D4 21200000 */   addu      $a0, $zero, $zero
    /* 83AD8 801756D8 98E5030C */  jal        func_800F9660
    /* 83ADC 801756DC 20000424 */   addiu     $a0, $zero, 0x20
    /* 83AE0 801756E0 E5D50508 */  j          .L80175794
    /* 83AE4 801756E4 00000000 */   nop
  .L801756E8:
    /* 83AE8 801756E8 91E5030C */  jal        func_800F9644
    /* 83AEC 801756EC 20000424 */   addiu     $a0, $zero, 0x20
    /* 83AF0 801756F0 1500043C */  lui        $a0, (0x15C5A3 >> 16)
    /* 83AF4 801756F4 3DDB030C */  jal        func_800F6CF4
    /* 83AF8 801756F8 A3C58434 */   ori       $a0, $a0, (0x15C5A3 & 0xFFFF)
    /* 83AFC 801756FC 6CE0030C */  jal        func_800F81B0
    /* 83B00 80175700 DD0C0424 */   addiu     $a0, $zero, 0xCDD
    /* 83B04 80175704 1500043C */  lui        $a0, (0x15C5B5 >> 16)
    /* 83B08 80175708 3DDB030C */  jal        func_800F6CF4
    /* 83B0C 8017570C B5C58434 */   ori       $a0, $a0, (0x15C5B5 & 0xFFFF)
    /* 83B10 80175710 6CE0030C */  jal        func_800F81B0
    /* 83B14 80175714 E50C0424 */   addiu     $a0, $zero, 0xCE5
    /* 83B18 80175718 1500043C */  lui        $a0, (0x15C5C7 >> 16)
    /* 83B1C 8017571C 3DDB030C */  jal        func_800F6CF4
    /* 83B20 80175720 C7C58434 */   ori       $a0, $a0, (0x15C5C7 & 0xFFFF)
    /* 83B24 80175724 6CE0030C */  jal        func_800F81B0
    /* 83B28 80175728 F30C0424 */   addiu     $a0, $zero, 0xCF3
    /* 83B2C 8017572C 6CE0030C */  jal        func_800F81B0
    /* 83B30 80175730 130D0424 */   addiu     $a0, $zero, 0xD13
    /* 83B34 80175734 1500043C */  lui        $a0, (0x15C5D9 >> 16)
    /* 83B38 80175738 3DDB030C */  jal        func_800F6CF4
    /* 83B3C 8017573C D9C58434 */   ori       $a0, $a0, (0x15C5D9 & 0xFFFF)
    /* 83B40 80175740 6CE0030C */  jal        func_800F81B0
    /* 83B44 80175744 DF0C0424 */   addiu     $a0, $zero, 0xCDF
    /* 83B48 80175748 1500043C */  lui        $a0, (0x15C5EB >> 16)
    /* 83B4C 8017574C 3DDB030C */  jal        func_800F6CF4
    /* 83B50 80175750 EBC58434 */   ori       $a0, $a0, (0x15C5EB & 0xFFFF)
    /* 83B54 80175754 6CE0030C */  jal        func_800F81B0
    /* 83B58 80175758 0B0D0424 */   addiu     $a0, $zero, 0xD0B
    /* 83B5C 8017575C 1500043C */  lui        $a0, (0x15C5FD >> 16)
    /* 83B60 80175760 3DDB030C */  jal        func_800F6CF4
    /* 83B64 80175764 FDC58434 */   ori       $a0, $a0, (0x15C5FD & 0xFFFF)
    /* 83B68 80175768 6CE0030C */  jal        func_800F81B0
    /* 83B6C 8017576C 0D0D0424 */   addiu     $a0, $zero, 0xD0D
    /* 83B70 80175770 1500043C */  lui        $a0, (0x15C60F >> 16)
    /* 83B74 80175774 3DDB030C */  jal        func_800F6CF4
    /* 83B78 80175778 0FC68434 */   ori       $a0, $a0, (0x15C60F & 0xFFFF)
    /* 83B7C 8017577C 6CE0030C */  jal        func_800F81B0
    /* 83B80 80175780 110D0424 */   addiu     $a0, $zero, 0xD11
    /* 83B84 80175784 56D9030C */  jal        func_800F6558
    /* 83B88 80175788 21200000 */   addu      $a0, $zero, $zero
    /* 83B8C 8017578C 98E5030C */  jal        func_800F9660
    /* 83B90 80175790 20000424 */   addiu     $a0, $zero, 0x20
  .L80175794:
    /* 83B94 80175794 1000BF8F */  lw         $ra, 0x10($sp)
    /* 83B98 80175798 00000000 */  nop
    /* 83B9C 8017579C 0800E003 */  jr         $ra
    /* 83BA0 801757A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017559C
