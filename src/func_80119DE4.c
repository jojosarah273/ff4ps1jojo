#include "common.h"
__asm__(
  ".globl func_80119DE4\n"
  ".type func_80119DE4, @function\n"
  "func_80119DE4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L80119E14\n\tnop\n\tjal func_80103790\n\tnop\n\tj .L80119E1C\n\tnop\n\t.L80119E14:\n\tjal func_801038D4\n\tnop\n\t.L80119E1C:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7B\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F5448\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119DE4, .-func_80119DE4\n"
);
