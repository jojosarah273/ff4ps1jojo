#include "common.h"
__asm__(
  ".globl func_80120CA4\n"
  ".type func_80120CA4, @function\n"
  "func_80120CA4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x35\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x600\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x29\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0xC00\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x21\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x22\n\t.L80120D2C:\n\tjal func_8011F320\n\tnop\n\tjal func_8011EE34\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5480\n\tnop\n\tjal func_800F80D0\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5480\n\tnop\n\tjal func_800F80D0\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80120D2C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80120CA4, .-func_80120CA4\n"
);
