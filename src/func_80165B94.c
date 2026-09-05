#include "common.h"
__asm__(
  ".globl func_80165B94\n"
  ".type func_80165B94, @function\n"
  "func_80165B94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tori $a0, $zero, 0x8000\n\tsw $ra, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3C3C\n\taddu $s2, $v0, $zero\n\taddu $s1, $v0, $zero\n\taddu $s0, $zero, $zero\n\taddiu $a0, $zero, 0x8\n\t.L80165BD0:\n\taddu $v0, $s0, $s2\n\taddiu $v1, $s0, 0x1\n\tandi $s0, $v1, 0xFFFF\n\tbne $s0, $a0, .L80165BD0\n\tsb $zero, 0x74AD($v0)\n\taddu $s0, $zero, $zero\n\tlui $v0, %hi(D_8019A0EC)\n\taddiu $s3, $v0, %lo(D_8019A0EC)\n\taddiu $s4, $zero, 0x7\n\t.L80165BF4:\n\tsll $a0, $s0, 2\n\tandi $a0, $a0, 0xFFFF\n\taddu $v0, $a0, $s3\n\tlbu $v1, 0x0($v0)\n\taddiu $v0, $a0, 0x1\n\taddu $v0, $v0, $s3\n\taddiu $a0, $a0, 0x2\n\tsb $v1, 0x4($s1)\n\tlbu $v1, 0x0($v0)\n\taddu $a0, $a0, $s3\n\tsb $v1, 0x5($s1)\n\tlbu $v0, 0x0($a0)\n\tjal func_80165C7C\n\tsb $v0, 0x6($s1)\n\taddu $a0, $s0, $s2\n\taddiu $v1, $s0, 0x1\n\tlbu $v0, 0x8($s1)\n\tandi $s0, $v1, 0xFFFF\n\taddiu $v0, $v0, 0x80\n\tbne $s0, $s4, .L80165BF4\n\tsb $v0, 0x74AD($a0)\n\tjal func_800F5410\n\tnop\n\tlbu $v0, 0x0($s1)\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\taddiu $v0, $v0, 0x80\n\tsb $v0, 0x74B4($s2)\n\tlw $s2, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80165B94, .-func_80165B94\n"
);
