#include "common.h"
__asm__(
  ".globl func_801219EC\n"
  ".type func_801219EC, @function\n"
  "func_801219EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80121A1C\n\tnop\n\tjal func_80121F8C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x63\n\tj .L80121A2C\n\tnop\n\t.L80121A1C:\n\tjal func_801220EC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x63\n\t.L80121A2C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF7\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFA\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFC\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x20\n\tjal func_80121A74\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801219EC, .-func_801219EC\n"
);
