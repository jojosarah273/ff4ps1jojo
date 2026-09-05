#include "common.h"
__asm__(
  ".globl func_8016694C\n"
  ".type func_8016694C, @function\n"
  "func_8016694C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x13\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v0, %hi(D_8019A12C)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\taddiu $v0, $v0, %lo(D_8019A12C)\n\tlhu $v1, 0x0($a1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tjal func_8014D528\n\tsb $v0, 0x0($a0)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016694C, .-func_8016694C\n"
);
