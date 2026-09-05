#include "common.h"
__asm__(
  ".globl func_8013441C\n"
  ".type func_8013441C, @function\n"
  "func_8013441C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1EB\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013445C\n\tnop\n\tjal func_8013463C\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013446C\n\tnop\n\t.L8013445C:\n\tjal func_800F5410\n\tnop\n\tj .L801345A4\n\tnop\n\t.L8013446C:\n\tjal func_80134AF8\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801345A4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B37\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801345A4\n\tnop\n\tjal func_800F6E30\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013454C\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F7C6C\n\tnop\n\tjal func_800F7A68\n\tnop\n\tjal func_800F7C6C\n\tnop\n\tjal func_800F7A68\n\tnop\n\tjal func_800F7C6C\n\tnop\n\tjal func_801224D0\n\tnop\n\tlui $v0, %hi(D_80199C24)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\taddiu $v0, $v0, %lo(D_80199C24)\n\tlhu $v1, 0x0($a0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1B37\n\tjal func_800F3B04\n\tsb $v0, 0x0($a1)\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013455C\n\tnop\n\t.L8013454C:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B39\n\tj .L80134584\n\taddiu $a0, $zero, 0x5F00\n\t.L8013455C:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B39\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5F4D\n\tjal func_801345B4\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013459C\n\taddiu $a0, $zero, 0x6C61\n\t.L80134584:\n\tjal func_800F71DC\n\tnop\n\tjal func_801345B4\n\tnop\n\tj .L801345A4\n\tnop\n\t.L8013459C:\n\tjal func_800F5480\n\tnop\n\t.L801345A4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013441C, .-func_8013441C\n"
);
