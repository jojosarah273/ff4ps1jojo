#include "common.h"
__asm__(
  ".globl func_80111DC8\n"
  ".type func_80111DC8, @function\n"
  "func_80111DC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80111EE4\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x6\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80111E20\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L80111E20:\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80111E54:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0xAAF\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE1D\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0xAB0\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE1E\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xE\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80111EE4\n\taddiu $a0, $zero, 0xE\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5A90\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80111E54\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tj .L80111E54\n\tnop\n\t.L80111EE4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80111DC8, .-func_80111DC8\n"
);
