#include "common.h"
__asm__(
  ".globl func_8018F478\n"
  ".type func_8018F478, @function\n"
  "func_8018F478:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tori $v0, $zero, 0xDF80\n\tlui $t2, %hi(func_8018F2DC)\n\taddiu $t2, $t2, %lo(func_8018F2DC)\n\tlui $t1, %hi(func_8018F34C)\n\taddiu $t1, $t1, %lo(func_8018F34C)\n\t.L8018F48C:\n\tlw $v1, 0x0($t2)\n\tnop\n\tsw $v1, 0x0($v0)\n\taddiu $t2, $t2, 0x4\n\tbne $t2, $t1, .L8018F48C\n\taddiu $v0, $v0, 0x4\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F478, .-func_8018F478\n"
);
