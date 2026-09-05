#include "common.h"
__asm__(
  ".globl func_80153518\n"
  ".type func_80153518, @function\n"
  "func_80153518:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L80153560:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x38BF\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF8\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x38C0\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2005\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2006\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x38C1\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2006\n\tjal func_8015330C\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0xF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80153560\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80153518, .-func_80153518\n"
);
