nonmatching func_80126BB8, 0x190

glabel func_80126BB8
    /* 34FB8 80126BB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34FBC 80126BBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34FC0 80126BC0 9BE4030C */  jal        func_800F926C
    /* 34FC4 80126BC4 00000000 */   nop
    /* 34FC8 80126BC8 A6E4030C */  jal        func_800F9298
    /* 34FCC 80126BCC 00000000 */   nop
    /* 34FD0 80126BD0 01000224 */  addiu      $v0, $zero, 0x1
    /* 34FD4 80126BD4 1A80013C */  lui        $at, %hi(D_8019EE54)
    /* 34FD8 80126BD8 54EE22A4 */  sh         $v0, %lo(D_8019EE54)($at)
    /* 34FDC 80126BDC EDE2050C */  jal        func_80178BB4
    /* 34FE0 80126BE0 00000000 */   nop
  .L80126BE4:
    /* 34FE4 80126BE4 A7BA050C */  jal        func_8016EA9C
    /* 34FE8 80126BE8 00000000 */   nop
    /* 34FEC 80126BEC 53D9030C */  jal        func_800F654C
    /* 34FF0 80126BF0 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 34FF4 80126BF4 80E4030C */  jal        func_800F9200
    /* 34FF8 80126BF8 00000000 */   nop
    /* 34FFC 80126BFC 12E5030C */  jal        func_800F9448
    /* 35000 80126C00 00000000 */   nop
    /* 35004 80126C04 DDE3030C */  jal        func_800F8F74
    /* 35008 80126C08 9A1B0424 */   addiu     $a0, $zero, 0x1B9A
    /* 3500C 80126C0C 77DC030C */  jal        func_800F71DC
    /* 35010 80126C10 E41B0424 */   addiu     $a0, $zero, 0x1BE4
    /* 35014 80126C14 C1CE030C */  jal        func_800F3B04
    /* 35018 80126C18 5F1A0424 */   addiu     $a0, $zero, 0x1A5F
    /* 3501C 80126C1C ABD5030C */  jal        func_800F56AC
    /* 35020 80126C20 21204000 */   addu      $a0, $v0, $zero
    /* 35024 80126C24 F5D4030C */  jal        func_800F53D4
    /* 35028 80126C28 00000000 */   nop
    /* 3502C 80126C2C 09004014 */  bnez       $v0, .L80126C54
    /* 35030 80126C30 00000000 */   nop
    /* 35034 80126C34 40E3030C */  jal        func_800F8D00
    /* 35038 80126C38 5F1A0424 */   addiu     $a0, $zero, 0x1A5F
    /* 3503C 80126C3C DDE3030C */  jal        func_800F8F74
    /* 35040 80126C40 3C1A0424 */   addiu     $a0, $zero, 0x1A3C
    /* 35044 80126C44 99A0040C */  jal        func_80128264
    /* 35048 80126C48 00000000 */   nop
    /* 3504C 80126C4C 197E040C */  jal        func_8011F864
    /* 35050 80126C50 00000000 */   nop
  .L80126C54:
    /* 35054 80126C54 20A1040C */  jal        func_80128480
    /* 35058 80126C58 00000000 */   nop
    /* 3505C 80126C5C CFA2040C */  jal        func_80128B3C
    /* 35060 80126C60 00000000 */   nop
    /* 35064 80126C64 AA0080A7 */  sh         $zero, %gp_rel(D_8019EDA6)($gp)
    /* 35068 80126C68 FEE4050C */  jal        func_801793F8
    /* 3506C 80126C6C 02000424 */   addiu     $a0, $zero, 0x2
    /* 35070 80126C70 C6008387 */  lh         $v1, %gp_rel(D_8019EDC2)($gp)
    /* 35074 80126C74 02000224 */  addiu      $v0, $zero, 0x2
    /* 35078 80126C78 03006214 */  bne        $v1, $v0, .L80126C88
    /* 3507C 80126C7C 00000000 */   nop
    /* 35080 80126C80 DDE3030C */  jal        func_800F8F74
    /* 35084 80126C84 3C1A0424 */   addiu     $a0, $zero, 0x1A3C
  .L80126C88:
    /* 35088 80126C88 1A80033C */  lui        $v1, %hi(D_8019EE4E)
    /* 3508C 80126C8C 4EEE6384 */  lh         $v1, %lo(D_8019EE4E)($v1)
    /* 35090 80126C90 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 35094 80126C94 03006214 */  bne        $v1, $v0, .L80126CA4
    /* 35098 80126C98 00000000 */   nop
    /* 3509C 80126C9C 2BFC030C */  jal        func_800FF0AC
    /* 350A0 80126CA0 00000000 */   nop
  .L80126CA4:
    /* 350A4 80126CA4 20A1040C */  jal        func_80128480
    /* 350A8 80126CA8 00000000 */   nop
    /* 350AC 80126CAC CFA2040C */  jal        func_80128B3C
    /* 350B0 80126CB0 00000000 */   nop
    /* 350B4 80126CB4 F0D4030C */  jal        func_800F53C0
    /* 350B8 80126CB8 00000000 */   nop
    /* 350BC 80126CBC 10004014 */  bnez       $v0, .L80126D00
    /* 350C0 80126CC0 00000000 */   nop
    /* 350C4 80126CC4 C80080A7 */  sh         $zero, %gp_rel(D_8019EDC4)($gp)
    /* 350C8 80126CC8 829B040C */  jal        func_80126E08
    /* 350CC 80126CCC 00000000 */   nop
    /* 350D0 80126CD0 C8008387 */  lh         $v1, %gp_rel(D_8019EDC4)($gp)
    /* 350D4 80126CD4 01000224 */  addiu      $v0, $zero, 0x1
    /* 350D8 80126CD8 07006214 */  bne        $v1, $v0, .L80126CF8
    /* 350DC 80126CDC 00000000 */   nop
    /* 350E0 80126CE0 8499040C */  jal        func_80126610
    /* 350E4 80126CE4 00000000 */   nop
    /* 350E8 80126CE8 EDE2050C */  jal        func_80178BB4
    /* 350EC 80126CEC 00000000 */   nop
    /* 350F0 80126CF0 F99A0408 */  j          .L80126BE4
    /* 350F4 80126CF4 00000000 */   nop
  .L80126CF8:
    /* 350F8 80126CF8 529B040C */  jal        func_80126D48
    /* 350FC 80126CFC 00000000 */   nop
  .L80126D00:
    /* 35100 80126D00 4588040C */  jal        func_80122114
    /* 35104 80126D04 00000000 */   nop
    /* 35108 80126D08 1A80013C */  lui        $at, %hi(D_8019EE54)
    /* 3510C 80126D0C 54EE20A4 */  sh         $zero, %lo(D_8019EE54)($at)
    /* 35110 80126D10 C7E5030C */  jal        func_800F971C
    /* 35114 80126D14 00000000 */   nop
    /* 35118 80126D18 52CF030C */  jal        func_800F3D48
    /* 3511C 80126D1C 00000000 */   nop
    /* 35120 80126D20 72D9030C */  jal        func_800F65C8
    /* 35124 80126D24 FB170424 */   addiu     $a0, $zero, 0x17FB
    /* 35128 80126D28 2EE5030C */  jal        func_800F94B8
    /* 3512C 80126D2C 00000000 */   nop
    /* 35130 80126D30 12E5030C */  jal        func_800F9448
    /* 35134 80126D34 00000000 */   nop
    /* 35138 80126D38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3513C 80126D3C 00000000 */  nop
    /* 35140 80126D40 0800E003 */  jr         $ra
    /* 35144 80126D44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126BB8
