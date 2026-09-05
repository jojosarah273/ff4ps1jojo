#include "common.h"
__asm__(
  ".globl func_8015A284\n"
  ".type func_8015A284, @function\n"
  "func_8015A284:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3975\n\tjal func_80152908\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F7270\n\tsh $v1, 0x0($a1)\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x32DB\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2033\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x32DC\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2034\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x32DF\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2035\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x32E0\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2036\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A284, .-func_8015A284\n"
);
