#include "common.h"
__asm__(
  ".globl func_8011102C\n"
  ".type func_8011102C, @function\n"
  "func_8011102C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x171F\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xB7\n\tjal func_800F71DC\n\tori $a0, $zero, 0x9E66\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x171D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x171C\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011102C, .-func_8011102C\n"
);
