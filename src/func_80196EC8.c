#include "common.h"
__asm__(
  ".globl func_80196EC8\n"
  ".type func_80196EC8, @function\n"
  "func_80196EC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $a1, %hi(func_801963C0)\n\taddiu $a1, $a1, %lo(func_801963C0)\n\tjal func_80192B58\n\taddiu $a0, $zero, 0x2\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196EC8, .-func_80196EC8\n"
);
