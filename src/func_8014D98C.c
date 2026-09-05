#include "common.h"
__asm__(
  ".globl func_8014D98C\n"
  ".type func_8014D98C, @function\n"
  "func_8014D98C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF451\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014DA1C\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF453\n\tjal func_800F4280\n\tori $a0, $zero, 0xF452\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014DA14\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF454\n\tjal func_800F6564\n\tori $a0, $zero, 0xF454\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF455\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xF\n\tjal func_800760D0\n\tnop\n\t.L8014DA14:\n\tjal func_800F6240\n\tori $a0, $zero, 0xF453\n\t.L8014DA1C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D98C, .-func_8014D98C\n"
);
