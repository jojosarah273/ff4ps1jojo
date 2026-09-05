#include "common.h"
__asm__(
  ".globl func_801945A8\n"
  ".type func_801945A8, @function\n"
  "func_801945A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tlui $a0, %hi(D_800F3940)\n\taddiu $a0, $a0, %lo(D_800F3940)\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\taddu $a1, $s3, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a2, $zero\n\tsw $s1, 0x14($sp)\n\tsw $ra, 0x20($sp)\n\tjal func_801943FC\n\taddu $s1, $a3, $zero\n\taddu $a1, $s3, $zero\n\tandi $s1, $s1, 0xFF\n\tsll $s1, $s1, 16\n\tandi $s0, $s0, 0xFF\n\tsll $s0, $s0, 8\n\tlui $v0, (0x80000000 >> 16)\n\tor $s0, $s0, $v0\n\tor $s1, $s1, $s0\n\tandi $s2, $s2, 0xFF\n\tlui $v1, %hi(D_8019DB4C)\n\tlw $v1, %lo(D_8019DB4C)($v1)\n\taddiu $a2, $zero, 0x8\n\tlw $a0, 0xC($v1)\n\tlw $v0, 0x8($v1)\n\tnop\n\tjalr $v0\n\tor $a3, $s1, $s2\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801945A8, .-func_801945A8\n"
);
