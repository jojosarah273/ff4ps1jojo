#include "common.h"
__asm__(
  ".globl func_80121B5C\n"
  ".type func_80121B5C, @function\n"
  "func_80121B5C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80121B8C\n\tnop\n\tjal func_8012202C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x65\n\tj .L80121B9C\n\tnop\n\t.L80121B8C:\n\tjal func_80121FDC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x65\n\t.L80121B9C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFB\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x20\n\tjal func_80121BE4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80121B5C, .-func_80121B5C\n"
);
