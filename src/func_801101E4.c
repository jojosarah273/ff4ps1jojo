#include "common.h"
__asm__(
  ".globl func_801101E4\n"
  ".type func_801101E4, @function\n"
  "func_801101E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110024\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\t.L8011020C:\n\tjal func_8011050C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F7864\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2B\n\tjal func_801100BC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011020C\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\t.L8011029C:\n\tjal func_8011050C\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2B\n\tjal func_801100BC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x60\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011029C\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801101E4, .-func_801101E4\n"
);
