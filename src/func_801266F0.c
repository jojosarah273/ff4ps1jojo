#include "common.h"
__asm__(
  ".globl func_801266F0\n"
  ".type func_801266F0, @function\n"
  "func_801266F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9298\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\t.L80126740:\n\tjal func_800F86F0\n\taddiu $a0, $zero, 0x89\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5EA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80126740\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F94B8\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801266F0, .-func_801266F0\n"
);
