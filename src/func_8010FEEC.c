#include "common.h"
__asm__(
  ".globl func_8010FEEC\n"
  ".type func_8010FEEC, @function\n"
  "func_8010FEEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110024\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\t.L8010FF14:\n\tjal func_8011050C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2B\n\tjal func_801100BC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010FF14\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\t.L8010FF8C:\n\tjal func_8011050C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F7864\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2B\n\tjal func_801100BC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010FF8C\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010FEEC, .-func_8010FEEC\n"
);
