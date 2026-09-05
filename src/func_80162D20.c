#include "common.h"
__asm__(
  ".globl func_80162D20\n"
  ".type func_80162D20, @function\n"
  "func_80162D20:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80162DD0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x2009\n\tjal func_80152BC4\n\tnop\n\tjal func_800F8274\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5480\n\tnop\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x2007\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F7FCC\n\taddu $a0, $v0, $zero\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x2007\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80162DC0\n\tnop\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x2007\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x80\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x2003\n\t.L80162DC0:\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80162DD0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC1\n\tjal func_80162DF8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80162D20, .-func_80162D20\n"
);
