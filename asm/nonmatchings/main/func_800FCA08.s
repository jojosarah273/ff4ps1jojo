nonmatching func_800FCA08, 0xB0

glabel func_800FCA08
    /* AE08 800FCA08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* AE0C 800FCA0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* AE10 800FCA10 59D9030C */  jal        func_800F6564
    /* AE14 800FCA14 DD0F0424 */   addiu     $a0, $zero, 0xFDD
    /* AE18 800FCA18 5DD5030C */  jal        func_800F5574
    /* AE1C 800FCA1C 0E000424 */   addiu     $a0, $zero, 0xE
    /* AE20 800FCA20 F5D4030C */  jal        func_800F53D4
    /* AE24 800FCA24 00000000 */   nop
    /* AE28 800FCA28 1F004010 */  beqz       $v0, .L800FCAA8
    /* AE2C 800FCA2C 00000000 */   nop
    /* AE30 800FCA30 53D9030C */  jal        func_800F654C
    /* AE34 800FCA34 80000424 */   addiu     $a0, $zero, 0x80
    /* AE38 800FCA38 62E0030C */  jal        func_800F8188
    /* AE3C 800FCA3C 15210424 */   addiu     $a0, $zero, 0x2115
    /* AE40 800FCA40 21F3030C */  jal        func_800FCC84
    /* AE44 800FCA44 00000000 */   nop
    /* AE48 800FCA48 77DC030C */  jal        func_800F71DC
    /* AE4C 800FCA4C 30040424 */   addiu     $a0, $zero, 0x430
    /* AE50 800FCA50 40E3030C */  jal        func_800F8D00
    /* AE54 800FCA54 16210424 */   addiu     $a0, $zero, 0x2116
    /* AE58 800FCA58 53D9030C */  jal        func_800F654C
    /* AE5C 800FCA5C 01000424 */   addiu     $a0, $zero, 0x1
    /* AE60 800FCA60 62E0030C */  jal        func_800F8188
    /* AE64 800FCA64 00430424 */   addiu     $a0, $zero, 0x4300
    /* AE68 800FCA68 77DC030C */  jal        func_800F71DC
    /* AE6C 800FCA6C 00580424 */   addiu     $a0, $zero, 0x5800
    /* AE70 800FCA70 40E3030C */  jal        func_800F8D00
    /* AE74 800FCA74 02430424 */   addiu     $a0, $zero, 0x4302
    /* AE78 800FCA78 53D9030C */  jal        func_800F654C
    /* AE7C 800FCA7C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* AE80 800FCA80 62E0030C */  jal        func_800F8188
    /* AE84 800FCA84 04430424 */   addiu     $a0, $zero, 0x4304
    /* AE88 800FCA88 77DC030C */  jal        func_800F71DC
    /* AE8C 800FCA8C 00010424 */   addiu     $a0, $zero, 0x100
    /* AE90 800FCA90 40E3030C */  jal        func_800F8D00
    /* AE94 800FCA94 05430424 */   addiu     $a0, $zero, 0x4305
    /* AE98 800FCA98 2FF3030C */  jal        func_800FCCBC
    /* AE9C 800FCA9C 00000000 */   nop
    /* AEA0 800FCAA0 01000224 */  addiu      $v0, $zero, 0x1
    /* AEA4 800FCAA4 7C0082A7 */  sh         $v0, %gp_rel(D_8019ED78)($gp)
  .L800FCAA8:
    /* AEA8 800FCAA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* AEAC 800FCAAC 00000000 */  nop
    /* AEB0 800FCAB0 0800E003 */  jr         $ra
    /* AEB4 800FCAB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCA08
