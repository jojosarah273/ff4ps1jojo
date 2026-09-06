#include "common.h"
__asm__(
  ".globl func_800FCAB8\n"
  ".type func_800FCAB8, @function\n"
  "func_800FCAB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L800FCBFC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F7864\n\tnop\n\tjal func_800F9690\n\tnop\n\tlui $a0, (0x14FC66 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FC66 & 0xFFFF)\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F9690\n\tnop\n\tlui $a0, (0x7F5800 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5800 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8\n\tlui $a0, (0x7F5820 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5820 & 0xFFFF)\n\tjal func_800FCC0C\n\tnop\n\tlui $a0, (0x7F5800 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5800 & 0xFFFF)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tlui $a0, (0x7F5820 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5820 & 0xFFFF)\n\tlui $a0, (0x7F5801 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5801 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8\n\tlui $a0, (0x7F5821 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5821 & 0xFFFF)\n\tjal func_800FCC0C\n\tnop\n\tlui $a0, (0x7F5801 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5801 & 0xFFFF)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tlui $a0, (0x7F5821 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5821 & 0xFFFF)\n\tlui $a0, (0x7F5810 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5810 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8\n\tlui $a0, (0x7F5830 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5830 & 0xFFFF)\n\tjal func_800FCC0C\n\tnop\n\tlui $a0, (0x7F5810 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5810 & 0xFFFF)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tlui $a0, (0x7F5830 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5830 & 0xFFFF)\n\t.L800FCBFC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FCAB8, .-func_800FCAB8\n"
);
