#include "common.h"
__asm__(
  ".globl func_80136148\n"
  ".type func_80136148, @function\n"
  "func_80136148:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlh $v1, %gp_rel(D_8019EDC2)($gp)\n\taddiu $v0, $zero, 0x8\n\tbne $v1, $v0, .L80136164\n\tsw $ra, 0x10($sp)\n\tjal func_80136014\n\tnop\n\t.L80136164:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80136148, .-func_80136148\n"
);
