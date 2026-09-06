#include "common.h"
__asm__(
  ".globl func_80119C24\n"
  ".type func_80119C24, @function\n"
  "func_80119C24:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x79\n\t.L80119C3C:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xC4\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80119C3C\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119C24, .-func_80119C24\n"
);
