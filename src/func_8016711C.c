#include "common.h"
__asm__(
  ".globl func_8016711C\n"
  ".type func_8016711C, @function\n"
  "func_8016711C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddiu $a0, $zero, 0x1000\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s2, $v0, $zero\n\tjal func_80167074\n\taddu $s0, $v0, $zero\n\tlbu $v0, 0x822($s1)\n\tnop\n\tsll $a1, $v0, 2\n\taddu $v1, $a1, $s0\n\tlbu $v0, 0x7015($v1)\n\tnop\n\tandi $v0, $v0, 0xC0\n\tbnez $v0, .L801671C4\n\tnop\n\tlbu $v0, 0x7016($v1)\n\tnop\n\tandi $v0, $v0, 0x3C\n\tbnez $v0, .L801671C4\n\taddu $a1, $zero, $zero\n\taddu $v0, $a1, $s2\n\t.L80167194:\n\tlbu $a0, 0x9B5($v0)\n\taddiu $v1, $zero, 0xFF\n\tbeq $a0, $v1, .L801671B4\n\taddiu $v0, $a1, 0x1\n\tjal func_800F5410\n\tnop\n\tj .L801671CC\n\tnop\n\t.L801671B4:\n\tandi $a1, $v0, 0xFFFF\n\taddiu $v1, $zero, 0x8\n\tbne $a1, $v1, .L80167194\n\taddu $v0, $a1, $s2\n\t.L801671C4:\n\tjal func_800F5480\n\tnop\n\t.L801671CC:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016711C, .-func_8016711C\n"
);
