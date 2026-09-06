#include "common.h"
__asm__(
  ".globl func_8011C27C\n"
  ".type func_8011C27C, @function\n"
  "func_8011C27C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x7F5C71 >> 16)\n\t.L8011C290:\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5C71 & 0xFFFF)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011C290\n\tlui $a0, (0x7F5C71 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011C27C, .-func_8011C27C\n"
);
