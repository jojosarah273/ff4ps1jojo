#include "common.h"
__asm__(
  ".globl func_8011B744\n"
  ".type func_8011B744, @function\n"
  "func_8011B744:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3D\n\tsrl $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F93DC\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlw $ra, 0x10($sp)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B744, .-func_8011B744\n"
);
