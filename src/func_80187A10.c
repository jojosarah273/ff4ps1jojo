#include "common.h"
__asm__(
  ".globl func_80187A10\n"
  ".type func_80187A10, @function\n"
  "func_80187A10:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tlh $v1, %gp_rel(D_8019EF0A)($gp)\n\taddiu $v0, $zero, 0x10\n\tbne $v1, $v0, .L80187A90\n\tsw $ra, 0x14($sp)\n\tlh $v0, %gp_rel(D_8019EF0C)($gp)\n\taddiu $v1, $zero, 0x2\n\tsh $v1, %gp_rel(D_8019EF0A)($gp)\n\tslti $v0, $v0, 0x33\n\tbeqz $v0, .L80187A58\n\taddiu $v0, $zero, 0x9F\n\tlh $v0, %gp_rel(D_8019EF30)($gp)\n\tnop\n\tbnez $v0, .L80187A58\n\taddiu $v0, $zero, 0x4F\n\taddiu $v0, $zero, 0xBF\n\t.L80187A58:\n\tsh $v0, %gp_rel(D_8019EF16)($gp)\n\tlh $a1, %gp_rel(D_8019EF16)($gp)\n\taddiu $a0, $zero, 0x1\n\taddu $a3, $zero, $zero\n\tjal func_80189B8C\n\taddu $a2, $a1, $zero\n\taddiu $a0, $zero, 0x6\n\tsll $v0, $s0, 1\n\taddu $v0, $v0, $s0\n\tsll $v0, $v0, 3\n\tlui $a1, %hi(D_801F6230)\n\taddiu $a1, $a1, %lo(D_801F6230)\n\tjal func_801919B4\n\taddu $a1, $v0, $a1\n\t.L80187A90:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187A10, .-func_80187A10\n"
);
