#include "common.h"
__asm__(
  ".globl func_80138CB0\n"
  ".type func_80138CB0, @function\n"
  "func_80138CB0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x48C0\n\tsw $ra, 0x14($sp)\n\tjal func_800F71DC\n\tsw $s0, 0x10($sp)\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A71\n\tjal func_8012807C\n\tlui $s0, %hi(D_80199190)\n\tjal func_801257BC\n\taddiu $s0, $s0, %lo(D_80199190)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xE0\n\tjal func_80120E2C\n\tnop\n\tlhu $a0, 0xB6($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0xBA($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80138CB0, .-func_80138CB0\n"
);
