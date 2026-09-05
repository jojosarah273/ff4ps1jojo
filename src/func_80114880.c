#include "common.h"
__asm__(
  ".globl func_80114880\n"
  ".type func_80114880, @function\n"
  "func_80114880:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xD0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L801148B8:\n\tjal func_80114D18\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801148B8\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F5958\n\tori $a0, $zero, 0xFFF0\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801148B8\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80114880, .-func_80114880\n"
);
