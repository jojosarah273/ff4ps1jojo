#include "common.h"
__asm__(
  ".globl func_80197468\n"
  ".type func_80197468, @function\n"
  "func_80197468:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tlui $a0, %hi(D_801FEBA8)\n\tlw $a0, %lo(D_801FEBA8)($a0)\n\tsw $ra, 0x14($sp)\n\tjal func_801974CC\n\taddu $a1, $s0, $zero\n\taddu $a0, $v0, $zero\n\taddiu $v0, $zero, -0x1\n\tbeq $a0, $v0, .L801974B8\n\tsll $a0, $a0, 2\n\tlui $v1, %hi(D_801FEBA8)\n\tlw $v1, %lo(D_801FEBA8)($v1)\n\tnop\n\taddu $v1, $v1, $a0\n\tlui $at, %hi(D_801FEBA8)\n\tsw $v1, %lo(D_801FEBA8)($at)\n\tj .L801974BC\n\taddu $v0, $s0, $zero\n\t.L801974B8:\n\taddu $v0, $zero, $zero\n\t.L801974BC:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197468, .-func_80197468\n"
);
