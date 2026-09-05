#include "common.h"
__asm__(
  ".globl func_8015D8F0\n"
  ".type func_8015D8F0, @function\n"
  "func_8015D8F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2005\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015D998\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2006\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8015D998\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2003\n\tori $v0, $v0, 0x80\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x29EB\n\tjal func_800F90EC\n\tsh $v1, 0x0($a1)\n\t.L8015D998:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015D8F0, .-func_8015D8F0\n"
);
