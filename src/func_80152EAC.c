#include "common.h"
__asm__(
  ".globl func_80152EAC\n"
  ".type func_80152EAC, @function\n"
  "func_80152EAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x8\n\t.L80152EC4:\n\tjal func_800F5140\n\tnop\n\tjal func_800F4FAC\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L80152EE4\n\tnop\n\tjal func_800F6364\n\tnop\n\t.L80152EE4:\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80152EC4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152EAC, .-func_80152EAC\n"
);
