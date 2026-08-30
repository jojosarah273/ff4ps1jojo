nonmatching func_801706C0, 0x1C4

glabel func_801706C0
    /* 7EAC0 801706C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7EAC4 801706C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7EAC8 801706C8 59D9030C */  jal        func_800F6564
    /* 7EACC 801706CC DD0F0424 */   addiu     $a0, $zero, 0xFDD
    /* 7EAD0 801706D0 0DD9030C */  jal        func_800F6434
    /* 7EAD4 801706D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 7EAD8 801706D8 30004014 */  bnez       $v0, .L8017079C
    /* 7EADC 801706DC 00000000 */   nop
    /* 7EAE0 801706E0 5DD5030C */  jal        func_800F5574
    /* 7EAE4 801706E4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7EAE8 801706E8 F5D4030C */  jal        func_800F53D4
    /* 7EAEC 801706EC 00000000 */   nop
    /* 7EAF0 801706F0 2A004014 */  bnez       $v0, .L8017079C
    /* 7EAF4 801706F4 00000000 */   nop
    /* 7EAF8 801706F8 21C2050C */  jal        func_80170884
    /* 7EAFC 801706FC 00000000 */   nop
    /* 7EB00 80170700 DDE3030C */  jal        func_800F8F74
    /* 7EB04 80170704 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7EB08 80170708 59D9030C */  jal        func_800F6564
    /* 7EB0C 8017070C DD0F0424 */   addiu     $a0, $zero, 0xFDD
    /* 7EB10 80170710 50D4030C */  jal        func_800F5140
    /* 7EB14 80170714 00000000 */   nop
    /* 7EB18 80170718 1E00043C */  lui        $a0, (0x1E8000 >> 16)
    /* 7EB1C 8017071C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7EB20 80170720 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7EB24 80170724 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7EB28 80170728 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7EB2C 8017072C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7EB30 80170730 00808434 */  ori        $a0, $a0, (0x1E8000 & 0xFFFF)
    /* 7EB34 80170734 1ADB030C */  jal        func_800F6C68
    /* 7EB38 80170738 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7EB3C 8017073C 62E0030C */  jal        func_800F8188
    /* 7EB40 80170740 02430424 */   addiu     $a0, $zero, 0x4302
    /* 7EB44 80170744 1E00043C */  lui        $a0, (0x1E8001 >> 16)
    /* 7EB48 80170748 1ADB030C */  jal        func_800F6C68
    /* 7EB4C 8017074C 01808434 */   ori       $a0, $a0, (0x1E8001 & 0xFFFF)
    /* 7EB50 80170750 62E0030C */  jal        func_800F8188
    /* 7EB54 80170754 03430424 */   addiu     $a0, $zero, 0x4303
    /* 7EB58 80170758 59D9030C */  jal        func_800F6564
    /* 7EB5C 8017075C DD0F0424 */   addiu     $a0, $zero, 0xFDD
    /* 7EB60 80170760 1500043C */  lui        $a0, (0x15B104 >> 16)
    /* 7EB64 80170764 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7EB68 80170768 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7EB6C 8017076C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7EB70 80170770 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7EB74 80170774 00004394 */  lhu        $v1, 0x0($v0)
    /* 7EB78 80170778 04B18434 */  ori        $a0, $a0, (0x15B104 & 0xFFFF)
    /* 7EB7C 8017077C 1ADB030C */  jal        func_800F6C68
    /* 7EB80 80170780 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7EB84 80170784 62E0030C */  jal        func_800F8188
    /* 7EB88 80170788 04430424 */   addiu     $a0, $zero, 0x4304
    /* 7EB8C 8017078C 47C2050C */  jal        func_8017091C
    /* 7EB90 80170790 00000000 */   nop
    /* 7EB94 80170794 1DC20508 */  j          .L80170874
    /* 7EB98 80170798 00000000 */   nop
  .L8017079C:
    /* 7EB9C 8017079C 77DC030C */  jal        func_800F71DC
    /* 7EBA0 801707A0 21200000 */   addu      $a0, $zero, $zero
    /* 7EBA4 801707A4 5BE3030C */  jal        func_800F8D6C
    /* 7EBA8 801707A8 47000424 */   addiu     $a0, $zero, 0x47
    /* 7EBAC 801707AC 77DC030C */  jal        func_800F71DC
    /* 7EBB0 801707B0 00240424 */   addiu     $a0, $zero, 0x2400
    /* 7EBB4 801707B4 5BE3030C */  jal        func_800F8D6C
    /* 7EBB8 801707B8 45000424 */   addiu     $a0, $zero, 0x45
    /* 7EBBC 801707BC 53D9030C */  jal        func_800F654C
    /* 7EBC0 801707C0 15000424 */   addiu     $a0, $zero, 0x15
    /* 7EBC4 801707C4 93E0030C */  jal        func_800F824C
    /* 7EBC8 801707C8 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7EBCC 801707CC 1E00043C */  lui        $a0, (0x1E8000 >> 16)
    /* 7EBD0 801707D0 72D9030C */  jal        func_800F65C8
    /* 7EBD4 801707D4 00808434 */   ori       $a0, $a0, (0x1E8000 & 0xFFFF)
    /* 7EBD8 801707D8 93E0030C */  jal        func_800F824C
    /* 7EBDC 801707DC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EBE0 801707E0 1E00043C */  lui        $a0, (0x1E8001 >> 16)
    /* 7EBE4 801707E4 72D9030C */  jal        func_800F65C8
    /* 7EBE8 801707E8 01808434 */   ori       $a0, $a0, (0x1E8001 & 0xFFFF)
    /* 7EBEC 801707EC 93E0030C */  jal        func_800F824C
    /* 7EBF0 801707F0 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 7EBF4 801707F4 53D9030C */  jal        func_800F654C
    /* 7EBF8 801707F8 80000424 */   addiu     $a0, $zero, 0x80
    /* 7EBFC 801707FC 62E0030C */  jal        func_800F8188
    /* 7EC00 80170800 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7EC04 80170804 DDE3030C */  jal        func_800F8F74
    /* 7EC08 80170808 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7EC0C 8017080C 53D9030C */  jal        func_800F654C
    /* 7EC10 80170810 01000424 */   addiu     $a0, $zero, 0x1
    /* 7EC14 80170814 62E0030C */  jal        func_800F8188
    /* 7EC18 80170818 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7EC1C 8017081C 53D9030C */  jal        func_800F654C
    /* 7EC20 80170820 18000424 */   addiu     $a0, $zero, 0x18
    /* 7EC24 80170824 62E0030C */  jal        func_800F8188
    /* 7EC28 80170828 01430424 */   addiu     $a0, $zero, 0x4301
    /* 7EC2C 8017082C 8CD9030C */  jal        func_800F6630
    /* 7EC30 80170830 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7EC34 80170834 62E0030C */  jal        func_800F8188
    /* 7EC38 80170838 04430424 */   addiu     $a0, $zero, 0x4304
    /* 7EC3C 8017083C 9CDC030C */  jal        func_800F7270
    /* 7EC40 80170840 47000424 */   addiu     $a0, $zero, 0x47
    /* 7EC44 80170844 40E3030C */  jal        func_800F8D00
    /* 7EC48 80170848 16210424 */   addiu     $a0, $zero, 0x2116
    /* 7EC4C 8017084C 9CDC030C */  jal        func_800F7270
    /* 7EC50 80170850 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EC54 80170854 40E3030C */  jal        func_800F8D00
    /* 7EC58 80170858 02430424 */   addiu     $a0, $zero, 0x4302
    /* 7EC5C 8017085C 9CDC030C */  jal        func_800F7270
    /* 7EC60 80170860 45000424 */   addiu     $a0, $zero, 0x45
    /* 7EC64 80170864 40E3030C */  jal        func_800F8D00
    /* 7EC68 80170868 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7EC6C 8017086C 1AE6030C */  jal        func_800F9868
    /* 7EC70 80170870 21200000 */   addu      $a0, $zero, $zero
  .L80170874:
    /* 7EC74 80170874 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7EC78 80170878 00000000 */  nop
    /* 7EC7C 8017087C 0800E003 */  jr         $ra
    /* 7EC80 80170880 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801706C0
