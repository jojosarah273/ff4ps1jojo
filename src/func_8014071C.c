#include "common.h"
__asm__(
  ".globl func_8014071C\n"
  ".type func_8014071C, @function\n"
  "func_8014071C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF411\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014075C\n\tnop\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF411\n\tjal func_80095A4C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x31\n\tjal func_8014D528\n\tnop\n\t.L8014075C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014071C, .-func_8014071C\n"
);
