#include "common.h"
__asm__(
  ".globl func_80194700\n"
  ".type func_80194700, @function\n"
  "func_80194700:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a2, $zero\n\tlui $a0, %hi(D_800F3964)\n\taddiu $a0, $a0, %lo(D_800F3964)\n\tsw $ra, 0x1C($sp)\n\tjal func_801943FC\n\taddu $a1, $s0, $zero\n\tlh $v0, 0x4($s0)\n\tnop\n\tbeqz $v0, .L801947A0\n\taddiu $v0, $zero, -0x1\n\tlh $v0, 0x6($s0)\n\tnop\n\tbnez $v0, .L80194758\n\tsll $v0, $s1, 16\n\tj .L801947A0\n\taddiu $v0, $zero, -0x1\n\t.L80194758:\n\tlui $v1, %hi(D_8019DBF4)\n\taddiu $v1, $v1, %lo(D_8019DBF4)\n\tandi $a0, $s2, 0xFFFF\n\tor $v0, $v0, $a0\n\tlw $a1, 0x0($s0)\n\tlui $a3, %hi(D_8019DB4C)\n\tlw $a3, %lo(D_8019DB4C)($a3)\n\taddiu $a2, $zero, 0x14\n\tsw $v0, 0x4($v1)\n\tsw $a1, 0x0($v1)\n\tlw $v0, 0x4($s0)\n\taddiu $a1, $v1, -0x8\n\tsw $v0, 0x8($v1)\n\tlw $a0, 0x18($a3)\n\tlw $v0, 0x8($a3)\n\tnop\n\tjalr $v0\n\taddu $a3, $zero, $zero\n\t.L801947A0:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80194700, .-func_80194700\n"
);
