#include "common.h"
__asm__(
  ".globl func_8011B4A4\n"
  ".type func_8011B4A4, @function\n"
  "func_8011B4A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011B744\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFE\n\t.L8011B4BC:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011B4F4\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F7C6C\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8011B4BC\n\tnop\n\t.L8011B4F4:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F4960\n\taddiu $a0, $zero, 0x1280\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1280\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B4A4, .-func_8011B4A4\n"
);
