#include "common.h"
__asm__(
  ".globl func_80126590\n"
  ".type func_80126590, @function\n"
  "func_80126590:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80126598:\n\tjal func_8011F320\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x88\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F9200\n\tnop\n\tjal func_8011F844\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x88\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80126598\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x88\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126590, .-func_80126590\n"
);
