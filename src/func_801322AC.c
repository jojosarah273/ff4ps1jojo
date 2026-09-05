#include "common.h"
__asm__(
  ".globl func_801322AC\n"
  ".type func_801322AC, @function\n"
  "func_801322AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A04\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L801322EC\n\tnop\n\tjal func_80131294\n\tnop\n\tjal func_8012219C\n\tnop\n\tj .L80132300\n\taddiu $v0, $zero, 0x2\n\t.L801322EC:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_80132310\n\tnop\n\taddiu $v0, $zero, 0x1\n\t.L80132300:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801322AC, .-func_801322AC\n"
);
