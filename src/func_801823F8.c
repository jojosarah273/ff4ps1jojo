#include "common.h"
__asm__(
  ".globl func_801823F8\n"
  ".type func_801823F8, @function\n"
  "func_801823F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a2, $zero, $zero\n\tlui $a1, %hi(D_801E01C8)\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\tsw $s0, 0x10($sp)\n\tlui $s0, (0x10000 >> 16)\n\tsw $s1, 0x14($sp)\n\tlui $s1, (0x10000 >> 16)\n\taddiu $v0, $zero, 0x100\n\tsh $v0, %gp_rel(D_8019EE9E)($gp)\n\tsh $v0, %gp_rel(D_8019EE90)($gp)\n\taddiu $v0, $zero, 0x80\n\taddiu $v1, $zero, 0x8\n\taddiu $a1, $a1, %lo(D_801E01C8)\n\tsw $ra, 0x1C($sp)\n\tsw $a0, %gp_rel(D_8019EEA4)($gp)\n\tsh $zero, %gp_rel(D_8019EEA0)($gp)\n\tsh $zero, %gp_rel(D_8019EE92)($gp)\n\tsh $v0, %gp_rel(D_8019EE94)($gp)\n\tsh $v1, %gp_rel(D_8019EE96)($gp)\n\tsw $a1, %gp_rel(D_8019EEA8)($gp)\n\t.L80182450:\n\taddu $a0, $zero, $zero\n\taddu $a1, $a2, $zero\n\tjal func_801808D8\n\taddiu $a2, $zero, 0x2\n\taddu $v1, $s0, $zero\n\tsra $a2, $v1, 16\n\tslti $v0, $a2, 0x12\n\tbnez $v0, .L80182450\n\taddu $s0, $s0, $s1\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddu $a2, $zero, $zero\n\tlui $s0, (0x10000 >> 16)\n\tlui $s1, (0x10000 >> 16)\n\taddiu $v1, $zero, 0x180\n\taddiu $v0, $s2, %lo(D_801E01C8)\n\tsh $v1, %gp_rel(D_8019EE9E)($gp)\n\tsh $v1, %gp_rel(D_8019EE90)($gp)\n\tsw $v0, %gp_rel(D_8019EEA8)($gp)\n\t.L8018249C:\n\taddu $a0, $zero, $zero\n\taddu $a1, $a2, $zero\n\tjal func_801808D8\n\taddiu $a2, $zero, 0x3\n\taddu $v1, $s0, $zero\n\tsra $a2, $v1, 16\n\tslti $v0, $a2, 0x12\n\tbnez $v0, .L8018249C\n\taddu $s0, $s0, $s1\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801823F8, .-func_801823F8\n"
);
