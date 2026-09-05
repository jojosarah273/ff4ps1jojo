#include "common.h"
__asm__(
  ".globl func_80160774\n"
  ".type func_80160774, @function\n"
  "func_80160774:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2705\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2705\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x29B5\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x38D0\n\tjal func_800F90EC\n\tsh $v1, 0x0($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80160774, .-func_80160774\n"
);
