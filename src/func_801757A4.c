#include "common.h"
__asm__(
  ".globl func_801757A4\n"
  ".type func_801757A4, @function\n"
  "func_801757A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L801757BC:\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0xCDB\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x7BDE\n\txori $v0, $v0, 0x7FFF\n\tjal func_800F4264\n\tsh $v0, 0x0($v1)\n\tjal func_800F7894\n\tnop\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0xBDB\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x100\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801757BC\n\tnop\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801757A4, .-func_801757A4\n"
);
