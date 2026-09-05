#include "common.h"
__asm__(
  ".globl func_80132248\n"
  ".type func_80132248, @function\n"
  "func_80132248:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A04\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L80132288\n\tnop\n\tjal func_80131294\n\tnop\n\tjal func_8012219C\n\tnop\n\tj .L8013229C\n\taddiu $v0, $zero, 0x2\n\t.L80132288:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_80132310\n\tnop\n\taddiu $v0, $zero, 0x1\n\t.L8013229C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132248, .-func_80132248\n"
);
