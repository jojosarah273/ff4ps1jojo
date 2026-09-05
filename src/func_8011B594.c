#include "common.h"
__asm__(
  ".globl func_8011B594\n"
  ".type func_8011B594, @function\n"
  "func_8011B594:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011B744\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L8011B5AC:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011B5DC\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8011B5AC\n\tnop\n\t.L8011B5DC:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x1280\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1280\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B594, .-func_8011B594\n"
);
