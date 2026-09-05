#include "common.h"
__asm__(
  ".globl func_80189920\n"
  ".type func_80189920, @function\n"
  "func_80189920:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\taddu $t0, $a1, $zero\n\tsll $a2, $a2, 16\n\tsw $s2, 0x18($sp)\n\tsra $s2, $a2, 16\n\tsw $s5, 0x24($sp)\n\taddu $s5, $zero, $zero\n\tsw $s6, 0x28($sp)\n\taddu $s6, $a0, $zero\n\tsll $a3, $a3, 16\n\tsw $s1, 0x14($sp)\n\tsra $s1, $a3, 16\n\tlui $a0, %hi(D_801F66E8)\n\tsw $s3, 0x1C($sp)\n\taddiu $s3, $a0, %lo(D_801F66E8)\n\tsll $v0, $s1, 2\n\taddu $v0, $v0, $s1\n\tsw $s0, 0x10($sp)\n\tsll $s0, $v0, 2\n\taddiu $v1, $s3, 0xC\n\taddu $a2, $s0, $v1\n\tsw $ra, 0x2C($sp)\n\tsw $s4, 0x20($sp)\n\tlw $v0, 0x0($a2)\n\tnop\n\tbnez $v0, .L801899D8\n\taddu $s4, $a0, $zero\n\taddu $v0, $s0, $s3\n\tlw $a1, 0x0($v0)\n\taddu $a0, $t0, $zero\n\tlh $v1, 0x8($a1)\n\tlw $v0, 0x4($a1)\n\tsll $v1, $v1, 4\n\taddiu $v1, $v1, 0x210\n\tsubu $v0, $v0, $v1\n\taddu $a1, $v0, $zero\n\tjal func_8018AE28\n\tsw $v0, 0x0($a2)\n\taddu $t0, $v0, $zero\n\taddiu $v0, $zero, -0x1\n\tbeq $t0, $v0, .L80189A24\n\tnop\n\taddu $v0, $s3, $s0\n\tsw $t0, 0x4($v0)\n\tjal func_8018C9B8\n\taddu $a0, $t0, $zero\n\t.L801899D8:\n\taddiu $v0, $s4, %lo(D_801F66E8)\n\tsll $v1, $s1, 2\n\taddu $v1, $v1, $s1\n\tsll $v1, $v1, 2\n\taddiu $v0, $v0, 0xC\n\taddu $v1, $v1, $v0\n\tlw $a0, 0x0($v1)\n\tnop\n\tsltu $v0,$s2,$a0\n\tbnez $v0, .L80189A10\n\tsubu $v0, $a0, $s2\n\tlh $s2, 0x0($v1)\n\taddiu $s5, $zero, 0x1\n\tsubu $v0, $a0, $s2\n\t.L80189A10:\n\tsw $v0, 0x0($v1)\n\taddu $a0, $s6, $zero\n\tjal func_8018CA48\n\taddu $a1, $s2, $zero\n\taddu $v0, $s5, $zero\n\t.L80189A24:\n\tlw $ra, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189920, .-func_80189920\n"
);
