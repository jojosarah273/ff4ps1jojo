#include "common.h"
__asm__(
  ".globl func_80115080\n"
  ".type func_80115080, @function\n"
  "func_80115080:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1F\n\tsrl $v0, $v0, 2\n\tjal func_800F4248\n\tsb $v0, 0x0($v1)\n\tlui $a0, (0x14FB86 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x14FB86 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x70\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x50\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2F\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80115080, .-func_80115080\n"
);
