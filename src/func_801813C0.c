#include "common.h"
__asm__(
  ".globl func_801813C0\n"
  ".type func_801813C0, @function\n"
  "func_801813C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsll $a3, $a3, 16\n\tsw $s1, 0x14($sp)\n\tsra $s1, $a3, 16\n\taddu $v1, $s1, $zero\n\tandi $a3, $a1, 0xFFFF\n\tslti $v0, $s1, 0x21\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s0, 0x10($sp)\n\tsw $a0, %gp_rel(D_8019EEA4)($gp)\n\tbnez $v0, .L801813F8\n\tandi $a2, $a2, 0xFFFF\n\taddiu $v1, $zero, 0x20\n\t.L801813F8:\n\tsll $v0, $v1, 16\n\tsra $s1, $v0, 16\n\tlui $a0, (0x80013800 >> 16)\n\tori $a0, $a0, (0x80013800 & 0xFFFF)\n\taddiu $v0, $zero, 0x40\n\taddiu $v1, $zero, 0x8\n\tsh $a3, %gp_rel(D_8019EE9E)($gp)\n\tsh $a2, %gp_rel(D_8019EEA0)($gp)\n\tsh $a3, %gp_rel(D_8019EE90)($gp)\n\tsh $a2, %gp_rel(D_8019EE92)($gp)\n\tsh $v0, %gp_rel(D_8019EE94)($gp)\n\tsh $v1, %gp_rel(D_8019EE96)($gp)\n\tsw $a0, %gp_rel(D_8019EEA8)($gp)\n\tblez $s1, .L80181480\n\taddu $a1, $zero, $zero\n\tsll $v0, $a2, 16\n\tsra $v0, $v0, 16\n\tslti $v0, $v0, 0xF8\n\tbeqz $v0, .L80181480\n\tlui $s0, (0x10000 >> 16)\n\tlui $s2, (0x10000 >> 16)\n\taddiu $a0, $zero, -0x1\n\t.L80181450:\n\tjal func_801808D8\n\taddu $a2, $zero, $zero\n\taddu $v1, $s0, $zero\n\tsra $a1, $v1, 16\n\tslt $v0, $a1, $s1\n\tbeqz $v0, .L80181480\n\taddu $s0, $s0, $s2\n\tlh $v0, %gp_rel(D_8019EE92)($gp)\n\tnop\n\tslti $v0, $v0, 0xF8\n\tbnez $v0, .L80181450\n\taddiu $a0, $zero, -0x1\n\t.L80181480:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801813C0, .-func_801813C0\n"
);
