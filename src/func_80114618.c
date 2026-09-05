#include "common.h"
__asm__(
  ".globl func_80114618\n"
  ".type func_80114618, @function\n"
  "func_80114618:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80114660\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80114660\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x80\n\t.L80114660:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80114618, .-func_80114618\n"
);
