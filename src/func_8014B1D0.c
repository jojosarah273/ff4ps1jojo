#include "common.h"
__asm__(
  ".globl func_8014B1D0\n"
  ".type func_8014B1D0, @function\n"
  "func_8014B1D0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014B200\n\tnop\n\tjal func_801425FC\n\tnop\n\tj .L8014B238\n\tnop\n\t.L8014B200:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014B238\n\tnop\n\tjal func_8014B9B4\n\tnop\n\tjal func_8014AEC4\n\tnop\n\tjal func_801425FC\n\tnop\n\tjal func_8014AF3C\n\tnop\n\t.L8014B238:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B1D0, .-func_8014B1D0\n"
);
