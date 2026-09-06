#include "common.h"
__asm__(
  ".globl func_8011416C\n"
  ".type func_8011416C, @function\n"
  "func_8011416C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $a0, $zero, 0xAA\n\taddiu $v1, $zero, 0x7\n\tlui $v0, 0x800D\n\tori $v0, $v0, 0x507\n\t.L8011417C:\n\tsb $a0, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L8011417C\n\taddiu $v0, $v0, -0x1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011416C, .-func_8011416C\n"
);
