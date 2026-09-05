#include "common.h"
__asm__(
  ".globl func_80141BD4\n"
  ".type func_80141BD4, @function\n"
  "func_80141BD4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tlui $a0, (0xD8000 >> 16)\n\tori $a0, $a0, (0xD8000 & 0xFFFF)\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlbu $v1, 0x740E($s1)\n\tnop\n\tbeqz $v1, .L80141C2C\n\taddu $a0, $v0, $zero\n\tlbu $v0, 0x7($s0)\n\tnop\n\txori $v0, $v0, 0x40\n\tsb $v0, 0x7($s0)\n\t.L80141C2C:\n\tlbu $v0, 0x7404($s1)\n\tnop\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a0\n\tlbu $v1, 0x7D6D($v0)\n\taddu $a0, $zero, $zero\n\tsb $v1, 0x0($s0)\n\tlbu $a1, 0x7D6E($v0)\n\taddiu $v1, $zero, 0xD\n\tsb $v1, 0x2($s0)\n\tjal func_800F7500\n\tsb $a1, 0x1($s0)\n\tjal func_80141C98\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x40\n\tjal func_80141C98\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x80\n\tjal func_80141C98\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141BD4, .-func_80141BD4\n"
);
