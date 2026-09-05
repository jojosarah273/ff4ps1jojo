#include "common.h"
__asm__(
  ".globl func_8011B61C\n"
  ".type func_8011B61C, @function\n"
  "func_8011B61C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011B7B4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L8011B634:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011B664\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8011B634\n\tnop\n\t.L8011B664:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\taddiu $a0, $zero, 0x12E0\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F78C4\n\taddu $a0, $v0, $a0\n\tjal func_800F885C\n\taddiu $a0, $zero, 0x12E0\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B61C, .-func_8011B61C\n"
);
