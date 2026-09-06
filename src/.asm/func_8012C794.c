#include "common.h"
__asm__(
  ".globl func_8012C794\n"
  ".type func_8012C794, @function\n"
  "func_8012C794:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F55C0\n\taddiu $a0, $zero, 0x270F\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012C7BC\n\tnop\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x270F\n\t.L8012C7BC:\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_801221EC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C794, .-func_8012C794\n"
);
