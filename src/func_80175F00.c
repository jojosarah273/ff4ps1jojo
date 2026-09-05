#include "common.h"
__asm__(
  ".globl func_80175F00\n"
  ".type func_80175F00, @function\n"
  "func_80175F00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCC\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80176050\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xCC\n\tjal func_80175E88\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80175F60\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tj .L80175FD0\n\tnop\n\t.L80175F60:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x10\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80175F90\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE\n\tj .L80175FD0\n\tnop\n\t.L80175F90:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x8\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80175FC0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tj .L80175FD0\n\tnop\n\t.L80175FC0:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1001\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\t.L80175FD0:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F5140\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4B\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x200\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1B\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x49\n\tjal func_80170458\n\tnop\n\t.L80176050:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175F00, .-func_80175F00\n"
);
