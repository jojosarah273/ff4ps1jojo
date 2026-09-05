#include "common.h"
__asm__(
  ".globl func_801772E4\n"
  ".type func_801772E4, @function\n"
  "func_801772E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD9\n\tjal func_801771D4\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xDA\n\tjal func_800F6630\n\tsh $v1, 0x0($a1)\n\tjal func_801771D4\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1BCD\n\tjal func_800F922C\n\tnop\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1BCF\n\tjal func_800F922C\n\tnop\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1BD1\n\tjal func_800F922C\n\tnop\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x1BCD\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1BCD\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x1BCF\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1BCF\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x1BD1\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1BD1\n\tjal func_800F9410\n\tnop\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x1BD1\n\tjal func_800F9410\n\tnop\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x1BCF\n\tjal func_800F9410\n\tnop\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x1BCD\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801772E4, .-func_801772E4\n"
);
