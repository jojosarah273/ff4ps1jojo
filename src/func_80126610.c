#include "common.h"
__asm__(
  ".globl func_80126610\n"
  ".type func_80126610, @function\n"
  "func_80126610:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80126618:\n\tjal func_8011F320\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x88\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80126690\n\tnop\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F9200\n\tnop\n\tjal func_8011F844\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x88\n\tjal func_800F5B8C\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80126618\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x88\n\t.L80126690:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126610, .-func_80126610\n"
);
