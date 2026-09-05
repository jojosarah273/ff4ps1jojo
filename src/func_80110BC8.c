#include "common.h"
__asm__(
  ".globl func_80110BC8\n"
  ".type func_80110BC8, @function\n"
  "func_80110BC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x7A\n\tsw $ra, 0x14($sp)\n\tjal func_800F6630\n\tsw $s0, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1E\n\taddiu $a0, $zero, 0x20\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\tlui $s0, %hi(D_80198C1C)\n\tjal func_800F9644\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80110C10:\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\taddiu $a2, $s0, %lo(D_80198C1C)\n\tlhu $v1, 0x0($v0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $a2\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $a2\n\tlbu $v1, 0x1($v0)\n\taddiu $a0, $zero, 0xEBB\n\tjal func_800F87DC\n\tsb $v1, 0x1($a1)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F6214\n\tsh $v0, 0x0($a0)\n\tjal func_800F6214\n\tnop\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x1F\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x10\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80110C10\n\tnop\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110BC8, .-func_80110BC8\n"
);
