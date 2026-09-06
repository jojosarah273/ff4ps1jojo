#include "common.h"
__asm__(
  ".globl func_8015C54C\n"
  ".type func_8015C54C, @function\n"
  "func_8015C54C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD0\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015C5E4\n\tnop\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015C5E4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015C5E4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2005\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC6\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015C5F4\n\tnop\n\t.L8015C5E4:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD0\n\t.L8015C5F4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015C54C, .-func_8015C54C\n"
);
