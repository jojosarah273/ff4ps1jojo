#include "common.h"
__asm__(
  ".globl func_80168148\n"
  ".type func_80168148, @function\n"
  "func_80168148:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38E6\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80168198\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80168198\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801681A8\n\tnop\n\t.L80168198:\n\tjal func_801681C0\n\tnop\n\tj .L801681B0\n\tnop\n\t.L801681A8:\n\tjal func_801681C0\n\tnop\n\t.L801681B0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80168148, .-func_80168148\n"
);
