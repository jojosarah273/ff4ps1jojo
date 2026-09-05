#include "common.h"
__asm__(
  ".globl func_801700BC\n"
  ".type func_801700BC, @function\n"
  "func_801700BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L801700F8:\n\tjal func_800F6658\n\taddu $a0, $zero, $zero\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x3319\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x6\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x371B\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x2\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x331B\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x4\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x3719\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x400\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801700F8\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801700BC, .-func_801700BC\n"
);
