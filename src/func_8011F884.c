#include "common.h"
__asm__(
  ".globl func_8011F884\n"
  ".type func_8011F884, @function\n"
  "func_8011F884:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011F844\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F7918\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011F8C4\n\tnop\n\tjal func_8012216C\n\tnop\n\t.L8011F8C4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011F884, .-func_8011F884\n"
);
