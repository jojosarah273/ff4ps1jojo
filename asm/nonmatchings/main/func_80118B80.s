nonmatching func_80118B80, 0x1A0

glabel func_80118B80
    /* 26F80 80118B80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26F84 80118B84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26F88 80118B88 655D040C */  jal        func_80117594
    /* 26F8C 80118B8C 00000000 */   nop
    /* 26F90 80118B90 5DD5030C */  jal        func_800F5574
    /* 26F94 80118B94 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 26F98 80118B98 F5D4030C */  jal        func_800F53D4
    /* 26F9C 80118B9C 00000000 */   nop
    /* 26FA0 80118BA0 3F004014 */  bnez       $v0, .L80118CA0
    /* 26FA4 80118BA4 00000000 */   nop
    /* 26FA8 80118BA8 93E0030C */  jal        func_800F824C
    /* 26FAC 80118BAC 18000424 */   addiu     $a0, $zero, 0x18
    /* 26FB0 80118BB0 EEE3030C */  jal        func_800F8FB8
    /* 26FB4 80118BB4 19000424 */   addiu     $a0, $zero, 0x19
    /* 26FB8 80118BB8 53D9030C */  jal        func_800F654C
    /* 26FBC 80118BBC 0A000424 */   addiu     $a0, $zero, 0xA
    /* 26FC0 80118BC0 93E0030C */  jal        func_800F824C
    /* 26FC4 80118BC4 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 26FC8 80118BC8 EEE3030C */  jal        func_800F8FB8
    /* 26FCC 80118BCC 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 26FD0 80118BD0 C3D3050C */  jal        func_80174F0C
    /* 26FD4 80118BD4 00000000 */   nop
    /* 26FD8 80118BD8 77DC030C */  jal        func_800F71DC
    /* 26FDC 80118BDC 21200000 */   addu      $a0, $zero, $zero
  .L80118BE0:
    /* 26FE0 80118BE0 DADA030C */  jal        func_800F6B68
    /* 26FE4 80118BE4 03100424 */   addiu     $a0, $zero, 0x1003
    /* 26FE8 80118BE8 0DD9030C */  jal        func_800F6434
    /* 26FEC 80118BEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 26FF0 80118BF0 1F004014 */  bnez       $v0, .L80118C70
    /* 26FF4 80118BF4 00000000 */   nop
    /* 26FF8 80118BF8 91E5030C */  jal        func_800F9644
    /* 26FFC 80118BFC 20000424 */   addiu     $a0, $zero, 0x20
    /* 27000 80118C00 F8DA030C */  jal        func_800F6BE0
    /* 27004 80118C04 07100424 */   addiu     $a0, $zero, 0x1007
    /* 27008 80118C08 04D5030C */  jal        func_800F5410
    /* 2700C 80118C0C 00000000 */   nop
    /* 27010 80118C10 0FCF030C */  jal        func_800F3C3C
    /* 27014 80118C14 30000424 */   addiu     $a0, $zero, 0x30
    /* 27018 80118C18 E5CF030C */  jal        func_800F3F94
    /* 2701C 80118C1C 21204000 */   addu      $a0, $v0, $zero
    /* 27020 80118C20 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 27024 80118C24 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 27028 80118C28 00000000 */  nop
    /* 2702C 80118C2C 00004494 */  lhu        $a0, 0x0($v0)
    /* 27030 80118C30 C1CE030C */  jal        func_800F3B04
    /* 27034 80118C34 09108424 */   addiu     $a0, $a0, 0x1009
    /* 27038 80118C38 48D5030C */  jal        func_800F5520
    /* 2703C 80118C3C 21204000 */   addu      $a0, $v0, $zero
    /* 27040 80118C40 F0D4030C */  jal        func_800F53C0
    /* 27044 80118C44 00000000 */   nop
    /* 27048 80118C48 03004010 */  beqz       $v0, .L80118C58
    /* 2704C 80118C4C 00000000 */   nop
    /* 27050 80118C50 F8DA030C */  jal        func_800F6BE0
    /* 27054 80118C54 09100424 */   addiu     $a0, $zero, 0x1009
  .L80118C58:
    /* 27058 80118C58 F7E1030C */  jal        func_800F87DC
    /* 2705C 80118C5C 07100424 */   addiu     $a0, $zero, 0x1007
    /* 27060 80118C60 56D9030C */  jal        func_800F6558
    /* 27064 80118C64 21200000 */   addu      $a0, $zero, $zero
    /* 27068 80118C68 98E5030C */  jal        func_800F9660
    /* 2706C 80118C6C 20000424 */   addiu     $a0, $zero, 0x20
  .L80118C70:
    /* 27070 80118C70 7E5F040C */  jal        func_80117DF8
    /* 27074 80118C74 00000000 */   nop
    /* 27078 80118C78 56D6030C */  jal        func_800F5958
    /* 2707C 80118C7C 40010424 */   addiu     $a0, $zero, 0x140
    /* 27080 80118C80 F5D4030C */  jal        func_800F53D4
    /* 27084 80118C84 00000000 */   nop
    /* 27088 80118C88 D5FF4010 */  beqz       $v0, .L80118BE0
    /* 2708C 80118C8C 00000000 */   nop
    /* 27090 80118C90 977A040C */  jal        func_8011EA5C
    /* 27094 80118C94 00000000 */   nop
    /* 27098 80118C98 44630408 */  j          .L80118D10
    /* 2709C 80118C9C 00000000 */   nop
  .L80118CA0:
    /* 270A0 80118CA0 77DC030C */  jal        func_800F71DC
    /* 270A4 80118CA4 21200000 */   addu      $a0, $zero, $zero
  .L80118CA8:
    /* 270A8 80118CA8 DADA030C */  jal        func_800F6B68
    /* 270AC 80118CAC 03100424 */   addiu     $a0, $zero, 0x1003
    /* 270B0 80118CB0 0DD9030C */  jal        func_800F6434
    /* 270B4 80118CB4 80000424 */   addiu     $a0, $zero, 0x80
    /* 270B8 80118CB8 0B004014 */  bnez       $v0, .L80118CE8
    /* 270BC 80118CBC 00000000 */   nop
    /* 270C0 80118CC0 91E5030C */  jal        func_800F9644
    /* 270C4 80118CC4 20000424 */   addiu     $a0, $zero, 0x20
    /* 270C8 80118CC8 F8DA030C */  jal        func_800F6BE0
    /* 270CC 80118CCC 09100424 */   addiu     $a0, $zero, 0x1009
    /* 270D0 80118CD0 F7E1030C */  jal        func_800F87DC
    /* 270D4 80118CD4 07100424 */   addiu     $a0, $zero, 0x1007
    /* 270D8 80118CD8 56D9030C */  jal        func_800F6558
    /* 270DC 80118CDC 21200000 */   addu      $a0, $zero, $zero
    /* 270E0 80118CE0 98E5030C */  jal        func_800F9660
    /* 270E4 80118CE4 20000424 */   addiu     $a0, $zero, 0x20
  .L80118CE8:
    /* 270E8 80118CE8 7E5F040C */  jal        func_80117DF8
    /* 270EC 80118CEC 00000000 */   nop
    /* 270F0 80118CF0 56D6030C */  jal        func_800F5958
    /* 270F4 80118CF4 40010424 */   addiu     $a0, $zero, 0x140
    /* 270F8 80118CF8 F5D4030C */  jal        func_800F53D4
    /* 270FC 80118CFC 00000000 */   nop
    /* 27100 80118D00 E9FF4010 */  beqz       $v0, .L80118CA8
    /* 27104 80118D04 00000000 */   nop
    /* 27108 80118D08 977A040C */  jal        func_8011EA5C
    /* 2710C 80118D0C 00000000 */   nop
  .L80118D10:
    /* 27110 80118D10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27114 80118D14 00000000 */  nop
    /* 27118 80118D18 0800E003 */  jr         $ra
    /* 2711C 80118D1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118B80
