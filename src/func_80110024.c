#include "common.h"
__asm__(
  ".globl func_80110024\n"
  ".type func_80110024, @function\n"
  "func_80110024:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACF\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0xACD\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0xACE\n\tjal func_80115BCC\n\tnop\n\tjal func_8011053C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xEF\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF1\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF3\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFE0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF5\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110024, .-func_80110024\n"
);
