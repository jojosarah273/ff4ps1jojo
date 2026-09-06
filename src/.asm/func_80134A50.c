#include "common.h"
__asm__(
  ".globl func_80134A50\n"
  ".type func_80134A50, @function\n"
  "func_80134A50:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x54\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80134A98\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x60\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80134A98\n\tnop\n\tjal func_800F5480\n\tnop\n\tj .L80134AA0\n\tnop\n\t.L80134A98:\n\tjal func_800F5410\n\tnop\n\t.L80134AA0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80134A50, .-func_80134A50\n"
);
