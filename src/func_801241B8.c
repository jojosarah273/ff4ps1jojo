#include "common.h"
__asm__(
  ".globl func_801241B8\n"
  ".type func_801241B8, @function\n"
  "func_801241B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x80\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L801241D8:\n\tjal func_800F6558\n\tori $a0, $zero, 0xF0FF\n\tjal func_800F88E4\n\taddiu $a0, $zero, 0x300\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x3000\n\tjal func_800F88E4\n\taddiu $a0, $zero, 0x302\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5EA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801241D8\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x10\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\t.L80124238:\n\tjal func_800F88E4\n\taddiu $a0, $zero, 0x300\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5EA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80124238\n\tnop\n\tjal func_800F6558\n\tori $a0, $zero, 0xAAAA\n\tjal func_800F8210\n\taddiu $a0, $zero, 0x500\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801241B8, .-func_801241B8\n"
);
