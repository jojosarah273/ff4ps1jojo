#include "common.h"
__asm__(
  ".globl func_8015A344\n"
  ".type func_8015A344, @function\n"
  "func_8015A344:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015A364\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\t.L8015A364:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A344, .-func_8015A344\n"
);
