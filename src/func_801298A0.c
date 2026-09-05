#include "common.h"
__asm__(
  ".globl func_801298A0\n"
  ".type func_801298A0, @function\n"
  "func_801298A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B06\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801298E0\n\tnop\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801298F0\n\tnop\n\tj .L80129900\n\tnop\n\t.L801298E0:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\tj .L801298F8\n\tnop\n\t.L801298F0:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x50\n\t.L801298F8:\n\tjal func_80129910\n\tnop\n\t.L80129900:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801298A0, .-func_801298A0\n"
);
