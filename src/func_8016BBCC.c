#include "common.h"
__asm__(
  ".globl func_8016BBCC\n"
  ".type func_8016BBCC, @function\n"
  "func_8016BBCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8E50\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4342\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4344\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4340\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4341\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x28\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4345\n\tjal func_800F9868\n\taddiu $a0, $zero, 0x40\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BBCC, .-func_8016BBCC\n"
);
