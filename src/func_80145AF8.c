#include "common.h"
__asm__(
  ".globl func_80145AF8\n"
  ".type func_80145AF8, @function\n"
  "func_80145AF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsll $a0, $a0, 16\n\tsra $a0, $a0, 16\n\tbeqz $a0, .L80145B20\n\tsw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tbeq $a0, $v0, .L80145B48\n\tnop\n\tj .L80145B68\n\tnop\n\t.L80145B20:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x50\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x46\n\tj .L80145B68\n\tnop\n\t.L80145B48:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x50\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x46\n\t.L80145B68:\n\tjal func_8011F6D4\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_8011F884\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80145AF8, .-func_80145AF8\n"
);
