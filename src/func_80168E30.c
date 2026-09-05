#include "common.h"
__asm__(
  ".globl func_80168E30\n"
  ".type func_80168E30, @function\n"
  "func_80168E30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddiu $a0, $zero, 0x4000\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlbu $v1, 0x744A($s1)\n\tnop\n\tbeqz $v1, .L80168F04\n\taddu $s2, $v0, $zero\n\tjal func_800F9298\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x37\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_8011EB9C\n\tnop\n\tjal func_800F94B8\n\tnop\n\tlbu $v1, 0x218($s2)\n\tlbu $v0, 0x21A($s2)\n\tnop\n\tor $v1, $v0, $v1\n\tandi $v1, $v1, 0x30\n\taddiu $v0, $zero, 0x30\n\tbne $v1, $v0, .L80168ED8\n\tnop\n\tlbu $v0, 0x37($s0)\n\tnop\n\tandi $v0, $v0, 0x7F\n\tsb $v0, 0x37($s0)\n\t.L80168ED8:\n\tlbu $v0, 0x743A($s1)\n\tnop\n\tbeqz $v0, .L80168F04\n\tnop\n\tlbu $v1, 0x37($s0)\n\tlbu $v0, 0x38($s0)\n\tnop\n\tor $v1, $v0, $v1\n\tbeqz $v1, .L80168F04\n\tnop\n\tsb $zero, 0x743A($s1)\n\t.L80168F04:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80168E30, .-func_80168E30\n"
);
