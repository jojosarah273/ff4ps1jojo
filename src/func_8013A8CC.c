#include "common.h"
__asm__(
  ".globl func_8013A8CC\n"
  ".type func_8013A8CC, @function\n"
  "func_8013A8CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x41\n\tsw $ra, 0x14($sp)\n\tjal func_800F7270\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019A084)\n\t.L8013A8E4:\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\taddiu $a0, $s0, %lo(D_8019A084)\n\tlhu $v1, 0x0($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $a0\n\tlbu $v0, 0x0($v1)\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\tsb $v0, 0x0($a1)\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x9\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013A8E4\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013A8CC, .-func_8013A8CC\n"
);
