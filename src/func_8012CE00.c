#include "common.h"
__asm__(
  ".globl func_8012CE00\n"
  ".type func_8012CE00, @function\n"
  "func_8012CE00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A04\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L8012CE38\n\tnop\n\tjal func_8012CC4C\n\tnop\n\tj .L8012CE44\n\taddiu $v0, $zero, 0x2\n\t.L8012CE38:\n\tjal func_8012CEA8\n\tnop\n\taddiu $v0, $zero, 0x1\n\t.L8012CE44:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012CE00, .-func_8012CE00\n"
);
