#include "common.h"
__asm__(
  ".globl func_800FB3A0\n"
  ".type func_800FB3A0, @function\n"
  "func_800FB3A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L800FB3B0:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1004\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xBF\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1004\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FB3B0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FB3A0, .-func_800FB3A0\n"
);
