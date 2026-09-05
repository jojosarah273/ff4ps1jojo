#include "common.h"
__asm__(
  ".globl func_80189884\n"
  ".type func_80189884, @function\n"
  "func_80189884:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tsll $a2, $a2, 16\n\tsra $a2, $a2, 16\n\tlui $v1, %hi(D_801F66E8)\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $v1, %lo(D_801F66E8)\n\tsll $v0, $a2, 2\n\taddu $v0, $v0, $a2\n\tsw $s0, 0x10($sp)\n\tsll $s0, $v0, 2\n\tsw $s1, 0x14($sp)\n\taddu $s1, $s0, $s2\n\tsw $ra, 0x20($sp)\n\tlw $v0, 0x0($s1)\n\taddu $a0, $a1, $zero\n\tlw $a1, 0x4($v0)\n\tjal func_8018AE28\n\tnop\n\taddu $a1, $v0, $zero\n\taddiu $v0, $zero, -0x1\n\tbeq $a1, $v0, .L80189904\n\taddu $a0, $a1, $zero\n\taddu $v0, $s2, $s0\n\tjal func_8018C9B8\n\tsw $a1, 0x4($v0)\n\tlw $v1, 0x0($s1)\n\tnop\n\tlw $a1, 0x4($v1)\n\tjal func_8018C7F8\n\taddu $a0, $s3, $zero\n\t.L80189904:\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189884, .-func_80189884\n"
);
