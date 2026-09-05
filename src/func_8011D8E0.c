#include "common.h"
__asm__(
  ".globl func_8011D8E0\n"
  ".type func_8011D8E0, @function\n"
  "func_8011D8E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_8011EA14\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8\n\t.L8011D938:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x8\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x43\n\tjal func_8011CC98\n\tnop\n\tjal func_8011D068\n\tnop\n\tjal func_8011D9F0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x43\n\tjal func_8011CC98\n\tnop\n\tjal func_8011D068\n\tnop\n\tjal func_8011D9F0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x8\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L8011D938\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011D8E0, .-func_8011D8E0\n"
);
