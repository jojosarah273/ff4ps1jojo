#include "common.h"
__asm__(
  ".globl func_8014CE94\n"
  ".type func_8014CE94, @function\n"
  "func_8014CE94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8014CEAC:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x7612\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x769E\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x772A\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x77B6\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x8C\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014CEAC\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014CE94, .-func_8014CE94\n"
);
