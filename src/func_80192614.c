#include "common.h"
__asm__(
  ".globl func_80192614\n"
  ".type func_80192614, @function\n"
  "func_80192614:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a1, $zero\n\tsw $s1, 0x14($sp)\n\tlui $s1, %hi(D_8019BDB0)\n\taddiu $s1, $s1, %lo(D_8019BDB0)\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $s1, 0x8\n\tsw $ra, 0x24($sp)\n\tsw $s0, 0x10($sp)\n\t.L80192644:\n\tjal func_801928E8\n\taddiu $a0, $zero, -0x1\n\tlw $v1, 0x0($s1)\n\tnop\n\taddiu $v1, $v1, 0x4B0\n\tslt $v1, $v1, $v0\n\tbnez $v1, .L801926AC\n\taddiu $s0, $zero, -0x1\n\tlw $v0, -0x8($s1)\n\tnop\n\tbltz $v0, .L80192694\n\tnop\n\tjal func_801928E8\n\taddiu $a0, $zero, -0x1\n\tlw $v1, -0x4($s1)\n\tnop\n\taddiu $v1, $v1, 0x3C\n\tslt $v1, $v1, $v0\n\tbeqz $v1, .L801926A8\n\tnop\n\t.L80192694:\n\tjal func_801920F0\n\taddiu $a0, $zero, 0x1\n\tlw $s0, -0x1C($s1)\n\tj .L801926AC\n\tnop\n\t.L801926A8:\n\tlw $s0, -0x8($s1)\n\t.L801926AC:\n\tbnez $s3, .L801926D4\n\taddiu $a0, $zero, 0x1\n\tlw $v0, 0x0($s2)\n\tnop\n\tbeqz $v0, .L801926CC\n\tnop\n\tbeqz $s0, .L80192644\n\tnop\n\t.L801926CC:\n\tbgtz $s0, .L80192644\n\taddiu $a0, $zero, 0x1\n\t.L801926D4:\n\tjal func_80191818\n\taddu $a1, $s4, $zero\n\tlw $v0, 0x0($s2)\n\tnop\n\tbeqz $v0, .L801926F8\n\taddu $v0, $s0, $zero\n\tbnez $s0, .L801926F8\n\taddiu $s0, $zero, 0x1\n\taddu $v0, $s0, $zero\n\t.L801926F8:\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192614, .-func_80192614\n"
);
