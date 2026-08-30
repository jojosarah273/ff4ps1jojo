nonmatching func_80128C4C, 0x100

glabel func_80128C4C
    /* 3704C 80128C4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37050 80128C50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37054 80128C54 77DC030C */  jal        func_800F71DC
    /* 37058 80128C58 40100424 */   addiu     $a0, $zero, 0x1040
  .L80128C5C:
    /* 3705C 80128C5C 53D9030C */  jal        func_800F654C
    /* 37060 80128C60 21200000 */   addu      $a0, $zero, $zero
    /* 37064 80128C64 DAE1030C */  jal        func_800F8768
    /* 37068 80128C68 21200000 */   addu      $a0, $zero, $zero
    /* 3706C 80128C6C D9D8030C */  jal        func_800F6364
    /* 37070 80128C70 00000000 */   nop
    /* 37074 80128C74 56D6030C */  jal        func_800F5958
    /* 37078 80128C78 00180424 */   addiu     $a0, $zero, 0x1800
    /* 3707C 80128C7C F5D4030C */  jal        func_800F53D4
    /* 37080 80128C80 00000000 */   nop
    /* 37084 80128C84 F5FF4010 */  beqz       $v0, .L80128C5C
    /* 37088 80128C88 00000000 */   nop
    /* 3708C 80128C8C 77DC030C */  jal        func_800F71DC
    /* 37090 80128C90 00300424 */   addiu     $a0, $zero, 0x3000
    /* 37094 80128C94 40E3030C */  jal        func_800F8D00
    /* 37098 80128C98 AA160424 */   addiu     $a0, $zero, 0x16AA
    /* 3709C 80128C9C 5388040C */  jal        func_8012214C
    /* 370A0 80128CA0 00000000 */   nop
    /* 370A4 80128CA4 91E5030C */  jal        func_800F9644
    /* 370A8 80128CA8 20000424 */   addiu     $a0, $zero, 0x20
    /* 370AC 80128CAC 56D9030C */  jal        func_800F6558
    /* 370B0 80128CB0 53000424 */   addiu     $a0, $zero, 0x53
    /* 370B4 80128CB4 77DC030C */  jal        func_800F71DC
    /* 370B8 80128CB8 10A70434 */   ori       $a0, $zero, 0xA710
    /* 370BC 80128CBC 40DD030C */  jal        func_800F7500
    /* 370C0 80128CC0 00150424 */   addiu     $a0, $zero, 0x1500
    /* 370C4 80128CC4 59CF030C */  jal        func_800F3D64
    /* 370C8 80128CC8 7E0F0424 */   addiu     $a0, $zero, 0xF7E
    /* 370CC 80128CCC 56D9030C */  jal        func_800F6558
    /* 370D0 80128CD0 05000424 */   addiu     $a0, $zero, 0x5
    /* 370D4 80128CD4 77DC030C */  jal        func_800F71DC
    /* 370D8 80128CD8 00150424 */   addiu     $a0, $zero, 0x1500
    /* 370DC 80128CDC 40DD030C */  jal        func_800F7500
    /* 370E0 80128CE0 0A1B0424 */   addiu     $a0, $zero, 0x1B0A
    /* 370E4 80128CE4 59CF030C */  jal        func_800F3D64
    /* 370E8 80128CE8 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 370EC 80128CEC 98E5030C */  jal        func_800F9660
    /* 370F0 80128CF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 370F4 80128CF4 53D9030C */  jal        func_800F654C
    /* 370F8 80128CF8 21200000 */   addu      $a0, $zero, $zero
    /* 370FC 80128CFC 62E0030C */  jal        func_800F8188
    /* 37100 80128D00 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 37104 80128D04 7AD8030C */  jal        func_800F61E8
    /* 37108 80128D08 00000000 */   nop
    /* 3710C 80128D0C 62E0030C */  jal        func_800F8188
    /* 37110 80128D10 AF160424 */   addiu     $a0, $zero, 0x16AF
    /* 37114 80128D14 62E0030C */  jal        func_800F8188
    /* 37118 80128D18 B1160424 */   addiu     $a0, $zero, 0x16B1
    /* 3711C 80128D1C 7AD8030C */  jal        func_800F61E8
    /* 37120 80128D20 00000000 */   nop
    /* 37124 80128D24 62E0030C */  jal        func_800F8188
    /* 37128 80128D28 AD160424 */   addiu     $a0, $zero, 0x16AD
    /* 3712C 80128D2C 62E0030C */  jal        func_800F8188
    /* 37130 80128D30 AC160424 */   addiu     $a0, $zero, 0x16AC
    /* 37134 80128D34 62E0030C */  jal        func_800F8188
    /* 37138 80128D38 B0160424 */   addiu     $a0, $zero, 0x16B0
    /* 3713C 80128D3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37140 80128D40 00000000 */  nop
    /* 37144 80128D44 0800E003 */  jr         $ra
    /* 37148 80128D48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80128C4C
