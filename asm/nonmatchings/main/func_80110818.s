nonmatching func_80110818, 0x190

glabel func_80110818
    /* 1EC18 80110818 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1EC1C 8011081C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1EC20 80110820 CB43040C */  jal        func_80110F2C
    /* 1EC24 80110824 00000000 */   nop
    /* 1EC28 80110828 53D9030C */  jal        func_800F654C
    /* 1EC2C 8011082C 01000424 */   addiu     $a0, $zero, 0x1
    /* 1EC30 80110830 62E0030C */  jal        func_800F8188
    /* 1EC34 80110834 C8060424 */   addiu     $a0, $zero, 0x6C8
  .L80110838:
    /* 1EC38 80110838 E943040C */  jal        func_80110FA4
    /* 1EC3C 8011083C 00000000 */   nop
    /* 1EC40 80110840 53D9030C */  jal        func_800F654C
    /* 1EC44 80110844 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EC48 80110848 20D5030C */  jal        func_800F5480
    /* 1EC4C 8011084C 00000000 */   nop
    /* 1EC50 80110850 0FCF030C */  jal        func_800F3C3C
    /* 1EC54 80110854 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EC58 80110858 D2DF030C */  jal        func_800F7F48
    /* 1EC5C 8011085C 21204000 */   addu      $a0, $v0, $zero
    /* 1EC60 80110860 93E0030C */  jal        func_800F824C
    /* 1EC64 80110864 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 1EC68 80110868 E0CD050C */  jal        func_80173780
    /* 1EC6C 8011086C 00000000 */   nop
    /* 1EC70 80110870 F242040C */  jal        func_80110BC8
    /* 1EC74 80110874 00000000 */   nop
    /* 1EC78 80110878 8CD9030C */  jal        func_800F6630
    /* 1EC7C 8011087C 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EC80 80110880 5DD5030C */  jal        func_800F5574
    /* 1EC84 80110884 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EC88 80110888 F0D4030C */  jal        func_800F53C0
    /* 1EC8C 8011088C 00000000 */   nop
    /* 1EC90 80110890 2B004010 */  beqz       $v0, .L80110940
    /* 1EC94 80110894 00000000 */   nop
    /* 1EC98 80110898 53D9030C */  jal        func_800F654C
    /* 1EC9C 8011089C 68000424 */   addiu     $a0, $zero, 0x68
    /* 1ECA0 801108A0 62E0030C */  jal        func_800F8188
    /* 1ECA4 801108A4 00030424 */   addiu     $a0, $zero, 0x300
    /* 1ECA8 801108A8 53D9030C */  jal        func_800F654C
    /* 1ECAC 801108AC 78000424 */   addiu     $a0, $zero, 0x78
    /* 1ECB0 801108B0 62E0030C */  jal        func_800F8188
    /* 1ECB4 801108B4 04030424 */   addiu     $a0, $zero, 0x304
    /* 1ECB8 801108B8 62E0030C */  jal        func_800F8188
    /* 1ECBC 801108BC 01030424 */   addiu     $a0, $zero, 0x301
    /* 1ECC0 801108C0 62E0030C */  jal        func_800F8188
    /* 1ECC4 801108C4 05030424 */   addiu     $a0, $zero, 0x305
    /* 1ECC8 801108C8 8CD9030C */  jal        func_800F6630
    /* 1ECCC 801108CC 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1ECD0 801108D0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1ECD4 801108D4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1ECD8 801108D8 00000000 */  nop
    /* 1ECDC 801108DC 00006290 */  lbu        $v0, 0x0($v1)
    /* 1ECE0 801108E0 02000424 */  addiu      $a0, $zero, 0x2
    /* 1ECE4 801108E4 82100200 */  srl        $v0, $v0, 2
    /* 1ECE8 801108E8 92D0030C */  jal        func_800F4248
    /* 1ECEC 801108EC 000062A0 */   sb        $v0, 0x0($v1)
    /* 1ECF0 801108F0 04D5030C */  jal        func_800F5410
    /* 1ECF4 801108F4 00000000 */   nop
    /* 1ECF8 801108F8 02D0030C */  jal        func_800F4008
    /* 1ECFC 801108FC E4000424 */   addiu     $a0, $zero, 0xE4
    /* 1ED00 80110900 62E0030C */  jal        func_800F8188
    /* 1ED04 80110904 02030424 */   addiu     $a0, $zero, 0x302
    /* 1ED08 80110908 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1ED0C 8011090C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1ED10 80110910 00000000 */  nop
    /* 1ED14 80110914 00006290 */  lbu        $v0, 0x0($v1)
    /* 1ED18 80110918 06030424 */  addiu      $a0, $zero, 0x306
    /* 1ED1C 8011091C 02004238 */  xori       $v0, $v0, 0x2
    /* 1ED20 80110920 62E0030C */  jal        func_800F8188
    /* 1ED24 80110924 000062A0 */   sb        $v0, 0x0($v1)
    /* 1ED28 80110928 53D9030C */  jal        func_800F654C
    /* 1ED2C 8011092C 37000424 */   addiu     $a0, $zero, 0x37
    /* 1ED30 80110930 62E0030C */  jal        func_800F8188
    /* 1ED34 80110934 03030424 */   addiu     $a0, $zero, 0x303
    /* 1ED38 80110938 62E0030C */  jal        func_800F8188
    /* 1ED3C 8011093C 07030424 */   addiu     $a0, $zero, 0x307
  .L80110940:
    /* 1ED40 80110940 8CD9030C */  jal        func_800F6630
    /* 1ED44 80110944 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1ED48 80110948 92D0030C */  jal        func_800F4248
    /* 1ED4C 8011094C 07000424 */   addiu     $a0, $zero, 0x7
    /* 1ED50 80110950 48D0030C */  jal        func_800F4120
    /* 1ED54 80110954 02020424 */   addiu     $a0, $zero, 0x202
    /* 1ED58 80110958 B7FF4014 */  bnez       $v0, .L80110838
    /* 1ED5C 8011095C 00000000 */   nop
    /* 1ED60 80110960 AFD8030C */  jal        func_800F62BC
    /* 1ED64 80110964 24000424 */   addiu     $a0, $zero, 0x24
    /* 1ED68 80110968 8CD9030C */  jal        func_800F6630
    /* 1ED6C 8011096C 24000424 */   addiu     $a0, $zero, 0x24
    /* 1ED70 80110970 5DD5030C */  jal        func_800F5574
    /* 1ED74 80110974 48000424 */   addiu     $a0, $zero, 0x48
    /* 1ED78 80110978 F5D4030C */  jal        func_800F53D4
    /* 1ED7C 8011097C 00000000 */   nop
    /* 1ED80 80110980 ADFF4010 */  beqz       $v0, .L80110838
    /* 1ED84 80110984 00000000 */   nop
    /* 1ED88 80110988 EEE3030C */  jal        func_800F8FB8
    /* 1ED8C 8011098C C8000424 */   addiu     $a0, $zero, 0xC8
    /* 1ED90 80110990 977A040C */  jal        func_8011EA5C
    /* 1ED94 80110994 00000000 */   nop
    /* 1ED98 80110998 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1ED9C 8011099C 00000000 */  nop
    /* 1EDA0 801109A0 0800E003 */  jr         $ra
    /* 1EDA4 801109A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110818
