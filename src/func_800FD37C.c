#include "common.h"
__asm__(
  ".globl func_800FD37C\n"
  ".type func_800FD37C, @function\n"
  "func_800FD37C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FD3A4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L800FD3A4:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1801\n\tjal func_800FD404\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8011B6B4\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FD3F4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1802\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1802\n\t.L800FD3F4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FD37C, .-func_800FD37C\n"
);
