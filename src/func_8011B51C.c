#include "common.h"
__asm__(
  ".globl func_8011B51C\n"
  ".type func_8011B51C, @function\n"
  "func_8011B51C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011B7B4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFE\n\t.L8011B534:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011B56C\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F7C6C\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8011B534\n\tnop\n\t.L8011B56C:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F4A7C\n\taddiu $a0, $zero, 0x12E0\n\tjal func_800F885C\n\taddiu $a0, $zero, 0x12E0\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B51C, .-func_8011B51C\n"
);
