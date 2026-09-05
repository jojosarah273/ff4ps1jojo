#include "common.h"
__asm__(
  ".globl func_8018DF10\n"
  ".type func_8018DF10, @function\n"
  "func_8018DF10:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B584)\n\tlw $v0, %lo(D_8019B584)($v0)\n\tnop\n\tandi $v1, $v0, 0xF0\n\taddiu $v0, $zero, 0x20\n\tbeq $v1, $v0, .L8018DF74\n\tslti $v0, $v1, 0x21\n\tbeqz $v0, .L8018DF4C\n\taddiu $v0, $zero, 0x30\n\tbeqz $v1, .L8018DF64\n\taddiu $v0, $zero, 0x10\n\tbeq $v1, $v0, .L8018DF6C\n\taddiu $v0, $zero, -0x3\n\tj .L8018DF88\n\tnop\n\t.L8018DF4C:\n\tbeq $v1, $v0, .L8018DF7C\n\taddiu $v0, $zero, 0x40\n\tbeq $v1, $v0, .L8018DF84\n\taddiu $v0, $zero, -0x3\n\tj .L8018DF88\n\tnop\n\t.L8018DF64:\n\tj .L8018DF88\n\taddu $v0, $zero, $zero\n\t.L8018DF6C:\n\tj .L8018DF88\n\taddiu $v0, $zero, 0x3\n\t.L8018DF74:\n\tj .L8018DF88\n\taddiu $v0, $zero, 0x4\n\t.L8018DF7C:\n\tj .L8018DF88\n\taddiu $v0, $zero, 0x7\n\t.L8018DF84:\n\taddiu $v0, $zero, 0x8\n\t.L8018DF88:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DF10, .-func_8018DF10\n"
);
