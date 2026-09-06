nonmatching func_801317F0, 0x23C

glabel func_801317F0
    /* 3FBF0 801317F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FBF4 801317F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FBF8 801317F8 53D9030C */  jal        func_800F654C
    /* 3FBFC 801317FC 21200000 */   addu      $a0, $zero, $zero
    /* 3FC00 80131800 52CF030C */  jal        func_800F3D48
    /* 3FC04 80131804 00000000 */   nop
    /* 3FC08 80131808 59D9030C */  jal        func_800F6564
    /* 3FC0C 8013180C 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FC10 80131810 91E5030C */  jal        func_800F9644
    /* 3FC14 80131814 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FC18 80131818 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3FC1C 8013181C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3FC20 80131820 00000000 */  nop
    /* 3FC24 80131824 00006294 */  lhu        $v0, 0x0($v1)
    /* 3FC28 80131828 911B0424 */  addiu      $a0, $zero, 0x1B91
    /* 3FC2C 8013182C 80100200 */  sll        $v0, $v0, 2
    /* 3FC30 80131830 6CE0030C */  jal        func_800F81B0
    /* 3FC34 80131834 000062A4 */   sh        $v0, 0x0($v1)
    /* 3FC38 80131838 98E5030C */  jal        func_800F9660
    /* 3FC3C 8013183C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FC40 80131840 8CD9030C */  jal        func_800F6630
    /* 3FC44 80131844 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3FC48 80131848 AB93040C */  jal        func_80124EAC
    /* 3FC4C 8013184C 00000000 */   nop
    /* 3FC50 80131850 DADA030C */  jal        func_800F6B68
    /* 3FC54 80131854 18000424 */   addiu     $a0, $zero, 0x18
    /* 3FC58 80131858 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3FC5C 8013185C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3FC60 80131860 00000000 */  nop
    /* 3FC64 80131864 00006290 */  lbu        $v0, 0x0($v1)
    /* 3FC68 80131868 00000000 */  nop
    /* 3FC6C 8013186C C2100200 */  srl        $v0, $v0, 3
    /* 3FC70 80131870 7AD8030C */  jal        func_800F61E8
    /* 3FC74 80131874 000062A0 */   sb        $v0, 0x0($v1)
    /* 3FC78 80131878 93E0030C */  jal        func_800F824C
    /* 3FC7C 8013187C 54000424 */   addiu     $a0, $zero, 0x54
    /* 3FC80 80131880 EEE3030C */  jal        func_800F8FB8
    /* 3FC84 80131884 55000424 */   addiu     $a0, $zero, 0x55
    /* 3FC88 80131888 53D9030C */  jal        func_800F654C
    /* 3FC8C 8013188C 21200000 */   addu      $a0, $zero, $zero
    /* 3FC90 80131890 52CF030C */  jal        func_800F3D48
    /* 3FC94 80131894 00000000 */   nop
    /* 3FC98 80131898 DADA030C */  jal        func_800F6B68
    /* 3FC9C 8013189C 18000424 */   addiu     $a0, $zero, 0x18
    /* 3FCA0 801318A0 19DE030C */  jal        func_800F7864
    /* 3FCA4 801318A4 00000000 */   nop
    /* 3FCA8 801318A8 91E5030C */  jal        func_800F9644
    /* 3FCAC 801318AC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FCB0 801318B0 04D5030C */  jal        func_800F5410
    /* 3FCB4 801318B4 00000000 */   nop
    /* 3FCB8 801318B8 C1CE030C */  jal        func_800F3B04
    /* 3FCBC 801318BC 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FCC0 801318C0 E5CF030C */  jal        func_800F3F94
    /* 3FCC4 801318C4 21204000 */   addu      $a0, $v0, $zero
    /* 3FCC8 801318C8 9DE0030C */  jal        func_800F8274
    /* 3FCCC 801318CC 57000424 */   addiu     $a0, $zero, 0x57
  .L801318D0:
    /* 3FCD0 801318D0 04D5030C */  jal        func_800F5410
    /* 3FCD4 801318D4 00000000 */   nop
    /* 3FCD8 801318D8 0FCF030C */  jal        func_800F3C3C
    /* 3FCDC 801318DC 57000424 */   addiu     $a0, $zero, 0x57
    /* 3FCE0 801318E0 E5CF030C */  jal        func_800F3F94
    /* 3FCE4 801318E4 21204000 */   addu      $a0, $v0, $zero
    /* 3FCE8 801318E8 75D7030C */  jal        func_800F5DD4
    /* 3FCEC 801318EC 54000424 */   addiu     $a0, $zero, 0x54
    /* 3FCF0 801318F0 19D7030C */  jal        func_800F5C64
    /* 3FCF4 801318F4 02020424 */   addiu     $a0, $zero, 0x202
    /* 3FCF8 801318F8 F5FF4014 */  bnez       $v0, .L801318D0
    /* 3FCFC 801318FC 00000000 */   nop
    /* 3FD00 80131900 9DE0030C */  jal        func_800F8274
    /* 3FD04 80131904 57000424 */   addiu     $a0, $zero, 0x57
    /* 3FD08 80131908 98E5030C */  jal        func_800F9660
    /* 3FD0C 8013190C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FD10 80131910 98E5030C */  jal        func_800F9660
    /* 3FD14 80131914 10000424 */   addiu     $a0, $zero, 0x10
    /* 3FD18 80131918 92DC030C */  jal        func_800F7248
    /* 3FD1C 8013191C 41000424 */   addiu     $a0, $zero, 0x41
    /* 3FD20 80131920 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 3FD24 80131924 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 3FD28 80131928 1A80043C */  lui        $a0, %hi(D_8019ED60)
    /* 3FD2C 8013192C 60ED848C */  lw         $a0, %lo(D_8019ED60)($a0)
    /* 3FD30 80131930 00004390 */  lbu        $v1, 0x0($v0)
    /* 3FD34 80131934 00000000 */  nop
    /* 3FD38 80131938 000083A0 */  sb         $v1, 0x0($a0)
  .L8013193C:
    /* 3FD3C 8013193C CEDA030C */  jal        func_800F6B38
    /* 3FD40 80131940 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 3FD44 80131944 0DD9030C */  jal        func_800F6434
    /* 3FD48 80131948 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FD4C 8013194C 03004014 */  bnez       $v0, .L8013195C
    /* 3FD50 80131950 00000000 */   nop
    /* 3FD54 80131954 E4D8030C */  jal        func_800F6390
    /* 3FD58 80131958 00000000 */   nop
  .L8013195C:
    /* 3FD5C 8013195C CED8030C */  jal        func_800F6338
    /* 3FD60 80131960 00000000 */   nop
    /* 3FD64 80131964 2FD6030C */  jal        func_800F58BC
    /* 3FD68 80131968 05000424 */   addiu     $a0, $zero, 0x5
    /* 3FD6C 8013196C F5D4030C */  jal        func_800F53D4
    /* 3FD70 80131970 00000000 */   nop
    /* 3FD74 80131974 F1FF4010 */  beqz       $v0, .L8013193C
    /* 3FD78 80131978 00000000 */   nop
    /* 3FD7C 8013197C 91E5030C */  jal        func_800F9644
    /* 3FD80 80131980 10000424 */   addiu     $a0, $zero, 0x10
    /* 3FD84 80131984 59D9030C */  jal        func_800F6564
    /* 3FD88 80131988 BB1B0424 */   addiu     $a0, $zero, 0x1BBB
    /* 3FD8C 8013198C 0DD9030C */  jal        func_800F6434
    /* 3FD90 80131990 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FD94 80131994 0D004014 */  bnez       $v0, .L801319CC
    /* 3FD98 80131998 00000000 */   nop
    /* 3FD9C 8013199C 91E5030C */  jal        func_800F9644
    /* 3FDA0 801319A0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FDA4 801319A4 96D9030C */  jal        func_800F6658
    /* 3FDA8 801319A8 57000424 */   addiu     $a0, $zero, 0x57
    /* 3FDAC 801319AC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3FDB0 801319B0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3FDB4 801319B4 00000000 */  nop
    /* 3FDB8 801319B8 00006294 */  lhu        $v0, 0x0($v1)
    /* 3FDBC 801319BC 00000000 */  nop
    /* 3FDC0 801319C0 82100200 */  srl        $v0, $v0, 2
    /* 3FDC4 801319C4 77C60408 */  j          .L801319DC
    /* 3FDC8 801319C8 000062A4 */   sh        $v0, 0x0($v1)
  .L801319CC:
    /* 3FDCC 801319CC 91E5030C */  jal        func_800F9644
    /* 3FDD0 801319D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FDD4 801319D4 96D9030C */  jal        func_800F6658
    /* 3FDD8 801319D8 57000424 */   addiu     $a0, $zero, 0x57
  .L801319DC:
    /* 3FDDC 801319DC 9DE0030C */  jal        func_800F8274
    /* 3FDE0 801319E0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3FDE4 801319E4 98E5030C */  jal        func_800F9660
    /* 3FDE8 801319E8 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FDEC 801319EC 53D9030C */  jal        func_800F654C
    /* 3FDF0 801319F0 21200000 */   addu      $a0, $zero, $zero
  .L801319F4:
    /* 3FDF4 801319F4 8BC6040C */  jal        func_80131A2C
    /* 3FDF8 801319F8 00000000 */   nop
    /* 3FDFC 801319FC 7AD8030C */  jal        func_800F61E8
    /* 3FE00 80131A00 00000000 */   nop
    /* 3FE04 80131A04 5DD5030C */  jal        func_800F5574
    /* 3FE08 80131A08 05000424 */   addiu     $a0, $zero, 0x5
    /* 3FE0C 80131A0C F5D4030C */  jal        func_800F53D4
    /* 3FE10 80131A10 00000000 */   nop
    /* 3FE14 80131A14 F7FF4010 */  beqz       $v0, .L801319F4
    /* 3FE18 80131A18 00000000 */   nop
    /* 3FE1C 80131A1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FE20 80131A20 00000000 */  nop
    /* 3FE24 80131A24 0800E003 */  jr         $ra
    /* 3FE28 80131A28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801317F0
