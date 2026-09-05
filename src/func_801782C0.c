#include "common.h"
__asm__(
  ".globl func_801782C0\n"
  ".type func_801782C0, @function\n"
  "func_801782C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tlui $v0, %hi(D_801A0A10)\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $v0, %lo(D_801A0A10)\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $zero, 0x200\n\tsw $s1, 0x14($sp)\n\taddiu $s1, $zero, 0x3\n\tsw $ra, 0x20($sp)\n\t.L801782EC:\n\taddu $a0, $zero, $zero\n\taddu $a1, $zero, $zero\n\taddu $a2, $s2, $zero\n\tjal func_801971A8\n\taddu $a3, $zero, $zero\n\tsh $v0, 0x0($s0)\n\tsh $v0, 0x18($s0)\n\tsh $v0, 0x10($s0)\n\tsh $v0, 0x8($s0)\n\taddiu $s0, $s0, 0x2\n\taddiu $s1, $s1, -0x1\n\tbgez $s1, .L801782EC\n\taddiu $s2, $s2, 0x40\n\taddu $a0, $zero, $zero\n\taddu $a1, $zero, $zero\n\taddiu $a2, $zero, 0x300\n\tjal func_801971A8\n\taddu $a3, $zero, $zero\n\tsh $v0, %gp_rel(D_8019EE10)($gp)\n\tjal func_8017F644\n\taddu $a0, $s3, $zero\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801782C0, .-func_801782C0\n"
);
