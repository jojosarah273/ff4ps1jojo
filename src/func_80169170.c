#include "common.h"
__asm__(
  ".globl func_80169170\n"
  ".type func_80169170, @function\n"
  "func_80169170:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1E05\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlui $v0, %hi(D_8019EF0C)\n\tlbu $v0, %lo(D_8019EF0C)($v0)\n\tjal func_800F9200\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x29\n\tjal func_801691F0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x14A\n\t.L801691B0:\n\tjal func_8011F300\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801691B0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_801691F0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80169170, .-func_80169170\n"
);
