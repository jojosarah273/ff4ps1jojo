#include "common.h"
__asm__(
  ".globl func_8011B6B4\n"
  ".type func_8011B6B4, @function\n"
  "func_8011B6B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_8011B744\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1280\n\t.L8011B6DC:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011B70C\n\tnop\n\tjal func_800F7864\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8011B6DC\n\tnop\n\t.L8011B70C:\n\tjal func_800F7864\n\tnop\n\tjal func_800F76E8\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B6B4, .-func_8011B6B4\n"
);
