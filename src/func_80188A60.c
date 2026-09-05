#include "common.h"
__asm__(
  ".globl func_80188A60\n"
  ".type func_80188A60, @function\n"
  "func_80188A60:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019EF40)($gp)\n\taddiu $sp, $sp, -0x18\n\tbltz $v0, .L80188A9C\n\tsw $ra, 0x10($sp)\n\taddiu $a1, $v0, 0x1\n\tlw $v0, %gp_rel(D_8019EF8C)($gp)\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\tsll $v0, $v0, 4\n\taddu $v1, $v0, $v1\n\taddiu $a1, $a1, -0x1\n\t.L80188A88:\n\tbnez $a1, .L80188A88\n\taddiu $a1, $a1, -0x1\n\taddiu $a1, $a1, 0x1\n\taddiu $v0, $zero, -0x1\n\tsh $v0, 0x0($v1)\n\t.L80188A9C:\n\taddiu $v0, $zero, 0x1\n\tsw $zero, %gp_rel(D_8019EF88)($gp)\n\tsw $zero, %gp_rel(D_8019EF8C)($gp)\n\tbne $a0, $v0, .L80188AD8\n\tnop\n\tjal func_801917B8\n\tnop\n\tjal func_80191748\n\taddu $a0, $zero, $zero\n\taddiu $v1, $zero, 0x3\n\tsb $v1, %gp_rel(D_8019EF44)($gp)\n\taddiu $a0, $zero, 0xE\n\taddiu $a1, $gp, %gp_rel(D_8019EF44)\n\tjal func_80191878\n\taddu $a2, $zero, $zero\n\t.L80188AD8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188A60, .-func_80188A60\n"
);
