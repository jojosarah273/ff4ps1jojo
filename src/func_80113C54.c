#include "common.h"
__asm__(
  ".globl func_80113C54\n"
  ".type func_80113C54, @function\n"
  "func_80113C54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x22\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x3FF0\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80113CAC\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80113CAC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x301\n\tj .L80113CBC\n\tnop\n\t.L80113CAC:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x22\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x301\n\t.L80113CBC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80113C54, .-func_80113C54\n"
);
