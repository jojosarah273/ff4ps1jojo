#include "common.h"
__asm__(
  ".globl func_801470F8\n"
  ".type func_801470F8, @function\n"
  "func_801470F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v1, 0x0($v1)\n\taddu $s0, $v0, $zero\n\taddu $v0, $v1, $s0\n\tlbu $v0, 0x7015($v0)\n\tnop\n\tandi $a0, $v0, 0x30\n\tbeqz $a0, .L80147168\n\tnop\n\tandi $v0, $a0, 0x20\n\tbeqz $v0, .L80147158\n\taddiu $a0, $zero, 0x10\n\taddiu $a0, $zero, 0x20\n\t.L80147158:\n\tjal func_80146954\n\tsb $a0, 0x7077($s0)\n\tj .L801471A0\n\tnop\n\t.L80147168:\n\tandi $a0, $v0, 0x8\n\tbnez $a0, .L80147194\n\taddiu $a0, $zero, 0x40\n\tsrl $v1, $v1, 2\n\taddu $v0, $v1, $s0\n\tlbu $a0, 0x7235($v0)\n\tnop\n\tsltiu $v1, $a0, 0xF\n\tbnez $v1, .L8014719C\n\taddiu $v0, $zero, 0xF\n\taddiu $a0, $zero, 0x30\n\t.L80147194:\n\tj .L801471A0\n\tsb $a0, 0x7077($s0)\n\t.L8014719C:\n\tsb $zero, 0x7077($s0)\n\t.L801471A0:\n\tlbu $v0, 0x47($s1)\n\tlbu $v1, 0x7077($s0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\taddu $v0, $v0, $s0\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x7094($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801470F8, .-func_801470F8\n"
);
