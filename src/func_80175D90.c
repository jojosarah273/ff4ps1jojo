#include "common.h"
__asm__(
  ".globl func_80175D90\n"
  ".type func_80175D90, @function\n"
  "func_80175D90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80175DF8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x10\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80175DF8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x53\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L80175DF8\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x53\n\tjal func_80175E08\n\tnop\n\t.L80175DF8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175D90, .-func_80175D90\n"
);
