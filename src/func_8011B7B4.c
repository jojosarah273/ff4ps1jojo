#include "common.h"
__asm__(
  ".globl func_8011B7B4\n"
  ".type func_8011B7B4, @function\n"
  "func_8011B7B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3D\n\tsrl $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFE5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8011B81C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011B83C\n\tnop\n\t.L8011B81C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\t.L8011B83C:\n\tjal func_800F93DC\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B7B4, .-func_8011B7B4\n"
);
