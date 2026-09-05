#include "common.h"
__asm__(
  ".globl func_801345B4\n"
  ".type func_801345B4, @function\n"
  "func_801345B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80134624\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x46\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80134614\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80134624\n\tnop\n\t.L80134614:\n\tjal func_800F5480\n\tnop\n\tj .L8013462C\n\tnop\n\t.L80134624:\n\tjal func_800F5410\n\tnop\n\t.L8013462C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801345B4, .-func_801345B4\n"
);
