nonmatching func_801237A8, 0xD0

glabel func_801237A8
    /* 31BA8 801237A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31BAC 801237AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31BB0 801237B0 59D9030C */  jal        func_800F6564
    /* 31BB4 801237B4 A4160424 */   addiu     $a0, $zero, 0x16A4
    /* 31BB8 801237B8 93E0030C */  jal        func_800F824C
    /* 31BBC 801237BC 73000424 */   addiu     $a0, $zero, 0x73
    /* 31BC0 801237C0 84DC030C */  jal        func_800F7210
    /* 31BC4 801237C4 A5160424 */   addiu     $a0, $zero, 0x16A5
    /* 31BC8 801237C8 5BE3030C */  jal        func_800F8D6C
    /* 31BCC 801237CC 74000424 */   addiu     $a0, $zero, 0x74
    /* 31BD0 801237D0 568E040C */  jal        func_80123958
    /* 31BD4 801237D4 00000000 */   nop
    /* 31BD8 801237D8 568E040C */  jal        func_80123958
    /* 31BDC 801237DC 00000000 */   nop
    /* 31BE0 801237E0 9CDC030C */  jal        func_800F7270
    /* 31BE4 801237E4 73000424 */   addiu     $a0, $zero, 0x73
    /* 31BE8 801237E8 56D6030C */  jal        func_800F5958
    /* 31BEC 801237EC E7030424 */   addiu     $a0, $zero, 0x3E7
    /* 31BF0 801237F0 F0D4030C */  jal        func_800F53C0
    /* 31BF4 801237F4 00000000 */   nop
    /* 31BF8 801237F8 0B004010 */  beqz       $v0, .L80123828
    /* 31BFC 801237FC 00000000 */   nop
    /* 31C00 80123800 40DD030C */  jal        func_800F7500
    /* 31C04 80123804 02D60434 */   ori       $a0, $zero, 0xD602
    /* 31C08 80123808 428E040C */  jal        func_80123908
    /* 31C0C 8012380C 00000000 */   nop
    /* 31C10 80123810 8CD9030C */  jal        func_800F6630
    /* 31C14 80123814 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 31C18 80123818 58E2030C */  jal        func_800F8960
    /* 31C1C 8012381C 6C050424 */   addiu     $a0, $zero, 0x56C
    /* 31C20 80123820 1A8E0408 */  j          .L80123868
    /* 31C24 80123824 00000000 */   nop
  .L80123828:
    /* 31C28 80123828 65DD030C */  jal        func_800F7594
    /* 31C2C 8012382C 29000424 */   addiu     $a0, $zero, 0x29
    /* 31C30 80123830 8CD9030C */  jal        func_800F6630
    /* 31C34 80123834 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 31C38 80123838 D87C040C */  jal        func_8011F360
    /* 31C3C 8012383C 00000000 */   nop
    /* 31C40 80123840 5DD5030C */  jal        func_800F5574
    /* 31C44 80123844 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 31C48 80123848 F5D4030C */  jal        func_800F53D4
    /* 31C4C 8012384C 00000000 */   nop
    /* 31C50 80123850 03004010 */  beqz       $v0, .L80123860
    /* 31C54 80123854 00000000 */   nop
    /* 31C58 80123858 53D9030C */  jal        func_800F654C
    /* 31C5C 8012385C 80000424 */   addiu     $a0, $zero, 0x80
  .L80123860:
    /* 31C60 80123860 1E8E040C */  jal        func_80123878
    /* 31C64 80123864 00000000 */   nop
  .L80123868:
    /* 31C68 80123868 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31C6C 8012386C 00000000 */  nop
    /* 31C70 80123870 0800E003 */  jr         $ra
    /* 31C74 80123874 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801237A8
