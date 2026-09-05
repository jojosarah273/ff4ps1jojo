#include "common.h"
__asm__(
  ".globl func_80170198\n"
  ".type func_80170198, @function\n"
  "func_80170198:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F3B04\n\taddu $s2, $v0, $zero\n\taddiu $a0, $zero, 0x1000\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\taddu $a2, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlbu $v0, 0x6B8($s1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $a1, 0x0($v1)\n\tlbu $v1, 0x40($s0)\n\tlhu $a3, 0x0($a0)\n\tand $v0, $v0, $v1\n\tbeqz $v0, .L80170258\n\taddu $v1, $s2, $a1\n\tlbu $v0, 0x822($a2)\n\tlbu $v1, 0x44($s0)\n\tsb $v0, 0x43($s0)\n\tandi $v0, $v0, 0xFF\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddu $v0, $v0, $s1\n\tlbu $a0, 0x6B9($v0)\n\tlbu $v1, 0x44($s0)\n\tsb $a0, 0x43($s0)\n\tandi $v0, $a0, 0xFF\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddu $v0, $a1, $v0\n\tandi $a1, $v0, 0xFFFF\n\taddu $v1, $s2, $a1\n\tlbu $a0, 0x0($v1)\n\tj .L8017026C\n\taddu $a1, $a3, $s0\n\t.L80170258:\n\tlbu $a0, 0x0($v1)\n\tlbu $v0, 0x2($v1)\n\tnop\n\tor $a0, $v0, $a0\n\taddu $a1, $a3, $s0\n\t.L8017026C:\n\tbeqz $a0, .L80170284\n\taddu $v1, $a1, $zero\n\tlbu $a2, 0x4($v1)\n\tnop\n\tbeq $a0, $a2, .L80170298\n\tnop\n\t.L80170284:\n\taddiu $v0, $zero, 0x18\n\tsb $a0, 0x4($a1)\n\tsb $a0, 0x0($a1)\n\tj .L801702C4\n\tsb $v0, 0x8($a1)\n\t.L80170298:\n\tlbu $v0, 0x8($v1)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsb $v0, 0x8($v1)\n\tandi $v0, $v0, 0xFF\n\tbeqz $v0, .L801702BC\n\taddiu $v0, $zero, 0x3\n\tj .L801702C4\n\tsb $zero, 0x0($v1)\n\t.L801702BC:\n\tsb $v0, 0x8($v1)\n\tsb $a2, 0x0($v1)\n\t.L801702C4:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80170198, .-func_80170198\n"
);
