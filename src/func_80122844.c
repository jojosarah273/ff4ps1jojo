#include "common.h"
__asm__(
  ".globl func_80122844\n"
  ".type func_80122844, @function\n"
  "func_80122844:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80120E2C\n\tnop\n\tlui $v0, %hi(D_80199198)\n\tlhu $a0, %lo(D_80199198)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_80122934\n\tnop\n\tjal func_80122964\n\tnop\n\tjal func_80122994\n\tnop\n\tjal func_801229C4\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x40E\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1100\n\tjal func_80122D20\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122844, .-func_80122844\n"
);
